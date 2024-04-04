#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LBRACE_PERCENT = 3,
  aux_sym_jinja_expression_token1 = 4,
  anon_sym_LBRACE_POUND = 5,
  aux_sym__jinja_comment_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token2 = 13,
  anon_sym_True = 14,
  anon_sym_False = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_COLON = 20,
  sym__identifier = 21,
  anon_sym_EQ = 22,
  sym__text = 23,
  sym_integer = 24,
  sym_float = 25,
  sym_source_file = 26,
  sym_statement = 27,
  sym_expression = 28,
  sym_comment = 29,
  sym_text = 30,
  sym__expression = 31,
  sym_jinja_expression = 32,
  sym__jinja_comment = 33,
  sym_fn_call = 34,
  sym_argument_list = 35,
  sym_string = 36,
  sym_bool = 37,
  sym_list = 38,
  sym_dict = 39,
  sym_pair = 40,
  sym_identifier = 41,
  sym_kwarg = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_argument_list_repeat1 = 44,
  aux_sym_list_repeat1 = 45,
  aux_sym_dict_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_jinja_expression_token1] = "jinja_expression_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym__jinja_comment_token1] = "_jinja_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [anon_sym_EQ] = "=",
  [sym__text] = "_text",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [sym__expression] = "_expression",
  [sym_jinja_expression] = "jinja_expression",
  [sym__jinja_comment] = "_jinja_comment",
  [sym_fn_call] = "fn_call",
  [sym_argument_list] = "argument_list",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym_list] = "list",
  [sym_dict] = "dict",
  [sym_pair] = "pair",
  [sym_identifier] = "identifier",
  [sym_kwarg] = "kwarg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_jinja_expression_token1] = aux_sym_jinja_expression_token1,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym__jinja_comment_token1] = aux_sym__jinja_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__identifier] = sym__identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__text] = sym__text,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [sym__expression] = sym__expression,
  [sym_jinja_expression] = sym_jinja_expression,
  [sym__jinja_comment] = sym__jinja_comment,
  [sym_fn_call] = sym_fn_call,
  [sym_argument_list] = sym_argument_list,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym_list] = sym_list,
  [sym_dict] = sym_dict,
  [sym_pair] = sym_pair,
  [sym_identifier] = sym_identifier,
  [sym_kwarg] = sym_kwarg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_jinja_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__jinja_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_jinja_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
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
  [aux_sym_argument_list_repeat1] = {
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
};

enum {
  field_argument_list = 1,
  field_fn_name = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_fn_name] = "fn_name",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument_list, 1},
    {field_fn_name, 0},
  [2] =
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 25,
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
  [56] = 52,
  [57] = 53,
  [58] = 58,
  [59] = 54,
  [60] = 58,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 63,
  [65] = 46,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 34,
  [70] = 48,
  [71] = 43,
  [72] = 38,
  [73] = 33,
  [74] = 35,
  [75] = 37,
  [76] = 42,
  [77] = 45,
  [78] = 78,
  [79] = 44,
  [80] = 40,
  [81] = 39,
  [82] = 47,
  [83] = 36,
  [84] = 84,
  [85] = 66,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 90,
  [94] = 94,
  [95] = 95,
  [96] = 88,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 89,
  [104] = 104,
  [105] = 101,
  [106] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '_') ADVANCE(55);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(12);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(13);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(24);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(59);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_jinja_expression_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 1},
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
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 32},
  [106] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [sym_statement] = STATE(20),
    [sym_expression] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_text] = STATE(20),
    [sym_jinja_expression] = STATE(28),
    [sym__jinja_comment] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(29), 1,
      sym_integer,
    ACTIONS(31), 1,
      sym_float,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(53), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [44] = 12,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      sym_integer,
    ACTIONS(39), 1,
      sym_float,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(57), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [88] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [129] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [170] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [211] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [252] = 12,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(57), 1,
      sym_integer,
    ACTIONS(59), 1,
      sym_float,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(63), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [295] = 12,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(65), 1,
      sym_integer,
    ACTIONS(67), 1,
      sym_float,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(64), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [338] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [378] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [418] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [458] = 11,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [498] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    STATE(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [536] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(81), 1,
      sym_integer,
    ACTIONS(83), 1,
      sym_float,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(94), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [573] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(87), 1,
      sym_float,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(67), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [610] = 10,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym_float,
    STATE(66), 1,
      sym_identifier,
    ACTIONS(93), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(87), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [647] = 10,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym__identifier,
    ACTIONS(71), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    STATE(85), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 6,
      sym__expression,
      sym_fn_call,
      sym_string,
      sym_bool,
      sym_list,
      sym_dict,
  [684] = 8,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(108), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(111), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(114), 1,
      sym__text,
    STATE(26), 1,
      sym__jinja_comment,
    STATE(28), 1,
      sym_jinja_expression,
    STATE(19), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [713] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym__jinja_comment,
    STATE(28), 1,
      sym_jinja_expression,
    STATE(19), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [742] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [761] = 6,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [780] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(129), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [790] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(133), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [800] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [816] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(139), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [826] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [842] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [852] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [868] = 5,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [884] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(153), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [894] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(157), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [904] = 1,
    ACTIONS(159), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [912] = 1,
    ACTIONS(161), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [919] = 1,
    ACTIONS(163), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [926] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [933] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [940] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [947] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [954] = 1,
    ACTIONS(173), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [961] = 4,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_pair,
    STATE(95), 1,
      sym_string,
  [974] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [981] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [988] = 1,
    ACTIONS(179), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [995] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1002] = 1,
    ACTIONS(183), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1009] = 1,
    ACTIONS(185), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1016] = 1,
    ACTIONS(187), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1023] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_dict_repeat1,
  [1033] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1043] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_list_repeat1,
  [1053] = 3,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1063] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_argument_list_repeat1,
  [1073] = 3,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_dict_repeat1,
  [1083] = 3,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(38), 1,
      sym_argument_list,
  [1093] = 3,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_argument_list_repeat1,
  [1103] = 3,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_argument_list_repeat1,
  [1113] = 3,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_list_repeat1,
  [1123] = 3,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_dict_repeat1,
  [1133] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_list_repeat1,
  [1143] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_dict_repeat1,
  [1153] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dict_repeat1,
  [1163] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_list_repeat1,
  [1173] = 3,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_list_repeat1,
  [1183] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1188] = 2,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_argument_list,
  [1195] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1200] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1205] = 1,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1210] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1215] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1220] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1225] = 1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1230] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1235] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1240] = 1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1245] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1250] = 1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1255] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1260] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1265] = 1,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1270] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1275] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1280] = 1,
    ACTIONS(248), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [1285] = 2,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_argument_list,
  [1292] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1297] = 1,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1302] = 1,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
  [1306] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
  [1310] = 1,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
  [1314] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
  [1318] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [1322] = 1,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
  [1326] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACE_RBRACE,
  [1330] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [1334] = 1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
  [1338] = 1,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
  [1342] = 1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [1346] = 1,
    ACTIONS(260), 1,
      aux_sym_jinja_expression_token1,
  [1350] = 1,
    ACTIONS(262), 1,
      aux_sym_string_token2,
  [1354] = 1,
    ACTIONS(264), 1,
      aux_sym_string_token1,
  [1358] = 1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1362] = 1,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
  [1366] = 1,
    ACTIONS(268), 1,
      aux_sym__jinja_comment_token1,
  [1370] = 1,
    ACTIONS(270), 1,
      aux_sym_string_token1,
  [1374] = 1,
    ACTIONS(272), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 458,
  [SMALL_STATE(14)] = 498,
  [SMALL_STATE(15)] = 536,
  [SMALL_STATE(16)] = 573,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 647,
  [SMALL_STATE(19)] = 684,
  [SMALL_STATE(20)] = 713,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 780,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 800,
  [SMALL_STATE(26)] = 816,
  [SMALL_STATE(27)] = 826,
  [SMALL_STATE(28)] = 842,
  [SMALL_STATE(29)] = 852,
  [SMALL_STATE(30)] = 868,
  [SMALL_STATE(31)] = 884,
  [SMALL_STATE(32)] = 894,
  [SMALL_STATE(33)] = 904,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 919,
  [SMALL_STATE(36)] = 926,
  [SMALL_STATE(37)] = 933,
  [SMALL_STATE(38)] = 940,
  [SMALL_STATE(39)] = 947,
  [SMALL_STATE(40)] = 954,
  [SMALL_STATE(41)] = 961,
  [SMALL_STATE(42)] = 974,
  [SMALL_STATE(43)] = 981,
  [SMALL_STATE(44)] = 988,
  [SMALL_STATE(45)] = 995,
  [SMALL_STATE(46)] = 1002,
  [SMALL_STATE(47)] = 1009,
  [SMALL_STATE(48)] = 1016,
  [SMALL_STATE(49)] = 1023,
  [SMALL_STATE(50)] = 1033,
  [SMALL_STATE(51)] = 1043,
  [SMALL_STATE(52)] = 1053,
  [SMALL_STATE(53)] = 1063,
  [SMALL_STATE(54)] = 1073,
  [SMALL_STATE(55)] = 1083,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1103,
  [SMALL_STATE(58)] = 1113,
  [SMALL_STATE(59)] = 1123,
  [SMALL_STATE(60)] = 1133,
  [SMALL_STATE(61)] = 1143,
  [SMALL_STATE(62)] = 1153,
  [SMALL_STATE(63)] = 1163,
  [SMALL_STATE(64)] = 1173,
  [SMALL_STATE(65)] = 1183,
  [SMALL_STATE(66)] = 1188,
  [SMALL_STATE(67)] = 1195,
  [SMALL_STATE(68)] = 1200,
  [SMALL_STATE(69)] = 1205,
  [SMALL_STATE(70)] = 1210,
  [SMALL_STATE(71)] = 1215,
  [SMALL_STATE(72)] = 1220,
  [SMALL_STATE(73)] = 1225,
  [SMALL_STATE(74)] = 1230,
  [SMALL_STATE(75)] = 1235,
  [SMALL_STATE(76)] = 1240,
  [SMALL_STATE(77)] = 1245,
  [SMALL_STATE(78)] = 1250,
  [SMALL_STATE(79)] = 1255,
  [SMALL_STATE(80)] = 1260,
  [SMALL_STATE(81)] = 1265,
  [SMALL_STATE(82)] = 1270,
  [SMALL_STATE(83)] = 1275,
  [SMALL_STATE(84)] = 1280,
  [SMALL_STATE(85)] = 1285,
  [SMALL_STATE(86)] = 1292,
  [SMALL_STATE(87)] = 1297,
  [SMALL_STATE(88)] = 1302,
  [SMALL_STATE(89)] = 1306,
  [SMALL_STATE(90)] = 1310,
  [SMALL_STATE(91)] = 1314,
  [SMALL_STATE(92)] = 1318,
  [SMALL_STATE(93)] = 1322,
  [SMALL_STATE(94)] = 1326,
  [SMALL_STATE(95)] = 1330,
  [SMALL_STATE(96)] = 1334,
  [SMALL_STATE(97)] = 1338,
  [SMALL_STATE(98)] = 1342,
  [SMALL_STATE(99)] = 1346,
  [SMALL_STATE(100)] = 1350,
  [SMALL_STATE(101)] = 1354,
  [SMALL_STATE(102)] = 1358,
  [SMALL_STATE(103)] = 1362,
  [SMALL_STATE(104)] = 1366,
  [SMALL_STATE(105)] = 1370,
  [SMALL_STATE(106)] = 1374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_expression, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_comment, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_comment, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
