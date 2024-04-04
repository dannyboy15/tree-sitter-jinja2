
// Note: if you ever need to explicitly match line breaks, those are system specific.
// use a regex like this \r\n?|\n to match on windows too.

function commaSep1(rule) {
    return sep1(rule, ',');
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}

module.exports = grammar ({
    name: 'jinja2',

    rules: {
        source_file: $ => repeat(
            choice(
                $.statement,
                $.expression,
                $.comment,
                $.text,
            )
        ),

        statement: $ => seq(
            '{%',
            $._statement,
            '%}',
        ),

        expression:$ => seq(
            '{{',
            $._expression,
            '}}'
        ),

        comment: $ => seq(
            '{#',
            $.comment_content,
            '#}',
        ),

        text: $ => $._text,

        _statement: $ => choice(
            $._control_structures,
            $._expression,
        ),

        _control_structures: $ => choice(
            $._for,
            $.endfor,
            $._if,
            $.endif,
            $.elif,
            $.else,
        ),

        _for: $ => seq(
            $.for,
            $._expression,
            $.in,
            $._expression,
        ),

        for: _ => 'for',

        endfor: _ => 'endfor',

        in: _ => 'in',

        _if: $ => seq(
            $.if,
            $._expression
        ),

        if: _ => 'if',

        endif: _ => 'endif',

        elif: _ => 'elif',

        else: _ => 'else',

        _expression: $ => choice(
            $._literal,
            $.identifier,
            $.function,
        ),

        _literal: $ => choice(
            $.string,
            $.integer,
            $.float,
            $.list,
            $.tuple,
            $.dict,
            $._bool,
            $.none,
        ),

        string: $ => choice(
            seq(
                field('quote_type', $.single_quote),            // single quote string start
                field('string_content', $.string_content_sq),  // either not a `'` or a `\` followed by a `'` zero or more times
                $._single_quote,            // single quote string start
            ),
            seq(
                field('quote_type', $.double_quote),            // double quote string start
                field('string_content', $.string_content_dq),  // either not a `"` or a `\` followed by a `"` zero or more times
                $._double_quote,            // double quote string start
            )
        ),

        single_quote: $ => $._single_quote,

        _single_quote: _ => "'",

        double_quote: $ => $._double_quote,

        _double_quote: _ => '"',

        string_content_sq: _ => token(/([^']|\\')*/),

        string_content_dq: _ => token(/([^"]|\\")*/),

        integer: _ => token(
            seq(
                optional(/[\+-]/),
                repeat1(/[0-9]+_?/),
            )
        ),

        float: _ => {
            const digits = repeat1(/[0-9]+_?/);
            const exponent = seq(/[eE][\+-]?/, digits)
            const sign = /[\+-]/

            return token(
                choice(
                    seq(optional(sign), digits, '.', optional(digits), optional(exponent)),
                    seq(optional(sign), optional(digits), '.', digits, optional(exponent)),
                    seq(digits, exponent)
                )
            )
        },

        list: $ => seq(
            '[',
            optional(commaSep1($._expression)),
            optional(','),
            ']'
        ),

        tuple: $ => seq(
            '(',
            choice(
                seq(
                    optional(commaSep1($._expression)),
                    optional(','),
                ),
                ','
            ),
            ')'
        ),

        dict: $ => seq(
            '{',
            optional(commaSep1($.pair)),
            optional(','),
            '}'
        ),

        pair: $ => seq(
            field('key', $.string),
            ':',
            field('value', $._expression)
        ),

        _bool: $ => choice(
            $.true,
            $.false,
        ),

        true: _ => /[Tt]rue/,

        false: _ => /[Ff]alse/,

        none: _ => /[Nn]one/,

        identifier: $ => $._identifier,

        // This regex is fine until we allow user-named variables and functions.
        // Once we do that we may want to allow Unicode identifiers like python does: /[_\p{XID_Start}][_\p{XID_Continue}]*/
        _identifier: _ => token(new RegExp(
            '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
            '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, digit, or underscore.
        )),

        function: $ => seq(
            field('name', $.identifier),
            field('argument_list', $.argument_list)
        ),

        argument_list: $ => seq(
            '(',
            optional(commaSep1(
                choice(
                    $._expression,
                    $.kwarg
                )
            )),
            optional(','),
            ')'
        ),

        kwarg: $ => seq(
            field('key', $.identifier),
            '=',
            field('value', $._expression),
        ),

        // TODO: figure out issue with even number of hashes causing error
        comment_content: _ => /([^#]|(#[^}]))*?/,
        // comment_content: _ => /([^#]|[#}])\1)*/,
        // comment_content: _ => token(choice(
        //   /[^#]*/,
        //   /(#[^}])*/,
        // )),

        // matches everything but jinja
        _text: $ => new RegExp(
            '('             + // capture group
                '[^{]'      + // match any character that is not `{`
                '|'         + // or
                '[{][^{%#]' + // match a character that IS `{` and isn't followed by `{`, `%`, or`#`
            ')'             + // end capture group
            '+'               // one or more times. using this instead of * because tree-sitter can hang when matching the empty string.
        ),
    }
});
