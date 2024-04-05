#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
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
  sym_comment_content = 46,
  sym__text = 47,
  sym_source_file = 48,
  sym_statement = 49,
  sym_expression = 50,
  sym_comment = 51,
  sym_text = 52,
  sym__statement = 53,
  sym__control_structures = 54,
  sym__for = 55,
  sym__if = 56,
  sym__expression_statement = 57,
  sym__expression = 58,
  sym__literal = 59,
  sym_string = 60,
  sym_single_quote = 61,
  sym_double_quote = 62,
  sym__number = 63,
  sym_list = 64,
  sym_tuple = 65,
  sym_dict = 66,
  sym_pair = 67,
  sym__bool = 68,
  sym_identifier = 69,
  sym_function = 70,
  sym_argument_list = 71,
  sym_kwarg = 72,
  sym__math = 73,
  sym__comparison = 74,
  sym__comparison_operator = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_list_repeat1 = 77,
  aux_sym_dict_repeat1 = 78,
  aux_sym_argument_list_repeat1 = 79,
  aux_sym__math_repeat1 = 80,
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 20,
  [21] = 20,
  [22] = 18,
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
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 59,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 31,
  [70] = 70,
  [71] = 71,
  [72] = 32,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 73,
  [81] = 81,
  [82] = 76,
  [83] = 78,
  [84] = 81,
  [85] = 85,
  [86] = 71,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 87,
  [92] = 50,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 45,
  [97] = 47,
  [98] = 34,
  [99] = 42,
  [100] = 48,
  [101] = 49,
  [102] = 46,
  [103] = 33,
  [104] = 43,
  [105] = 38,
  [106] = 106,
  [107] = 39,
  [108] = 41,
  [109] = 35,
  [110] = 44,
  [111] = 40,
  [112] = 37,
  [113] = 36,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 117,
  [122] = 122,
  [123] = 122,
  [124] = 115,
  [125] = 125,
  [126] = 126,
  [127] = 114,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 129,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 119,
  [139] = 139,
  [140] = 134,
  [141] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(10);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(94);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '{') ADVANCE(83);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(94);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(135);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_endfor);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_endfor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_if);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_endif);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_elif);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '{') ADVANCE(45);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_addition_symbol);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_subtraction_symbol);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_division_symbol);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer_division_symbol);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_modulus_symbol);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_modulus_symbol);
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_multiplication_symbol);
      if (lookahead == '*') ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_exponent_symbol);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_gte);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_lte);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 1},
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
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
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
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 41},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 0},
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
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
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
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 132},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 67},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 64},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 67},
  [137] = {.lex_state = 64},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 64},
  [141] = {.lex_state = 67},
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
  },
  [1] = {
    [sym_source_file] = STATE(139),
    [sym_statement] = STATE(52),
    [sym_expression] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_text] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(52),
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
    STATE(135), 13,
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
  [62] = 14,
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
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(33), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 10,
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
  [117] = 15,
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
      sym_integer,
    ACTIONS(43), 1,
      sym_float,
    STATE(30), 1,
      sym__number,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(45), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(128), 3,
      sym__expression_statement,
      sym__math,
      sym__comparison,
    STATE(58), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [174] = 14,
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
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(47), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(75), 10,
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
  [229] = 13,
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
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 10,
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
  [281] = 13,
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
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 10,
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
  [333] = 13,
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
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 10,
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
  [385] = 13,
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
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 10,
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
  [437] = 14,
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
    ACTIONS(69), 1,
      sym_float,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(67), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(88), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [491] = 14,
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
    ACTIONS(77), 1,
      sym_float,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(75), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(87), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [545] = 14,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(83), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(89), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [599] = 14,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(91), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(91), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [653] = 13,
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
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [704] = 13,
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
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [755] = 13,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [806] = 12,
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
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 10,
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
  [855] = 13,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [906] = 13,
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
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [957] = 13,
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
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [1008] = 13,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [1059] = 13,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [1110] = 12,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
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
  [1158] = 12,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(119), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(131), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1206] = 12,
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
    ACTIONS(125), 1,
      sym_float,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(123), 4,
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
  [1254] = 12,
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
    ACTIONS(129), 1,
      sym_float,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(127), 4,
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
  [1302] = 12,
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
    ACTIONS(133), 1,
      sym_float,
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(131), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(106), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1350] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(137), 1,
      sym_float,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym__identifier,
    STATE(69), 1,
      sym_identifier,
    STATE(140), 1,
      sym_single_quote,
    STATE(141), 1,
      sym_double_quote,
    ACTIONS(135), 4,
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
  [1398] = 12,
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
    STATE(31), 1,
      sym_identifier,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
    ACTIONS(147), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(133), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym__number,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1446] = 5,
    STATE(53), 1,
      aux_sym__math_repeat1,
    ACTIONS(155), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(157), 2,
      sym_gt,
      sym_lt,
    ACTIONS(151), 5,
      anon_sym_RBRACE_RBRACE,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
    ACTIONS(153), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1472] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_argument_list,
    ACTIONS(163), 2,
      sym_gt,
      sym_lt,
    ACTIONS(159), 10,
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
  [1495] = 2,
    ACTIONS(167), 3,
      anon_sym_EQ,
      sym_gt,
      sym_lt,
    ACTIONS(165), 11,
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
  [1514] = 2,
    ACTIONS(171), 2,
      sym_gt,
      sym_lt,
    ACTIONS(169), 11,
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
  [1532] = 2,
    ACTIONS(175), 2,
      sym_gt,
      sym_lt,
    ACTIONS(173), 10,
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
  [1549] = 2,
    ACTIONS(179), 2,
      sym_gt,
      sym_lt,
    ACTIONS(177), 10,
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
  [1566] = 2,
    ACTIONS(183), 2,
      sym_gt,
      sym_lt,
    ACTIONS(181), 10,
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
  [1583] = 2,
    ACTIONS(187), 2,
      sym_gt,
      sym_lt,
    ACTIONS(185), 10,
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
  [1600] = 2,
    ACTIONS(191), 2,
      sym_gt,
      sym_lt,
    ACTIONS(189), 10,
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
  [1617] = 2,
    ACTIONS(195), 2,
      sym_gt,
      sym_lt,
    ACTIONS(193), 10,
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
  [1634] = 2,
    ACTIONS(199), 2,
      sym_gt,
      sym_lt,
    ACTIONS(197), 10,
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
  [1651] = 2,
    ACTIONS(203), 2,
      sym_gt,
      sym_lt,
    ACTIONS(201), 10,
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
  [1668] = 2,
    ACTIONS(207), 2,
      sym_gt,
      sym_lt,
    ACTIONS(205), 10,
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
  [1685] = 2,
    ACTIONS(211), 2,
      sym_gt,
      sym_lt,
    ACTIONS(209), 10,
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
  [1702] = 2,
    ACTIONS(215), 2,
      sym_gt,
      sym_lt,
    ACTIONS(213), 10,
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
  [1719] = 2,
    ACTIONS(219), 2,
      sym_gt,
      sym_lt,
    ACTIONS(217), 10,
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
  [1736] = 2,
    ACTIONS(223), 2,
      sym_gt,
      sym_lt,
    ACTIONS(221), 10,
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
  [1753] = 2,
    ACTIONS(227), 2,
      sym_gt,
      sym_lt,
    ACTIONS(225), 10,
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
  [1770] = 2,
    ACTIONS(231), 2,
      sym_gt,
      sym_lt,
    ACTIONS(229), 10,
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
  [1787] = 2,
    ACTIONS(235), 2,
      sym_gt,
      sym_lt,
    ACTIONS(233), 10,
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
  [1804] = 2,
    ACTIONS(239), 2,
      sym_gt,
      sym_lt,
    ACTIONS(237), 10,
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
  [1821] = 6,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(246), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(252), 1,
      sym__text,
    STATE(51), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1844] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(51), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1867] = 4,
    ACTIONS(257), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(54), 1,
      aux_sym__math_repeat1,
    ACTIONS(155), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(153), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1885] = 4,
    ACTIONS(259), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(54), 1,
      aux_sym__math_repeat1,
    ACTIONS(264), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(261), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1903] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [1928] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [1953] = 2,
    ACTIONS(275), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(259), 6,
      anon_sym_RBRACE_RBRACE,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1966] = 4,
    ACTIONS(277), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(24), 1,
      sym__comparison_operator,
    ACTIONS(281), 2,
      sym_gt,
      sym_lt,
    ACTIONS(279), 4,
      sym_eq,
      sym_neq,
      sym_gte,
      sym_lte,
  [1983] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [2005] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [2027] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [2049] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [2071] = 6,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    STATE(94), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(130), 1,
      sym_double_quote,
    STATE(134), 1,
      sym_single_quote,
  [2090] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(293), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2100] = 2,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(297), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2110] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(301), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2120] = 4,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      anon_sym_EQ,
    STATE(42), 1,
      sym_argument_list,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2134] = 2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(307), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2144] = 3,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_argument_list,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2155] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_list_repeat1,
    ACTIONS(314), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2166] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_dict_repeat1,
  [2176] = 1,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2182] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2192] = 1,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2198] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_argument_list_repeat1,
  [2208] = 3,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_dict_repeat1,
  [2218] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_dict_repeat1,
  [2228] = 3,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_list_repeat1,
  [2238] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_argument_list_repeat1,
  [2248] = 3,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2258] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_list_repeat1,
  [2268] = 3,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_dict_repeat1,
  [2278] = 3,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_list_repeat1,
  [2288] = 3,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_list_repeat1,
  [2298] = 3,
    ACTIONS(349), 1,
      sym_integer,
    ACTIONS(351), 1,
      sym_float,
    STATE(57), 1,
      sym__number,
  [2308] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      aux_sym_dict_repeat1,
  [2318] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_list_repeat1,
  [2328] = 3,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_list_repeat1,
  [2338] = 3,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym_list_repeat1,
  [2348] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_argument_list_repeat1,
  [2358] = 3,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_list_repeat1,
  [2368] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2373] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2378] = 1,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2383] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2388] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2393] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2398] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2403] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2408] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2413] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2418] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2423] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2428] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2433] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2438] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2443] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2448] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2453] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2458] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2463] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2468] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2473] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2478] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [2482] = 1,
    ACTIONS(382), 1,
      sym__double_quote,
  [2486] = 1,
    ACTIONS(384), 1,
      anon_sym_PERCENT_RBRACE,
  [2490] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [2494] = 1,
    ACTIONS(386), 1,
      anon_sym_COLON,
  [2498] = 1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [2502] = 1,
    ACTIONS(388), 1,
      sym_comment_content,
  [2506] = 1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
  [2510] = 1,
    ACTIONS(382), 1,
      sym__single_quote,
  [2514] = 1,
    ACTIONS(390), 1,
      sym__single_quote,
  [2518] = 1,
    ACTIONS(390), 1,
      sym__double_quote,
  [2522] = 1,
    ACTIONS(392), 1,
      sym_in,
  [2526] = 1,
    ACTIONS(394), 1,
      anon_sym_POUND_RBRACE,
  [2530] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
  [2534] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE_RBRACE,
  [2538] = 1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [2542] = 1,
    ACTIONS(398), 1,
      sym_string_content_dq,
  [2546] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACE_RBRACE,
  [2550] = 1,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
  [2554] = 1,
    ACTIONS(402), 1,
      anon_sym_PERCENT_RBRACE,
  [2558] = 1,
    ACTIONS(404), 1,
      sym_string_content_sq,
  [2562] = 1,
    ACTIONS(406), 1,
      anon_sym_PERCENT_RBRACE,
  [2566] = 1,
    ACTIONS(408), 1,
      sym_string_content_dq,
  [2570] = 1,
    ACTIONS(410), 1,
      sym_string_content_sq,
  [2574] = 1,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [2578] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
  [2582] = 1,
    ACTIONS(414), 1,
      sym_string_content_sq,
  [2586] = 1,
    ACTIONS(416), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 117,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 229,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 437,
  [SMALL_STATE(11)] = 491,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 653,
  [SMALL_STATE(15)] = 704,
  [SMALL_STATE(16)] = 755,
  [SMALL_STATE(17)] = 806,
  [SMALL_STATE(18)] = 855,
  [SMALL_STATE(19)] = 906,
  [SMALL_STATE(20)] = 957,
  [SMALL_STATE(21)] = 1008,
  [SMALL_STATE(22)] = 1059,
  [SMALL_STATE(23)] = 1110,
  [SMALL_STATE(24)] = 1158,
  [SMALL_STATE(25)] = 1206,
  [SMALL_STATE(26)] = 1254,
  [SMALL_STATE(27)] = 1302,
  [SMALL_STATE(28)] = 1350,
  [SMALL_STATE(29)] = 1398,
  [SMALL_STATE(30)] = 1446,
  [SMALL_STATE(31)] = 1472,
  [SMALL_STATE(32)] = 1495,
  [SMALL_STATE(33)] = 1514,
  [SMALL_STATE(34)] = 1532,
  [SMALL_STATE(35)] = 1549,
  [SMALL_STATE(36)] = 1566,
  [SMALL_STATE(37)] = 1583,
  [SMALL_STATE(38)] = 1600,
  [SMALL_STATE(39)] = 1617,
  [SMALL_STATE(40)] = 1634,
  [SMALL_STATE(41)] = 1651,
  [SMALL_STATE(42)] = 1668,
  [SMALL_STATE(43)] = 1685,
  [SMALL_STATE(44)] = 1702,
  [SMALL_STATE(45)] = 1719,
  [SMALL_STATE(46)] = 1736,
  [SMALL_STATE(47)] = 1753,
  [SMALL_STATE(48)] = 1770,
  [SMALL_STATE(49)] = 1787,
  [SMALL_STATE(50)] = 1804,
  [SMALL_STATE(51)] = 1821,
  [SMALL_STATE(52)] = 1844,
  [SMALL_STATE(53)] = 1867,
  [SMALL_STATE(54)] = 1885,
  [SMALL_STATE(55)] = 1903,
  [SMALL_STATE(56)] = 1928,
  [SMALL_STATE(57)] = 1953,
  [SMALL_STATE(58)] = 1966,
  [SMALL_STATE(59)] = 1983,
  [SMALL_STATE(60)] = 2005,
  [SMALL_STATE(61)] = 2027,
  [SMALL_STATE(62)] = 2049,
  [SMALL_STATE(63)] = 2071,
  [SMALL_STATE(64)] = 2090,
  [SMALL_STATE(65)] = 2100,
  [SMALL_STATE(66)] = 2110,
  [SMALL_STATE(67)] = 2120,
  [SMALL_STATE(68)] = 2134,
  [SMALL_STATE(69)] = 2144,
  [SMALL_STATE(70)] = 2155,
  [SMALL_STATE(71)] = 2166,
  [SMALL_STATE(72)] = 2176,
  [SMALL_STATE(73)] = 2182,
  [SMALL_STATE(74)] = 2192,
  [SMALL_STATE(75)] = 2198,
  [SMALL_STATE(76)] = 2208,
  [SMALL_STATE(77)] = 2218,
  [SMALL_STATE(78)] = 2228,
  [SMALL_STATE(79)] = 2238,
  [SMALL_STATE(80)] = 2248,
  [SMALL_STATE(81)] = 2258,
  [SMALL_STATE(82)] = 2268,
  [SMALL_STATE(83)] = 2278,
  [SMALL_STATE(84)] = 2288,
  [SMALL_STATE(85)] = 2298,
  [SMALL_STATE(86)] = 2308,
  [SMALL_STATE(87)] = 2318,
  [SMALL_STATE(88)] = 2328,
  [SMALL_STATE(89)] = 2338,
  [SMALL_STATE(90)] = 2348,
  [SMALL_STATE(91)] = 2358,
  [SMALL_STATE(92)] = 2368,
  [SMALL_STATE(93)] = 2373,
  [SMALL_STATE(94)] = 2378,
  [SMALL_STATE(95)] = 2383,
  [SMALL_STATE(96)] = 2388,
  [SMALL_STATE(97)] = 2393,
  [SMALL_STATE(98)] = 2398,
  [SMALL_STATE(99)] = 2403,
  [SMALL_STATE(100)] = 2408,
  [SMALL_STATE(101)] = 2413,
  [SMALL_STATE(102)] = 2418,
  [SMALL_STATE(103)] = 2423,
  [SMALL_STATE(104)] = 2428,
  [SMALL_STATE(105)] = 2433,
  [SMALL_STATE(106)] = 2438,
  [SMALL_STATE(107)] = 2443,
  [SMALL_STATE(108)] = 2448,
  [SMALL_STATE(109)] = 2453,
  [SMALL_STATE(110)] = 2458,
  [SMALL_STATE(111)] = 2463,
  [SMALL_STATE(112)] = 2468,
  [SMALL_STATE(113)] = 2473,
  [SMALL_STATE(114)] = 2478,
  [SMALL_STATE(115)] = 2482,
  [SMALL_STATE(116)] = 2486,
  [SMALL_STATE(117)] = 2490,
  [SMALL_STATE(118)] = 2494,
  [SMALL_STATE(119)] = 2498,
  [SMALL_STATE(120)] = 2502,
  [SMALL_STATE(121)] = 2506,
  [SMALL_STATE(122)] = 2510,
  [SMALL_STATE(123)] = 2514,
  [SMALL_STATE(124)] = 2518,
  [SMALL_STATE(125)] = 2522,
  [SMALL_STATE(126)] = 2526,
  [SMALL_STATE(127)] = 2530,
  [SMALL_STATE(128)] = 2534,
  [SMALL_STATE(129)] = 2538,
  [SMALL_STATE(130)] = 2542,
  [SMALL_STATE(131)] = 2546,
  [SMALL_STATE(132)] = 2550,
  [SMALL_STATE(133)] = 2554,
  [SMALL_STATE(134)] = 2558,
  [SMALL_STATE(135)] = 2562,
  [SMALL_STATE(136)] = 2566,
  [SMALL_STATE(137)] = 2570,
  [SMALL_STATE(138)] = 2574,
  [SMALL_STATE(139)] = 2578,
  [SMALL_STATE(140)] = 2582,
  [SMALL_STATE(141)] = 2586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(85),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(85),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(23),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(63),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(17),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comparison, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
