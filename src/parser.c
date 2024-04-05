#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  sym_comment_content = 40,
  sym__text = 41,
  sym_source_file = 42,
  sym_statement = 43,
  sym_expression = 44,
  sym_comment = 45,
  sym_text = 46,
  sym__statement = 47,
  sym__control_structures = 48,
  sym__for = 49,
  sym__if = 50,
  sym__expression = 51,
  sym__literal = 52,
  sym_string = 53,
  sym_single_quote = 54,
  sym_double_quote = 55,
  sym__number = 56,
  sym_list = 57,
  sym_tuple = 58,
  sym_dict = 59,
  sym_pair = 60,
  sym__bool = 61,
  sym_identifier = 62,
  sym_function = 63,
  sym_argument_list = 64,
  sym_kwarg = 65,
  sym__math = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_list_repeat1 = 68,
  aux_sym_dict_repeat1 = 69,
  aux_sym_argument_list_repeat1 = 70,
  aux_sym__math_repeat1 = 71,
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 5,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 13,
  [18] = 18,
  [19] = 14,
  [20] = 18,
  [21] = 21,
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
  [33] = 30,
  [34] = 34,
  [35] = 31,
  [36] = 29,
  [37] = 37,
  [38] = 32,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 44,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 39,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 76,
  [86] = 86,
  [87] = 87,
  [88] = 73,
  [89] = 89,
  [90] = 90,
  [91] = 41,
  [92] = 84,
  [93] = 86,
  [94] = 89,
  [95] = 95,
  [96] = 48,
  [97] = 57,
  [98] = 98,
  [99] = 63,
  [100] = 60,
  [101] = 52,
  [102] = 54,
  [103] = 46,
  [104] = 104,
  [105] = 64,
  [106] = 58,
  [107] = 56,
  [108] = 65,
  [109] = 49,
  [110] = 50,
  [111] = 61,
  [112] = 59,
  [113] = 55,
  [114] = 51,
  [115] = 62,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 125,
  [126] = 117,
  [127] = 127,
  [128] = 128,
  [129] = 123,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 125,
  [134] = 134,
  [135] = 134,
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
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '{') ADVANCE(78);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(122);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(120);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_endfor);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_endfor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_if);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_endif);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_elif);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '{') ADVANCE(40);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 's') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_addition_symbol);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_subtraction_symbol);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_division_symbol);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer_division_symbol);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_modulus_symbol);
      if (lookahead == '}') ADVANCE(39);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_multiplication_symbol);
      if (lookahead == '*') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_exponent_symbol);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 36},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
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
  [122] = {.lex_state = 119},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 62},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 59},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 62},
  [139] = {.lex_state = 59},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 59},
  [143] = {.lex_state = 62},
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
  },
  [1] = {
    [sym_source_file] = STATE(141),
    [sym_statement] = STATE(34),
    [sym_expression] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_text] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(13), 1,
      sym_for,
    ACTIONS(17), 1,
      sym_if,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(15), 7,
      sym_endfor,
      sym_endif,
      sym_elif,
      sym_else,
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
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [67] = 16,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(39), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(81), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [127] = 16,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(45), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(80), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [187] = 16,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(51), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [246] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [303] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [360] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [417] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [474] = 16,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(67), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(85), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [533] = 16,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(73), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(78), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [592] = 16,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(79), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(76), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [651] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [707] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [763] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [819] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [875] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [931] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [987] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1043] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1099] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(55), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(104), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
      sym__math,
  [1153] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(98), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1206] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(83), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1259] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(101), 1,
      sym_integer,
    ACTIONS(103), 1,
      sym_float,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(36), 1,
      sym__number,
    STATE(72), 1,
      sym_identifier,
    STATE(142), 1,
      sym_single_quote,
    STATE(143), 1,
      sym_double_quote,
    ACTIONS(111), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(95), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1312] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(115), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(130), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1365] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(117), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(140), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1418] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(119), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(118), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1471] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(25), 1,
      sym_float,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    STATE(29), 1,
      sym__number,
    STATE(39), 1,
      sym_identifier,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
    ACTIONS(121), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(127), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
  [1524] = 4,
    STATE(31), 1,
      aux_sym__math_repeat1,
    ACTIONS(127), 3,
      sym_division_symbol,
      sym_modulus_symbol,
      sym_multiplication_symbol,
    ACTIONS(125), 4,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_exponent_symbol,
    ACTIONS(123), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1547] = 4,
    STATE(30), 1,
      aux_sym__math_repeat1,
    ACTIONS(134), 3,
      sym_division_symbol,
      sym_modulus_symbol,
      sym_multiplication_symbol,
    ACTIONS(131), 4,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_exponent_symbol,
    ACTIONS(129), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1570] = 4,
    STATE(30), 1,
      aux_sym__math_repeat1,
    ACTIONS(127), 3,
      sym_division_symbol,
      sym_modulus_symbol,
      sym_multiplication_symbol,
    ACTIONS(125), 4,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_exponent_symbol,
    ACTIONS(137), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1593] = 2,
    ACTIONS(139), 3,
      sym_division_symbol,
      sym_modulus_symbol,
      sym_multiplication_symbol,
    ACTIONS(129), 10,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_exponent_symbol,
  [1611] = 4,
    STATE(33), 1,
      aux_sym__math_repeat1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(144), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(141), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1630] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(37), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1653] = 4,
    STATE(33), 1,
      aux_sym__math_repeat1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(149), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1672] = 4,
    STATE(35), 1,
      aux_sym__math_repeat1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(149), 5,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1691] = 6,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(158), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(161), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(164), 1,
      sym__text,
    STATE(37), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1714] = 2,
    ACTIONS(139), 2,
      sym_division_symbol,
      sym_multiplication_symbol,
    ACTIONS(129), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_addition_symbol,
      sym_subtraction_symbol,
      sym_integer_division_symbol,
      sym_modulus_symbol,
      sym_exponent_symbol,
  [1728] = 3,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_argument_list,
    ACTIONS(167), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1743] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1768] = 1,
    ACTIONS(175), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1779] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1804] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1826] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1848] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1870] = 1,
    ACTIONS(187), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1880] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1902] = 1,
    ACTIONS(191), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1911] = 1,
    ACTIONS(193), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1920] = 1,
    ACTIONS(195), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1929] = 1,
    ACTIONS(197), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1938] = 1,
    ACTIONS(199), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1947] = 6,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    STATE(116), 1,
      sym_pair,
    STATE(131), 1,
      sym_string,
    STATE(132), 1,
      sym_double_quote,
    STATE(136), 1,
      sym_single_quote,
  [1966] = 1,
    ACTIONS(201), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1975] = 1,
    ACTIONS(203), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1984] = 1,
    ACTIONS(205), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1993] = 1,
    ACTIONS(207), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2002] = 1,
    ACTIONS(209), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2011] = 1,
    ACTIONS(211), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2020] = 1,
    ACTIONS(213), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2029] = 1,
    ACTIONS(215), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2038] = 1,
    ACTIONS(217), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2047] = 1,
    ACTIONS(219), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2056] = 1,
    ACTIONS(221), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2065] = 1,
    ACTIONS(223), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2074] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(227), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2084] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(231), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2094] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(235), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2104] = 4,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_EQ,
    STATE(63), 1,
      sym_argument_list,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2118] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(241), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [2128] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
    ACTIONS(246), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2139] = 3,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_argument_list,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2150] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_dict_repeat1,
  [2160] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_list_repeat1,
  [2170] = 3,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_argument_list_repeat1,
  [2180] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_list_repeat1,
  [2190] = 3,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_argument_list_repeat1,
  [2200] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_list_repeat1,
  [2210] = 1,
    ACTIONS(246), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2216] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_argument_list_repeat1,
  [2226] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_argument_list_repeat1,
  [2236] = 3,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_dict_repeat1,
  [2246] = 3,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_dict_repeat1,
  [2256] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2266] = 3,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_list_repeat1,
  [2276] = 3,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2286] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_argument_list_repeat1,
  [2296] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_dict_repeat1,
  [2306] = 3,
    ACTIONS(299), 1,
      sym_integer,
    ACTIONS(301), 1,
      sym_float,
    STATE(32), 1,
      sym__number,
  [2316] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      aux_sym_dict_repeat1,
  [2326] = 1,
    ACTIONS(175), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2332] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2342] = 3,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [2352] = 3,
    ACTIONS(312), 1,
      sym_integer,
    ACTIONS(314), 1,
      sym_float,
    STATE(38), 1,
      sym__number,
  [2362] = 1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2367] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2372] = 1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2377] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2382] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2387] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2392] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2397] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2402] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2407] = 1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2412] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2417] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2422] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2427] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2432] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2437] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2442] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2447] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2452] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2457] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2462] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2467] = 1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2472] = 1,
    ACTIONS(320), 1,
      sym__double_quote,
  [2476] = 1,
    ACTIONS(322), 1,
      anon_sym_PERCENT_RBRACE,
  [2480] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
  [2484] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
  [2488] = 1,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [2492] = 1,
    ACTIONS(324), 1,
      sym_comment_content,
  [2496] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [2500] = 1,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
  [2504] = 1,
    ACTIONS(326), 1,
      sym__single_quote,
  [2508] = 1,
    ACTIONS(326), 1,
      sym__double_quote,
  [2512] = 1,
    ACTIONS(328), 1,
      sym_in,
  [2516] = 1,
    ACTIONS(330), 1,
      anon_sym_POUND_RBRACE,
  [2520] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
  [2524] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE_RBRACE,
  [2528] = 1,
    ACTIONS(334), 1,
      anon_sym_COLON,
  [2532] = 1,
    ACTIONS(336), 1,
      sym_string_content_dq,
  [2536] = 1,
    ACTIONS(320), 1,
      sym__single_quote,
  [2540] = 1,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [2544] = 1,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [2548] = 1,
    ACTIONS(338), 1,
      sym_string_content_sq,
  [2552] = 1,
    ACTIONS(340), 1,
      anon_sym_PERCENT_RBRACE,
  [2556] = 1,
    ACTIONS(342), 1,
      sym_string_content_dq,
  [2560] = 1,
    ACTIONS(344), 1,
      sym_string_content_sq,
  [2564] = 1,
    ACTIONS(346), 1,
      anon_sym_PERCENT_RBRACE,
  [2568] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [2572] = 1,
    ACTIONS(350), 1,
      sym_string_content_sq,
  [2576] = 1,
    ACTIONS(352), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 127,
  [SMALL_STATE(5)] = 187,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 303,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 417,
  [SMALL_STATE(10)] = 474,
  [SMALL_STATE(11)] = 533,
  [SMALL_STATE(12)] = 592,
  [SMALL_STATE(13)] = 651,
  [SMALL_STATE(14)] = 707,
  [SMALL_STATE(15)] = 763,
  [SMALL_STATE(16)] = 819,
  [SMALL_STATE(17)] = 875,
  [SMALL_STATE(18)] = 931,
  [SMALL_STATE(19)] = 987,
  [SMALL_STATE(20)] = 1043,
  [SMALL_STATE(21)] = 1099,
  [SMALL_STATE(22)] = 1153,
  [SMALL_STATE(23)] = 1206,
  [SMALL_STATE(24)] = 1259,
  [SMALL_STATE(25)] = 1312,
  [SMALL_STATE(26)] = 1365,
  [SMALL_STATE(27)] = 1418,
  [SMALL_STATE(28)] = 1471,
  [SMALL_STATE(29)] = 1524,
  [SMALL_STATE(30)] = 1547,
  [SMALL_STATE(31)] = 1570,
  [SMALL_STATE(32)] = 1593,
  [SMALL_STATE(33)] = 1611,
  [SMALL_STATE(34)] = 1630,
  [SMALL_STATE(35)] = 1653,
  [SMALL_STATE(36)] = 1672,
  [SMALL_STATE(37)] = 1691,
  [SMALL_STATE(38)] = 1714,
  [SMALL_STATE(39)] = 1728,
  [SMALL_STATE(40)] = 1743,
  [SMALL_STATE(41)] = 1768,
  [SMALL_STATE(42)] = 1779,
  [SMALL_STATE(43)] = 1804,
  [SMALL_STATE(44)] = 1826,
  [SMALL_STATE(45)] = 1848,
  [SMALL_STATE(46)] = 1870,
  [SMALL_STATE(47)] = 1880,
  [SMALL_STATE(48)] = 1902,
  [SMALL_STATE(49)] = 1911,
  [SMALL_STATE(50)] = 1920,
  [SMALL_STATE(51)] = 1929,
  [SMALL_STATE(52)] = 1938,
  [SMALL_STATE(53)] = 1947,
  [SMALL_STATE(54)] = 1966,
  [SMALL_STATE(55)] = 1975,
  [SMALL_STATE(56)] = 1984,
  [SMALL_STATE(57)] = 1993,
  [SMALL_STATE(58)] = 2002,
  [SMALL_STATE(59)] = 2011,
  [SMALL_STATE(60)] = 2020,
  [SMALL_STATE(61)] = 2029,
  [SMALL_STATE(62)] = 2038,
  [SMALL_STATE(63)] = 2047,
  [SMALL_STATE(64)] = 2056,
  [SMALL_STATE(65)] = 2065,
  [SMALL_STATE(66)] = 2074,
  [SMALL_STATE(67)] = 2084,
  [SMALL_STATE(68)] = 2094,
  [SMALL_STATE(69)] = 2104,
  [SMALL_STATE(70)] = 2118,
  [SMALL_STATE(71)] = 2128,
  [SMALL_STATE(72)] = 2139,
  [SMALL_STATE(73)] = 2150,
  [SMALL_STATE(74)] = 2160,
  [SMALL_STATE(75)] = 2170,
  [SMALL_STATE(76)] = 2180,
  [SMALL_STATE(77)] = 2190,
  [SMALL_STATE(78)] = 2200,
  [SMALL_STATE(79)] = 2210,
  [SMALL_STATE(80)] = 2216,
  [SMALL_STATE(81)] = 2226,
  [SMALL_STATE(82)] = 2236,
  [SMALL_STATE(83)] = 2246,
  [SMALL_STATE(84)] = 2256,
  [SMALL_STATE(85)] = 2266,
  [SMALL_STATE(86)] = 2276,
  [SMALL_STATE(87)] = 2286,
  [SMALL_STATE(88)] = 2296,
  [SMALL_STATE(89)] = 2306,
  [SMALL_STATE(90)] = 2316,
  [SMALL_STATE(91)] = 2326,
  [SMALL_STATE(92)] = 2332,
  [SMALL_STATE(93)] = 2342,
  [SMALL_STATE(94)] = 2352,
  [SMALL_STATE(95)] = 2362,
  [SMALL_STATE(96)] = 2367,
  [SMALL_STATE(97)] = 2372,
  [SMALL_STATE(98)] = 2377,
  [SMALL_STATE(99)] = 2382,
  [SMALL_STATE(100)] = 2387,
  [SMALL_STATE(101)] = 2392,
  [SMALL_STATE(102)] = 2397,
  [SMALL_STATE(103)] = 2402,
  [SMALL_STATE(104)] = 2407,
  [SMALL_STATE(105)] = 2412,
  [SMALL_STATE(106)] = 2417,
  [SMALL_STATE(107)] = 2422,
  [SMALL_STATE(108)] = 2427,
  [SMALL_STATE(109)] = 2432,
  [SMALL_STATE(110)] = 2437,
  [SMALL_STATE(111)] = 2442,
  [SMALL_STATE(112)] = 2447,
  [SMALL_STATE(113)] = 2452,
  [SMALL_STATE(114)] = 2457,
  [SMALL_STATE(115)] = 2462,
  [SMALL_STATE(116)] = 2467,
  [SMALL_STATE(117)] = 2472,
  [SMALL_STATE(118)] = 2476,
  [SMALL_STATE(119)] = 2480,
  [SMALL_STATE(120)] = 2484,
  [SMALL_STATE(121)] = 2488,
  [SMALL_STATE(122)] = 2492,
  [SMALL_STATE(123)] = 2496,
  [SMALL_STATE(124)] = 2500,
  [SMALL_STATE(125)] = 2504,
  [SMALL_STATE(126)] = 2508,
  [SMALL_STATE(127)] = 2512,
  [SMALL_STATE(128)] = 2516,
  [SMALL_STATE(129)] = 2520,
  [SMALL_STATE(130)] = 2524,
  [SMALL_STATE(131)] = 2528,
  [SMALL_STATE(132)] = 2532,
  [SMALL_STATE(133)] = 2536,
  [SMALL_STATE(134)] = 2540,
  [SMALL_STATE(135)] = 2544,
  [SMALL_STATE(136)] = 2548,
  [SMALL_STATE(137)] = 2552,
  [SMALL_STATE(138)] = 2556,
  [SMALL_STATE(139)] = 2560,
  [SMALL_STATE(140)] = 2564,
  [SMALL_STATE(141)] = 2568,
  [SMALL_STATE(142)] = 2572,
  [SMALL_STATE(143)] = 2576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(89),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(89),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(94),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__math_repeat1, 2), SHIFT_REPEAT(94),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(23),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(21),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(53),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for, 4),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
