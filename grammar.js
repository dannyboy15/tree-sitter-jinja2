
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

        statement: $ => $.jinja_expression,

        expression:$ => seq(
            '{{',
            $._expression,
            '}}'
        ),

        comment: $ => $._jinja_comment,

        text: $ => $._text,

        _expression: $ => choice(
            $.string,
            $.integer,
            $.float,
            $.fn_call,
            $.list,
            $.dict,
            $.bool,
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

        // This is awkward regex because we aren't parsing anything
        // in between the expression markers like 'expression' does
        jinja_expression: $ => seq(
            '{%',
            new RegExp(
                '('         + // capture group
                    '[^%]'  + // any character that isn't a `%`
                    '|'     + // or
                    '%[^}]' + // a `%` followed by any character that isn't `}`
                    ')*'        + // zero or more of the previous capture group
                    '%}'          // followed by a `%` then a `}`
            )
        ),

        // comment regex is special because a comment can end
        // with #} ##} #######} etc.
        _jinja_comment: $ => seq(
            '{#',                 // comments start with `{#`
            new RegExp(
                '('             + // capture group
                    '('         + // capture group
                    '[^#]'  + // any character that isn't `#`
                    '|'     + // or
                    '#[^}]' + // a `#` character followed by another character that isn't `}`
                    ')*'        + // zero or more of the previous capture group
                    ')#+}'            // followed by at least one `#` and a `}`
            )
        ),


        fn_call: $ => seq(
            field('fn_name', $.identifier),
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

        bool: $ => choice(
            'True',
            'False'
        ),

        list: $ => seq(
            '[',
            optional(commaSep1($._expression)),
            optional(','),
            ']'
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

        identifier: $ => $._identifier,

        // This regex is fine until we allow user-named variables and functions.
        // Once we do that we may want to allow Unicode identifiers like python does: /[_\p{XID_Start}][_\p{XID_Continue}]*/
        _identifier: $ => token(new RegExp(
            '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
                '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, digit, or underscore.
        )),

        kwarg: $ => seq(
            field("key", $.identifier),
            '=',
            field("value", $._expression),
        ),

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
