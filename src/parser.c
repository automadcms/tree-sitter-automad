#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_POUND_GT = 3,
  sym__name = 4,
  anon_sym_COLON = 5,
  aux_sym__keyValue_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  sym_string = 10,
  sym_number = 11,
  sym_boolean = 12,
  sym_variable_open = 13,
  anon_sym_RBRACE = 14,
  sym_pipe_separator = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_for = 20,
  anon_sym_to = 21,
  anon_sym_foreach = 22,
  anon_sym_in = 23,
  anon_sym_if = 24,
  anon_sym_snippet = 25,
  anon_sym_with = 26,
  anon_sym_else = 27,
  anon_sym_end = 28,
  anon_sym_BANG = 29,
  anon_sym_not = 30,
  sym_operator = 31,
  anon_sym_pagelist = 32,
  anon_sym_filelist = 33,
  sym_key = 34,
  anon_sym_LBRACE = 35,
  sym_include = 36,
  anon_sym_TILDE = 37,
  sym_statement_open = 38,
  sym_statement_close = 39,
  sym_text = 40,
  sym_automad = 41,
  sym_comment = 42,
  sym__value = 43,
  sym__keyValue = 44,
  sym__pipe = 45,
  sym_variable = 46,
  sym_variable_close = 47,
  sym_variable_name = 48,
  sym_pipe_function_name = 49,
  sym_pipe_math = 50,
  sym_keyword = 51,
  sym_negation = 52,
  sym_expression = 53,
  sym_options = 54,
  sym_statement = 55,
  aux_sym_automad_repeat1 = 56,
  aux_sym_comment_repeat1 = 57,
  aux_sym__keyValue_repeat1 = 58,
  aux_sym__pipe_repeat1 = 59,
  aux_sym_variable_repeat1 = 60,
  aux_sym_options_repeat1 = 61,
  aux_sym_statement_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_POUND] = "<#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_GT] = "#>",
  [sym__name] = "_name",
  [anon_sym_COLON] = ":",
  [aux_sym__keyValue_token1] = "_keyValue_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_variable_open] = "variable_open",
  [anon_sym_RBRACE] = "}",
  [sym_pipe_separator] = "pipe_separator",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_for] = "for",
  [anon_sym_to] = "to",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_snippet] = "snippet",
  [anon_sym_with] = "with",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [sym_operator] = "operator",
  [anon_sym_pagelist] = "pagelist",
  [anon_sym_filelist] = "filelist",
  [sym_key] = "key",
  [anon_sym_LBRACE] = "{",
  [sym_include] = "include",
  [anon_sym_TILDE] = "~",
  [sym_statement_open] = "statement_open",
  [sym_statement_close] = "statement_close",
  [sym_text] = "text",
  [sym_automad] = "automad",
  [sym_comment] = "comment",
  [sym__value] = "_value",
  [sym__keyValue] = "_keyValue",
  [sym__pipe] = "_pipe",
  [sym_variable] = "variable",
  [sym_variable_close] = "variable_close",
  [sym_variable_name] = "variable_name",
  [sym_pipe_function_name] = "pipe_function_name",
  [sym_pipe_math] = "pipe_math",
  [sym_keyword] = "keyword",
  [sym_negation] = "negation",
  [sym_expression] = "expression",
  [sym_options] = "options",
  [sym_statement] = "statement",
  [aux_sym_automad_repeat1] = "automad_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__keyValue_repeat1] = "_keyValue_repeat1",
  [aux_sym__pipe_repeat1] = "_pipe_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_POUND] = anon_sym_LT_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_GT] = anon_sym_POUND_GT,
  [sym__name] = sym__name,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__keyValue_token1] = aux_sym__keyValue_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_variable_open] = sym_variable_open,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_pipe_separator] = sym_pipe_separator,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_snippet] = anon_sym_snippet,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [sym_operator] = sym_operator,
  [anon_sym_pagelist] = anon_sym_pagelist,
  [anon_sym_filelist] = anon_sym_filelist,
  [sym_key] = sym_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_include] = sym_include,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_statement_open] = sym_statement_open,
  [sym_statement_close] = sym_statement_close,
  [sym_text] = sym_text,
  [sym_automad] = sym_automad,
  [sym_comment] = sym_comment,
  [sym__value] = sym__value,
  [sym__keyValue] = sym__keyValue,
  [sym__pipe] = sym__pipe,
  [sym_variable] = sym_variable,
  [sym_variable_close] = sym_variable_close,
  [sym_variable_name] = sym_variable_name,
  [sym_pipe_function_name] = sym_pipe_function_name,
  [sym_pipe_math] = sym_pipe_math,
  [sym_keyword] = sym_keyword,
  [sym_negation] = sym_negation,
  [sym_expression] = sym_expression,
  [sym_options] = sym_options,
  [sym_statement] = sym_statement,
  [aux_sym_automad_repeat1] = aux_sym_automad_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__keyValue_repeat1] = aux_sym__keyValue_repeat1,
  [aux_sym__pipe_repeat1] = aux_sym__pipe_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__keyValue_token1] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_open] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_pipe_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snippet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pagelist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filelist] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_statement_open] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_close] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_automad] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__keyValue] = {
    .visible = false,
    .named = true,
  },
  [sym__pipe] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_close] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_math] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_automad_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__keyValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
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
  [45] = 23,
  [46] = 23,
  [47] = 27,
  [48] = 27,
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 78,
  [84] = 81,
  [85] = 85,
  [86] = 82,
  [87] = 23,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 27,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 101,
  [111] = 89,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 18,
  [123] = 15,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 19,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 17,
  [142] = 142,
  [143] = 16,
  [144] = 140,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 142,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 170,
  [180] = 23,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 168,
  [185] = 185,
  [186] = 27,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 128,
  [195] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '~') ADVANCE(193);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '<') ADVANCE(184);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '~') ADVANCE(193);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(185);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '@') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(197);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '|') ADVANCE(148);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead == '%' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'h') ADVANCE(10);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(8);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(192);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(84);
      if (lookahead == '~') ADVANCE(193);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(195);
      if (lookahead == '{') ADVANCE(146);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == '{') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 64:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(198);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(77);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(83);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(179);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(176);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(95);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(164);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'h') ADVANCE(173);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'h') ADVANCE(161);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(94);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(91);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(78);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(85);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(92);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(158);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(80);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(90);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(154);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 's') ADVANCE(79);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 't') ADVANCE(82);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 't') ADVANCE(170);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(125);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(108);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(100);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(110);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd') ADVANCE(180);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(136);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(177);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(117);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(132);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(119);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(165);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(106);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(174);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(162);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(123);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(128);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(131);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(129);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(101);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(104);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(112);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(127);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(114);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(111);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(130);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(135);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(124);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(105);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(156);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(103);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(102);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(133);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(134);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(183);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(109);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(171);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(189);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(187);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(102);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__keyValue_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable_open);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_pipe_separator);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(76);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(99);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_to);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_in);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_if);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_snippet);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_snippet);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_snippet);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_with);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_end);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_not);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '!' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_pagelist);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_pagelist);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_filelist);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_filelist);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_include);
      if (lookahead == '.') ADVANCE(9);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_statement_open);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_statement_close);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '>') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '@') ADVANCE(198);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
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
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 68},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 68},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 68},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 68},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 68},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 68},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 68},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 68},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 68},
  [147] = {.lex_state = 68},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 68},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 62},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 62},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 62},
  [179] = {.lex_state = 62},
  [180] = {.lex_state = 13},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 62},
  [185] = {.lex_state = 62},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {(TSStateId)(-1)},
  [195] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_POUND] = ACTIONS(3),
    [anon_sym_POUND_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_variable_open] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_pipe_separator] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_snippet] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_pagelist] = ACTIONS(1),
    [anon_sym_filelist] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_statement_close] = ACTIONS(1),
  },
  [1] = {
    [sym_automad] = STATE(188),
    [sym_comment] = STATE(1),
    [sym_variable] = STATE(85),
    [sym_statement] = STATE(85),
    [aux_sym_automad_repeat1] = STATE(85),
    [anon_sym_LT_POUND] = ACTIONS(5),
    [sym_variable_open] = ACTIONS(7),
    [sym_statement_open] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(11),
    [aux_sym_statement_repeat1] = STATE(4),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [aux_sym__keyValue_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_variable_open] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_snippet] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(25),
    [anon_sym_pagelist] = ACTIONS(27),
    [anon_sym_filelist] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_statement_close] = ACTIONS(33),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(10),
    [aux_sym_statement_repeat1] = STATE(6),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [aux_sym__keyValue_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_variable_open] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_snippet] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(25),
    [anon_sym_pagelist] = ACTIONS(27),
    [anon_sym_filelist] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_statement_close] = ACTIONS(37),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(10),
    [aux_sym_statement_repeat1] = STATE(5),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [aux_sym__keyValue_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_variable_open] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_snippet] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(25),
    [anon_sym_pagelist] = ACTIONS(27),
    [anon_sym_filelist] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(35),
    [sym_statement_close] = ACTIONS(37),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(13),
    [aux_sym_statement_repeat1] = STATE(5),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(39),
    [aux_sym__keyValue_token1] = ACTIONS(42),
    [sym_string] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_boolean] = ACTIONS(45),
    [sym_variable_open] = ACTIONS(48),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_to] = ACTIONS(51),
    [anon_sym_foreach] = ACTIONS(51),
    [anon_sym_in] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_snippet] = ACTIONS(51),
    [anon_sym_with] = ACTIONS(51),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_not] = ACTIONS(54),
    [anon_sym_pagelist] = ACTIONS(57),
    [anon_sym_filelist] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(63),
    [sym_statement_close] = ACTIONS(63),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(9),
    [aux_sym_statement_repeat1] = STATE(5),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [aux_sym__keyValue_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_variable_open] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_snippet] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(25),
    [anon_sym_pagelist] = ACTIONS(27),
    [anon_sym_filelist] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(65),
    [sym_statement_close] = ACTIONS(67),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(9),
    [aux_sym_statement_repeat1] = STATE(8),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [aux_sym__keyValue_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_variable_open] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_snippet] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(25),
    [anon_sym_pagelist] = ACTIONS(27),
    [anon_sym_filelist] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(65),
    [sym_statement_close] = ACTIONS(67),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym__value] = STATE(24),
    [sym_variable] = STATE(14),
    [sym_keyword] = STATE(30),
    [sym_negation] = STATE(64),
    [sym_expression] = STATE(30),
    [sym_options] = STATE(30),
    [aux_sym__keyValue_repeat1] = STATE(12),
    [aux_sym_statement_repeat1] = STATE(5),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(15),
    [aux_sym__keyValue_token1] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_variable_open] = ACTIONS(21),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_to] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_snippet] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_not] = ACTIONS(25),
    [anon_sym_pagelist] = ACTIONS(27),
    [anon_sym_filelist] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(69),
    [sym_statement_close] = ACTIONS(71),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_TILDE,
    ACTIONS(71), 1,
      sym_statement_close,
    ACTIONS(73), 1,
      sym__name,
    STATE(9), 1,
      sym_comment,
    STATE(14), 1,
      sym_variable,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    STATE(24), 1,
      sym__value,
    STATE(64), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(27), 2,
      anon_sym_pagelist,
      anon_sym_filelist,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(34), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [66] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_TILDE,
    ACTIONS(67), 1,
      sym_statement_close,
    ACTIONS(73), 1,
      sym__name,
    STATE(10), 1,
      sym_comment,
    STATE(14), 1,
      sym_variable,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    STATE(24), 1,
      sym__value,
    STATE(64), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(27), 2,
      anon_sym_pagelist,
      anon_sym_filelist,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(34), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [132] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      sym_statement_close,
    ACTIONS(73), 1,
      sym__name,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      sym_variable,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    STATE(24), 1,
      sym__value,
    STATE(64), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(27), 2,
      anon_sym_pagelist,
      anon_sym_filelist,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(34), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [198] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__name,
    ACTIONS(75), 1,
      anon_sym_TILDE,
    ACTIONS(77), 1,
      sym_statement_close,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      sym_variable,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    STATE(24), 1,
      sym__value,
    STATE(64), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(27), 2,
      anon_sym_pagelist,
      anon_sym_filelist,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(34), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [264] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__name,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      sym_variable,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    STATE(24), 1,
      sym__value,
    STATE(64), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(27), 2,
      anon_sym_pagelist,
      anon_sym_filelist,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(34), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [324] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(81), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(79), 25,
      sym__name,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_RBRACE,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [361] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(85), 1,
      aux_sym__keyValue_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(83), 25,
      sym__name,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_RBRACE,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [398] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(89), 1,
      aux_sym__keyValue_token1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(87), 25,
      sym__name,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_RBRACE,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [435] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(93), 1,
      aux_sym__keyValue_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(91), 25,
      sym__name,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_RBRACE,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [472] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(97), 1,
      aux_sym__keyValue_token1,
    STATE(18), 1,
      sym_comment,
    ACTIONS(95), 25,
      sym__name,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_RBRACE,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [509] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(101), 1,
      aux_sym__keyValue_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(99), 25,
      sym__name,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_RBRACE,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [546] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(105), 1,
      sym_operator,
    STATE(20), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(103), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [585] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(105), 1,
      sym_operator,
    STATE(21), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(103), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [624] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(109), 1,
      sym_operator,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(107), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [663] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(113), 1,
      aux_sym__keyValue_token1,
    STATE(23), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(111), 22,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [698] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(118), 1,
      sym_operator,
    STATE(21), 1,
      aux_sym__keyValue_repeat1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(116), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [737] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(109), 1,
      sym_operator,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(107), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [776] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(122), 1,
      sym_operator,
    STATE(23), 1,
      aux_sym__keyValue_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(120), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [815] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(126), 1,
      aux_sym__keyValue_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(124), 22,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [849] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(130), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(128), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [882] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(134), 1,
      aux_sym__keyValue_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(132), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [915] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(138), 1,
      aux_sym__keyValue_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(136), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [948] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(142), 1,
      aux_sym__keyValue_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(140), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [981] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(144), 1,
      aux_sym__keyValue_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(116), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1014] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(148), 1,
      aux_sym__keyValue_token1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(146), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1047] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(150), 1,
      aux_sym__keyValue_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(63), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1080] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(154), 1,
      aux_sym__keyValue_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(152), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1113] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(158), 1,
      aux_sym__keyValue_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(156), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1146] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(160), 1,
      aux_sym__keyValue_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(107), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1179] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(162), 1,
      aux_sym__keyValue_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(120), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1212] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(166), 1,
      aux_sym__keyValue_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(164), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1245] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(170), 1,
      aux_sym__keyValue_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(168), 21,
      sym__name,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      sym_statement_close,
  [1278] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(174), 1,
      aux_sym__keyValue_token1,
    ACTIONS(176), 1,
      anon_sym_TILDE,
    STATE(2), 1,
      sym_keyword,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(172), 2,
      sym__name,
      sym_include,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [1312] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(174), 1,
      aux_sym__keyValue_token1,
    STATE(3), 1,
      sym_keyword,
    STATE(42), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(178), 2,
      sym__name,
      sym_include,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [1343] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(174), 1,
      aux_sym__keyValue_token1,
    STATE(7), 1,
      sym_keyword,
    STATE(43), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(180), 2,
      sym__name,
      sym_include,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [1374] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(174), 1,
      aux_sym__keyValue_token1,
    STATE(3), 1,
      sym_keyword,
    STATE(43), 1,
      aux_sym__keyValue_repeat1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(178), 2,
      sym__name,
      sym_include,
    ACTIONS(23), 9,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
  [1405] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(182), 1,
      aux_sym__keyValue_token1,
    STATE(45), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(111), 11,
      sym__name,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_RBRACE,
      sym_pipe_separator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1429] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(185), 1,
      aux_sym__keyValue_token1,
    STATE(46), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(111), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      sym_include,
  [1453] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(126), 1,
      aux_sym__keyValue_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(124), 11,
      sym__name,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_number,
      anon_sym_RBRACE,
      sym_pipe_separator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1476] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(126), 1,
      aux_sym__keyValue_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(124), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      anon_sym_else,
      anon_sym_end,
      sym_include,
  [1499] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      sym__name,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(116), 1,
      sym_pipe_function_name,
    STATE(152), 1,
      sym_pipe_math,
    ACTIONS(192), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1527] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      sym__name,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    STATE(50), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__keyValue_repeat1,
    STATE(116), 1,
      sym_pipe_function_name,
    STATE(152), 1,
      sym_pipe_math,
    ACTIONS(192), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1555] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      sym__name,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    STATE(49), 1,
      aux_sym__keyValue_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(94), 1,
      sym_pipe_function_name,
    STATE(155), 1,
      sym_pipe_math,
    ACTIONS(192), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1583] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      sym__name,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(97), 1,
      sym_pipe_function_name,
    STATE(162), 1,
      sym_pipe_math,
    ACTIONS(192), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1611] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(53), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym__keyValue_repeat1,
    STATE(92), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1638] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(54), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(159), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1665] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(54), 1,
      aux_sym__keyValue_repeat1,
    STATE(55), 1,
      sym_comment,
    STATE(156), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1692] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(37), 1,
      sym__value,
    STATE(56), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1719] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(57), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(92), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1746] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(58), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__keyValue_repeat1,
    STATE(114), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1773] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(25), 1,
      sym__value,
    STATE(59), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1800] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(60), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(114), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1827] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(61), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(156), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1854] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(29), 1,
      sym__value,
    STATE(62), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1881] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(38), 1,
      sym__value,
    STATE(63), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1908] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(20), 1,
      sym__value,
    STATE(59), 1,
      aux_sym__keyValue_repeat1,
    STATE(64), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1935] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(31), 1,
      sym__value,
    STATE(65), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1962] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(98), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [1989] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(67), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(98), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2016] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(60), 1,
      aux_sym__keyValue_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(95), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2043] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(61), 1,
      aux_sym__keyValue_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(166), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2070] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(29), 1,
      sym__value,
    STATE(70), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2097] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(71), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(104), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2124] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(38), 1,
      sym__value,
    STATE(72), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2151] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(36), 1,
      sym__value,
    STATE(70), 1,
      aux_sym__keyValue_repeat1,
    STATE(73), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2178] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(36), 1,
      sym__value,
    STATE(74), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2205] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(75), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__keyValue_repeat1,
    STATE(174), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2232] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(194), 1,
      aux_sym__keyValue_token1,
    STATE(14), 1,
      sym_variable,
    STATE(75), 1,
      aux_sym__keyValue_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(165), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2259] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      sym_pipe_separator,
    STATE(16), 1,
      sym_variable_close,
    STATE(77), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_variable_repeat1,
    STATE(111), 1,
      aux_sym__keyValue_repeat1,
    STATE(176), 1,
      sym__pipe,
  [2287] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      sym_pipe_separator,
    STATE(16), 1,
      sym_variable_close,
    STATE(78), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_variable_repeat1,
    STATE(111), 1,
      aux_sym__keyValue_repeat1,
    STATE(176), 1,
      sym__pipe,
  [2315] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(198), 1,
      sym_pipe_separator,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_variable_repeat1,
    STATE(89), 1,
      aux_sym__keyValue_repeat1,
    STATE(143), 1,
      sym_variable_close,
    STATE(176), 1,
      sym__pipe,
  [2343] = 6,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_LT_POUND,
    ACTIONS(207), 1,
      sym_variable_open,
    ACTIONS(210), 1,
      sym_statement_open,
    ACTIONS(213), 1,
      sym_text,
    STATE(80), 4,
      sym_comment,
      sym_variable,
      sym_statement,
      aux_sym_automad_repeat1,
  [2365] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(198), 1,
      sym_pipe_separator,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_variable_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym__keyValue_repeat1,
    STATE(122), 1,
      sym_variable_close,
    STATE(176), 1,
      sym__pipe,
  [2393] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      sym_pipe_separator,
    STATE(15), 1,
      sym_variable_close,
    STATE(82), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_variable_repeat1,
    STATE(101), 1,
      aux_sym__keyValue_repeat1,
    STATE(176), 1,
      sym__pipe,
  [2421] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(198), 1,
      sym_pipe_separator,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_variable_repeat1,
    STATE(89), 1,
      aux_sym__keyValue_repeat1,
    STATE(143), 1,
      sym_variable_close,
    STATE(176), 1,
      sym__pipe,
  [2449] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(198), 1,
      sym_pipe_separator,
    STATE(18), 1,
      sym_variable_close,
    STATE(77), 1,
      aux_sym_variable_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym__keyValue_repeat1,
    STATE(176), 1,
      sym__pipe,
  [2477] = 7,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(9), 1,
      sym_statement_open,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym_text,
    STATE(85), 1,
      sym_comment,
    STATE(80), 3,
      sym_variable,
      sym_statement,
      aux_sym_automad_repeat1,
  [2501] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(198), 1,
      sym_pipe_separator,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_variable_repeat1,
    STATE(110), 1,
      aux_sym__keyValue_repeat1,
    STATE(123), 1,
      sym_variable_close,
    STATE(176), 1,
      sym__pipe,
  [2529] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(220), 1,
      aux_sym__keyValue_token1,
    STATE(87), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(111), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [2546] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(223), 1,
      aux_sym__keyValue_token1,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym_pipe_separator,
    STATE(176), 1,
      sym__pipe,
    STATE(181), 1,
      aux_sym__keyValue_repeat1,
    STATE(88), 2,
      sym_comment,
      aux_sym_variable_repeat1,
  [2569] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(89), 1,
      sym_comment,
    STATE(123), 1,
      sym_variable_close,
  [2591] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_options_repeat1,
    STATE(134), 1,
      aux_sym__keyValue_repeat1,
  [2613] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_options_repeat1,
    STATE(127), 1,
      aux_sym__keyValue_repeat1,
  [2635] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym__pipe_repeat1,
    STATE(148), 1,
      aux_sym__keyValue_repeat1,
  [2657] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(148), 1,
      aux_sym__keyValue_repeat1,
  [2679] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(245), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [2699] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym__pipe_repeat1,
    STATE(126), 1,
      aux_sym__keyValue_repeat1,
  [2721] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [2741] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [2761] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym__pipe_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym__keyValue_repeat1,
  [2783] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(120), 1,
      aux_sym__keyValue_repeat1,
  [2805] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(126), 1,
      aux_sym__keyValue_token1,
    STATE(100), 1,
      sym_comment,
    ACTIONS(124), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [2821] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(17), 1,
      sym_variable_close,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(101), 1,
      sym_comment,
  [2843] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(255), 1,
      aux_sym__keyValue_token1,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym__keyValue_repeat1,
    STATE(102), 2,
      sym_comment,
      aux_sym__pipe_repeat1,
  [2863] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(103), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__keyValue_repeat1,
  [2885] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym__pipe_repeat1,
    STATE(119), 1,
      aux_sym__keyValue_repeat1,
  [2907] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym__keyValue_repeat1,
  [2929] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(267), 1,
      aux_sym__keyValue_token1,
    STATE(106), 1,
      sym_comment,
    ACTIONS(269), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [2945] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(271), 1,
      aux_sym__keyValue_token1,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym__keyValue_repeat1,
    STATE(107), 2,
      sym_comment,
      aux_sym_options_repeat1,
  [2965] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_options_repeat1,
    STATE(108), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym__keyValue_repeat1,
  [2987] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(109), 1,
      sym_comment,
    STATE(143), 1,
      sym_variable_close,
  [3009] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(141), 1,
      sym_variable_close,
  [3031] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(15), 1,
      sym_variable_close,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(111), 1,
      sym_comment,
  [3053] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3073] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3093] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym__pipe_repeat1,
    STATE(114), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym__keyValue_repeat1,
  [3115] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_options_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__keyValue_repeat1,
  [3137] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      aux_sym__keyValue_repeat1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3157] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(16), 1,
      sym_variable_close,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(117), 1,
      sym_comment,
  [3179] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(118), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym__keyValue_repeat1,
  [3201] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(119), 1,
      sym_comment,
  [3220] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(120), 1,
      sym_comment,
  [3239] = 3,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    STATE(121), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3252] = 3,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3265] = 3,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3278] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(297), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      sym_key,
    STATE(124), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym__keyValue_repeat1,
    STATE(183), 1,
      sym__keyValue,
  [3297] = 3,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3310] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(126), 1,
      sym_comment,
  [3329] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(127), 1,
      sym_comment,
  [3348] = 3,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3361] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(129), 1,
      sym_comment,
  [3380] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(130), 1,
      sym_comment,
  [3399] = 3,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_comment,
    ACTIONS(317), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3412] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(297), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      sym_key,
    STATE(91), 1,
      sym__keyValue,
    STATE(132), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym__keyValue_repeat1,
  [3431] = 3,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_comment,
    ACTIONS(321), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3444] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(134), 1,
      sym_comment,
  [3463] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(297), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      sym_key,
    STATE(135), 1,
      sym_comment,
    STATE(154), 1,
      sym__keyValue,
    STATE(180), 1,
      aux_sym__keyValue_repeat1,
  [3482] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3495] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(323), 1,
      aux_sym__keyValue_token1,
    STATE(137), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3510] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(297), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      sym_key,
    STATE(138), 1,
      sym_comment,
    STATE(153), 1,
      sym__keyValue,
    STATE(180), 1,
      aux_sym__keyValue_repeat1,
  [3529] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(139), 1,
      sym_comment,
  [3548] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(327), 1,
      sym__name,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(83), 1,
      sym_variable_name,
    STATE(140), 1,
      sym_comment,
  [3567] = 3,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3580] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(327), 1,
      sym__name,
    STATE(81), 1,
      sym_variable_name,
    STATE(140), 1,
      aux_sym__keyValue_repeat1,
    STATE(142), 1,
      sym_comment,
  [3599] = 3,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3612] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(327), 1,
      sym__name,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(78), 1,
      sym_variable_name,
    STATE(144), 1,
      sym_comment,
  [3631] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(297), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      sym_key,
    STATE(135), 1,
      aux_sym__keyValue_repeat1,
    STATE(145), 1,
      sym_comment,
    STATE(153), 1,
      sym__keyValue,
  [3650] = 3,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3663] = 3,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3676] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(148), 1,
      sym_comment,
  [3695] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(327), 1,
      sym__name,
    STATE(84), 1,
      sym_variable_name,
    STATE(144), 1,
      aux_sym__keyValue_repeat1,
    STATE(149), 1,
      sym_comment,
  [3714] = 3,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3727] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(297), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      sym_key,
    STATE(90), 1,
      sym__keyValue,
    STATE(132), 1,
      aux_sym__keyValue_repeat1,
    STATE(151), 1,
      sym_comment,
  [3746] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__keyValue_token1,
    STATE(152), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3760] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    STATE(153), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3774] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(347), 1,
      aux_sym__keyValue_token1,
    STATE(154), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3788] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(351), 1,
      aux_sym__keyValue_token1,
    STATE(155), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3802] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(353), 1,
      aux_sym__keyValue_token1,
    STATE(156), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3816] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(357), 1,
      aux_sym__keyValue_token1,
    STATE(157), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3830] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(361), 1,
      sym_number,
    STATE(158), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym__keyValue_repeat1,
  [3846] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(363), 1,
      aux_sym__keyValue_token1,
    STATE(159), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3860] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(367), 1,
      aux_sym__keyValue_token1,
    STATE(160), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3874] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(371), 1,
      aux_sym__keyValue_token1,
    STATE(161), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3888] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(375), 1,
      aux_sym__keyValue_token1,
    STATE(162), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3902] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(377), 1,
      aux_sym__keyValue_token1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3916] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(381), 1,
      aux_sym__keyValue_token1,
    STATE(164), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3930] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(385), 1,
      aux_sym__keyValue_token1,
    STATE(165), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3944] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(389), 1,
      aux_sym__keyValue_token1,
    STATE(166), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3958] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(391), 1,
      aux_sym__keyValue_token1,
    STATE(167), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3972] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(395), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_POUND_GT,
    STATE(168), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_comment_repeat1,
  [3988] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(399), 1,
      aux_sym__keyValue_token1,
    STATE(169), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4002] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(395), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_POUND_GT,
    STATE(168), 1,
      aux_sym_comment_repeat1,
    STATE(170), 1,
      sym_comment,
  [4018] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(171), 1,
      sym_comment,
  [4034] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(405), 1,
      aux_sym__keyValue_token1,
    STATE(172), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4048] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(173), 1,
      sym_comment,
  [4064] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(409), 1,
      aux_sym__keyValue_token1,
    STATE(174), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4078] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(413), 1,
      sym_number,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(175), 1,
      sym_comment,
  [4094] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(415), 1,
      aux_sym__keyValue_token1,
    STATE(176), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4108] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(419), 1,
      aux_sym__keyValue_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4122] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(424), 1,
      anon_sym_POUND_GT,
    STATE(178), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [4136] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(395), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      anon_sym_POUND_GT,
    STATE(179), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_comment_repeat1,
  [4152] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(111), 1,
      sym_key,
    ACTIONS(428), 1,
      aux_sym__keyValue_token1,
    STATE(180), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
  [4166] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(190), 1,
      aux_sym__keyValue_token1,
    ACTIONS(231), 1,
      sym_pipe_separator,
    STATE(45), 1,
      aux_sym__keyValue_repeat1,
    STATE(181), 1,
      sym_comment,
  [4182] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(431), 1,
      aux_sym__keyValue_token1,
    STATE(182), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4196] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(435), 1,
      aux_sym__keyValue_token1,
    STATE(183), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4210] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(395), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      anon_sym_POUND_GT,
    STATE(178), 1,
      aux_sym_comment_repeat1,
    STATE(184), 1,
      sym_comment,
  [4226] = 3,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    STATE(185), 1,
      sym_comment,
    ACTIONS(439), 2,
      aux_sym_comment_token1,
      anon_sym_POUND_GT,
  [4237] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(124), 1,
      sym_key,
    ACTIONS(126), 1,
      aux_sym__keyValue_token1,
    STATE(186), 1,
      sym_comment,
  [4250] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(441), 1,
      sym_statement_close,
    STATE(187), 1,
      sym_comment,
  [4260] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
    STATE(188), 1,
      sym_comment,
  [4270] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(445), 1,
      sym_statement_close,
    STATE(189), 1,
      sym_comment,
  [4280] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(447), 1,
      sym_statement_close,
    STATE(190), 1,
      sym_comment,
  [4290] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(449), 1,
      anon_sym_COLON,
    STATE(191), 1,
      sym_comment,
  [4300] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(451), 1,
      sym_statement_close,
    STATE(192), 1,
      sym_comment,
  [4310] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(453), 1,
      sym_statement_close,
    STATE(193), 1,
      sym_comment,
  [4320] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [4324] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 264,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 398,
  [SMALL_STATE(17)] = 435,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 509,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 585,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 663,
  [SMALL_STATE(24)] = 698,
  [SMALL_STATE(25)] = 737,
  [SMALL_STATE(26)] = 776,
  [SMALL_STATE(27)] = 815,
  [SMALL_STATE(28)] = 849,
  [SMALL_STATE(29)] = 882,
  [SMALL_STATE(30)] = 915,
  [SMALL_STATE(31)] = 948,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1014,
  [SMALL_STATE(34)] = 1047,
  [SMALL_STATE(35)] = 1080,
  [SMALL_STATE(36)] = 1113,
  [SMALL_STATE(37)] = 1146,
  [SMALL_STATE(38)] = 1179,
  [SMALL_STATE(39)] = 1212,
  [SMALL_STATE(40)] = 1245,
  [SMALL_STATE(41)] = 1278,
  [SMALL_STATE(42)] = 1312,
  [SMALL_STATE(43)] = 1343,
  [SMALL_STATE(44)] = 1374,
  [SMALL_STATE(45)] = 1405,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1453,
  [SMALL_STATE(48)] = 1476,
  [SMALL_STATE(49)] = 1499,
  [SMALL_STATE(50)] = 1527,
  [SMALL_STATE(51)] = 1555,
  [SMALL_STATE(52)] = 1583,
  [SMALL_STATE(53)] = 1611,
  [SMALL_STATE(54)] = 1638,
  [SMALL_STATE(55)] = 1665,
  [SMALL_STATE(56)] = 1692,
  [SMALL_STATE(57)] = 1719,
  [SMALL_STATE(58)] = 1746,
  [SMALL_STATE(59)] = 1773,
  [SMALL_STATE(60)] = 1800,
  [SMALL_STATE(61)] = 1827,
  [SMALL_STATE(62)] = 1854,
  [SMALL_STATE(63)] = 1881,
  [SMALL_STATE(64)] = 1908,
  [SMALL_STATE(65)] = 1935,
  [SMALL_STATE(66)] = 1962,
  [SMALL_STATE(67)] = 1989,
  [SMALL_STATE(68)] = 2016,
  [SMALL_STATE(69)] = 2043,
  [SMALL_STATE(70)] = 2070,
  [SMALL_STATE(71)] = 2097,
  [SMALL_STATE(72)] = 2124,
  [SMALL_STATE(73)] = 2151,
  [SMALL_STATE(74)] = 2178,
  [SMALL_STATE(75)] = 2205,
  [SMALL_STATE(76)] = 2232,
  [SMALL_STATE(77)] = 2259,
  [SMALL_STATE(78)] = 2287,
  [SMALL_STATE(79)] = 2315,
  [SMALL_STATE(80)] = 2343,
  [SMALL_STATE(81)] = 2365,
  [SMALL_STATE(82)] = 2393,
  [SMALL_STATE(83)] = 2421,
  [SMALL_STATE(84)] = 2449,
  [SMALL_STATE(85)] = 2477,
  [SMALL_STATE(86)] = 2501,
  [SMALL_STATE(87)] = 2529,
  [SMALL_STATE(88)] = 2546,
  [SMALL_STATE(89)] = 2569,
  [SMALL_STATE(90)] = 2591,
  [SMALL_STATE(91)] = 2613,
  [SMALL_STATE(92)] = 2635,
  [SMALL_STATE(93)] = 2657,
  [SMALL_STATE(94)] = 2679,
  [SMALL_STATE(95)] = 2699,
  [SMALL_STATE(96)] = 2721,
  [SMALL_STATE(97)] = 2741,
  [SMALL_STATE(98)] = 2761,
  [SMALL_STATE(99)] = 2783,
  [SMALL_STATE(100)] = 2805,
  [SMALL_STATE(101)] = 2821,
  [SMALL_STATE(102)] = 2843,
  [SMALL_STATE(103)] = 2863,
  [SMALL_STATE(104)] = 2885,
  [SMALL_STATE(105)] = 2907,
  [SMALL_STATE(106)] = 2929,
  [SMALL_STATE(107)] = 2945,
  [SMALL_STATE(108)] = 2965,
  [SMALL_STATE(109)] = 2987,
  [SMALL_STATE(110)] = 3009,
  [SMALL_STATE(111)] = 3031,
  [SMALL_STATE(112)] = 3053,
  [SMALL_STATE(113)] = 3073,
  [SMALL_STATE(114)] = 3093,
  [SMALL_STATE(115)] = 3115,
  [SMALL_STATE(116)] = 3137,
  [SMALL_STATE(117)] = 3157,
  [SMALL_STATE(118)] = 3179,
  [SMALL_STATE(119)] = 3201,
  [SMALL_STATE(120)] = 3220,
  [SMALL_STATE(121)] = 3239,
  [SMALL_STATE(122)] = 3252,
  [SMALL_STATE(123)] = 3265,
  [SMALL_STATE(124)] = 3278,
  [SMALL_STATE(125)] = 3297,
  [SMALL_STATE(126)] = 3310,
  [SMALL_STATE(127)] = 3329,
  [SMALL_STATE(128)] = 3348,
  [SMALL_STATE(129)] = 3361,
  [SMALL_STATE(130)] = 3380,
  [SMALL_STATE(131)] = 3399,
  [SMALL_STATE(132)] = 3412,
  [SMALL_STATE(133)] = 3431,
  [SMALL_STATE(134)] = 3444,
  [SMALL_STATE(135)] = 3463,
  [SMALL_STATE(136)] = 3482,
  [SMALL_STATE(137)] = 3495,
  [SMALL_STATE(138)] = 3510,
  [SMALL_STATE(139)] = 3529,
  [SMALL_STATE(140)] = 3548,
  [SMALL_STATE(141)] = 3567,
  [SMALL_STATE(142)] = 3580,
  [SMALL_STATE(143)] = 3599,
  [SMALL_STATE(144)] = 3612,
  [SMALL_STATE(145)] = 3631,
  [SMALL_STATE(146)] = 3650,
  [SMALL_STATE(147)] = 3663,
  [SMALL_STATE(148)] = 3676,
  [SMALL_STATE(149)] = 3695,
  [SMALL_STATE(150)] = 3714,
  [SMALL_STATE(151)] = 3727,
  [SMALL_STATE(152)] = 3746,
  [SMALL_STATE(153)] = 3760,
  [SMALL_STATE(154)] = 3774,
  [SMALL_STATE(155)] = 3788,
  [SMALL_STATE(156)] = 3802,
  [SMALL_STATE(157)] = 3816,
  [SMALL_STATE(158)] = 3830,
  [SMALL_STATE(159)] = 3846,
  [SMALL_STATE(160)] = 3860,
  [SMALL_STATE(161)] = 3874,
  [SMALL_STATE(162)] = 3888,
  [SMALL_STATE(163)] = 3902,
  [SMALL_STATE(164)] = 3916,
  [SMALL_STATE(165)] = 3930,
  [SMALL_STATE(166)] = 3944,
  [SMALL_STATE(167)] = 3958,
  [SMALL_STATE(168)] = 3972,
  [SMALL_STATE(169)] = 3988,
  [SMALL_STATE(170)] = 4002,
  [SMALL_STATE(171)] = 4018,
  [SMALL_STATE(172)] = 4034,
  [SMALL_STATE(173)] = 4048,
  [SMALL_STATE(174)] = 4064,
  [SMALL_STATE(175)] = 4078,
  [SMALL_STATE(176)] = 4094,
  [SMALL_STATE(177)] = 4108,
  [SMALL_STATE(178)] = 4122,
  [SMALL_STATE(179)] = 4136,
  [SMALL_STATE(180)] = 4152,
  [SMALL_STATE(181)] = 4166,
  [SMALL_STATE(182)] = 4182,
  [SMALL_STATE(183)] = 4196,
  [SMALL_STATE(184)] = 4210,
  [SMALL_STATE(185)] = 4226,
  [SMALL_STATE(186)] = 4237,
  [SMALL_STATE(187)] = 4250,
  [SMALL_STATE(188)] = 4260,
  [SMALL_STATE(189)] = 4270,
  [SMALL_STATE(190)] = 4280,
  [SMALL_STATE(191)] = 4290,
  [SMALL_STATE(192)] = 4300,
  [SMALL_STATE(193)] = 4310,
  [SMALL_STATE(194)] = 4320,
  [SMALL_STATE(195)] = 4324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(30),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(14),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(149),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(35),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(106),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(32),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(151),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_close, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_close, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyValue_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(27),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyValue_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 7),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(47),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(48),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_automad_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(170),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(142),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(41),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automad, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(100),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(47),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(51),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 2), SHIFT_REPEAT(47),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 2), SHIFT_REPEAT(69),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(47),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(124),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 6),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 7),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_function_name, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_function_name, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 8),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 8),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_math, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_math, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 8),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 7),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 6),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 9),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 9),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyValue, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyValue, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 10),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 10),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 11),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 11),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_math, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_math, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyValue, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyValue, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 5),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(185),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(186),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [443] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_automad(void) {
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
