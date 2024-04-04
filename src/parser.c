#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  sym_comment_content = 34,
  sym__text = 35,
  sym_source_file = 36,
  sym_statement = 37,
  sym_expression = 38,
  sym_comment = 39,
  sym_text = 40,
  sym__statement = 41,
  sym__control_structures = 42,
  sym__for = 43,
  sym__if = 44,
  sym__expression = 45,
  sym__literal = 46,
  sym_string = 47,
  sym_single_quote = 48,
  sym_double_quote = 49,
  sym_list = 50,
  sym_tuple = 51,
  sym_dict = 52,
  sym_pair = 53,
  sym__bool = 54,
  sym_identifier = 55,
  sym_function = 56,
  sym_argument_list = 57,
  sym_kwarg = 58,
  sym__math = 59,
  sym__addition = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_list_repeat1 = 62,
  aux_sym_dict_repeat1 = 63,
  aux_sym_argument_list_repeat1 = 64,
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
  [sym__addition] = "_addition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
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
  [sym__addition] = sym__addition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [sym__addition] = {
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
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 7,
  [11] = 6,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 14,
  [19] = 13,
  [20] = 20,
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
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 39,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 34,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
  [75] = 69,
  [76] = 76,
  [77] = 71,
  [78] = 73,
  [79] = 76,
  [80] = 67,
  [81] = 81,
  [82] = 68,
  [83] = 83,
  [84] = 38,
  [85] = 85,
  [86] = 33,
  [87] = 81,
  [88] = 49,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 44,
  [93] = 56,
  [94] = 55,
  [95] = 41,
  [96] = 45,
  [97] = 46,
  [98] = 51,
  [99] = 52,
  [100] = 35,
  [101] = 58,
  [102] = 50,
  [103] = 43,
  [104] = 104,
  [105] = 59,
  [106] = 47,
  [107] = 57,
  [108] = 54,
  [109] = 48,
  [110] = 42,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 116,
  [118] = 118,
  [119] = 113,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 122,
  [126] = 114,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 115,
  [137] = 137,
  [138] = 132,
  [139] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
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
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '{') ADVANCE(79);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
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
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(52);
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
      if (lookahead == 'n') ADVANCE(49);
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
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(115);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_for);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_endfor);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_endfor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_in);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_if);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_endif);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_elif);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_else);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 's') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_addition_symbol);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
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
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
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
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
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
  [85] = {.lex_state = 0},
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
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 63},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 114},
  [132] = {.lex_state = 60},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 63},
  [135] = {.lex_state = 60},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 60},
  [139] = {.lex_state = 63},
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
  },
  [1] = {
    [sym_source_file] = STATE(137),
    [sym_statement] = STATE(30),
    [sym_expression] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_text] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
  [2] = {
    [sym__statement] = STATE(133),
    [sym__control_structures] = STATE(133),
    [sym__for] = STATE(133),
    [sym__if] = STATE(133),
    [sym__expression] = STATE(133),
    [sym__literal] = STATE(133),
    [sym_string] = STATE(133),
    [sym_single_quote] = STATE(132),
    [sym_double_quote] = STATE(128),
    [sym_list] = STATE(133),
    [sym_tuple] = STATE(133),
    [sym_dict] = STATE(133),
    [sym__bool] = STATE(133),
    [sym_identifier] = STATE(34),
    [sym_function] = STATE(133),
    [sym__math] = STATE(133),
    [sym__addition] = STATE(133),
    [sym_for] = ACTIONS(13),
    [sym_endfor] = ACTIONS(15),
    [sym_if] = ACTIONS(17),
    [sym_endif] = ACTIONS(15),
    [sym_elif] = ACTIONS(15),
    [sym_else] = ACTIONS(15),
    [sym__single_quote] = ACTIONS(19),
    [sym__double_quote] = ACTIONS(21),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_none] = ACTIONS(15),
    [sym__identifier] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(41), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 11,
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
      sym__addition,
  [58] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_float,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(49), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(70), 11,
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
      sym__addition,
  [116] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(57), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(68), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [173] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(63), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(89), 11,
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
      sym__addition,
  [228] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(63), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(89), 11,
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
      sym__addition,
  [283] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(67), 1,
      sym_float,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(73), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(82), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [340] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(75), 1,
      sym_float,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(81), 3,
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
      sym__math,
      sym__addition,
  [397] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(63), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(89), 11,
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
      sym__addition,
  [452] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(63), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(89), 11,
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
      sym__addition,
  [507] = 15,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(87), 1,
      sym_float,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(93), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(87), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [564] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [618] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [672] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [726] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [780] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [834] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [888] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [942] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(59), 1,
      sym_float,
    STATE(60), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(63), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(89), 11,
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
      sym__addition,
  [994] = 14,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1048] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(115), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(117), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(90), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1099] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym__identifier,
    STATE(65), 1,
      sym_identifier,
    STATE(138), 1,
      sym_single_quote,
    STATE(139), 1,
      sym_double_quote,
    ACTIONS(129), 3,
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
      sym__math,
      sym__addition,
  [1150] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(99), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(83), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1201] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(133), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(135), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(112), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1252] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(137), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(139), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(111), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1303] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(141), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(143), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(123), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1354] = 13,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym__identifier,
    ACTIONS(145), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
    ACTIONS(147), 3,
      sym_true,
      sym_false,
      sym_none,
    STATE(129), 10,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym__math,
      sym__addition,
  [1405] = 6,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(154), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(157), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(160), 1,
      sym__text,
    STATE(29), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1428] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(29), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1451] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1476] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1501] = 1,
    ACTIONS(173), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1512] = 3,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_argument_list,
    ACTIONS(175), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1527] = 1,
    ACTIONS(179), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1537] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1559] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1581] = 2,
    ACTIONS(187), 1,
      sym_addition_symbol,
    ACTIONS(185), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1593] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1615] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1637] = 1,
    ACTIONS(193), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1646] = 1,
    ACTIONS(195), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1655] = 1,
    ACTIONS(197), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1664] = 1,
    ACTIONS(199), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1673] = 1,
    ACTIONS(201), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1682] = 1,
    ACTIONS(203), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1691] = 1,
    ACTIONS(205), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1700] = 1,
    ACTIONS(207), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1709] = 1,
    ACTIONS(209), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1718] = 1,
    ACTIONS(211), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1727] = 1,
    ACTIONS(213), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1736] = 1,
    ACTIONS(215), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1745] = 6,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    STATE(91), 1,
      sym_pair,
    STATE(118), 1,
      sym_string,
    STATE(128), 1,
      sym_double_quote,
    STATE(132), 1,
      sym_single_quote,
  [1764] = 1,
    ACTIONS(217), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1773] = 1,
    ACTIONS(219), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1782] = 1,
    ACTIONS(221), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1791] = 1,
    ACTIONS(223), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1800] = 1,
    ACTIONS(225), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1809] = 1,
    ACTIONS(227), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1818] = 4,
    ACTIONS(177), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_argument_list,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1832] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(233), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1842] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(237), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1852] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(241), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1862] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(245), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1872] = 3,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_argument_list,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1883] = 3,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_list_repeat1,
    ACTIONS(252), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1894] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      aux_sym_dict_repeat1,
  [1904] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_list_repeat1,
  [1914] = 3,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_argument_list_repeat1,
  [1924] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_argument_list_repeat1,
  [1934] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_dict_repeat1,
  [1944] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_dict_repeat1,
  [1954] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_list_repeat1,
  [1964] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_argument_list_repeat1,
  [1974] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_argument_list_repeat1,
  [1984] = 3,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_list_repeat1,
  [1994] = 3,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_dict_repeat1,
  [2004] = 3,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_list_repeat1,
  [2014] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_list_repeat1,
  [2024] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_dict_repeat1,
  [2034] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_list_repeat1,
  [2044] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_list_repeat1,
  [2054] = 1,
    ACTIONS(252), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2060] = 2,
    ACTIONS(303), 1,
      sym_addition_symbol,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2068] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_argument_list_repeat1,
  [2078] = 1,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2084] = 3,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_list_repeat1,
  [2094] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2099] = 1,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2104] = 1,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2109] = 1,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2114] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2119] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2124] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2129] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2134] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2139] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2144] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2149] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2154] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2159] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2164] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2169] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2174] = 1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2179] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2184] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2189] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2194] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2199] = 1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2204] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2209] = 1,
    ACTIONS(318), 1,
      anon_sym_PERCENT_RBRACE,
  [2213] = 1,
    ACTIONS(320), 1,
      anon_sym_RBRACE_RBRACE,
  [2217] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
  [2221] = 1,
    ACTIONS(322), 1,
      sym_integer,
  [2225] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
  [2229] = 1,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [2233] = 1,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [2237] = 1,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [2241] = 1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [2245] = 1,
    ACTIONS(326), 1,
      sym__single_quote,
  [2249] = 1,
    ACTIONS(328), 1,
      sym__single_quote,
  [2253] = 1,
    ACTIONS(328), 1,
      sym__double_quote,
  [2257] = 1,
    ACTIONS(330), 1,
      sym_in,
  [2261] = 1,
    ACTIONS(332), 1,
      anon_sym_POUND_RBRACE,
  [2265] = 1,
    ACTIONS(326), 1,
      sym__double_quote,
  [2269] = 1,
    ACTIONS(334), 1,
      sym_integer,
  [2273] = 1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [2277] = 1,
    ACTIONS(336), 1,
      sym_string_content_dq,
  [2281] = 1,
    ACTIONS(338), 1,
      anon_sym_PERCENT_RBRACE,
  [2285] = 1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [2289] = 1,
    ACTIONS(340), 1,
      sym_comment_content,
  [2293] = 1,
    ACTIONS(342), 1,
      sym_string_content_sq,
  [2297] = 1,
    ACTIONS(344), 1,
      anon_sym_PERCENT_RBRACE,
  [2301] = 1,
    ACTIONS(346), 1,
      sym_string_content_dq,
  [2305] = 1,
    ACTIONS(348), 1,
      sym_string_content_sq,
  [2309] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
  [2313] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [2317] = 1,
    ACTIONS(352), 1,
      sym_string_content_sq,
  [2321] = 1,
    ACTIONS(354), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 283,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 397,
  [SMALL_STATE(11)] = 452,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 618,
  [SMALL_STATE(15)] = 672,
  [SMALL_STATE(16)] = 726,
  [SMALL_STATE(17)] = 780,
  [SMALL_STATE(18)] = 834,
  [SMALL_STATE(19)] = 888,
  [SMALL_STATE(20)] = 942,
  [SMALL_STATE(21)] = 994,
  [SMALL_STATE(22)] = 1048,
  [SMALL_STATE(23)] = 1099,
  [SMALL_STATE(24)] = 1150,
  [SMALL_STATE(25)] = 1201,
  [SMALL_STATE(26)] = 1252,
  [SMALL_STATE(27)] = 1303,
  [SMALL_STATE(28)] = 1354,
  [SMALL_STATE(29)] = 1405,
  [SMALL_STATE(30)] = 1428,
  [SMALL_STATE(31)] = 1451,
  [SMALL_STATE(32)] = 1476,
  [SMALL_STATE(33)] = 1501,
  [SMALL_STATE(34)] = 1512,
  [SMALL_STATE(35)] = 1527,
  [SMALL_STATE(36)] = 1537,
  [SMALL_STATE(37)] = 1559,
  [SMALL_STATE(38)] = 1581,
  [SMALL_STATE(39)] = 1593,
  [SMALL_STATE(40)] = 1615,
  [SMALL_STATE(41)] = 1637,
  [SMALL_STATE(42)] = 1646,
  [SMALL_STATE(43)] = 1655,
  [SMALL_STATE(44)] = 1664,
  [SMALL_STATE(45)] = 1673,
  [SMALL_STATE(46)] = 1682,
  [SMALL_STATE(47)] = 1691,
  [SMALL_STATE(48)] = 1700,
  [SMALL_STATE(49)] = 1709,
  [SMALL_STATE(50)] = 1718,
  [SMALL_STATE(51)] = 1727,
  [SMALL_STATE(52)] = 1736,
  [SMALL_STATE(53)] = 1745,
  [SMALL_STATE(54)] = 1764,
  [SMALL_STATE(55)] = 1773,
  [SMALL_STATE(56)] = 1782,
  [SMALL_STATE(57)] = 1791,
  [SMALL_STATE(58)] = 1800,
  [SMALL_STATE(59)] = 1809,
  [SMALL_STATE(60)] = 1818,
  [SMALL_STATE(61)] = 1832,
  [SMALL_STATE(62)] = 1842,
  [SMALL_STATE(63)] = 1852,
  [SMALL_STATE(64)] = 1862,
  [SMALL_STATE(65)] = 1872,
  [SMALL_STATE(66)] = 1883,
  [SMALL_STATE(67)] = 1894,
  [SMALL_STATE(68)] = 1904,
  [SMALL_STATE(69)] = 1914,
  [SMALL_STATE(70)] = 1924,
  [SMALL_STATE(71)] = 1934,
  [SMALL_STATE(72)] = 1944,
  [SMALL_STATE(73)] = 1954,
  [SMALL_STATE(74)] = 1964,
  [SMALL_STATE(75)] = 1974,
  [SMALL_STATE(76)] = 1984,
  [SMALL_STATE(77)] = 1994,
  [SMALL_STATE(78)] = 2004,
  [SMALL_STATE(79)] = 2014,
  [SMALL_STATE(80)] = 2024,
  [SMALL_STATE(81)] = 2034,
  [SMALL_STATE(82)] = 2044,
  [SMALL_STATE(83)] = 2054,
  [SMALL_STATE(84)] = 2060,
  [SMALL_STATE(85)] = 2068,
  [SMALL_STATE(86)] = 2078,
  [SMALL_STATE(87)] = 2084,
  [SMALL_STATE(88)] = 2094,
  [SMALL_STATE(89)] = 2099,
  [SMALL_STATE(90)] = 2104,
  [SMALL_STATE(91)] = 2109,
  [SMALL_STATE(92)] = 2114,
  [SMALL_STATE(93)] = 2119,
  [SMALL_STATE(94)] = 2124,
  [SMALL_STATE(95)] = 2129,
  [SMALL_STATE(96)] = 2134,
  [SMALL_STATE(97)] = 2139,
  [SMALL_STATE(98)] = 2144,
  [SMALL_STATE(99)] = 2149,
  [SMALL_STATE(100)] = 2154,
  [SMALL_STATE(101)] = 2159,
  [SMALL_STATE(102)] = 2164,
  [SMALL_STATE(103)] = 2169,
  [SMALL_STATE(104)] = 2174,
  [SMALL_STATE(105)] = 2179,
  [SMALL_STATE(106)] = 2184,
  [SMALL_STATE(107)] = 2189,
  [SMALL_STATE(108)] = 2194,
  [SMALL_STATE(109)] = 2199,
  [SMALL_STATE(110)] = 2204,
  [SMALL_STATE(111)] = 2209,
  [SMALL_STATE(112)] = 2213,
  [SMALL_STATE(113)] = 2217,
  [SMALL_STATE(114)] = 2221,
  [SMALL_STATE(115)] = 2225,
  [SMALL_STATE(116)] = 2229,
  [SMALL_STATE(117)] = 2233,
  [SMALL_STATE(118)] = 2237,
  [SMALL_STATE(119)] = 2241,
  [SMALL_STATE(120)] = 2245,
  [SMALL_STATE(121)] = 2249,
  [SMALL_STATE(122)] = 2253,
  [SMALL_STATE(123)] = 2257,
  [SMALL_STATE(124)] = 2261,
  [SMALL_STATE(125)] = 2265,
  [SMALL_STATE(126)] = 2269,
  [SMALL_STATE(127)] = 2273,
  [SMALL_STATE(128)] = 2277,
  [SMALL_STATE(129)] = 2281,
  [SMALL_STATE(130)] = 2285,
  [SMALL_STATE(131)] = 2289,
  [SMALL_STATE(132)] = 2293,
  [SMALL_STATE(133)] = 2297,
  [SMALL_STATE(134)] = 2301,
  [SMALL_STATE(135)] = 2305,
  [SMALL_STATE(136)] = 2309,
  [SMALL_STATE(137)] = 2313,
  [SMALL_STATE(138)] = 2317,
  [SMALL_STATE(139)] = 2321,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__addition, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(24),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(53),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
