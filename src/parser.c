#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
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
  sym_comment_content = 33,
  sym__text = 34,
  sym_source_file = 35,
  sym_statement = 36,
  sym_expression = 37,
  sym_comment = 38,
  sym_text = 39,
  sym__statement = 40,
  sym__control_structures = 41,
  sym__for = 42,
  sym__if = 43,
  sym__expression = 44,
  sym__literal = 45,
  sym_string = 46,
  sym_single_quote = 47,
  sym_double_quote = 48,
  sym_list = 49,
  sym_tuple = 50,
  sym_dict = 51,
  sym_pair = 52,
  sym__bool = 53,
  sym_identifier = 54,
  sym_function = 55,
  sym_argument_list = 56,
  sym_kwarg = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_list_repeat1 = 59,
  aux_sym_dict_repeat1 = 60,
  aux_sym_argument_list_repeat1 = 61,
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
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 19,
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
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 35,
  [39] = 37,
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
  [61] = 61,
  [62] = 62,
  [63] = 34,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 66,
  [76] = 73,
  [77] = 71,
  [78] = 68,
  [79] = 70,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 72,
  [84] = 31,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 51,
  [89] = 53,
  [90] = 56,
  [91] = 47,
  [92] = 40,
  [93] = 46,
  [94] = 49,
  [95] = 36,
  [96] = 55,
  [97] = 57,
  [98] = 54,
  [99] = 52,
  [100] = 50,
  [101] = 41,
  [102] = 48,
  [103] = 45,
  [104] = 43,
  [105] = 42,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 112,
  [117] = 117,
  [118] = 113,
  [119] = 111,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 107,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 127,
  [133] = 126,
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
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(33);
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
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(5);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
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
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
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
          lookahead != '{') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
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
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead != 0) ADVANCE(116);
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
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
  [110] = {.lex_state = 113},
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
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 63},
  [127] = {.lex_state = 60},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 63},
  [130] = {.lex_state = 60},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 60},
  [133] = {.lex_state = 63},
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
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(131),
    [sym_statement] = STATE(29),
    [sym_expression] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_text] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
  [2] = {
    [sym__statement] = STATE(128),
    [sym__control_structures] = STATE(128),
    [sym__for] = STATE(128),
    [sym__if] = STATE(128),
    [sym__expression] = STATE(128),
    [sym__literal] = STATE(128),
    [sym_string] = STATE(128),
    [sym_single_quote] = STATE(127),
    [sym_double_quote] = STATE(126),
    [sym_list] = STATE(128),
    [sym_tuple] = STATE(128),
    [sym_dict] = STATE(128),
    [sym__bool] = STATE(128),
    [sym_identifier] = STATE(34),
    [sym_function] = STATE(128),
    [sym_for] = ACTIONS(13),
    [sym_endfor] = ACTIONS(15),
    [sym_if] = ACTIONS(17),
    [sym_endif] = ACTIONS(15),
    [sym_elif] = ACTIONS(15),
    [sym_else] = ACTIONS(15),
    [sym__single_quote] = ACTIONS(19),
    [sym__double_quote] = ACTIONS(21),
    [sym_integer] = ACTIONS(15),
    [sym_float] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_none] = ACTIONS(15),
    [sym__identifier] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
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
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(33), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(82), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [54] = 14,
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
    ACTIONS(43), 1,
      sym_float,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(41), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(80), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [108] = 14,
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
    ACTIONS(51), 1,
      sym_float,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(49), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(78), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [161] = 13,
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
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(57), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(106), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [212] = 14,
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
    ACTIONS(65), 1,
      sym_float,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(63), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(68), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [265] = 13,
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
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(57), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(106), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [316] = 14,
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
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(73), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(65), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [369] = 13,
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
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(57), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(106), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [420] = 13,
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
    ACTIONS(59), 1,
      sym_float,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(57), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(106), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [471] = 14,
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
    ACTIONS(87), 1,
      sym_float,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(85), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(67), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [524] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [574] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [624] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [674] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [724] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [774] = 12,
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
    ACTIONS(59), 1,
      sym_float,
    STATE(59), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(57), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(106), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [822] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [872] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [922] = 13,
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
    ACTIONS(95), 1,
      sym_float,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [972] = 12,
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
    ACTIONS(95), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(93), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(74), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1019] = 12,
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
    ACTIONS(115), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(113), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(87), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1066] = 12,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(119), 1,
      sym_float,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      sym__identifier,
    STATE(63), 1,
      sym_identifier,
    STATE(132), 1,
      sym_single_quote,
    STATE(133), 1,
      sym_double_quote,
    ACTIONS(117), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(85), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1113] = 12,
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
    ACTIONS(131), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(129), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(125), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1160] = 12,
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
    ACTIONS(135), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(133), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(122), 8,
      sym__expression,
      sym__literal,
      sym_string,
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
    ACTIONS(139), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(137), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(120), 8,
      sym__expression,
      sym__literal,
      sym_string,
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
    ACTIONS(143), 1,
      sym_float,
    STATE(34), 1,
      sym_identifier,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
    ACTIONS(141), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(121), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [1301] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(30), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1324] = 6,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(158), 1,
      sym__text,
    STATE(30), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [1347] = 1,
    ACTIONS(161), 8,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1358] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1383] = 8,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1408] = 3,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_argument_list,
    ACTIONS(171), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1423] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1445] = 1,
    ACTIONS(177), 7,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1455] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1477] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1499] = 7,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1521] = 1,
    ACTIONS(185), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1530] = 1,
    ACTIONS(187), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1539] = 1,
    ACTIONS(189), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1548] = 1,
    ACTIONS(191), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1557] = 6,
    ACTIONS(19), 1,
      sym__single_quote,
    ACTIONS(21), 1,
      sym__double_quote,
    STATE(86), 1,
      sym_pair,
    STATE(117), 1,
      sym_string,
    STATE(126), 1,
      sym_double_quote,
    STATE(127), 1,
      sym_single_quote,
  [1576] = 1,
    ACTIONS(193), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1585] = 1,
    ACTIONS(195), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1594] = 1,
    ACTIONS(197), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1603] = 1,
    ACTIONS(199), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1612] = 1,
    ACTIONS(201), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1621] = 1,
    ACTIONS(203), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1630] = 1,
    ACTIONS(205), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1639] = 1,
    ACTIONS(207), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1648] = 1,
    ACTIONS(209), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1657] = 1,
    ACTIONS(211), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1666] = 1,
    ACTIONS(213), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1675] = 1,
    ACTIONS(215), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1684] = 1,
    ACTIONS(217), 6,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_in,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1693] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(221), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1703] = 4,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_argument_list,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1717] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(227), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1727] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(231), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1737] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(235), 3,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [1747] = 3,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_argument_list,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1758] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
    ACTIONS(242), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1769] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [1779] = 3,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_dict_repeat1,
  [1789] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_list_repeat1,
  [1799] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_list_repeat1,
  [1809] = 3,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_dict_repeat1,
  [1819] = 3,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_dict_repeat1,
  [1829] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1839] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_argument_list_repeat1,
  [1849] = 3,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1859] = 1,
    ACTIONS(242), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1865] = 3,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_dict_repeat1,
  [1875] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1885] = 3,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_list_repeat1,
  [1895] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_list_repeat1,
  [1905] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_dict_repeat1,
  [1915] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_argument_list_repeat1,
  [1925] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_argument_list_repeat1,
  [1935] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_argument_list_repeat1,
  [1945] = 3,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_argument_list_repeat1,
  [1955] = 1,
    ACTIONS(161), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [1961] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1966] = 1,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1971] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1976] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1981] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1986] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1991] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1996] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2001] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2006] = 1,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2011] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2016] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2021] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2026] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2031] = 1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2036] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2041] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2046] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2051] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2056] = 1,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2061] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2066] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2071] = 1,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
  [2075] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
  [2079] = 1,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
  [2083] = 1,
    ACTIONS(306), 1,
      sym_comment_content,
  [2087] = 1,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
  [2091] = 1,
    ACTIONS(308), 1,
      sym__double_quote,
  [2095] = 1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
  [2099] = 1,
    ACTIONS(308), 1,
      sym__single_quote,
  [2103] = 1,
    ACTIONS(310), 1,
      sym__single_quote,
  [2107] = 1,
    ACTIONS(310), 1,
      sym__double_quote,
  [2111] = 1,
    ACTIONS(312), 1,
      anon_sym_COLON,
  [2115] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
  [2119] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [2123] = 1,
    ACTIONS(314), 1,
      anon_sym_PERCENT_RBRACE,
  [2127] = 1,
    ACTIONS(316), 1,
      anon_sym_PERCENT_RBRACE,
  [2131] = 1,
    ACTIONS(318), 1,
      sym_in,
  [2135] = 1,
    ACTIONS(320), 1,
      anon_sym_POUND_RBRACE,
  [2139] = 1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [2143] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACE_RBRACE,
  [2147] = 1,
    ACTIONS(324), 1,
      sym_string_content_dq,
  [2151] = 1,
    ACTIONS(326), 1,
      sym_string_content_sq,
  [2155] = 1,
    ACTIONS(328), 1,
      anon_sym_PERCENT_RBRACE,
  [2159] = 1,
    ACTIONS(330), 1,
      sym_string_content_dq,
  [2163] = 1,
    ACTIONS(332), 1,
      sym_string_content_sq,
  [2167] = 1,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [2171] = 1,
    ACTIONS(336), 1,
      sym_string_content_sq,
  [2175] = 1,
    ACTIONS(338), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 212,
  [SMALL_STATE(8)] = 265,
  [SMALL_STATE(9)] = 316,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 420,
  [SMALL_STATE(12)] = 471,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 574,
  [SMALL_STATE(15)] = 624,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 724,
  [SMALL_STATE(18)] = 774,
  [SMALL_STATE(19)] = 822,
  [SMALL_STATE(20)] = 872,
  [SMALL_STATE(21)] = 922,
  [SMALL_STATE(22)] = 972,
  [SMALL_STATE(23)] = 1019,
  [SMALL_STATE(24)] = 1066,
  [SMALL_STATE(25)] = 1113,
  [SMALL_STATE(26)] = 1160,
  [SMALL_STATE(27)] = 1207,
  [SMALL_STATE(28)] = 1254,
  [SMALL_STATE(29)] = 1301,
  [SMALL_STATE(30)] = 1324,
  [SMALL_STATE(31)] = 1347,
  [SMALL_STATE(32)] = 1358,
  [SMALL_STATE(33)] = 1383,
  [SMALL_STATE(34)] = 1408,
  [SMALL_STATE(35)] = 1423,
  [SMALL_STATE(36)] = 1445,
  [SMALL_STATE(37)] = 1455,
  [SMALL_STATE(38)] = 1477,
  [SMALL_STATE(39)] = 1499,
  [SMALL_STATE(40)] = 1521,
  [SMALL_STATE(41)] = 1530,
  [SMALL_STATE(42)] = 1539,
  [SMALL_STATE(43)] = 1548,
  [SMALL_STATE(44)] = 1557,
  [SMALL_STATE(45)] = 1576,
  [SMALL_STATE(46)] = 1585,
  [SMALL_STATE(47)] = 1594,
  [SMALL_STATE(48)] = 1603,
  [SMALL_STATE(49)] = 1612,
  [SMALL_STATE(50)] = 1621,
  [SMALL_STATE(51)] = 1630,
  [SMALL_STATE(52)] = 1639,
  [SMALL_STATE(53)] = 1648,
  [SMALL_STATE(54)] = 1657,
  [SMALL_STATE(55)] = 1666,
  [SMALL_STATE(56)] = 1675,
  [SMALL_STATE(57)] = 1684,
  [SMALL_STATE(58)] = 1693,
  [SMALL_STATE(59)] = 1703,
  [SMALL_STATE(60)] = 1717,
  [SMALL_STATE(61)] = 1727,
  [SMALL_STATE(62)] = 1737,
  [SMALL_STATE(63)] = 1747,
  [SMALL_STATE(64)] = 1758,
  [SMALL_STATE(65)] = 1769,
  [SMALL_STATE(66)] = 1779,
  [SMALL_STATE(67)] = 1789,
  [SMALL_STATE(68)] = 1799,
  [SMALL_STATE(69)] = 1809,
  [SMALL_STATE(70)] = 1819,
  [SMALL_STATE(71)] = 1829,
  [SMALL_STATE(72)] = 1839,
  [SMALL_STATE(73)] = 1849,
  [SMALL_STATE(74)] = 1859,
  [SMALL_STATE(75)] = 1865,
  [SMALL_STATE(76)] = 1875,
  [SMALL_STATE(77)] = 1885,
  [SMALL_STATE(78)] = 1895,
  [SMALL_STATE(79)] = 1905,
  [SMALL_STATE(80)] = 1915,
  [SMALL_STATE(81)] = 1925,
  [SMALL_STATE(82)] = 1935,
  [SMALL_STATE(83)] = 1945,
  [SMALL_STATE(84)] = 1955,
  [SMALL_STATE(85)] = 1961,
  [SMALL_STATE(86)] = 1966,
  [SMALL_STATE(87)] = 1971,
  [SMALL_STATE(88)] = 1976,
  [SMALL_STATE(89)] = 1981,
  [SMALL_STATE(90)] = 1986,
  [SMALL_STATE(91)] = 1991,
  [SMALL_STATE(92)] = 1996,
  [SMALL_STATE(93)] = 2001,
  [SMALL_STATE(94)] = 2006,
  [SMALL_STATE(95)] = 2011,
  [SMALL_STATE(96)] = 2016,
  [SMALL_STATE(97)] = 2021,
  [SMALL_STATE(98)] = 2026,
  [SMALL_STATE(99)] = 2031,
  [SMALL_STATE(100)] = 2036,
  [SMALL_STATE(101)] = 2041,
  [SMALL_STATE(102)] = 2046,
  [SMALL_STATE(103)] = 2051,
  [SMALL_STATE(104)] = 2056,
  [SMALL_STATE(105)] = 2061,
  [SMALL_STATE(106)] = 2066,
  [SMALL_STATE(107)] = 2071,
  [SMALL_STATE(108)] = 2075,
  [SMALL_STATE(109)] = 2079,
  [SMALL_STATE(110)] = 2083,
  [SMALL_STATE(111)] = 2087,
  [SMALL_STATE(112)] = 2091,
  [SMALL_STATE(113)] = 2095,
  [SMALL_STATE(114)] = 2099,
  [SMALL_STATE(115)] = 2103,
  [SMALL_STATE(116)] = 2107,
  [SMALL_STATE(117)] = 2111,
  [SMALL_STATE(118)] = 2115,
  [SMALL_STATE(119)] = 2119,
  [SMALL_STATE(120)] = 2123,
  [SMALL_STATE(121)] = 2127,
  [SMALL_STATE(122)] = 2131,
  [SMALL_STATE(123)] = 2135,
  [SMALL_STATE(124)] = 2139,
  [SMALL_STATE(125)] = 2143,
  [SMALL_STATE(126)] = 2147,
  [SMALL_STATE(127)] = 2151,
  [SMALL_STATE(128)] = 2155,
  [SMALL_STATE(129)] = 2159,
  [SMALL_STATE(130)] = 2163,
  [SMALL_STATE(131)] = 2167,
  [SMALL_STATE(132)] = 2171,
  [SMALL_STATE(133)] = 2175,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(22),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(44),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(18),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__for, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
