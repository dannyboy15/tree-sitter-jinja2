#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  sym__single_quote = 3,
  sym__double_quote = 4,
  sym_string_content_sq = 5,
  sym_string_content_dq = 6,
  sym_integer = 7,
  anon_sym_LBRACE_PERCENT = 8,
  aux_sym_jinja_expression_token1 = 9,
  anon_sym_LBRACE_POUND = 10,
  aux_sym__jinja_comment_token1 = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_True = 15,
  anon_sym_False = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  sym__identifier = 22,
  anon_sym_EQ = 23,
  sym__text = 24,
  sym_float = 25,
  sym_source_file = 26,
  sym_statement = 27,
  sym_expression = 28,
  sym_comment = 29,
  sym_text = 30,
  sym__expression = 31,
  sym_string = 32,
  sym_single_quote = 33,
  sym_double_quote = 34,
  sym_jinja_expression = 35,
  sym__jinja_comment = 36,
  sym_fn_call = 37,
  sym_argument_list = 38,
  sym_bool = 39,
  sym_list = 40,
  sym_dict = 41,
  sym_pair = 42,
  sym_identifier = 43,
  sym_kwarg = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_argument_list_repeat1 = 46,
  aux_sym_list_repeat1 = 47,
  aux_sym_dict_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__single_quote] = "_single_quote",
  [sym__double_quote] = "_double_quote",
  [sym_string_content_sq] = "string_content_sq",
  [sym_string_content_dq] = "string_content_dq",
  [sym_integer] = "integer",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_jinja_expression_token1] = "jinja_expression_token1",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym__jinja_comment_token1] = "_jinja_comment_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym_single_quote] = "single_quote",
  [sym_double_quote] = "double_quote",
  [sym_jinja_expression] = "jinja_expression",
  [sym__jinja_comment] = "_jinja_comment",
  [sym_fn_call] = "fn_call",
  [sym_argument_list] = "argument_list",
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
  [sym__single_quote] = sym__single_quote,
  [sym__double_quote] = sym__double_quote,
  [sym_string_content_sq] = sym_string_content_sq,
  [sym_string_content_dq] = sym_string_content_dq,
  [sym_integer] = sym_integer,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_jinja_expression_token1] = aux_sym_jinja_expression_token1,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym__jinja_comment_token1] = aux_sym__jinja_comment_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym_single_quote] = sym_single_quote,
  [sym_double_quote] = sym_double_quote,
  [sym_jinja_expression] = sym_jinja_expression,
  [sym__jinja_comment] = sym__jinja_comment,
  [sym_fn_call] = sym_fn_call,
  [sym_argument_list] = sym_argument_list,
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
  field_quote_type = 4,
  field_string_content = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_list] = "argument_list",
  [field_fn_name] = "fn_name",
  [field_key] = "key",
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
    {field_fn_name, 0},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 10,
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
  [25] = 24,
  [26] = 23,
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
  [59] = 51,
  [60] = 50,
  [61] = 61,
  [62] = 61,
  [63] = 56,
  [64] = 52,
  [65] = 42,
  [66] = 35,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 39,
  [72] = 45,
  [73] = 43,
  [74] = 36,
  [75] = 37,
  [76] = 76,
  [77] = 32,
  [78] = 44,
  [79] = 47,
  [80] = 46,
  [81] = 81,
  [82] = 41,
  [83] = 40,
  [84] = 38,
  [85] = 48,
  [86] = 86,
  [87] = 76,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 94,
  [95] = 91,
  [96] = 89,
  [97] = 94,
  [98] = 98,
  [99] = 99,
  [100] = 88,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 99,
  [108] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(52);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(10);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '}') ADVANCE(36);
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
      if (lookahead == '}') ADVANCE(35);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(33);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(58);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__single_quote);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__double_quote);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string_content_sq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string_content_dq);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_jinja_expression_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__jinja_comment_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
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
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 22},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 25},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [sym__single_quote] = ACTIONS(1),
    [sym__double_quote] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym_statement] = STATE(20),
    [sym_expression] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_text] = STATE(20),
    [sym_jinja_expression] = STATE(31),
    [sym__jinja_comment] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [sym__text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(17), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(31), 1,
      sym_float,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(63), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [50] = 14,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      sym_float,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(56), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [100] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym_float,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [147] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [194] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [241] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [288] = 14,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(53), 1,
      sym_integer,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(59), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [337] = 14,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(67), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [386] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_integer,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(73), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(81), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [432] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(81), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [478] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(81), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [524] = 13,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(81), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [570] = 12,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(41), 1,
      sym_integer,
    ACTIONS(45), 1,
      sym_float,
    STATE(54), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(86), 7,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [614] = 12,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(81), 1,
      sym_integer,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_float,
    STATE(87), 1,
      sym_identifier,
    STATE(107), 1,
      sym_single_quote,
    STATE(108), 1,
      sym_double_quote,
    ACTIONS(83), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(70), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [657] = 12,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(69), 1,
      sym_integer,
    ACTIONS(73), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(81), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [700] = 12,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(91), 1,
      sym_integer,
    ACTIONS(93), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(68), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [743] = 12,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    STATE(76), 1,
      sym_identifier,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
    ACTIONS(23), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 6,
      sym__expression,
      sym_string,
      sym_fn_call,
      sym_bool,
      sym_list,
      sym_dict,
  [786] = 8,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(104), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(107), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(110), 1,
      sym__text,
    STATE(31), 1,
      sym_jinja_expression,
    STATE(34), 1,
      sym__jinja_comment,
    STATE(19), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [815] = 8,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      sym__text,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_jinja_expression,
    STATE(34), 1,
      sym__jinja_comment,
    STATE(19), 5,
      sym_statement,
      sym_expression,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [844] = 8,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [869] = 8,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [894] = 7,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [916] = 7,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [938] = 7,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [960] = 7,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [982] = 6,
    ACTIONS(13), 1,
      sym__single_quote,
    ACTIONS(15), 1,
      sym__double_quote,
    STATE(69), 1,
      sym_pair,
    STATE(92), 1,
      sym_string,
    STATE(98), 1,
      sym_double_quote,
    STATE(99), 1,
      sym_single_quote,
  [1001] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(133), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [1011] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(137), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [1021] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(141), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [1031] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(145), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [1041] = 1,
    ACTIONS(147), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1049] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(151), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [1059] = 2,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__text,
    ACTIONS(155), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
  [1069] = 1,
    ACTIONS(157), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1076] = 1,
    ACTIONS(159), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1083] = 1,
    ACTIONS(161), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1090] = 1,
    ACTIONS(163), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1097] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1104] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1111] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1118] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1125] = 1,
    ACTIONS(173), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1132] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1139] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1146] = 1,
    ACTIONS(179), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1153] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1160] = 1,
    ACTIONS(183), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1167] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_list_repeat1,
  [1177] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_list_repeat1,
  [1187] = 3,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_list_repeat1,
  [1197] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_dict_repeat1,
  [1207] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_argument_list_repeat1,
  [1217] = 3,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_argument_list,
  [1227] = 3,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_dict_repeat1,
  [1237] = 3,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_argument_list_repeat1,
  [1247] = 3,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_argument_list_repeat1,
  [1257] = 3,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_argument_list_repeat1,
  [1267] = 3,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_list_repeat1,
  [1277] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_list_repeat1,
  [1287] = 3,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_dict_repeat1,
  [1297] = 3,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_dict_repeat1,
  [1307] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_argument_list_repeat1,
  [1317] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_dict_repeat1,
  [1327] = 1,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1332] = 1,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1337] = 1,
    ACTIONS(240), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [1342] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1347] = 1,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1352] = 1,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1357] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1362] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1367] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1372] = 1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1377] = 1,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1382] = 2,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_argument_list,
  [1389] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1394] = 1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1399] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1404] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1409] = 1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1414] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1419] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1424] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1429] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1434] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1439] = 2,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_argument_list,
  [1446] = 1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [1450] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
  [1454] = 1,
    ACTIONS(248), 1,
      sym__single_quote,
  [1458] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1466] = 1,
    ACTIONS(252), 1,
      sym__single_quote,
  [1470] = 1,
    ACTIONS(252), 1,
      sym__double_quote,
  [1474] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
  [1478] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
  [1482] = 1,
    ACTIONS(248), 1,
      sym__double_quote,
  [1486] = 1,
    ACTIONS(254), 1,
      sym_string_content_dq,
  [1490] = 1,
    ACTIONS(256), 1,
      sym_string_content_sq,
  [1494] = 1,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
  [1498] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE_RBRACE,
  [1502] = 1,
    ACTIONS(260), 1,
      aux_sym_jinja_expression_token1,
  [1506] = 1,
    ACTIONS(262), 1,
      sym_string_content_dq,
  [1510] = 1,
    ACTIONS(264), 1,
      sym_string_content_sq,
  [1514] = 1,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
  [1518] = 1,
    ACTIONS(268), 1,
      aux_sym__jinja_comment_token1,
  [1522] = 1,
    ACTIONS(270), 1,
      sym_string_content_sq,
  [1526] = 1,
    ACTIONS(272), 1,
      sym_string_content_dq,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 337,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 614,
  [SMALL_STATE(16)] = 657,
  [SMALL_STATE(17)] = 700,
  [SMALL_STATE(18)] = 743,
  [SMALL_STATE(19)] = 786,
  [SMALL_STATE(20)] = 815,
  [SMALL_STATE(21)] = 844,
  [SMALL_STATE(22)] = 869,
  [SMALL_STATE(23)] = 894,
  [SMALL_STATE(24)] = 916,
  [SMALL_STATE(25)] = 938,
  [SMALL_STATE(26)] = 960,
  [SMALL_STATE(27)] = 982,
  [SMALL_STATE(28)] = 1001,
  [SMALL_STATE(29)] = 1011,
  [SMALL_STATE(30)] = 1021,
  [SMALL_STATE(31)] = 1031,
  [SMALL_STATE(32)] = 1041,
  [SMALL_STATE(33)] = 1049,
  [SMALL_STATE(34)] = 1059,
  [SMALL_STATE(35)] = 1069,
  [SMALL_STATE(36)] = 1076,
  [SMALL_STATE(37)] = 1083,
  [SMALL_STATE(38)] = 1090,
  [SMALL_STATE(39)] = 1097,
  [SMALL_STATE(40)] = 1104,
  [SMALL_STATE(41)] = 1111,
  [SMALL_STATE(42)] = 1118,
  [SMALL_STATE(43)] = 1125,
  [SMALL_STATE(44)] = 1132,
  [SMALL_STATE(45)] = 1139,
  [SMALL_STATE(46)] = 1146,
  [SMALL_STATE(47)] = 1153,
  [SMALL_STATE(48)] = 1160,
  [SMALL_STATE(49)] = 1167,
  [SMALL_STATE(50)] = 1177,
  [SMALL_STATE(51)] = 1187,
  [SMALL_STATE(52)] = 1197,
  [SMALL_STATE(53)] = 1207,
  [SMALL_STATE(54)] = 1217,
  [SMALL_STATE(55)] = 1227,
  [SMALL_STATE(56)] = 1237,
  [SMALL_STATE(57)] = 1247,
  [SMALL_STATE(58)] = 1257,
  [SMALL_STATE(59)] = 1267,
  [SMALL_STATE(60)] = 1277,
  [SMALL_STATE(61)] = 1287,
  [SMALL_STATE(62)] = 1297,
  [SMALL_STATE(63)] = 1307,
  [SMALL_STATE(64)] = 1317,
  [SMALL_STATE(65)] = 1327,
  [SMALL_STATE(66)] = 1332,
  [SMALL_STATE(67)] = 1337,
  [SMALL_STATE(68)] = 1342,
  [SMALL_STATE(69)] = 1347,
  [SMALL_STATE(70)] = 1352,
  [SMALL_STATE(71)] = 1357,
  [SMALL_STATE(72)] = 1362,
  [SMALL_STATE(73)] = 1367,
  [SMALL_STATE(74)] = 1372,
  [SMALL_STATE(75)] = 1377,
  [SMALL_STATE(76)] = 1382,
  [SMALL_STATE(77)] = 1389,
  [SMALL_STATE(78)] = 1394,
  [SMALL_STATE(79)] = 1399,
  [SMALL_STATE(80)] = 1404,
  [SMALL_STATE(81)] = 1409,
  [SMALL_STATE(82)] = 1414,
  [SMALL_STATE(83)] = 1419,
  [SMALL_STATE(84)] = 1424,
  [SMALL_STATE(85)] = 1429,
  [SMALL_STATE(86)] = 1434,
  [SMALL_STATE(87)] = 1439,
  [SMALL_STATE(88)] = 1446,
  [SMALL_STATE(89)] = 1450,
  [SMALL_STATE(90)] = 1454,
  [SMALL_STATE(91)] = 1458,
  [SMALL_STATE(92)] = 1462,
  [SMALL_STATE(93)] = 1466,
  [SMALL_STATE(94)] = 1470,
  [SMALL_STATE(95)] = 1474,
  [SMALL_STATE(96)] = 1478,
  [SMALL_STATE(97)] = 1482,
  [SMALL_STATE(98)] = 1486,
  [SMALL_STATE(99)] = 1490,
  [SMALL_STATE(100)] = 1494,
  [SMALL_STATE(101)] = 1498,
  [SMALL_STATE(102)] = 1502,
  [SMALL_STATE(103)] = 1506,
  [SMALL_STATE(104)] = 1510,
  [SMALL_STATE(105)] = 1514,
  [SMALL_STATE(106)] = 1518,
  [SMALL_STATE(107)] = 1522,
  [SMALL_STATE(108)] = 1526,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_expression, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_comment, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_comment, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(27),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quote, 1),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
