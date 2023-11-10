#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 4

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
  alias_sym_function = 63,
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
  [alias_sym_function] = "function",
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
  [alias_sym_function] = alias_sym_function,
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
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_function,
  },
  [2] = {
    [2] = alias_sym_function,
  },
  [3] = {
    [3] = alias_sym_function,
  },
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
  [57] = 34,
  [58] = 34,
  [59] = 39,
  [60] = 39,
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
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 90,
  [95] = 89,
  [96] = 96,
  [97] = 93,
  [98] = 91,
  [99] = 99,
  [100] = 34,
  [101] = 101,
  [102] = 102,
  [103] = 39,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 106,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 107,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 133,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 137,
  [148] = 27,
  [149] = 149,
  [150] = 29,
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
  [161] = 26,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 30,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 31,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 176,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 191,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 34,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 39,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 151,
  [228] = 155,
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
      if (lookahead == '.') ADVANCE(10);
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
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(11);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(9);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(192);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(10);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(77);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(83);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(179);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(176);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(95);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(164);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(173);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(161);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(94);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(91);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(78);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(85);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(92);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(158);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(80);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(90);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(154);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 's') ADVANCE(79);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 't') ADVANCE(82);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 't') ADVANCE(170);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '.') ADVANCE(10);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
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
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
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
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 68},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 68},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 68},
  [143] = {.lex_state = 68},
  [144] = {.lex_state = 68},
  [145] = {.lex_state = 68},
  [146] = {.lex_state = 68},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 68},
  [149] = {.lex_state = 68},
  [150] = {.lex_state = 68},
  [151] = {.lex_state = 68},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 68},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 68},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 68},
  [161] = {.lex_state = 68},
  [162] = {.lex_state = 68},
  [163] = {.lex_state = 68},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 68},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 68},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 68},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 68},
  [173] = {.lex_state = 68},
  [174] = {.lex_state = 68},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 62},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 62},
  [191] = {.lex_state = 62},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 62},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 62},
  [209] = {.lex_state = 62},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {(TSStateId)(-1)},
  [228] = {(TSStateId)(-1)},
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
    [sym_automad] = STATE(218),
    [sym_comment] = STATE(1),
    [sym_variable] = STATE(96),
    [sym_statement] = STATE(96),
    [aux_sym_automad_repeat1] = STATE(96),
    [anon_sym_LT_POUND] = ACTIONS(5),
    [sym_variable_open] = ACTIONS(7),
    [sym_statement_open] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(20),
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
    [anon_sym_TILDE] = ACTIONS(31),
    [sym_statement_close] = ACTIONS(33),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(23),
    [aux_sym_statement_repeat1] = STATE(2),
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
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(22),
    [aux_sym_statement_repeat1] = STATE(12),
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
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_statement_close] = ACTIONS(41),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(25),
    [aux_sym_statement_repeat1] = STATE(5),
    [anon_sym_LT_POUND] = ACTIONS(13),
    [sym__name] = ACTIONS(43),
    [aux_sym__keyValue_token1] = ACTIONS(46),
    [sym_string] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [sym_boolean] = ACTIONS(49),
    [sym_variable_open] = ACTIONS(52),
    [anon_sym_for] = ACTIONS(55),
    [anon_sym_to] = ACTIONS(55),
    [anon_sym_foreach] = ACTIONS(55),
    [anon_sym_in] = ACTIONS(55),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_snippet] = ACTIONS(55),
    [anon_sym_with] = ACTIONS(55),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(58),
    [anon_sym_not] = ACTIONS(58),
    [anon_sym_pagelist] = ACTIONS(61),
    [anon_sym_filelist] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(67),
    [sym_statement_close] = ACTIONS(67),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(15),
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
    [anon_sym_TILDE] = ACTIONS(69),
    [sym_statement_close] = ACTIONS(71),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(18),
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
    [anon_sym_TILDE] = ACTIONS(73),
    [sym_statement_close] = ACTIONS(75),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(17),
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
    [anon_sym_TILDE] = ACTIONS(77),
    [sym_statement_close] = ACTIONS(79),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(16),
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
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_statement_close] = ACTIONS(83),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(22),
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
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_statement_close] = ACTIONS(41),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(19),
    [aux_sym_statement_repeat1] = STATE(9),
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
    [anon_sym_TILDE] = ACTIONS(85),
    [sym_statement_close] = ACTIONS(87),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(15),
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
  [13] = {
    [sym_comment] = STATE(13),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(24),
    [aux_sym_statement_repeat1] = STATE(10),
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
    [anon_sym_TILDE] = ACTIONS(89),
    [sym_statement_close] = ACTIONS(91),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [sym__value] = STATE(36),
    [sym_variable] = STATE(28),
    [sym_keyword] = STATE(44),
    [sym_negation] = STATE(77),
    [sym_expression] = STATE(44),
    [sym_options] = STATE(44),
    [aux_sym__keyValue_repeat1] = STATE(21),
    [aux_sym_statement_repeat1] = STATE(7),
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
    [anon_sym_TILDE] = ACTIONS(93),
    [sym_statement_close] = ACTIONS(95),
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
    ACTIONS(77), 1,
      anon_sym_TILDE,
    ACTIONS(79), 1,
      sym_statement_close,
    ACTIONS(97), 1,
      sym__name,
    STATE(15), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
    ACTIONS(97), 1,
      sym__name,
    ACTIONS(99), 1,
      anon_sym_TILDE,
    ACTIONS(101), 1,
      sym_statement_close,
    STATE(16), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
    ACTIONS(97), 1,
      sym__name,
    ACTIONS(103), 1,
      anon_sym_TILDE,
    ACTIONS(105), 1,
      sym_statement_close,
    STATE(17), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
    ACTIONS(97), 1,
      sym__name,
    ACTIONS(107), 1,
      anon_sym_TILDE,
    ACTIONS(109), 1,
      sym_statement_close,
    STATE(18), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [264] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_TILDE,
    ACTIONS(83), 1,
      sym_statement_close,
    ACTIONS(97), 1,
      sym__name,
    STATE(19), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [330] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym__name,
    ACTIONS(111), 1,
      anon_sym_TILDE,
    ACTIONS(113), 1,
      sym_statement_close,
    STATE(20), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [396] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_TILDE,
    ACTIONS(75), 1,
      sym_statement_close,
    ACTIONS(97), 1,
      sym__name,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [462] = 17,
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
    ACTIONS(97), 1,
      sym__name,
    STATE(22), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [528] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      sym_statement_close,
    ACTIONS(97), 1,
      sym__name,
    STATE(23), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [594] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      sym_statement_close,
    ACTIONS(97), 1,
      sym__name,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [660] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      sym__name,
    STATE(25), 1,
      sym_comment,
    STATE(28), 1,
      sym_variable,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
      sym__value,
    STATE(77), 1,
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
    STATE(51), 3,
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
  [720] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(117), 1,
      aux_sym__keyValue_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(115), 25,
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
  [757] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(121), 1,
      aux_sym__keyValue_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(119), 25,
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
  [794] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(125), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(123), 25,
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
  [831] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(129), 1,
      aux_sym__keyValue_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(127), 25,
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
  [868] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(133), 1,
      aux_sym__keyValue_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(131), 25,
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
  [905] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(137), 1,
      aux_sym__keyValue_token1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(135), 25,
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
  [942] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(141), 1,
      sym_operator,
    STATE(32), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(139), 21,
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
  [981] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(141), 1,
      sym_operator,
    STATE(33), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(139), 21,
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
  [1020] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(145), 1,
      aux_sym__keyValue_token1,
    STATE(34), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(143), 22,
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
  [1055] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(150), 1,
      sym_operator,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(148), 21,
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
  [1094] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(154), 1,
      sym_operator,
    STATE(35), 1,
      aux_sym__keyValue_repeat1,
    STATE(36), 1,
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
  [1133] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(150), 1,
      sym_operator,
    STATE(33), 1,
      aux_sym__keyValue_repeat1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(148), 21,
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
  [1172] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__keyValue_token1,
    ACTIONS(158), 1,
      sym_operator,
    STATE(34), 1,
      aux_sym__keyValue_repeat1,
    STATE(38), 1,
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
  [1211] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(162), 1,
      aux_sym__keyValue_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(160), 22,
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
  [1245] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(166), 1,
      aux_sym__keyValue_token1,
    STATE(40), 1,
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
  [1278] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(170), 1,
      aux_sym__keyValue_token1,
    STATE(41), 1,
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
  [1311] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(172), 1,
      aux_sym__keyValue_token1,
    STATE(42), 1,
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
  [1344] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(176), 1,
      aux_sym__keyValue_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(174), 21,
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
  [1377] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(180), 1,
      aux_sym__keyValue_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(178), 21,
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
  [1410] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(182), 1,
      aux_sym__keyValue_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(139), 21,
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
  [1443] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(184), 1,
      aux_sym__keyValue_token1,
    STATE(46), 1,
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
  [1476] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      aux_sym__keyValue_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(186), 21,
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
  [1509] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(192), 1,
      aux_sym__keyValue_token1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(190), 21,
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
  [1542] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(196), 1,
      aux_sym__keyValue_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(194), 21,
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
  [1575] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(200), 1,
      aux_sym__keyValue_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(198), 21,
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
  [1608] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(202), 1,
      aux_sym__keyValue_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(67), 21,
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
  [1641] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(206), 1,
      aux_sym__keyValue_token1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(204), 21,
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
  [1674] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(208), 1,
      sym__name,
    ACTIONS(210), 1,
      aux_sym__keyValue_token1,
    ACTIONS(212), 1,
      sym_include,
    ACTIONS(214), 1,
      anon_sym_TILDE,
    STATE(13), 1,
      sym_keyword,
    STATE(53), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__keyValue_repeat1,
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
  [1710] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(210), 1,
      aux_sym__keyValue_token1,
    ACTIONS(216), 1,
      sym__name,
    ACTIONS(218), 1,
      sym_include,
    STATE(6), 1,
      sym_keyword,
    STATE(54), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__keyValue_repeat1,
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
  [1743] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(210), 1,
      aux_sym__keyValue_token1,
    ACTIONS(220), 1,
      sym__name,
    ACTIONS(222), 1,
      sym_include,
    STATE(4), 1,
      sym_keyword,
    STATE(55), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__keyValue_repeat1,
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
  [1776] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(210), 1,
      aux_sym__keyValue_token1,
    ACTIONS(220), 1,
      sym__name,
    ACTIONS(222), 1,
      sym_include,
    STATE(4), 1,
      sym_keyword,
    STATE(54), 1,
      aux_sym__keyValue_repeat1,
    STATE(56), 1,
      sym_comment,
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
  [1809] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(224), 1,
      aux_sym__keyValue_token1,
    STATE(57), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(143), 11,
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
  [1833] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(227), 1,
      aux_sym__keyValue_token1,
    STATE(58), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(143), 11,
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
  [1857] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(162), 1,
      aux_sym__keyValue_token1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(160), 11,
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
  [1880] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(162), 1,
      aux_sym__keyValue_token1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(160), 11,
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
  [1903] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    STATE(61), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym__keyValue_repeat1,
    STATE(122), 1,
      sym_pipe_function_name,
    STATE(182), 1,
      sym_pipe_math,
    ACTIONS(234), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1931] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(120), 1,
      sym_pipe_function_name,
    STATE(180), 1,
      sym_pipe_math,
    ACTIONS(234), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1959] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(63), 1,
      sym_comment,
    STATE(124), 1,
      sym_pipe_function_name,
    STATE(178), 1,
      sym_pipe_math,
    ACTIONS(234), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [1987] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(230), 1,
      sym__name,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    STATE(62), 1,
      aux_sym__keyValue_repeat1,
    STATE(64), 1,
      sym_comment,
    STATE(124), 1,
      sym_pipe_function_name,
    STATE(178), 1,
      sym_pipe_math,
    ACTIONS(234), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2015] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(47), 1,
      sym__value,
    STATE(65), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2042] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(66), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__keyValue_repeat1,
    STATE(101), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2069] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(67), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym__keyValue_repeat1,
    STATE(183), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2096] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(68), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(183), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2123] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(69), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(123), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2150] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(43), 1,
      sym__value,
    STATE(70), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2177] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(71), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym__keyValue_repeat1,
    STATE(123), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2204] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(46), 1,
      sym__value,
    STATE(65), 1,
      aux_sym__keyValue_repeat1,
    STATE(72), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2231] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(47), 1,
      sym__value,
    STATE(73), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2258] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(68), 1,
      aux_sym__keyValue_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(187), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2285] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(75), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(101), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2312] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(43), 1,
      sym__value,
    STATE(76), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2339] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(37), 1,
      sym__value,
    STATE(77), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2366] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(50), 1,
      sym__value,
    STATE(78), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2393] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(79), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(192), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2420] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(80), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(111), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2447] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(46), 1,
      sym__value,
    STATE(81), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2474] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(82), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym__keyValue_repeat1,
    STATE(121), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2501] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(83), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(196), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2528] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(69), 1,
      aux_sym__keyValue_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(126), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2555] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(85), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    STATE(126), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2582] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(32), 1,
      sym__value,
    STATE(86), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2609] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(45), 1,
      sym__value,
    STATE(81), 1,
      aux_sym__keyValue_repeat1,
    STATE(87), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2636] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(236), 1,
      aux_sym__keyValue_token1,
    STATE(28), 1,
      sym_variable,
    STATE(83), 1,
      aux_sym__keyValue_repeat1,
    STATE(88), 1,
      sym_comment,
    STATE(197), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2663] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      sym_pipe_separator,
    STATE(89), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_variable_repeat1,
    STATE(115), 1,
      aux_sym__keyValue_repeat1,
    STATE(166), 1,
      sym_variable_close,
    STATE(207), 1,
      sym__pipe,
  [2691] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      sym_pipe_separator,
    STATE(90), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_variable_repeat1,
    STATE(127), 1,
      aux_sym__keyValue_repeat1,
    STATE(161), 1,
      sym_variable_close,
    STATE(207), 1,
      sym__pipe,
  [2719] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(240), 1,
      sym_pipe_separator,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_variable_close,
    STATE(91), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_variable_repeat1,
    STATE(107), 1,
      aux_sym__keyValue_repeat1,
    STATE(207), 1,
      sym__pipe,
  [2747] = 6,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_LT_POUND,
    ACTIONS(249), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      sym_statement_open,
    ACTIONS(255), 1,
      sym_text,
    STATE(92), 4,
      sym_comment,
      sym_variable,
      sym_statement,
      aux_sym_automad_repeat1,
  [2769] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      sym_pipe_separator,
    STATE(90), 1,
      aux_sym_variable_repeat1,
    STATE(93), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym__keyValue_repeat1,
    STATE(150), 1,
      sym_variable_close,
    STATE(207), 1,
      sym__pipe,
  [2797] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(240), 1,
      sym_pipe_separator,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_variable_close,
    STATE(94), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_variable_repeat1,
    STATE(107), 1,
      aux_sym__keyValue_repeat1,
    STATE(207), 1,
      sym__pipe,
  [2825] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(240), 1,
      sym_pipe_separator,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_variable_close,
    STATE(95), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_variable_repeat1,
    STATE(106), 1,
      aux_sym__keyValue_repeat1,
    STATE(207), 1,
      sym__pipe,
  [2853] = 7,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(9), 1,
      sym_statement_open,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      sym_text,
    STATE(96), 1,
      sym_comment,
    STATE(92), 3,
      sym_variable,
      sym_statement,
      aux_sym_automad_repeat1,
  [2877] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(240), 1,
      sym_pipe_separator,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_variable_close,
    STATE(94), 1,
      aux_sym_variable_repeat1,
    STATE(97), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym__keyValue_repeat1,
    STATE(207), 1,
      sym__pipe,
  [2905] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      sym_pipe_separator,
    STATE(89), 1,
      aux_sym_variable_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__keyValue_repeat1,
    STATE(161), 1,
      sym_variable_close,
    STATE(207), 1,
      sym__pipe,
  [2933] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(262), 1,
      aux_sym__keyValue_token1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      sym_pipe_separator,
    STATE(194), 1,
      aux_sym__keyValue_repeat1,
    STATE(207), 1,
      sym__pipe,
    STATE(99), 2,
      sym_comment,
      aux_sym_variable_repeat1,
  [2956] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(270), 1,
      aux_sym__keyValue_token1,
    STATE(100), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
    ACTIONS(143), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [2973] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym__pipe_repeat1,
    STATE(164), 1,
      aux_sym__keyValue_repeat1,
  [2995] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(277), 1,
      aux_sym__keyValue_token1,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym__keyValue_repeat1,
    STATE(102), 2,
      sym_comment,
      aux_sym__pipe_repeat1,
  [3015] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(162), 1,
      aux_sym__keyValue_token1,
    STATE(103), 1,
      sym_comment,
    ACTIONS(160), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [3031] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_options_repeat1,
    STATE(136), 1,
      aux_sym__keyValue_repeat1,
  [3053] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_options_repeat1,
    STATE(136), 1,
      aux_sym__keyValue_repeat1,
  [3075] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(31), 1,
      sym_variable_close,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(106), 1,
      sym_comment,
  [3097] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(30), 1,
      sym_variable_close,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(107), 1,
      sym_comment,
  [3119] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(26), 1,
      sym_variable_close,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(108), 1,
      sym_comment,
  [3141] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(109), 1,
      sym_comment,
    STATE(161), 1,
      sym_variable_close,
  [3163] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym__keyValue_repeat1,
  [3185] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__pipe_repeat1,
    STATE(111), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__keyValue_repeat1,
  [3207] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(112), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__keyValue_repeat1,
  [3229] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(295), 1,
      aux_sym__keyValue_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(297), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [3245] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_options_repeat1,
    STATE(159), 1,
      aux_sym__keyValue_repeat1,
  [3267] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(172), 1,
      sym_variable_close,
  [3289] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym__keyValue_repeat1,
  [3311] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3331] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(118), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym__keyValue_repeat1,
  [3353] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(119), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3373] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      aux_sym__keyValue_repeat1,
    STATE(120), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3393] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__pipe_repeat1,
    STATE(152), 1,
      aux_sym__keyValue_repeat1,
  [3415] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym__keyValue_repeat1,
    ACTIONS(315), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3435] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym__pipe_repeat1,
    STATE(123), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym__keyValue_repeat1,
  [3457] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      aux_sym__keyValue_repeat1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3477] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__pipe_repeat1,
    STATE(125), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym__keyValue_repeat1,
  [3499] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym__pipe_repeat1,
    STATE(126), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym__keyValue_repeat1,
  [3521] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(127), 1,
      sym_comment,
    STATE(166), 1,
      sym_variable_close,
  [3543] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(128), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3563] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_options_repeat1,
    STATE(129), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym__keyValue_repeat1,
  [3585] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(325), 1,
      aux_sym__keyValue_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym__keyValue_repeat1,
    STATE(130), 2,
      sym_comment,
      aux_sym_options_repeat1,
  [3605] = 3,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3618] = 3,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3631] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(341), 1,
      sym__name,
    STATE(97), 1,
      sym_variable_name,
    STATE(133), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym__keyValue_repeat1,
  [3650] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    ACTIONS(345), 1,
      sym_key,
    STATE(134), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym__keyValue_repeat1,
    STATE(201), 1,
      sym__keyValue,
  [3669] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    ACTIONS(345), 1,
      sym_key,
    STATE(135), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym__keyValue_repeat1,
    STATE(201), 1,
      sym__keyValue,
  [3688] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(136), 1,
      sym_comment,
  [3707] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(341), 1,
      sym__name,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(91), 1,
      sym_variable_name,
    STATE(137), 1,
      sym_comment,
  [3726] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(341), 1,
      sym__name,
    STATE(93), 1,
      sym_variable_name,
    STATE(138), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym__keyValue_repeat1,
  [3745] = 3,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_comment,
    ACTIONS(351), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3758] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(140), 1,
      sym_comment,
  [3777] = 3,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3790] = 3,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3803] = 3,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_comment,
    ACTIONS(363), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3816] = 3,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(144), 1,
      sym_comment,
    ACTIONS(367), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3829] = 3,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    STATE(145), 1,
      sym_comment,
    ACTIONS(371), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3842] = 3,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_comment,
    ACTIONS(375), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3855] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(341), 1,
      sym__name,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(98), 1,
      sym_variable_name,
    STATE(147), 1,
      sym_comment,
  [3874] = 3,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_comment,
    ACTIONS(119), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3887] = 3,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_comment,
    ACTIONS(379), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3900] = 3,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3913] = 3,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_comment,
    ACTIONS(383), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3926] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(152), 1,
      sym_comment,
  [3945] = 3,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3958] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    ACTIONS(345), 1,
      sym_key,
    STATE(105), 1,
      sym__keyValue,
    STATE(154), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym__keyValue_repeat1,
  [3977] = 3,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [3990] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(156), 1,
      sym_comment,
  [4009] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    ACTIONS(345), 1,
      sym_key,
    STATE(157), 1,
      sym_comment,
    STATE(199), 1,
      aux_sym__keyValue_repeat1,
    STATE(202), 1,
      sym__keyValue,
  [4028] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(158), 1,
      sym_comment,
  [4047] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(159), 1,
      sym_comment,
  [4066] = 3,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(160), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4079] = 3,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4092] = 3,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    STATE(162), 1,
      sym_comment,
    ACTIONS(405), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4105] = 3,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    STATE(163), 1,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4118] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(164), 1,
      sym_comment,
  [4137] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    ACTIONS(345), 1,
      sym_key,
    STATE(129), 1,
      sym__keyValue,
    STATE(154), 1,
      aux_sym__keyValue_repeat1,
    STATE(165), 1,
      sym_comment,
  [4156] = 3,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_comment,
    ACTIONS(131), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4169] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(167), 1,
      sym_comment,
  [4188] = 3,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    STATE(168), 1,
      sym_comment,
    ACTIONS(413), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4201] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(343), 1,
      aux_sym__keyValue_token1,
    ACTIONS(345), 1,
      sym_key,
    STATE(134), 1,
      aux_sym__keyValue_repeat1,
    STATE(169), 1,
      sym_comment,
    STATE(179), 1,
      sym__keyValue,
  [4220] = 3,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_comment,
    ACTIONS(417), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4233] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(171), 1,
      sym_comment,
  [4252] = 3,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(172), 1,
      sym_comment,
    ACTIONS(135), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4265] = 3,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_comment,
    ACTIONS(421), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4278] = 3,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
    STATE(174), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_LT_POUND,
      sym_variable_open,
      sym_statement_open,
      sym_text,
  [4291] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(427), 1,
      aux_sym__keyValue_token1,
    STATE(175), 1,
      sym_comment,
    ACTIONS(429), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4306] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(431), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_POUND_GT,
    STATE(176), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_comment_repeat1,
  [4322] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(435), 1,
      aux_sym__keyValue_token1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4336] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(439), 1,
      aux_sym__keyValue_token1,
    STATE(178), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4350] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(441), 1,
      aux_sym__keyValue_token1,
    STATE(179), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4364] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(443), 1,
      aux_sym__keyValue_token1,
    STATE(180), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4378] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(445), 1,
      aux_sym__keyValue_token1,
    STATE(181), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4392] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(449), 1,
      aux_sym__keyValue_token1,
    STATE(182), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4406] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(451), 1,
      aux_sym__keyValue_token1,
    STATE(183), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4420] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(455), 1,
      sym_number,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(184), 1,
      sym_comment,
  [4436] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(457), 1,
      aux_sym__keyValue_token1,
    STATE(185), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4450] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(186), 1,
      sym_comment,
  [4466] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(461), 1,
      aux_sym__keyValue_token1,
    STATE(187), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4480] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(463), 1,
      aux_sym__keyValue_token1,
    STATE(188), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4494] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(467), 1,
      aux_sym__keyValue_token1,
    STATE(189), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4508] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(431), 1,
      aux_sym_comment_token1,
    ACTIONS(471), 1,
      anon_sym_POUND_GT,
    STATE(190), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_comment_repeat1,
  [4524] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(431), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      anon_sym_POUND_GT,
    STATE(176), 1,
      aux_sym_comment_repeat1,
    STATE(191), 1,
      sym_comment,
  [4540] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(475), 1,
      aux_sym__keyValue_token1,
    STATE(192), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4554] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(479), 1,
      aux_sym__keyValue_token1,
    STATE(193), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4568] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(289), 1,
      sym_pipe_separator,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(194), 1,
      sym_comment,
  [4584] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(431), 1,
      aux_sym_comment_token1,
    ACTIONS(483), 1,
      anon_sym_POUND_GT,
    STATE(190), 1,
      aux_sym_comment_repeat1,
    STATE(195), 1,
      sym_comment,
  [4600] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(485), 1,
      aux_sym__keyValue_token1,
    STATE(196), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4614] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(489), 1,
      aux_sym__keyValue_token1,
    STATE(197), 1,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4628] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__keyValue_repeat1,
    STATE(198), 1,
      sym_comment,
  [4644] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(143), 1,
      sym_key,
    ACTIONS(493), 1,
      aux_sym__keyValue_token1,
    STATE(199), 2,
      sym_comment,
      aux_sym__keyValue_repeat1,
  [4658] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(496), 1,
      aux_sym__keyValue_token1,
    STATE(200), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4672] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(500), 1,
      aux_sym__keyValue_token1,
    STATE(201), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4686] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(504), 1,
      aux_sym__keyValue_token1,
    STATE(202), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4700] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(232), 1,
      aux_sym__keyValue_token1,
    ACTIONS(508), 1,
      sym_number,
    STATE(184), 1,
      aux_sym__keyValue_repeat1,
    STATE(203), 1,
      sym_comment,
  [4716] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(510), 1,
      aux_sym__keyValue_token1,
    STATE(204), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4730] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(514), 1,
      aux_sym__keyValue_token1,
    STATE(205), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4744] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(516), 1,
      aux_sym__keyValue_token1,
    STATE(206), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4758] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(520), 1,
      aux_sym__keyValue_token1,
    STATE(207), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4772] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(524), 1,
      aux_sym_comment_token1,
    ACTIONS(527), 1,
      anon_sym_POUND_GT,
    STATE(208), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [4786] = 3,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    STATE(209), 1,
      sym_comment,
    ACTIONS(529), 2,
      aux_sym_comment_token1,
      anon_sym_POUND_GT,
  [4797] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(160), 1,
      sym_key,
    ACTIONS(162), 1,
      aux_sym__keyValue_token1,
    STATE(210), 1,
      sym_comment,
  [4810] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(531), 1,
      sym_statement_close,
    STATE(211), 1,
      sym_comment,
  [4820] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(533), 1,
      sym_statement_close,
    STATE(212), 1,
      sym_comment,
  [4830] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(535), 1,
      sym_statement_close,
    STATE(213), 1,
      sym_comment,
  [4840] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(537), 1,
      sym_statement_close,
    STATE(214), 1,
      sym_comment,
  [4850] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(539), 1,
      sym_statement_close,
    STATE(215), 1,
      sym_comment,
  [4860] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(541), 1,
      sym_statement_close,
    STATE(216), 1,
      sym_comment,
  [4870] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(543), 1,
      sym_statement_close,
    STATE(217), 1,
      sym_comment,
  [4880] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    STATE(218), 1,
      sym_comment,
  [4890] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(547), 1,
      sym_statement_close,
    STATE(219), 1,
      sym_comment,
  [4900] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(549), 1,
      sym_statement_close,
    STATE(220), 1,
      sym_comment,
  [4910] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(551), 1,
      sym_statement_close,
    STATE(221), 1,
      sym_comment,
  [4920] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(553), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [4930] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(555), 1,
      sym_statement_close,
    STATE(223), 1,
      sym_comment,
  [4940] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(557), 1,
      sym_statement_close,
    STATE(224), 1,
      sym_comment,
  [4950] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(559), 1,
      sym_statement_close,
    STATE(225), 1,
      sym_comment,
  [4960] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(561), 1,
      sym_statement_close,
    STATE(226), 1,
      sym_comment,
  [4970] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [4974] = 1,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 66,
  [SMALL_STATE(17)] = 132,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 330,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 462,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 594,
  [SMALL_STATE(25)] = 660,
  [SMALL_STATE(26)] = 720,
  [SMALL_STATE(27)] = 757,
  [SMALL_STATE(28)] = 794,
  [SMALL_STATE(29)] = 831,
  [SMALL_STATE(30)] = 868,
  [SMALL_STATE(31)] = 905,
  [SMALL_STATE(32)] = 942,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1020,
  [SMALL_STATE(35)] = 1055,
  [SMALL_STATE(36)] = 1094,
  [SMALL_STATE(37)] = 1133,
  [SMALL_STATE(38)] = 1172,
  [SMALL_STATE(39)] = 1211,
  [SMALL_STATE(40)] = 1245,
  [SMALL_STATE(41)] = 1278,
  [SMALL_STATE(42)] = 1311,
  [SMALL_STATE(43)] = 1344,
  [SMALL_STATE(44)] = 1377,
  [SMALL_STATE(45)] = 1410,
  [SMALL_STATE(46)] = 1443,
  [SMALL_STATE(47)] = 1476,
  [SMALL_STATE(48)] = 1509,
  [SMALL_STATE(49)] = 1542,
  [SMALL_STATE(50)] = 1575,
  [SMALL_STATE(51)] = 1608,
  [SMALL_STATE(52)] = 1641,
  [SMALL_STATE(53)] = 1674,
  [SMALL_STATE(54)] = 1710,
  [SMALL_STATE(55)] = 1743,
  [SMALL_STATE(56)] = 1776,
  [SMALL_STATE(57)] = 1809,
  [SMALL_STATE(58)] = 1833,
  [SMALL_STATE(59)] = 1857,
  [SMALL_STATE(60)] = 1880,
  [SMALL_STATE(61)] = 1903,
  [SMALL_STATE(62)] = 1931,
  [SMALL_STATE(63)] = 1959,
  [SMALL_STATE(64)] = 1987,
  [SMALL_STATE(65)] = 2015,
  [SMALL_STATE(66)] = 2042,
  [SMALL_STATE(67)] = 2069,
  [SMALL_STATE(68)] = 2096,
  [SMALL_STATE(69)] = 2123,
  [SMALL_STATE(70)] = 2150,
  [SMALL_STATE(71)] = 2177,
  [SMALL_STATE(72)] = 2204,
  [SMALL_STATE(73)] = 2231,
  [SMALL_STATE(74)] = 2258,
  [SMALL_STATE(75)] = 2285,
  [SMALL_STATE(76)] = 2312,
  [SMALL_STATE(77)] = 2339,
  [SMALL_STATE(78)] = 2366,
  [SMALL_STATE(79)] = 2393,
  [SMALL_STATE(80)] = 2420,
  [SMALL_STATE(81)] = 2447,
  [SMALL_STATE(82)] = 2474,
  [SMALL_STATE(83)] = 2501,
  [SMALL_STATE(84)] = 2528,
  [SMALL_STATE(85)] = 2555,
  [SMALL_STATE(86)] = 2582,
  [SMALL_STATE(87)] = 2609,
  [SMALL_STATE(88)] = 2636,
  [SMALL_STATE(89)] = 2663,
  [SMALL_STATE(90)] = 2691,
  [SMALL_STATE(91)] = 2719,
  [SMALL_STATE(92)] = 2747,
  [SMALL_STATE(93)] = 2769,
  [SMALL_STATE(94)] = 2797,
  [SMALL_STATE(95)] = 2825,
  [SMALL_STATE(96)] = 2853,
  [SMALL_STATE(97)] = 2877,
  [SMALL_STATE(98)] = 2905,
  [SMALL_STATE(99)] = 2933,
  [SMALL_STATE(100)] = 2956,
  [SMALL_STATE(101)] = 2973,
  [SMALL_STATE(102)] = 2995,
  [SMALL_STATE(103)] = 3015,
  [SMALL_STATE(104)] = 3031,
  [SMALL_STATE(105)] = 3053,
  [SMALL_STATE(106)] = 3075,
  [SMALL_STATE(107)] = 3097,
  [SMALL_STATE(108)] = 3119,
  [SMALL_STATE(109)] = 3141,
  [SMALL_STATE(110)] = 3163,
  [SMALL_STATE(111)] = 3185,
  [SMALL_STATE(112)] = 3207,
  [SMALL_STATE(113)] = 3229,
  [SMALL_STATE(114)] = 3245,
  [SMALL_STATE(115)] = 3267,
  [SMALL_STATE(116)] = 3289,
  [SMALL_STATE(117)] = 3311,
  [SMALL_STATE(118)] = 3331,
  [SMALL_STATE(119)] = 3353,
  [SMALL_STATE(120)] = 3373,
  [SMALL_STATE(121)] = 3393,
  [SMALL_STATE(122)] = 3415,
  [SMALL_STATE(123)] = 3435,
  [SMALL_STATE(124)] = 3457,
  [SMALL_STATE(125)] = 3477,
  [SMALL_STATE(126)] = 3499,
  [SMALL_STATE(127)] = 3521,
  [SMALL_STATE(128)] = 3543,
  [SMALL_STATE(129)] = 3563,
  [SMALL_STATE(130)] = 3585,
  [SMALL_STATE(131)] = 3605,
  [SMALL_STATE(132)] = 3618,
  [SMALL_STATE(133)] = 3631,
  [SMALL_STATE(134)] = 3650,
  [SMALL_STATE(135)] = 3669,
  [SMALL_STATE(136)] = 3688,
  [SMALL_STATE(137)] = 3707,
  [SMALL_STATE(138)] = 3726,
  [SMALL_STATE(139)] = 3745,
  [SMALL_STATE(140)] = 3758,
  [SMALL_STATE(141)] = 3777,
  [SMALL_STATE(142)] = 3790,
  [SMALL_STATE(143)] = 3803,
  [SMALL_STATE(144)] = 3816,
  [SMALL_STATE(145)] = 3829,
  [SMALL_STATE(146)] = 3842,
  [SMALL_STATE(147)] = 3855,
  [SMALL_STATE(148)] = 3874,
  [SMALL_STATE(149)] = 3887,
  [SMALL_STATE(150)] = 3900,
  [SMALL_STATE(151)] = 3913,
  [SMALL_STATE(152)] = 3926,
  [SMALL_STATE(153)] = 3945,
  [SMALL_STATE(154)] = 3958,
  [SMALL_STATE(155)] = 3977,
  [SMALL_STATE(156)] = 3990,
  [SMALL_STATE(157)] = 4009,
  [SMALL_STATE(158)] = 4028,
  [SMALL_STATE(159)] = 4047,
  [SMALL_STATE(160)] = 4066,
  [SMALL_STATE(161)] = 4079,
  [SMALL_STATE(162)] = 4092,
  [SMALL_STATE(163)] = 4105,
  [SMALL_STATE(164)] = 4118,
  [SMALL_STATE(165)] = 4137,
  [SMALL_STATE(166)] = 4156,
  [SMALL_STATE(167)] = 4169,
  [SMALL_STATE(168)] = 4188,
  [SMALL_STATE(169)] = 4201,
  [SMALL_STATE(170)] = 4220,
  [SMALL_STATE(171)] = 4233,
  [SMALL_STATE(172)] = 4252,
  [SMALL_STATE(173)] = 4265,
  [SMALL_STATE(174)] = 4278,
  [SMALL_STATE(175)] = 4291,
  [SMALL_STATE(176)] = 4306,
  [SMALL_STATE(177)] = 4322,
  [SMALL_STATE(178)] = 4336,
  [SMALL_STATE(179)] = 4350,
  [SMALL_STATE(180)] = 4364,
  [SMALL_STATE(181)] = 4378,
  [SMALL_STATE(182)] = 4392,
  [SMALL_STATE(183)] = 4406,
  [SMALL_STATE(184)] = 4420,
  [SMALL_STATE(185)] = 4436,
  [SMALL_STATE(186)] = 4450,
  [SMALL_STATE(187)] = 4466,
  [SMALL_STATE(188)] = 4480,
  [SMALL_STATE(189)] = 4494,
  [SMALL_STATE(190)] = 4508,
  [SMALL_STATE(191)] = 4524,
  [SMALL_STATE(192)] = 4540,
  [SMALL_STATE(193)] = 4554,
  [SMALL_STATE(194)] = 4568,
  [SMALL_STATE(195)] = 4584,
  [SMALL_STATE(196)] = 4600,
  [SMALL_STATE(197)] = 4614,
  [SMALL_STATE(198)] = 4628,
  [SMALL_STATE(199)] = 4644,
  [SMALL_STATE(200)] = 4658,
  [SMALL_STATE(201)] = 4672,
  [SMALL_STATE(202)] = 4686,
  [SMALL_STATE(203)] = 4700,
  [SMALL_STATE(204)] = 4716,
  [SMALL_STATE(205)] = 4730,
  [SMALL_STATE(206)] = 4744,
  [SMALL_STATE(207)] = 4758,
  [SMALL_STATE(208)] = 4772,
  [SMALL_STATE(209)] = 4786,
  [SMALL_STATE(210)] = 4797,
  [SMALL_STATE(211)] = 4810,
  [SMALL_STATE(212)] = 4820,
  [SMALL_STATE(213)] = 4830,
  [SMALL_STATE(214)] = 4840,
  [SMALL_STATE(215)] = 4850,
  [SMALL_STATE(216)] = 4860,
  [SMALL_STATE(217)] = 4870,
  [SMALL_STATE(218)] = 4880,
  [SMALL_STATE(219)] = 4890,
  [SMALL_STATE(220)] = 4900,
  [SMALL_STATE(221)] = 4910,
  [SMALL_STATE(222)] = 4920,
  [SMALL_STATE(223)] = 4930,
  [SMALL_STATE(224)] = 4940,
  [SMALL_STATE(225)] = 4950,
  [SMALL_STATE(226)] = 4960,
  [SMALL_STATE(227)] = 4970,
  [SMALL_STATE(228)] = 4974,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(44),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(39),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(28),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(133),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(40),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(113),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(42),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(165),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_close, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_close, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyValue_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(39),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__keyValue_repeat1, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 7),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(60),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(59),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_automad_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(195),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(138),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(53),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(92),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automad, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(60),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(61),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(103),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 2), SHIFT_REPEAT(60),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 2), SHIFT_REPEAT(74),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(60),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(169),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 7, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 6, .production_id = 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 6, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 6),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 6),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 6, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 6, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 6, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 6, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5, .production_id = 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 7, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 8),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 8),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 8, .production_id = 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 8, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_function_name, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_function_name, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 9),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 7),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 7),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_math, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_math, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_math, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_math, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 4),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 8),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 8),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyValue, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyValue, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyValue, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__keyValue, 3),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__keyValue_repeat1, 2), SHIFT_REPEAT(210),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 10),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 10),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 11),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 11),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 1),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(209),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [545] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
