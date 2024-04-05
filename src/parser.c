#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACE_PERCENT = 1,
  anon_sym_PERCENT_RBRACE = 2,
  anon_sym_LBRACE_LBRACE = 3,
  anon_sym_RBRACE_RBRACE = 4,
  anon_sym_LBRACE_POUND = 5,
  anon_sym_POUND_RBRACE = 6,
  sym_for = 7,
  sym_endfor = 8,
  sym_in = 9,
  sym_if = 10,
  sym_endif = 11,
  sym_elif = 12,
  sym_else = 13,
  sym__single_quote = 14,
  sym__double_quote = 15,
  sym_string_content_sq = 16,
  sym_string_content_dq = 17,
  sym_integer = 18,
  sym_float = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_COLON = 27,
  sym_true = 28,
  sym_false = 29,
  sym_none = 30,
  sym__identifier = 31,
  anon_sym_EQ = 32,
  sym_addition_symbol = 33,
  sym_subtraction_symbol = 34,
  sym_division_symbol = 35,
  sym_integer_division_symbol = 36,
  sym_modulus_symbol = 37,
  sym_multiplication_symbol = 38,
  sym_exponent_symbol = 39,
  sym_eq = 40,
  sym_neq = 41,
  sym_gt = 42,
  sym_gte = 43,
  sym_lt = 44,
  sym_lte = 45,
  sym_and = 46,
  sym_or = 47,
  sym_not = 48,
  sym_comment_content = 49,
  sym__text = 50,
  sym_source_file = 51,
  sym_statement = 52,
  sym_expression = 53,
  sym_comment = 54,
  sym_text = 55,
  sym__statement = 56,
  sym__control_structures = 57,
  sym__for = 58,
  sym__if = 59,
  sym__expression_statement = 60,
  sym__expression = 61,
  sym__literal = 62,
  sym_string = 63,
  sym_single_quote = 64,
  sym_double_quote = 65,
  sym__number = 66,
  sym_list = 67,
  sym_tuple = 68,
  sym_dict = 69,
  sym_pair = 70,
  sym__bool = 71,
  sym_identifier = 72,
  sym_function = 73,
  sym_argument_list = 74,
  sym_kwarg = 75,
  sym__math = 76,
  sym__comparison = 77,
  sym__comparison_operator = 78,
  sym__logic = 79,
  sym__logic_operator = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_list_repeat1 = 82,
  aux_sym_dict_repeat1 = 83,
  aux_sym_argument_list_repeat1 = 84,
  aux_sym__math_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_POUND_RBRACE] = "#}",
  [sym_for] = "for",
  [sym_endfor] = "endfor",
  [sym_in] = "in",
  [sym_if] = "if",
  [sym_endif] = "endif",
  [sym_elif] = "elif",
  [sym_else] = "else",
  [sym__single_quote] = "_single_quote",
  [sym__double_quote] = "_double_quote",
  [sym_string_content_sq] = "string_content_sq",
  [sym_string_content_dq] = "string_content_dq",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_none] = "none",
  [sym__identifier] = "_identifier",
  [anon_sym_EQ] = "=",
  [sym_addition_symbol] = "addition_symbol",
  [sym_subtraction_symbol] = "subtraction_symbol",
  [sym_division_symbol] = "division_symbol",
  [sym_integer_division_symbol] = "integer_division_symbol",
  [sym_modulus_symbol] = "modulus_symbol",
  [sym_multiplication_symbol] = "multiplication_symbol",
  [sym_exponent_symbol] = "exponent_symbol",
  [sym_eq] = "eq",
  [sym_neq] = "neq",
  [sym_gt] = "gt",
  [sym_gte] = "gte",
  [sym_lt] = "lt",
  [sym_lte] = "lte",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_not] = "not",
  [sym_comment_content] = "comment_content",
  [sym__text] = "_text",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [sym__statement] = "_statement",
  [sym__control_structures] = "_control_structures",
  [sym__for] = "_for",
  [sym__if] = "_if",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_single_quote] = "single_quote",
  [sym_double_quote] = "double_quote",
  [sym__number] = "_number",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_dict] = "dict",
  [sym_pair] = "pair",
  [sym__bool] = "_bool",
  [sym_identifier] = "identifier",
  [sym_function] = "function",
  [sym_argument_list] = "argument_list",
  [sym_kwarg] = "kwarg",
  [sym__math] = "_math",
  [sym__comparison] = "_comparison",
  [sym__comparison_operator] = "_comparison_operator",
  [sym__logic] = "_logic",
  [sym__logic_operator] = "_logic_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym__math_repeat1] = "_math_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [sym_for] = sym_for,
  [sym_endfor] = sym_endfor,
  [sym_in] = sym_in,
  [sym_if] = sym_if,
  [sym_endif] = sym_endif,
  [sym_elif] = sym_elif,
  [sym_else] = sym_else,
  [sym__single_quote] = sym__single_quote,
  [sym__double_quote] = sym__double_quote,
  [sym_string_content_sq] = sym_string_content_sq,
  [sym_string_content_dq] = sym_string_content_dq,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_none] = sym_none,
  [sym__identifier] = sym__identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_addition_symbol] = sym_addition_symbol,
  [sym_subtraction_symbol] = sym_subtraction_symbol,
  [sym_division_symbol] = sym_division_symbol,
  [sym_integer_division_symbol] = sym_integer_division_symbol,
  [sym_modulus_symbol] = sym_modulus_symbol,
  [sym_multiplication_symbol] = sym_multiplication_symbol,
  [sym_exponent_symbol] = sym_exponent_symbol,
  [sym_eq] = sym_eq,
  [sym_neq] = sym_neq,
  [sym_gt] = sym_gt,
  [sym_gte] = sym_gte,
  [sym_lt] = sym_lt,
  [sym_lte] = sym_lte,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_not] = sym_not,
  [sym_comment_content] = sym_comment_content,
  [sym__text] = sym__text,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [sym__statement] = sym__statement,
  [sym__control_structures] = sym__control_structures,
  [sym__for] = sym__for,
  [sym__if] = sym__if,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_string] = sym_string,
  [sym_single_quote] = sym_single_quote,
  [sym_double_quote] = sym_double_quote,
  [sym__number] = sym__number,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_dict] = sym_dict,
  [sym_pair] = sym_pair,
  [sym__bool] = sym__bool,
  [sym_identifier] = sym_identifier,
  [sym_function] = sym_function,
  [sym_argument_list] = sym_argument_list,
  [sym_kwarg] = sym_kwarg,
  [sym__math] = sym__math,
  [sym__comparison] = sym__comparison,
  [sym__comparison_operator] = sym__comparison_operator,
  [sym__logic] = sym__logic,
  [sym__logic_operator] = sym__logic_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym__math_repeat1] = aux_sym__math_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_endfor] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_endif] = {
    .visible = true,
    .named = true,
  },
  [sym_elif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym__single_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_string_content_sq] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content_dq] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_addition_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_division_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_division_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_modulus_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_neq] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__control_structures] = {
    .visible = false,
    .named = true,
  },
  [sym__for] = {
    .visible = false,
    .named = true,
  },
  [sym__if] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__bool] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg] = {
    .visible = true,
    .named = true,
  },
  [sym__math] = {
    .visible = false,
    .named = true,
  },
  [sym__comparison] = {
    .visible = false,
    .named = true,
  },
  [sym__comparison_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__logic] = {
    .visible = false,
    .named = true,
  },
  [sym__logic_operator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__math_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument_list = 1,
  field_key = 2,
  field_name = 3,
  field_quote_type = 4,
  field_string_content = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_key] = "key",
  [field_name] = "name",
  [field_quote_type] = "quote_type",
  [field_string_content] = "string_content",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument_list, 1},
    {field_name, 0},
  [2] =
    {field_quote_type, 0},
    {field_string_content, 1},
  [4] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 9,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 33,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 32,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 78,
  [82] = 76,
  [83] = 83,
  [84] = 80,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 72,
  [90] = 73,
  [91] = 91,
  [92] = 75,
  [93] = 93,
  [94] = 47,
  [95] = 44,
  [96] = 96,
  [97] = 97,
  [98] = 51,
  [99] = 48,
  [100] = 43,
  [101] = 41,
  [102] = 49,
  [103] = 50,
  [104] = 104,
  [105] = 34,
  [106] = 46,
  [107] = 38,
  [108] = 37,
  [109] = 40,
  [110] = 42,
  [111] = 36,
  [112] = 45,
  [113] = 39,
  [114] = 35,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 117,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 115,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 133,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 136,
  [143] = 132,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == 'F') ADVANCE(99);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(40);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '{') ADVANCE(88);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(143);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(141);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_endfor);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_endfor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_if);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_endif);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_elif);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '{') ADVANCE(50);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_addition_symbol);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_subtraction_symbol);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_division_symbol);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer_division_symbol);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_modulus_symbol);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_modulus_symbol);
      if (lookahead == '}') ADVANCE(49);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_multiplication_symbol);
      if (lookahead == '*') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_exponent_symbol);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 46},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 140},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 72},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 72},
  [139] = {.lex_state = 69},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 69},
  [143] = {.lex_state = 72},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [sym_for] = ACTIONS(1),
    [sym_endfor] = ACTIONS(1),
    [sym_in] = ACTIONS(1),
    [sym_if] = ACTIONS(1),
    [sym_endif] = ACTIONS(1),
    [sym_elif] = ACTIONS(1),
    [sym_else] = ACTIONS(1),
    [sym__single_quote] = ACTIONS(1),
    [sym__double_quote] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_addition_symbol] = ACTIONS(1),
    [sym_subtraction_symbol] = ACTIONS(1),
    [sym_division_symbol] = ACTIONS(1),
    [sym_integer_division_symbol] = ACTIONS(1),
    [sym_modulus_symbol] = ACTIONS(1),
    [sym_multiplication_symbol] = ACTIONS(1),
    [sym_exponent_symbol] = ACTIONS(1),
    [sym_eq] = ACTIONS(1),
    [sym_neq] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_gte] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_lte] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(141),
    [sym_statement] = STATE(54),
    [sym_expression] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_text] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      sym_for,
    ACTIONS(17), 1,
      sym_if,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(15), 8,
      sym_endfor,
      sym_endif,
      sym_elif,
      sym_else,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(137), 13,
      sym__statement,
      sym__control_structures,
      sym__for,
      sym__if,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [62] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_float,
    STATE(31), 1,
      sym__number,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(37), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(130), 4,
      sym__expression_statement,
      sym__math,
      sym__comparison,
      sym__logic,
    STATE(52), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [120] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_float,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(78), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [175] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(49), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(47), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(81), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [230] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [282] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [334] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [386] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(67), 1,
      sym_float,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(65), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(92), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [440] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(75), 1,
      sym_float,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(73), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(90), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [494] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [546] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(85), 1,
      sym_float,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(75), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [600] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(93), 1,
      sym_float,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(91), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(73), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [654] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [705] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [756] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [807] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [858] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [909] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [960] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1011] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(57), 1,
      sym_float,
    STATE(67), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [1060] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1111] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(121), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(119), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(93), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1159] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(125), 1,
      sym_float,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(70), 1,
      sym_identifier,
    STATE(142), 1,
      sym_single_quote,
    STATE(143), 1,
      sym_double_quote,
    ACTIONS(123), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(96), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1207] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1255] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(137), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(135), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(118), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1303] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(141), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(139), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(116), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1351] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(145), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(143), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(140), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1399] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(149), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(135), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1447] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(153), 1,
      sym_float,
    STATE(33), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(151), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(127), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1495] = 5,
    STATE(55), 1,
      aux_sym__math_repeat1,
    ACTIONS(159), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(161), 2,
      sym_gt,
      sym_lt,
    ACTIONS(157), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
    ACTIONS(155), 7,
      anon_sym_RBRACE_RBRACE,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1523] = 2,
    ACTIONS(165), 3,
      anon_sym_EQ,
      sym_gt,
      sym_lt,
    ACTIONS(163), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1544] = 4,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_argument_list,
    ACTIONS(171), 2,
      sym_gt,
      sym_lt,
    ACTIONS(167), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1569] = 2,
    ACTIONS(175), 2,
      sym_gt,
      sym_lt,
    ACTIONS(173), 13,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1589] = 2,
    ACTIONS(179), 2,
      sym_gt,
      sym_lt,
    ACTIONS(177), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1608] = 2,
    ACTIONS(183), 2,
      sym_gt,
      sym_lt,
    ACTIONS(181), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1627] = 2,
    ACTIONS(187), 2,
      sym_gt,
      sym_lt,
    ACTIONS(185), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1646] = 2,
    ACTIONS(191), 2,
      sym_gt,
      sym_lt,
    ACTIONS(189), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1665] = 2,
    ACTIONS(195), 2,
      sym_gt,
      sym_lt,
    ACTIONS(193), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1684] = 2,
    ACTIONS(199), 2,
      sym_gt,
      sym_lt,
    ACTIONS(197), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1703] = 2,
    ACTIONS(203), 2,
      sym_gt,
      sym_lt,
    ACTIONS(201), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1722] = 2,
    ACTIONS(207), 2,
      sym_gt,
      sym_lt,
    ACTIONS(205), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1741] = 2,
    ACTIONS(211), 2,
      sym_gt,
      sym_lt,
    ACTIONS(209), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1760] = 2,
    ACTIONS(215), 2,
      sym_gt,
      sym_lt,
    ACTIONS(213), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1779] = 2,
    ACTIONS(219), 2,
      sym_gt,
      sym_lt,
    ACTIONS(217), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1798] = 2,
    ACTIONS(223), 2,
      sym_gt,
      sym_lt,
    ACTIONS(221), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1817] = 2,
    ACTIONS(227), 2,
      sym_gt,
      sym_lt,
    ACTIONS(225), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1836] = 2,
    ACTIONS(231), 2,
      sym_gt,
      sym_lt,
    ACTIONS(229), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1855] = 2,
    ACTIONS(235), 2,
      sym_gt,
      sym_lt,
    ACTIONS(233), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1874] = 2,
    ACTIONS(239), 2,
      sym_gt,
      sym_lt,
    ACTIONS(237), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1893] = 2,
    ACTIONS(243), 2,
      sym_gt,
      sym_lt,
    ACTIONS(241), 12,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1912] = 6,
    ACTIONS(245), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(28), 1,
      sym__logic_operator,
    STATE(29), 1,
      sym__comparison_operator,
    ACTIONS(249), 2,
      sym_gt,
      sym_lt,
    ACTIONS(251), 2,
      sym_and,
      sym_or,
    ACTIONS(247), 4,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
  [1936] = 6,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(258), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(261), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(264), 1,
      sym__text,
    STATE(53), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1959] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(53), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1982] = 4,
    ACTIONS(269), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__math_repeat1,
    ACTIONS(159), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(157), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [2000] = 4,
    ACTIONS(271), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__math_repeat1,
    ACTIONS(276), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(273), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [2018] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2043] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2068] = 2,
    ACTIONS(287), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(271), 6,
      anon_sym_RBRACE_RBRACE,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [2081] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2103] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2125] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2147] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2169] = 6,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    STATE(97), 1,
      sym_pair,
    STATE(124), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [2188] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(299), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2198] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(303), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2208] = 4,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_argument_list,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2222] = 2,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(309), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2232] = 2,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(313), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2242] = 3,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_argument_list,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2253] = 3,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
    ACTIONS(320), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2264] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_dict_repeat1,
  [2274] = 3,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_list_repeat1,
  [2284] = 1,
    ACTIONS(320), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2290] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_list_repeat1,
  [2300] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_argument_list_repeat1,
  [2310] = 1,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2316] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_argument_list_repeat1,
  [2326] = 3,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_dict_repeat1,
  [2336] = 3,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_dict_repeat1,
  [2346] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_argument_list_repeat1,
  [2356] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_argument_list_repeat1,
  [2366] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2376] = 3,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_dict_repeat1,
  [2386] = 3,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2396] = 3,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2406] = 3,
    ACTIONS(361), 1,
      sym_integer,
    ACTIONS(363), 1,
      sym_float,
    STATE(59), 1,
      sym__number,
  [2416] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2426] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_dict_repeat1,
  [2436] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_list_repeat1,
  [2446] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_argument_list_repeat1,
  [2456] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_list_repeat1,
  [2466] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2471] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2476] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2481] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2486] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2491] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2496] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2501] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2506] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2511] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2516] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2521] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2526] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2531] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2536] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2541] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2546] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2551] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2556] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2561] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2566] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2571] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2576] = 1,
    ACTIONS(388), 1,
      sym__single_quote,
  [2580] = 1,
    ACTIONS(390), 1,
      anon_sym_PERCENT_RBRACE,
  [2584] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
  [2588] = 1,
    ACTIONS(392), 1,
      anon_sym_PERCENT_RBRACE,
  [2592] = 1,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [2596] = 1,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [2600] = 1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [2604] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [2608] = 1,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
  [2612] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [2616] = 1,
    ACTIONS(396), 1,
      sym__single_quote,
  [2620] = 1,
    ACTIONS(396), 1,
      sym__double_quote,
  [2624] = 1,
    ACTIONS(398), 1,
      sym_in,
  [2628] = 1,
    ACTIONS(400), 1,
      anon_sym_POUND_RBRACE,
  [2632] = 1,
    ACTIONS(402), 1,
      sym_comment_content,
  [2636] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACE_RBRACE,
  [2640] = 1,
    ACTIONS(388), 1,
      sym__double_quote,
  [2644] = 1,
    ACTIONS(406), 1,
      sym_string_content_dq,
  [2648] = 1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [2652] = 1,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
  [2656] = 1,
    ACTIONS(408), 1,
      anon_sym_RBRACE_RBRACE,
  [2660] = 1,
    ACTIONS(410), 1,
      sym_string_content_sq,
  [2664] = 1,
    ACTIONS(412), 1,
      anon_sym_PERCENT_RBRACE,
  [2668] = 1,
    ACTIONS(414), 1,
      sym_string_content_dq,
  [2672] = 1,
    ACTIONS(416), 1,
      sym_string_content_sq,
  [2676] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACE_RBRACE,
  [2680] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2684] = 1,
    ACTIONS(422), 1,
      sym_string_content_sq,
  [2688] = 1,
    ACTIONS(424), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 282,
  [SMALL_STATE(8)] = 334,
  [SMALL_STATE(9)] = 386,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 600,
  [SMALL_STATE(14)] = 654,
  [SMALL_STATE(15)] = 705,
  [SMALL_STATE(16)] = 756,
  [SMALL_STATE(17)] = 807,
  [SMALL_STATE(18)] = 858,
  [SMALL_STATE(19)] = 909,
  [SMALL_STATE(20)] = 960,
  [SMALL_STATE(21)] = 1011,
  [SMALL_STATE(22)] = 1060,
  [SMALL_STATE(23)] = 1111,
  [SMALL_STATE(24)] = 1159,
  [SMALL_STATE(25)] = 1207,
  [SMALL_STATE(26)] = 1255,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1351,
  [SMALL_STATE(29)] = 1399,
  [SMALL_STATE(30)] = 1447,
  [SMALL_STATE(31)] = 1495,
  [SMALL_STATE(32)] = 1523,
  [SMALL_STATE(33)] = 1544,
  [SMALL_STATE(34)] = 1569,
  [SMALL_STATE(35)] = 1589,
  [SMALL_STATE(36)] = 1608,
  [SMALL_STATE(37)] = 1627,
  [SMALL_STATE(38)] = 1646,
  [SMALL_STATE(39)] = 1665,
  [SMALL_STATE(40)] = 1684,
  [SMALL_STATE(41)] = 1703,
  [SMALL_STATE(42)] = 1722,
  [SMALL_STATE(43)] = 1741,
  [SMALL_STATE(44)] = 1760,
  [SMALL_STATE(45)] = 1779,
  [SMALL_STATE(46)] = 1798,
  [SMALL_STATE(47)] = 1817,
  [SMALL_STATE(48)] = 1836,
  [SMALL_STATE(49)] = 1855,
  [SMALL_STATE(50)] = 1874,
  [SMALL_STATE(51)] = 1893,
  [SMALL_STATE(52)] = 1912,
  [SMALL_STATE(53)] = 1936,
  [SMALL_STATE(54)] = 1959,
  [SMALL_STATE(55)] = 1982,
  [SMALL_STATE(56)] = 2000,
  [SMALL_STATE(57)] = 2018,
  [SMALL_STATE(58)] = 2043,
  [SMALL_STATE(59)] = 2068,
  [SMALL_STATE(60)] = 2081,
  [SMALL_STATE(61)] = 2103,
  [SMALL_STATE(62)] = 2125,
  [SMALL_STATE(63)] = 2147,
  [SMALL_STATE(64)] = 2169,
  [SMALL_STATE(65)] = 2188,
  [SMALL_STATE(66)] = 2198,
  [SMALL_STATE(67)] = 2208,
  [SMALL_STATE(68)] = 2222,
  [SMALL_STATE(69)] = 2232,
  [SMALL_STATE(70)] = 2242,
  [SMALL_STATE(71)] = 2253,
  [SMALL_STATE(72)] = 2264,
  [SMALL_STATE(73)] = 2274,
  [SMALL_STATE(74)] = 2284,
  [SMALL_STATE(75)] = 2290,
  [SMALL_STATE(76)] = 2300,
  [SMALL_STATE(77)] = 2310,
  [SMALL_STATE(78)] = 2316,
  [SMALL_STATE(79)] = 2326,
  [SMALL_STATE(80)] = 2336,
  [SMALL_STATE(81)] = 2346,
  [SMALL_STATE(82)] = 2356,
  [SMALL_STATE(83)] = 2366,
  [SMALL_STATE(84)] = 2376,
  [SMALL_STATE(85)] = 2386,
  [SMALL_STATE(86)] = 2396,
  [SMALL_STATE(87)] = 2406,
  [SMALL_STATE(88)] = 2416,
  [SMALL_STATE(89)] = 2426,
  [SMALL_STATE(90)] = 2436,
  [SMALL_STATE(91)] = 2446,
  [SMALL_STATE(92)] = 2456,
  [SMALL_STATE(93)] = 2466,
  [SMALL_STATE(94)] = 2471,
  [SMALL_STATE(95)] = 2476,
  [SMALL_STATE(96)] = 2481,
  [SMALL_STATE(97)] = 2486,
  [SMALL_STATE(98)] = 2491,
  [SMALL_STATE(99)] = 2496,
  [SMALL_STATE(100)] = 2501,
  [SMALL_STATE(101)] = 2506,
  [SMALL_STATE(102)] = 2511,
  [SMALL_STATE(103)] = 2516,
  [SMALL_STATE(104)] = 2521,
  [SMALL_STATE(105)] = 2526,
  [SMALL_STATE(106)] = 2531,
  [SMALL_STATE(107)] = 2536,
  [SMALL_STATE(108)] = 2541,
  [SMALL_STATE(109)] = 2546,
  [SMALL_STATE(110)] = 2551,
  [SMALL_STATE(111)] = 2556,
  [SMALL_STATE(112)] = 2561,
  [SMALL_STATE(113)] = 2566,
  [SMALL_STATE(114)] = 2571,
  [SMALL_STATE(115)] = 2576,
  [SMALL_STATE(116)] = 2580,
  [SMALL_STATE(117)] = 2584,
  [SMALL_STATE(118)] = 2588,
  [SMALL_STATE(119)] = 2592,
  [SMALL_STATE(120)] = 2596,
  [SMALL_STATE(121)] = 2600,
  [SMALL_STATE(122)] = 2604,
  [SMALL_STATE(123)] = 2608,
  [SMALL_STATE(124)] = 2612,
  [SMALL_STATE(125)] = 2616,
  [SMALL_STATE(126)] = 2620,
  [SMALL_STATE(127)] = 2624,
  [SMALL_STATE(128)] = 2628,
  [SMALL_STATE(129)] = 2632,
  [SMALL_STATE(130)] = 2636,
  [SMALL_STATE(131)] = 2640,
  [SMALL_STATE(132)] = 2644,
  [SMALL_STATE(133)] = 2648,
  [SMALL_STATE(134)] = 2652,
  [SMALL_STATE(135)] = 2656,
  [SMALL_STATE(136)] = 2660,
  [SMALL_STATE(137)] = 2664,
  [SMALL_STATE(138)] = 2668,
  [SMALL_STATE(139)] = 2672,
  [SMALL_STATE(140)] = 2676,
  [SMALL_STATE(141)] = 2680,
  [SMALL_STATE(142)] = 2684,
  [SMALL_STATE(143)] = 2688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(87),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(87),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(25),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logic, 3),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jinja2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
