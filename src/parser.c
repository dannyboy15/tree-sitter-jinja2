#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_DOT = 31,
  sym__identifier = 32,
  anon_sym_EQ = 33,
  sym_addition_symbol = 34,
  sym_subtraction_symbol = 35,
  sym_division_symbol = 36,
  sym_integer_division_symbol = 37,
  sym_modulus_symbol = 38,
  sym_multiplication_symbol = 39,
  sym_exponent_symbol = 40,
  sym_eq = 41,
  sym_neq = 42,
  sym_gt = 43,
  sym_gte = 44,
  sym_lt = 45,
  sym_lte = 46,
  sym_and = 47,
  sym_or = 48,
  sym_not = 49,
  sym_comment_content = 50,
  sym__text = 51,
  sym_source_file = 52,
  sym_statement = 53,
  sym_expression = 54,
  sym_comment = 55,
  sym_text = 56,
  sym__statement = 57,
  sym__control_structures = 58,
  sym__for = 59,
  sym__if = 60,
  sym__expression_statement = 61,
  sym__expression = 62,
  sym__literal = 63,
  sym_string = 64,
  sym_single_quote = 65,
  sym_double_quote = 66,
  sym__number = 67,
  sym_list = 68,
  sym_tuple = 69,
  sym_dict = 70,
  sym_pair = 71,
  sym__bool = 72,
  sym_identifier = 73,
  sym_function = 74,
  sym_argument_list = 75,
  sym_kwarg = 76,
  sym__math = 77,
  sym__comparison = 78,
  sym__comparison_operator = 79,
  sym__logic = 80,
  sym__logic_operator = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym_list_repeat1 = 83,
  aux_sym_dict_repeat1 = 84,
  aux_sym_identifier_repeat1 = 85,
  aux_sym_argument_list_repeat1 = 86,
  aux_sym__math_repeat1 = 87,
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
  [anon_sym_DOT] = ".",
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
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [aux_sym_identifier_repeat1] = {
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
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 10,
  [12] = 8,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 17,
  [20] = 14,
  [21] = 15,
  [22] = 22,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 32,
  [71] = 71,
  [72] = 72,
  [73] = 31,
  [74] = 33,
  [75] = 75,
  [76] = 35,
  [77] = 36,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 81,
  [88] = 82,
  [89] = 84,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 96,
  [98] = 93,
  [99] = 49,
  [100] = 45,
  [101] = 48,
  [102] = 44,
  [103] = 50,
  [104] = 104,
  [105] = 105,
  [106] = 43,
  [107] = 51,
  [108] = 54,
  [109] = 52,
  [110] = 110,
  [111] = 46,
  [112] = 37,
  [113] = 40,
  [114] = 42,
  [115] = 39,
  [116] = 53,
  [117] = 47,
  [118] = 41,
  [119] = 119,
  [120] = 38,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 123,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 129,
  [131] = 131,
  [132] = 132,
  [133] = 121,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 132,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 134,
  [142] = 139,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 140,
  [151] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(30);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '{') ADVANCE(90);
      if (lookahead == '}') ADVANCE(91);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(135);
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
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == ']') ADVANCE(86);
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
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == ']') ADVANCE(86);
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
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(40);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '{') ADVANCE(89);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(101);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(62);
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
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 't') ADVANCE(141);
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
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(145);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(143);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_endfor);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_endfor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_if);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_endif);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_elif);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '{') ADVANCE(51);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_addition_symbol);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_subtraction_symbol);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_division_symbol);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_integer_division_symbol);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_modulus_symbol);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_modulus_symbol);
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_multiplication_symbol);
      if (lookahead == '*') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_exponent_symbol);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 47},
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
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
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
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 73},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 70},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 142},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 73},
  [146] = {.lex_state = 70},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 70},
  [151] = {.lex_state = 73},
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
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_source_file] = STATE(147),
    [sym_statement] = STATE(56),
    [sym_expression] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_text] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(56),
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
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
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
    STATE(144), 13,
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
    STATE(34), 1,
      sym__number,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(37), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(136), 4,
      sym__expression_statement,
      sym__math,
      sym__comparison,
      sym__logic,
    STATE(55), 8,
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
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(39), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(80), 10,
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
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(47), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
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
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(105), 10,
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
  [282] = 14,
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
    ACTIONS(63), 1,
      sym_float,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(61), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(98), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [336] = 14,
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
    ACTIONS(71), 1,
      sym_float,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(69), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [390] = 13,
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
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(105), 10,
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
  [442] = 13,
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
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(105), 10,
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
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(105), 10,
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
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(83), 4,
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
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(91), 4,
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
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
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
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
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
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
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
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
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
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
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
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
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
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1011] = 13,
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
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1062] = 12,
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
    STATE(71), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(105), 10,
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
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(119), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(148), 9,
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
    STATE(77), 1,
      sym_identifier,
    STATE(150), 1,
      sym_single_quote,
    STATE(151), 1,
      sym_double_quote,
    ACTIONS(123), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(119), 9,
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
    ACTIONS(137), 1,
      sym_float,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(135), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(125), 9,
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
    ACTIONS(141), 1,
      sym_float,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(139), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(124), 9,
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
    ACTIONS(145), 1,
      sym_float,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(143), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(149), 9,
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
    ACTIONS(149), 1,
      sym_float,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(122), 9,
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
    ACTIONS(153), 1,
      sym_float,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(151), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(110), 9,
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
    ACTIONS(101), 1,
      sym_float,
    STATE(36), 1,
      sym_identifier,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
    ACTIONS(99), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(94), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1495] = 4,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(159), 3,
      anon_sym_EQ,
      sym_gt,
      sym_lt,
    ACTIONS(155), 13,
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
  [1522] = 4,
    ACTIONS(163), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(166), 3,
      anon_sym_EQ,
      sym_gt,
      sym_lt,
    ACTIONS(161), 13,
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
  [1549] = 4,
    ACTIONS(157), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(170), 3,
      anon_sym_EQ,
      sym_gt,
      sym_lt,
    ACTIONS(168), 13,
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
  [1576] = 5,
    STATE(58), 1,
      aux_sym__math_repeat1,
    ACTIONS(176), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(178), 2,
      sym_gt,
      sym_lt,
    ACTIONS(174), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
    ACTIONS(172), 7,
      anon_sym_RBRACE_RBRACE,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1604] = 2,
    ACTIONS(166), 3,
      anon_sym_EQ,
      sym_gt,
      sym_lt,
    ACTIONS(161), 14,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
      sym_and,
      sym_or,
  [1626] = 4,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(184), 2,
      sym_gt,
      sym_lt,
    ACTIONS(180), 12,
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
  [1651] = 2,
    ACTIONS(188), 2,
      sym_gt,
      sym_lt,
    ACTIONS(186), 13,
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
  [1671] = 2,
    ACTIONS(192), 2,
      sym_gt,
      sym_lt,
    ACTIONS(190), 12,
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
  [1690] = 2,
    ACTIONS(196), 2,
      sym_gt,
      sym_lt,
    ACTIONS(194), 12,
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
  [1709] = 2,
    ACTIONS(200), 2,
      sym_gt,
      sym_lt,
    ACTIONS(198), 12,
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
  [1728] = 2,
    ACTIONS(204), 2,
      sym_gt,
      sym_lt,
    ACTIONS(202), 12,
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
  [1747] = 2,
    ACTIONS(208), 2,
      sym_gt,
      sym_lt,
    ACTIONS(206), 12,
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
  [1766] = 2,
    ACTIONS(212), 2,
      sym_gt,
      sym_lt,
    ACTIONS(210), 12,
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
  [1785] = 2,
    ACTIONS(216), 2,
      sym_gt,
      sym_lt,
    ACTIONS(214), 12,
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
  [1804] = 2,
    ACTIONS(220), 2,
      sym_gt,
      sym_lt,
    ACTIONS(218), 12,
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
  [1823] = 2,
    ACTIONS(224), 2,
      sym_gt,
      sym_lt,
    ACTIONS(222), 12,
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
  [1842] = 2,
    ACTIONS(228), 2,
      sym_gt,
      sym_lt,
    ACTIONS(226), 12,
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
  [1861] = 2,
    ACTIONS(232), 2,
      sym_gt,
      sym_lt,
    ACTIONS(230), 12,
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
  [1880] = 2,
    ACTIONS(236), 2,
      sym_gt,
      sym_lt,
    ACTIONS(234), 12,
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
  [1899] = 2,
    ACTIONS(240), 2,
      sym_gt,
      sym_lt,
    ACTIONS(238), 12,
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
  [1918] = 2,
    ACTIONS(244), 2,
      sym_gt,
      sym_lt,
    ACTIONS(242), 12,
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
  [1937] = 2,
    ACTIONS(248), 2,
      sym_gt,
      sym_lt,
    ACTIONS(246), 12,
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
  [1956] = 2,
    ACTIONS(252), 2,
      sym_gt,
      sym_lt,
    ACTIONS(250), 12,
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
  [1975] = 2,
    ACTIONS(256), 2,
      sym_gt,
      sym_lt,
    ACTIONS(254), 12,
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
  [1994] = 6,
    ACTIONS(258), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(27), 1,
      sym__logic_operator,
    STATE(28), 1,
      sym__comparison_operator,
    ACTIONS(262), 2,
      sym_gt,
      sym_lt,
    ACTIONS(264), 2,
      sym_and,
      sym_or,
    ACTIONS(260), 4,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
  [2018] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(57), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [2041] = 6,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(273), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(276), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(279), 1,
      sym__text,
    STATE(57), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [2064] = 4,
    ACTIONS(282), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(59), 1,
      aux_sym__math_repeat1,
    ACTIONS(176), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(174), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [2082] = 4,
    ACTIONS(284), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(59), 1,
      aux_sym__math_repeat1,
    ACTIONS(289), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(286), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [2100] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2125] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2150] = 2,
    ACTIONS(300), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(284), 6,
      anon_sym_RBRACE_RBRACE,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [2163] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2185] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2207] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2229] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2251] = 6,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    STATE(104), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(138), 1,
      sym_double_quote,
    STATE(140), 1,
      sym_single_quote,
  [2270] = 2,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(312), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2280] = 2,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(316), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2290] = 3,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2302] = 4,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_argument_list,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2316] = 2,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(325), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2326] = 3,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(155), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2338] = 3,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(168), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2350] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(331), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2360] = 1,
    ACTIONS(161), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [2367] = 3,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_argument_list,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2378] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_list_repeat1,
    ACTIONS(338), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2389] = 3,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [2399] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_argument_list_repeat1,
  [2409] = 3,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [2419] = 3,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_list_repeat1,
  [2429] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_argument_list_repeat1,
  [2439] = 3,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_list_repeat1,
  [2449] = 3,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_dict_repeat1,
  [2459] = 3,
    ACTIONS(364), 1,
      sym_integer,
    ACTIONS(366), 1,
      sym_float,
    STATE(62), 1,
      sym__number,
  [2469] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_argument_list_repeat1,
  [2479] = 3,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_list_repeat1,
  [2489] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_list_repeat1,
  [2499] = 3,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_dict_repeat1,
  [2509] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_dict_repeat1,
  [2519] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_list_repeat1,
  [2529] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_list_repeat1,
  [2539] = 1,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2545] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_list_repeat1,
  [2555] = 3,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_dict_repeat1,
  [2565] = 3,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_dict_repeat1,
  [2575] = 3,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_list_repeat1,
  [2585] = 1,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2590] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2595] = 1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2600] = 1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2605] = 1,
    ACTIONS(238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2610] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2615] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2620] = 1,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2625] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2630] = 1,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2635] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2640] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2645] = 1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2650] = 1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2655] = 1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2660] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2665] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2670] = 1,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2675] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2680] = 1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2685] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2690] = 1,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2695] = 1,
    ACTIONS(406), 1,
      sym__single_quote,
  [2699] = 1,
    ACTIONS(408), 1,
      anon_sym_RBRACE_RBRACE,
  [2703] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACK,
  [2707] = 1,
    ACTIONS(410), 1,
      anon_sym_PERCENT_RBRACE,
  [2711] = 1,
    ACTIONS(412), 1,
      sym_in,
  [2715] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
  [2719] = 1,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [2723] = 1,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [2727] = 1,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
  [2731] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [2735] = 1,
    ACTIONS(414), 1,
      anon_sym_COLON,
  [2739] = 1,
    ACTIONS(416), 1,
      sym__identifier,
  [2743] = 1,
    ACTIONS(418), 1,
      sym__single_quote,
  [2747] = 1,
    ACTIONS(418), 1,
      sym__double_quote,
  [2751] = 1,
    ACTIONS(420), 1,
      anon_sym_POUND_RBRACE,
  [2755] = 1,
    ACTIONS(422), 1,
      anon_sym_RBRACE_RBRACE,
  [2759] = 1,
    ACTIONS(424), 1,
      sym__identifier,
  [2763] = 1,
    ACTIONS(426), 1,
      sym_string_content_dq,
  [2767] = 1,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [2771] = 1,
    ACTIONS(428), 1,
      sym_string_content_sq,
  [2775] = 1,
    ACTIONS(406), 1,
      sym__double_quote,
  [2779] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2783] = 1,
    ACTIONS(430), 1,
      sym_comment_content,
  [2787] = 1,
    ACTIONS(432), 1,
      anon_sym_PERCENT_RBRACE,
  [2791] = 1,
    ACTIONS(434), 1,
      sym_string_content_dq,
  [2795] = 1,
    ACTIONS(436), 1,
      sym_string_content_sq,
  [2799] = 1,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
  [2803] = 1,
    ACTIONS(440), 1,
      anon_sym_PERCENT_RBRACE,
  [2807] = 1,
    ACTIONS(442), 1,
      anon_sym_RBRACE_RBRACE,
  [2811] = 1,
    ACTIONS(444), 1,
      sym_string_content_sq,
  [2815] = 1,
    ACTIONS(446), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 230,
  [SMALL_STATE(7)] = 282,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 442,
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
  [SMALL_STATE(22)] = 1062,
  [SMALL_STATE(23)] = 1111,
  [SMALL_STATE(24)] = 1159,
  [SMALL_STATE(25)] = 1207,
  [SMALL_STATE(26)] = 1255,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1351,
  [SMALL_STATE(29)] = 1399,
  [SMALL_STATE(30)] = 1447,
  [SMALL_STATE(31)] = 1495,
  [SMALL_STATE(32)] = 1522,
  [SMALL_STATE(33)] = 1549,
  [SMALL_STATE(34)] = 1576,
  [SMALL_STATE(35)] = 1604,
  [SMALL_STATE(36)] = 1626,
  [SMALL_STATE(37)] = 1651,
  [SMALL_STATE(38)] = 1671,
  [SMALL_STATE(39)] = 1690,
  [SMALL_STATE(40)] = 1709,
  [SMALL_STATE(41)] = 1728,
  [SMALL_STATE(42)] = 1747,
  [SMALL_STATE(43)] = 1766,
  [SMALL_STATE(44)] = 1785,
  [SMALL_STATE(45)] = 1804,
  [SMALL_STATE(46)] = 1823,
  [SMALL_STATE(47)] = 1842,
  [SMALL_STATE(48)] = 1861,
  [SMALL_STATE(49)] = 1880,
  [SMALL_STATE(50)] = 1899,
  [SMALL_STATE(51)] = 1918,
  [SMALL_STATE(52)] = 1937,
  [SMALL_STATE(53)] = 1956,
  [SMALL_STATE(54)] = 1975,
  [SMALL_STATE(55)] = 1994,
  [SMALL_STATE(56)] = 2018,
  [SMALL_STATE(57)] = 2041,
  [SMALL_STATE(58)] = 2064,
  [SMALL_STATE(59)] = 2082,
  [SMALL_STATE(60)] = 2100,
  [SMALL_STATE(61)] = 2125,
  [SMALL_STATE(62)] = 2150,
  [SMALL_STATE(63)] = 2163,
  [SMALL_STATE(64)] = 2185,
  [SMALL_STATE(65)] = 2207,
  [SMALL_STATE(66)] = 2229,
  [SMALL_STATE(67)] = 2251,
  [SMALL_STATE(68)] = 2270,
  [SMALL_STATE(69)] = 2280,
  [SMALL_STATE(70)] = 2290,
  [SMALL_STATE(71)] = 2302,
  [SMALL_STATE(72)] = 2316,
  [SMALL_STATE(73)] = 2326,
  [SMALL_STATE(74)] = 2338,
  [SMALL_STATE(75)] = 2350,
  [SMALL_STATE(76)] = 2360,
  [SMALL_STATE(77)] = 2367,
  [SMALL_STATE(78)] = 2378,
  [SMALL_STATE(79)] = 2389,
  [SMALL_STATE(80)] = 2399,
  [SMALL_STATE(81)] = 2409,
  [SMALL_STATE(82)] = 2419,
  [SMALL_STATE(83)] = 2429,
  [SMALL_STATE(84)] = 2439,
  [SMALL_STATE(85)] = 2449,
  [SMALL_STATE(86)] = 2459,
  [SMALL_STATE(87)] = 2469,
  [SMALL_STATE(88)] = 2479,
  [SMALL_STATE(89)] = 2489,
  [SMALL_STATE(90)] = 2499,
  [SMALL_STATE(91)] = 2509,
  [SMALL_STATE(92)] = 2519,
  [SMALL_STATE(93)] = 2529,
  [SMALL_STATE(94)] = 2539,
  [SMALL_STATE(95)] = 2545,
  [SMALL_STATE(96)] = 2555,
  [SMALL_STATE(97)] = 2565,
  [SMALL_STATE(98)] = 2575,
  [SMALL_STATE(99)] = 2585,
  [SMALL_STATE(100)] = 2590,
  [SMALL_STATE(101)] = 2595,
  [SMALL_STATE(102)] = 2600,
  [SMALL_STATE(103)] = 2605,
  [SMALL_STATE(104)] = 2610,
  [SMALL_STATE(105)] = 2615,
  [SMALL_STATE(106)] = 2620,
  [SMALL_STATE(107)] = 2625,
  [SMALL_STATE(108)] = 2630,
  [SMALL_STATE(109)] = 2635,
  [SMALL_STATE(110)] = 2640,
  [SMALL_STATE(111)] = 2645,
  [SMALL_STATE(112)] = 2650,
  [SMALL_STATE(113)] = 2655,
  [SMALL_STATE(114)] = 2660,
  [SMALL_STATE(115)] = 2665,
  [SMALL_STATE(116)] = 2670,
  [SMALL_STATE(117)] = 2675,
  [SMALL_STATE(118)] = 2680,
  [SMALL_STATE(119)] = 2685,
  [SMALL_STATE(120)] = 2690,
  [SMALL_STATE(121)] = 2695,
  [SMALL_STATE(122)] = 2699,
  [SMALL_STATE(123)] = 2703,
  [SMALL_STATE(124)] = 2707,
  [SMALL_STATE(125)] = 2711,
  [SMALL_STATE(126)] = 2715,
  [SMALL_STATE(127)] = 2719,
  [SMALL_STATE(128)] = 2723,
  [SMALL_STATE(129)] = 2727,
  [SMALL_STATE(130)] = 2731,
  [SMALL_STATE(131)] = 2735,
  [SMALL_STATE(132)] = 2739,
  [SMALL_STATE(133)] = 2743,
  [SMALL_STATE(134)] = 2747,
  [SMALL_STATE(135)] = 2751,
  [SMALL_STATE(136)] = 2755,
  [SMALL_STATE(137)] = 2759,
  [SMALL_STATE(138)] = 2763,
  [SMALL_STATE(139)] = 2767,
  [SMALL_STATE(140)] = 2771,
  [SMALL_STATE(141)] = 2775,
  [SMALL_STATE(142)] = 2779,
  [SMALL_STATE(143)] = 2783,
  [SMALL_STATE(144)] = 2787,
  [SMALL_STATE(145)] = 2791,
  [SMALL_STATE(146)] = 2795,
  [SMALL_STATE(147)] = 2799,
  [SMALL_STATE(148)] = 2803,
  [SMALL_STATE(149)] = 2807,
  [SMALL_STATE(150)] = 2811,
  [SMALL_STATE(151)] = 2815,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(137),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(86),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(86),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(132),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(30),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(22),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(67),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logic, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
