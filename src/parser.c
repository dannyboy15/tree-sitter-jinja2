#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  sym_line_continuation = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_PERCENT_RBRACE = 3,
  anon_sym_LBRACE_LBRACE = 4,
  anon_sym_RBRACE_RBRACE = 5,
  anon_sym_LBRACE_POUND = 6,
  anon_sym_POUND_RBRACE = 7,
  sym__single_quote = 8,
  sym__double_quote = 9,
  sym_string_content_sq = 10,
  sym_string_content_dq = 11,
  sym_integer = 12,
  sym_float = 13,
  anon_sym_LBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  sym_true = 22,
  sym_false = 23,
  sym_none = 24,
  sym_comment_content = 25,
  sym__identifier = 26,
  anon_sym_EQ = 27,
  sym_text = 28,
  sym_source_file = 29,
  sym_statement = 30,
  sym_expression = 31,
  sym_comment = 32,
  sym__expression = 33,
  sym__literal = 34,
  sym_string = 35,
  sym_single_quote = 36,
  sym_double_quote = 37,
  sym_list = 38,
  sym_tuple = 39,
  sym_dict = 40,
  sym_pair = 41,
  sym__bool = 42,
  sym__statement = 43,
  sym_function = 44,
  sym_argument_list = 45,
  sym_identifier = 46,
  sym_kwarg = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_list_repeat1 = 49,
  aux_sym_dict_repeat1 = 50,
  aux_sym_argument_list_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_continuation] = "line_continuation",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_POUND_RBRACE] = "#}",
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
  [sym_comment_content] = "comment_content",
  [sym__identifier] = "_identifier",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
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
  [sym__statement] = "_statement",
  [sym_function] = "function",
  [sym_argument_list] = "argument_list",
  [sym_identifier] = "identifier",
  [sym_kwarg] = "kwarg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_continuation] = sym_line_continuation,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
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
  [sym_comment_content] = sym_comment_content,
  [sym__identifier] = sym__identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
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
  [sym__statement] = sym__statement,
  [sym_function] = sym_function,
  [sym_argument_list] = sym_argument_list,
  [sym_identifier] = sym_identifier,
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
  [sym_line_continuation] = {
    .visible = true,
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
  [sym_comment_content] = {
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
  [sym_text] = {
    .visible = true,
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
  [sym__statement] = {
    .visible = false,
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
  [sym_identifier] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 15,
  [18] = 13,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 29,
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
  [61] = 61,
  [62] = 62,
  [63] = 59,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 60,
  [70] = 70,
  [71] = 65,
  [72] = 57,
  [73] = 58,
  [74] = 33,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 42,
  [81] = 49,
  [82] = 55,
  [83] = 41,
  [84] = 43,
  [85] = 54,
  [86] = 46,
  [87] = 36,
  [88] = 38,
  [89] = 48,
  [90] = 34,
  [91] = 35,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 92,
  [102] = 94,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 98,
  [111] = 111,
  [112] = 112,
  [113] = 95,
  [114] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(6);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(61);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(20);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(33);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '{') ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_none);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(63);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
  [94] = {.lex_state = 38},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 38},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 38},
  [107] = {.lex_state = 63},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
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
    [sym__identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym_statement] = STATE(24),
    [sym_expression] = STATE(24),
    [sym_comment] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(23), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    STATE(39), 1,
      sym_identifier,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(21), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(68), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [57] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_identifier,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(37), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(77), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [111] = 14,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_identifier,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(37), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(77), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [165] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(39), 1,
      sym_float,
    STATE(39), 1,
      sym_identifier,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(37), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(77), 9,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
      sym_kwarg,
  [216] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(47), 1,
      sym_float,
    STATE(44), 1,
      sym_identifier,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(45), 4,
      sym_integer,
      sym_true,
      sym_false,
      sym_none,
    STATE(103), 8,
      sym__expression,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
      sym_function,
  [266] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(51), 1,
      sym_float,
    STATE(44), 1,
      sym_identifier,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
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
  [316] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(55), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(66), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [364] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(63), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(63), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [412] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym_integer,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(71), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(59), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [460] = 13,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(79), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(67), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [508] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [553] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [598] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [643] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [688] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [733] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [778] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [823] = 12,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [868] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(105), 1,
      sym_integer,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_double_quote,
    STATE(113), 1,
      sym_single_quote,
    ACTIONS(107), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(79), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [910] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_integer,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    ACTIONS(87), 4,
      sym_float,
      sym_true,
      sym_false,
      sym_none,
    STATE(62), 6,
      sym__literal,
      sym_string,
      sym_list,
      sym_tuple,
      sym_dict,
      sym__bool,
  [952] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      sym__identifier,
    ACTIONS(117), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    ACTIONS(115), 3,
      sym_integer,
      sym_true,
      sym_false,
    STATE(111), 5,
      sym_list,
      sym_dict,
      sym__bool,
      sym__statement,
      sym_function,
  [983] = 7,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(124), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(130), 1,
      sym_text,
    STATE(23), 4,
      sym_statement,
      sym_expression,
      sym_comment,
      aux_sym_source_file_repeat1,
  [1008] = 7,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_text,
    STATE(23), 4,
      sym_statement,
      sym_expression,
      sym_comment,
      aux_sym_source_file_repeat1,
  [1033] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1061] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1089] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1114] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1139] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1164] = 8,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1189] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(17), 1,
      sym__single_quote,
    ACTIONS(19), 1,
      sym__double_quote,
    STATE(75), 1,
      sym_pair,
    STATE(94), 1,
      sym_double_quote,
    STATE(95), 1,
      sym_single_quote,
    STATE(105), 1,
      sym_string,
  [1211] = 3,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(159), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1246] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(161), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1268] = 3,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(169), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1292] = 5,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_EQ,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1309] = 3,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(181), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1333] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(183), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 5,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1355] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_argument_list,
    ACTIONS(171), 3,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1370] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(187), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(189), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [1392] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_list_repeat1,
    ACTIONS(194), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(196), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1416] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(198), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1426] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(200), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(202), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(204), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(206), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1466] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(208), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(210), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(212), 4,
      anon_sym_PERCENT_RBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1496] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_dict_repeat1,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_list_repeat1,
  [1522] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_list_repeat1,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_dict_repeat1,
  [1548] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_dict_repeat1,
  [1561] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(194), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1570] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_list_repeat1,
  [1583] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_argument_list_repeat1,
  [1596] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_list_repeat1,
  [1609] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_list_repeat1,
  [1622] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_list_repeat1,
  [1635] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_dict_repeat1,
  [1661] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_argument_list_repeat1,
  [1674] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_list_repeat1,
  [1687] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_dict_repeat1,
  [1700] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_list_repeat1,
  [1713] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1721] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1729] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_argument_list,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1747] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1755] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1763] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1787] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1795] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1803] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1819] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1843] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1851] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1859] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(270), 1,
      sym__single_quote,
  [1866] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
  [1873] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(272), 1,
      sym_string_content_dq,
  [1880] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(274), 1,
      sym_string_content_sq,
  [1887] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
  [1894] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [1901] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [1915] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [1922] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      sym__single_quote,
  [1929] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(278), 1,
      sym_string_content_dq,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(280), 1,
      anon_sym_RBRACE_RBRACE,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(282), 1,
      anon_sym_POUND_RBRACE,
  [1950] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1957] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(286), 1,
      sym_string_content_dq,
  [1964] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(288), 1,
      sym_comment_content,
  [1971] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(290), 1,
      sym_string_content_sq,
  [1978] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(270), 1,
      sym__double_quote,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(292), 1,
      anon_sym_PERCENT_RBRACE,
  [1999] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [2006] = 2,
    ACTIONS(7), 1,
      sym_line_continuation,
    ACTIONS(296), 1,
      sym_string_content_sq,
  [2013] = 2,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(276), 1,
      sym__double_quote,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 412,
  [SMALL_STATE(11)] = 460,
  [SMALL_STATE(12)] = 508,
  [SMALL_STATE(13)] = 553,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 688,
  [SMALL_STATE(17)] = 733,
  [SMALL_STATE(18)] = 778,
  [SMALL_STATE(19)] = 823,
  [SMALL_STATE(20)] = 868,
  [SMALL_STATE(21)] = 910,
  [SMALL_STATE(22)] = 952,
  [SMALL_STATE(23)] = 983,
  [SMALL_STATE(24)] = 1008,
  [SMALL_STATE(25)] = 1033,
  [SMALL_STATE(26)] = 1061,
  [SMALL_STATE(27)] = 1089,
  [SMALL_STATE(28)] = 1114,
  [SMALL_STATE(29)] = 1139,
  [SMALL_STATE(30)] = 1164,
  [SMALL_STATE(31)] = 1189,
  [SMALL_STATE(32)] = 1211,
  [SMALL_STATE(33)] = 1224,
  [SMALL_STATE(34)] = 1235,
  [SMALL_STATE(35)] = 1246,
  [SMALL_STATE(36)] = 1257,
  [SMALL_STATE(37)] = 1268,
  [SMALL_STATE(38)] = 1281,
  [SMALL_STATE(39)] = 1292,
  [SMALL_STATE(40)] = 1309,
  [SMALL_STATE(41)] = 1322,
  [SMALL_STATE(42)] = 1333,
  [SMALL_STATE(43)] = 1344,
  [SMALL_STATE(44)] = 1355,
  [SMALL_STATE(45)] = 1370,
  [SMALL_STATE(46)] = 1381,
  [SMALL_STATE(47)] = 1392,
  [SMALL_STATE(48)] = 1406,
  [SMALL_STATE(49)] = 1416,
  [SMALL_STATE(50)] = 1426,
  [SMALL_STATE(51)] = 1436,
  [SMALL_STATE(52)] = 1446,
  [SMALL_STATE(53)] = 1456,
  [SMALL_STATE(54)] = 1466,
  [SMALL_STATE(55)] = 1476,
  [SMALL_STATE(56)] = 1486,
  [SMALL_STATE(57)] = 1496,
  [SMALL_STATE(58)] = 1509,
  [SMALL_STATE(59)] = 1522,
  [SMALL_STATE(60)] = 1535,
  [SMALL_STATE(61)] = 1548,
  [SMALL_STATE(62)] = 1561,
  [SMALL_STATE(63)] = 1570,
  [SMALL_STATE(64)] = 1583,
  [SMALL_STATE(65)] = 1596,
  [SMALL_STATE(66)] = 1609,
  [SMALL_STATE(67)] = 1622,
  [SMALL_STATE(68)] = 1635,
  [SMALL_STATE(69)] = 1648,
  [SMALL_STATE(70)] = 1661,
  [SMALL_STATE(71)] = 1674,
  [SMALL_STATE(72)] = 1687,
  [SMALL_STATE(73)] = 1700,
  [SMALL_STATE(74)] = 1713,
  [SMALL_STATE(75)] = 1721,
  [SMALL_STATE(76)] = 1729,
  [SMALL_STATE(77)] = 1739,
  [SMALL_STATE(78)] = 1747,
  [SMALL_STATE(79)] = 1755,
  [SMALL_STATE(80)] = 1763,
  [SMALL_STATE(81)] = 1771,
  [SMALL_STATE(82)] = 1779,
  [SMALL_STATE(83)] = 1787,
  [SMALL_STATE(84)] = 1795,
  [SMALL_STATE(85)] = 1803,
  [SMALL_STATE(86)] = 1811,
  [SMALL_STATE(87)] = 1819,
  [SMALL_STATE(88)] = 1827,
  [SMALL_STATE(89)] = 1835,
  [SMALL_STATE(90)] = 1843,
  [SMALL_STATE(91)] = 1851,
  [SMALL_STATE(92)] = 1859,
  [SMALL_STATE(93)] = 1866,
  [SMALL_STATE(94)] = 1873,
  [SMALL_STATE(95)] = 1880,
  [SMALL_STATE(96)] = 1887,
  [SMALL_STATE(97)] = 1894,
  [SMALL_STATE(98)] = 1901,
  [SMALL_STATE(99)] = 1908,
  [SMALL_STATE(100)] = 1915,
  [SMALL_STATE(101)] = 1922,
  [SMALL_STATE(102)] = 1929,
  [SMALL_STATE(103)] = 1936,
  [SMALL_STATE(104)] = 1943,
  [SMALL_STATE(105)] = 1950,
  [SMALL_STATE(106)] = 1957,
  [SMALL_STATE(107)] = 1964,
  [SMALL_STATE(108)] = 1971,
  [SMALL_STATE(109)] = 1978,
  [SMALL_STATE(110)] = 1985,
  [SMALL_STATE(111)] = 1992,
  [SMALL_STATE(112)] = 1999,
  [SMALL_STATE(113)] = 2006,
  [SMALL_STATE(114)] = 2013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(21),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(31),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quote, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [294] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
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
