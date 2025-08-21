#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 230
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
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
  aux_sym__key_value_token1 = 6,
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
  sym_keyword_else = 27,
  sym_keyword_end = 28,
  anon_sym_BANG = 29,
  anon_sym_not = 30,
  sym_operator = 31,
  anon_sym_pagelist = 32,
  anon_sym_filelist = 33,
  anon_sym_tags = 34,
  anon_sym_filters = 35,
  sym_key = 36,
  anon_sym_LBRACE = 37,
  sym_include = 38,
  anon_sym_LT_AT = 39,
  anon_sym_TILDE = 40,
  anon_sym_AT_GT = 41,
  sym_text = 42,
  sym_automad = 43,
  sym_comment = 44,
  sym__value = 45,
  sym__key_value = 46,
  sym__pipe = 47,
  sym_variable = 48,
  sym_variable_close = 49,
  sym_variable_name = 50,
  sym_pipe_function_name = 51,
  sym_pipe_math = 52,
  sym_keyword = 53,
  sym_negation = 54,
  sym_expression = 55,
  sym_options = 56,
  sym_tag_start = 57,
  sym_tag_else = 58,
  sym_tag_end = 59,
  sym_statement = 60,
  sym_block = 61,
  sym_statement_open = 62,
  sym_statement_close = 63,
  aux_sym_automad_repeat1 = 64,
  aux_sym_comment_repeat1 = 65,
  aux_sym__key_value_repeat1 = 66,
  aux_sym__pipe_repeat1 = 67,
  aux_sym_variable_repeat1 = 68,
  aux_sym_options_repeat1 = 69,
  aux_sym_tag_start_repeat1 = 70,
  aux_sym_block_repeat1 = 71,
  alias_sym_function = 72,
  alias_sym_snippet = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_POUND] = "<#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_GT] = "#>",
  [sym__name] = "_name",
  [anon_sym_COLON] = ":",
  [aux_sym__key_value_token1] = "_key_value_token1",
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
  [sym_keyword_else] = "keyword_else",
  [sym_keyword_end] = "keyword_end",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [sym_operator] = "operator",
  [anon_sym_pagelist] = "pagelist",
  [anon_sym_filelist] = "filelist",
  [anon_sym_tags] = "tags",
  [anon_sym_filters] = "filters",
  [sym_key] = "key",
  [anon_sym_LBRACE] = "{",
  [sym_include] = "include",
  [anon_sym_LT_AT] = "<@",
  [anon_sym_TILDE] = "~",
  [anon_sym_AT_GT] = "@>",
  [sym_text] = "text",
  [sym_automad] = "automad",
  [sym_comment] = "comment",
  [sym__value] = "_value",
  [sym__key_value] = "_key_value",
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
  [sym_tag_start] = "tag_start",
  [sym_tag_else] = "tag_else",
  [sym_tag_end] = "tag_end",
  [sym_statement] = "statement",
  [sym_block] = "block",
  [sym_statement_open] = "statement_open",
  [sym_statement_close] = "statement_close",
  [aux_sym_automad_repeat1] = "automad_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__key_value_repeat1] = "_key_value_repeat1",
  [aux_sym__pipe_repeat1] = "_pipe_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_options_repeat1] = "options_repeat1",
  [aux_sym_tag_start_repeat1] = "tag_start_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_function] = "function",
  [alias_sym_snippet] = "snippet",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_POUND] = anon_sym_LT_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_GT] = anon_sym_POUND_GT,
  [sym__name] = sym__name,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__key_value_token1] = aux_sym__key_value_token1,
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
  [sym_keyword_else] = sym_keyword_else,
  [sym_keyword_end] = sym_keyword_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [sym_operator] = sym_operator,
  [anon_sym_pagelist] = anon_sym_pagelist,
  [anon_sym_filelist] = anon_sym_filelist,
  [anon_sym_tags] = anon_sym_tags,
  [anon_sym_filters] = anon_sym_filters,
  [sym_key] = sym_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_include] = sym_include,
  [anon_sym_LT_AT] = anon_sym_LT_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AT_GT] = anon_sym_AT_GT,
  [sym_text] = sym_text,
  [sym_automad] = sym_automad,
  [sym_comment] = sym_comment,
  [sym__value] = sym__value,
  [sym__key_value] = sym__key_value,
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
  [sym_tag_start] = sym_tag_start,
  [sym_tag_else] = sym_tag_else,
  [sym_tag_end] = sym_tag_end,
  [sym_statement] = sym_statement,
  [sym_block] = sym_block,
  [sym_statement_open] = sym_statement_open,
  [sym_statement_close] = sym_statement_close,
  [aux_sym_automad_repeat1] = aux_sym_automad_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__key_value_repeat1] = aux_sym__key_value_repeat1,
  [aux_sym__pipe_repeat1] = aux_sym__pipe_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_options_repeat1] = aux_sym_options_repeat1,
  [aux_sym_tag_start_repeat1] = aux_sym_tag_start_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_function] = alias_sym_function,
  [alias_sym_snippet] = alias_sym_snippet,
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
  [aux_sym__key_value_token1] = {
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
  [sym_keyword_else] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_end] = {
    .visible = true,
    .named = true,
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
  [anon_sym_tags] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filters] = {
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
  [anon_sym_LT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_GT] = {
    .visible = true,
    .named = false,
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
  [sym__key_value] = {
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
  [sym_tag_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_else] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_end] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_open] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_close] = {
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
  [aux_sym__key_value_repeat1] = {
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
  [aux_sym_tag_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_snippet] = {
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
    [0] = alias_sym_snippet,
  },
  [3] = {
    [1] = alias_sym_snippet,
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
  [36] = 18,
  [37] = 20,
  [38] = 38,
  [39] = 18,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 41,
  [46] = 38,
  [47] = 18,
  [48] = 48,
  [49] = 20,
  [50] = 43,
  [51] = 51,
  [52] = 18,
  [53] = 53,
  [54] = 41,
  [55] = 42,
  [56] = 20,
  [57] = 43,
  [58] = 20,
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
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 18,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
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
  [127] = 127,
  [128] = 128,
  [129] = 127,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 114,
  [139] = 139,
  [140] = 131,
  [141] = 20,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 10,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 147,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 149,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 12,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 7,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 8,
  [173] = 173,
  [174] = 174,
  [175] = 11,
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
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
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
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 210,
  [217] = 187,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 18,
  [222] = 20,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 181,
  [229] = 174,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(191);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(191);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '<') ADVANCE(194);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'w') ADVANCE(124);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(195);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(211);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(162);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '%' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '~') ADVANCE(208);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('-' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(14);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(14);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '?') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(209);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(209);
      if (lookahead == '{') ADVANCE(158);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(184);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == '{') ADVANCE(158);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(158);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 72:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '@') ADVANCE(211);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(212);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_POUND);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_POUND_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(87);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(93);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(190);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(188);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(106);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(176);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(185);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'h') ADVANCE(173);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(105);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(102);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(88);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(88);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(95);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(103);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(170);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(90);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(101);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(166);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 's') ADVANCE(89);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 't') ADVANCE(92);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 't') ADVANCE(182);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(135);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(119);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(112);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(147);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(122);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(148);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(136);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 't') ADVANCE(114);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(144);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(130);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(177);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(117);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(137);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(186);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(174);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(133);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(143);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(140);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(141);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(139);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(115);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(125);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(126);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(123);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(142);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(134);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(116);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(168);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(138);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(201);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(203);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(113);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(145);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(146);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(193);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(121);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(183);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(199);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(197);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(113);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__key_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_open);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_pipe_separator);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(86);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(110);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_to);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_in);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_if);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_snippet);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_snippet);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_snippet);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_with);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_keyword_else);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_keyword_else);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_keyword_end);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_keyword_end);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(14);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '!' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_not);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '!' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '!' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_pagelist);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_pagelist);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_filelist);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_filelist);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_tags);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_tags);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_filters);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_filters);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_include);
      if (lookahead == '.') ADVANCE(14);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT_AT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_AT_GT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(212);
      if (lookahead != 0) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 78},
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
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 78},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 78},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 78},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
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
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 2},
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
  [118] = {.lex_state = 2},
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
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 78},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 78},
  [153] = {.lex_state = 78},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 16},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 78},
  [161] = {.lex_state = 78},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 78},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 78},
  [166] = {.lex_state = 78},
  [167] = {.lex_state = 78},
  [168] = {.lex_state = 78},
  [169] = {.lex_state = 78},
  [170] = {.lex_state = 78},
  [171] = {.lex_state = 78},
  [172] = {.lex_state = 78},
  [173] = {.lex_state = 78},
  [174] = {.lex_state = 78},
  [175] = {.lex_state = 78},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 78},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 78},
  [182] = {.lex_state = 78},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 78},
  [186] = {.lex_state = 78},
  [187] = {.lex_state = 70},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 78},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 78},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 70},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 70},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 70},
  [217] = {.lex_state = 70},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 70},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {(TSStateId)(-1)},
  [229] = {(TSStateId)(-1)},
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
    [sym_keyword_else] = ACTIONS(1),
    [sym_keyword_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [anon_sym_pagelist] = ACTIONS(1),
    [anon_sym_filelist] = ACTIONS(1),
    [anon_sym_tags] = ACTIONS(1),
    [anon_sym_filters] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AT_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_automad] = STATE(224),
    [sym_comment] = STATE(1),
    [sym_variable] = STATE(61),
    [sym_tag_start] = STATE(64),
    [sym_statement] = STATE(61),
    [sym_block] = STATE(61),
    [sym_statement_open] = STATE(63),
    [aux_sym_automad_repeat1] = STATE(61),
    [anon_sym_LT_POUND] = ACTIONS(5),
    [sym_variable_open] = ACTIONS(7),
    [anon_sym_LT_AT] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(15), 1,
      sym__name,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_tag_start_repeat1,
    STATE(5), 1,
      aux_sym__key_value_repeat1,
    STATE(9), 1,
      sym_variable,
    STATE(14), 1,
      sym__value,
    STATE(80), 1,
      sym_negation,
    STATE(200), 1,
      sym_statement_close,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(22), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(27), 4,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [72] = 19,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(15), 1,
      sym__name,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    STATE(2), 1,
      aux_sym_tag_start_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__key_value_repeat1,
    STATE(9), 1,
      sym_variable,
    STATE(14), 1,
      sym__value,
    STATE(80), 1,
      sym_negation,
    STATE(186), 1,
      sym_statement_close,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(22), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(27), 4,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [144] = 16,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(35), 1,
      sym__name,
    ACTIONS(38), 1,
      aux_sym__key_value_token1,
    ACTIONS(44), 1,
      sym_variable_open,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__key_value_repeat1,
    STATE(9), 1,
      sym_variable,
    STATE(14), 1,
      sym__value,
    STATE(80), 1,
      sym_negation,
    ACTIONS(50), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(59), 2,
      anon_sym_TILDE,
      anon_sym_AT_GT,
    STATE(4), 2,
      sym_comment,
      aux_sym_tag_start_repeat1,
    ACTIONS(41), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(22), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(53), 4,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
    ACTIONS(47), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [209] = 17,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_AT_GT,
    STATE(5), 1,
      sym_comment,
    STATE(9), 1,
      sym_variable,
    STATE(14), 1,
      sym__value,
    STATE(18), 1,
      aux_sym__key_value_repeat1,
    STATE(80), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(30), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(27), 4,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [275] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__name,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      sym_variable,
    STATE(14), 1,
      sym__value,
    STATE(18), 1,
      aux_sym__key_value_repeat1,
    STATE(80), 1,
      sym_negation,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
    STATE(30), 3,
      sym_keyword,
      sym_expression,
      sym_options,
    ACTIONS(27), 4,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [335] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(69), 1,
      aux_sym__key_value_token1,
    STATE(7), 1,
      sym_comment,
    ACTIONS(67), 25,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [372] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(73), 1,
      aux_sym__key_value_token1,
    STATE(8), 1,
      sym_comment,
    ACTIONS(71), 25,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [409] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(77), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(75), 25,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [446] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(81), 1,
      aux_sym__key_value_token1,
    STATE(10), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [483] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(85), 1,
      aux_sym__key_value_token1,
    STATE(11), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [520] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(89), 1,
      aux_sym__key_value_token1,
    STATE(12), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [557] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(93), 1,
      sym_operator,
    STATE(13), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(91), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [596] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(97), 1,
      sym_operator,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(95), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [635] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(101), 1,
      sym_operator,
    STATE(15), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(99), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [674] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(105), 1,
      sym_operator,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym__key_value_repeat1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [713] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(105), 1,
      sym_operator,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__key_value_repeat1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [752] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(109), 1,
      aux_sym__key_value_token1,
    STATE(18), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
    ACTIONS(107), 22,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [787] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(17), 1,
      aux_sym__key_value_token1,
    ACTIONS(93), 1,
      sym_operator,
    STATE(18), 1,
      aux_sym__key_value_repeat1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(91), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [826] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(112), 22,
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
      anon_sym_BANG,
      anon_sym_not,
      sym_operator,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [860] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(118), 1,
      aux_sym__key_value_token1,
    STATE(21), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [893] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(122), 1,
      aux_sym__key_value_token1,
    STATE(22), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [926] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(126), 1,
      aux_sym__key_value_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(124), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [959] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(128), 1,
      aux_sym__key_value_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(99), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [992] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(130), 1,
      aux_sym__key_value_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(95), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1025] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(132), 1,
      aux_sym__key_value_token1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(91), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1058] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(136), 1,
      aux_sym__key_value_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(134), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1091] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(140), 1,
      aux_sym__key_value_token1,
    STATE(28), 1,
      sym_comment,
    ACTIONS(138), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1124] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(144), 1,
      aux_sym__key_value_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(142), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1157] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(146), 1,
      aux_sym__key_value_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(59), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1190] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(150), 1,
      aux_sym__key_value_token1,
    STATE(31), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1223] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(154), 1,
      aux_sym__key_value_token1,
    STATE(32), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1256] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(158), 1,
      aux_sym__key_value_token1,
    STATE(33), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1289] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(162), 1,
      aux_sym__key_value_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(160), 21,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1322] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(166), 1,
      aux_sym__key_value_token1,
    STATE(35), 1,
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
      anon_sym_BANG,
      anon_sym_not,
      anon_sym_pagelist,
      anon_sym_filelist,
      anon_sym_tags,
      anon_sym_filters,
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1355] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(168), 1,
      aux_sym__key_value_token1,
    STATE(36), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
    ACTIONS(107), 14,
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
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1382] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(112), 14,
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
      anon_sym_LBRACE,
      anon_sym_TILDE,
      anon_sym_AT_GT,
  [1408] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(173), 1,
      aux_sym__key_value_token1,
    ACTIONS(175), 1,
      anon_sym_TILDE,
    STATE(38), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(171), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_else,
      sym_keyword_end,
      sym_include,
  [1437] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(177), 1,
      aux_sym__key_value_token1,
    STATE(39), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
    ACTIONS(107), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_else,
      sym_keyword_end,
      sym_include,
  [1461] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(180), 1,
      aux_sym__key_value_token1,
    ACTIONS(182), 1,
      anon_sym_TILDE,
    STATE(40), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(171), 10,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_end,
      sym_include,
  [1489] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(173), 1,
      aux_sym__key_value_token1,
    STATE(39), 1,
      aux_sym__key_value_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(184), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_else,
      sym_keyword_end,
      sym_include,
  [1515] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(173), 1,
      aux_sym__key_value_token1,
    STATE(42), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(184), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_else,
      sym_keyword_end,
      sym_include,
  [1541] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(173), 1,
      aux_sym__key_value_token1,
    STATE(39), 1,
      aux_sym__key_value_repeat1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(186), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_else,
      sym_keyword_end,
      sym_include,
  [1567] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(180), 1,
      aux_sym__key_value_token1,
    STATE(44), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(184), 10,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_end,
      sym_include,
  [1592] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(180), 1,
      aux_sym__key_value_token1,
    STATE(45), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(184), 10,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_end,
      sym_include,
  [1617] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      aux_sym__key_value_token1,
    ACTIONS(190), 1,
      anon_sym_TILDE,
    STATE(46), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(171), 9,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_include,
  [1644] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(192), 1,
      aux_sym__key_value_token1,
    STATE(47), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
    ACTIONS(107), 10,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_end,
      sym_include,
  [1667] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(195), 1,
      sym__name,
    ACTIONS(197), 1,
      sym_keyword_else,
    ACTIONS(199), 1,
      sym_keyword_end,
    ACTIONS(201), 1,
      sym_include,
    STATE(3), 1,
      sym_keyword,
    STATE(48), 1,
      sym_comment,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [1698] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(112), 11,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_else,
      sym_keyword_end,
      sym_include,
  [1721] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(180), 1,
      aux_sym__key_value_token1,
    STATE(47), 1,
      aux_sym__key_value_repeat1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(186), 10,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_end,
      sym_include,
  [1746] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(195), 1,
      sym__name,
    ACTIONS(199), 1,
      sym_keyword_end,
    ACTIONS(201), 1,
      sym_include,
    STATE(3), 1,
      sym_keyword,
    STATE(51), 1,
      sym_comment,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [1774] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(203), 1,
      aux_sym__key_value_token1,
    STATE(52), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
    ACTIONS(107), 9,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_include,
  [1796] = 10,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(206), 1,
      anon_sym_LT_AT,
    ACTIONS(208), 1,
      sym_text,
    STATE(48), 1,
      sym_statement_open,
    STATE(53), 1,
      sym_comment,
    STATE(60), 1,
      sym_tag_else,
    STATE(64), 1,
      sym_tag_start,
    STATE(182), 1,
      sym_tag_end,
    STATE(66), 4,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_block_repeat1,
  [1830] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      aux_sym__key_value_token1,
    STATE(52), 1,
      aux_sym__key_value_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(184), 9,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_include,
  [1854] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      aux_sym__key_value_token1,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(184), 9,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_include,
  [1878] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(112), 10,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_keyword_end,
      sym_include,
  [1900] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(188), 1,
      aux_sym__key_value_token1,
    STATE(52), 1,
      aux_sym__key_value_repeat1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(186), 9,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_include,
  [1924] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(112), 9,
      sym__name,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
      sym_include,
  [1945] = 8,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_LT_POUND,
    ACTIONS(215), 1,
      sym_variable_open,
    ACTIONS(218), 1,
      anon_sym_LT_AT,
    ACTIONS(221), 1,
      sym_text,
    STATE(63), 1,
      sym_statement_open,
    STATE(64), 1,
      sym_tag_start,
    STATE(59), 5,
      sym_comment,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_automad_repeat1,
  [1974] = 9,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(224), 1,
      anon_sym_LT_AT,
    ACTIONS(226), 1,
      sym_text,
    STATE(51), 1,
      sym_statement_open,
    STATE(60), 1,
      sym_comment,
    STATE(64), 1,
      sym_tag_start,
    STATE(161), 1,
      sym_tag_end,
    STATE(62), 4,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_block_repeat1,
  [2005] = 9,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(9), 1,
      anon_sym_LT_AT,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym_text,
    STATE(61), 1,
      sym_comment,
    STATE(63), 1,
      sym_statement_open,
    STATE(64), 1,
      sym_tag_start,
    STATE(59), 4,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_automad_repeat1,
  [2036] = 9,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(208), 1,
      sym_text,
    ACTIONS(224), 1,
      anon_sym_LT_AT,
    STATE(51), 1,
      sym_statement_open,
    STATE(62), 1,
      sym_comment,
    STATE(64), 1,
      sym_tag_start,
    STATE(185), 1,
      sym_tag_end,
    STATE(66), 4,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_block_repeat1,
  [2067] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(195), 1,
      sym__name,
    ACTIONS(201), 1,
      sym_include,
    STATE(3), 1,
      sym_keyword,
    STATE(63), 1,
      sym_comment,
    ACTIONS(23), 7,
      anon_sym_for,
      anon_sym_to,
      anon_sym_foreach,
      anon_sym_in,
      anon_sym_if,
      anon_sym_snippet,
      anon_sym_with,
  [2092] = 8,
    ACTIONS(5), 1,
      anon_sym_LT_POUND,
    ACTIONS(7), 1,
      sym_variable_open,
    ACTIONS(224), 1,
      anon_sym_LT_AT,
    ACTIONS(232), 1,
      sym_text,
    STATE(51), 1,
      sym_statement_open,
    STATE(160), 1,
      sym_tag_end,
    STATE(64), 2,
      sym_comment,
      sym_tag_start,
    STATE(53), 4,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_block_repeat1,
  [2121] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(234), 1,
      sym__name,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(65), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__key_value_repeat1,
    STATE(142), 1,
      sym_pipe_function_name,
    STATE(208), 1,
      sym_pipe_math,
    ACTIONS(238), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2149] = 7,
    ACTIONS(240), 1,
      anon_sym_LT_POUND,
    ACTIONS(243), 1,
      sym_variable_open,
    ACTIONS(246), 1,
      anon_sym_LT_AT,
    ACTIONS(249), 1,
      sym_text,
    STATE(63), 1,
      sym_statement_open,
    STATE(64), 1,
      sym_tag_start,
    STATE(66), 5,
      sym_comment,
      sym_variable,
      sym_statement,
      sym_block,
      aux_sym_block_repeat1,
  [2175] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(234), 1,
      sym__name,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(125), 1,
      sym_pipe_function_name,
    STATE(211), 1,
      sym_pipe_math,
    ACTIONS(238), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2203] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(234), 1,
      sym__name,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(122), 1,
      sym_pipe_function_name,
    STATE(195), 1,
      sym_pipe_math,
    ACTIONS(238), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2231] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(234), 1,
      sym__name,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(67), 1,
      aux_sym__key_value_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(122), 1,
      sym_pipe_function_name,
    STATE(195), 1,
      sym_pipe_math,
    ACTIONS(238), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [2259] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(24), 1,
      sym__value,
    STATE(70), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2286] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(71), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(133), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2313] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(72), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym__key_value_repeat1,
    STATE(213), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2340] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(73), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(116), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2367] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(33), 1,
      sym__value,
    STATE(74), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2394] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(73), 1,
      aux_sym__key_value_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(108), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2421] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(76), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym__key_value_repeat1,
    STATE(115), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2448] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(77), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(108), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2475] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(24), 1,
      sym__value,
    STATE(78), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2502] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(79), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__key_value_repeat1,
    STATE(220), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2529] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(16), 1,
      sym__value,
    STATE(80), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2556] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(21), 1,
      sym__value,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2583] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(21), 1,
      sym__value,
    STATE(82), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2610] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(83), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(115), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2637] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(23), 1,
      sym__value,
    STATE(84), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2664] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(85), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(194), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2691] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(23), 1,
      sym__value,
    STATE(74), 1,
      aux_sym__key_value_repeat1,
    STATE(86), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2718] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(71), 1,
      aux_sym__key_value_repeat1,
    STATE(87), 1,
      sym_comment,
    STATE(121), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2745] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(83), 1,
      aux_sym__key_value_repeat1,
    STATE(88), 1,
      sym_comment,
    STATE(133), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2772] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(89), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(202), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2799] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(90), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    STATE(201), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2826] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(85), 1,
      aux_sym__key_value_repeat1,
    STATE(91), 1,
      sym_comment,
    STATE(201), 1,
      sym__value,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2853] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(26), 1,
      sym__value,
    STATE(70), 1,
      aux_sym__key_value_repeat1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2880] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(21), 1,
      sym_variable_open,
    ACTIONS(252), 1,
      aux_sym__key_value_token1,
    STATE(9), 1,
      sym_variable,
    STATE(13), 1,
      sym__value,
    STATE(93), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(19), 3,
      sym_string,
      sym_number,
      sym_boolean,
  [2907] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym_pipe_separator,
    STATE(10), 1,
      sym_variable_close,
    STATE(94), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_variable_repeat1,
    STATE(131), 1,
      aux_sym__key_value_repeat1,
    STATE(203), 1,
      sym__pipe,
  [2935] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(256), 1,
      sym_pipe_separator,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_variable_repeat1,
    STATE(140), 1,
      aux_sym__key_value_repeat1,
    STATE(150), 1,
      sym_variable_close,
    STATE(203), 1,
      sym__pipe,
  [2963] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(256), 1,
      sym_pipe_separator,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_variable_repeat1,
    STATE(140), 1,
      aux_sym__key_value_repeat1,
    STATE(150), 1,
      sym_variable_close,
    STATE(203), 1,
      sym__pipe,
  [2991] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym_pipe_separator,
    STATE(10), 1,
      sym_variable_close,
    STATE(97), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_variable_repeat1,
    STATE(131), 1,
      aux_sym__key_value_repeat1,
    STATE(203), 1,
      sym__pipe,
  [3019] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym_pipe_separator,
    STATE(11), 1,
      sym_variable_close,
    STATE(98), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_variable_repeat1,
    STATE(138), 1,
      aux_sym__key_value_repeat1,
    STATE(203), 1,
      sym__pipe,
  [3047] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(99), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym__key_value_repeat1,
    STATE(137), 1,
      sym_options,
    STATE(166), 1,
      sym_statement_close,
  [3075] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(100), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym__key_value_repeat1,
    STATE(132), 1,
      sym_options,
    STATE(152), 1,
      sym_statement_close,
  [3103] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(256), 1,
      sym_pipe_separator,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_variable_repeat1,
    STATE(101), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__key_value_repeat1,
    STATE(172), 1,
      sym_variable_close,
    STATE(203), 1,
      sym__pipe,
  [3131] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(256), 1,
      sym_pipe_separator,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_variable_repeat1,
    STATE(114), 1,
      aux_sym__key_value_repeat1,
    STATE(175), 1,
      sym_variable_close,
    STATE(203), 1,
      sym__pipe,
  [3159] = 9,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      sym_pipe_separator,
    STATE(8), 1,
      sym_variable_close,
    STATE(94), 1,
      aux_sym_variable_repeat1,
    STATE(103), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym__key_value_repeat1,
    STATE(203), 1,
      sym__pipe,
  [3187] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(104), 1,
      sym_comment,
    STATE(128), 1,
      sym_options,
  [3212] = 8,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(130), 1,
      sym_options,
  [3237] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(260), 1,
      aux_sym__key_value_token1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(265), 1,
      sym_pipe_separator,
    STATE(188), 1,
      aux_sym__key_value_repeat1,
    STATE(203), 1,
      sym__pipe,
    STATE(106), 2,
      sym_comment,
      aux_sym_variable_repeat1,
  [3260] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(268), 1,
      aux_sym__key_value_token1,
    STATE(107), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
    ACTIONS(107), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [3277] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym__pipe_repeat1,
    STATE(183), 1,
      aux_sym__key_value_repeat1,
  [3299] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_options_repeat1,
    STATE(146), 1,
      aux_sym__key_value_repeat1,
  [3321] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_options_repeat1,
    STATE(146), 1,
      aux_sym__key_value_repeat1,
  [3343] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__pipe_repeat1,
    STATE(162), 1,
      aux_sym__key_value_repeat1,
  [3365] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__pipe_repeat1,
    STATE(183), 1,
      aux_sym__key_value_repeat1,
  [3387] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__pipe_repeat1,
    STATE(144), 1,
      aux_sym__key_value_repeat1,
  [3409] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(114), 1,
      sym_comment,
    STATE(163), 1,
      sym_variable_close,
  [3431] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym__pipe_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym__key_value_repeat1,
  [3453] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym__pipe_repeat1,
    STATE(144), 1,
      aux_sym__key_value_repeat1,
  [3475] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__pipe_repeat1,
    STATE(184), 1,
      aux_sym__key_value_repeat1,
  [3497] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(289), 1,
      aux_sym__key_value_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(291), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [3513] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(119), 1,
      sym_comment,
    STATE(153), 1,
      sym_statement_close,
    STATE(158), 1,
      aux_sym__key_value_repeat1,
  [3535] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__pipe_repeat1,
    STATE(176), 1,
      aux_sym__key_value_repeat1,
  [3557] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym__pipe_repeat1,
    STATE(121), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym__key_value_repeat1,
  [3579] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3599] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(123), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3619] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3639] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym__key_value_repeat1,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [3659] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(303), 1,
      aux_sym__key_value_token1,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym__key_value_repeat1,
    STATE(126), 2,
      sym_comment,
      aux_sym__pipe_repeat1,
  [3679] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(127), 1,
      sym_comment,
    STATE(150), 1,
      sym_variable_close,
  [3701] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(128), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__key_value_repeat1,
    STATE(171), 1,
      sym_statement_close,
  [3723] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(10), 1,
      sym_variable_close,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(129), 1,
      sym_comment,
  [3745] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(130), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__key_value_repeat1,
    STATE(173), 1,
      sym_statement_close,
  [3767] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(11), 1,
      sym_variable_close,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(131), 1,
      sym_comment,
  [3789] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(132), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__key_value_repeat1,
    STATE(167), 1,
      sym_statement_close,
  [3811] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym__pipe_repeat1,
    STATE(133), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym__key_value_repeat1,
  [3833] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      aux_sym_options_repeat1,
    STATE(134), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym__key_value_repeat1,
  [3855] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(313), 1,
      aux_sym__key_value_token1,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      aux_sym__key_value_repeat1,
    STATE(135), 2,
      sym_comment,
      aux_sym_options_repeat1,
  [3875] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      aux_sym_options_repeat1,
    STATE(136), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__key_value_repeat1,
  [3897] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(137), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__key_value_repeat1,
    STATE(170), 1,
      sym_statement_close,
  [3919] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(12), 1,
      sym_variable_close,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(138), 1,
      sym_comment,
  [3941] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(139), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym__key_value_repeat1,
    STATE(192), 1,
      sym_statement_close,
  [3963] = 7,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(140), 1,
      sym_comment,
    STATE(175), 1,
      sym_variable_close,
  [3985] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(141), 1,
      sym_comment,
    ACTIONS(112), 4,
      sym_string,
      sym_number,
      sym_boolean,
      sym_variable_open,
  [4001] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      aux_sym__key_value_repeat1,
    STATE(142), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4021] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4041] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(144), 1,
      sym_comment,
  [4060] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(333), 1,
      aux_sym__key_value_token1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4075] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(146), 1,
      sym_comment,
  [4094] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(339), 1,
      sym__name,
    STATE(103), 1,
      sym_variable_name,
    STATE(147), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym__key_value_repeat1,
  [4113] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(148), 1,
      sym_comment,
  [4132] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(339), 1,
      sym__name,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(97), 1,
      sym_variable_name,
    STATE(149), 1,
      sym_comment,
  [4151] = 3,
    STATE(150), 1,
      sym_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(79), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4164] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__key_value_token1,
    ACTIONS(343), 1,
      sym_key,
    STATE(151), 1,
      sym_comment,
    STATE(206), 1,
      sym__key_value,
    STATE(221), 1,
      aux_sym__key_value_repeat1,
  [4183] = 3,
    STATE(152), 1,
      sym_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(347), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4196] = 3,
    STATE(153), 1,
      sym_comment,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(351), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4209] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(154), 1,
      sym_comment,
  [4228] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(339), 1,
      sym__name,
    STATE(101), 1,
      sym_variable_name,
    STATE(155), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym__key_value_repeat1,
  [4247] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__key_value_token1,
    ACTIONS(343), 1,
      sym_key,
    STATE(151), 1,
      aux_sym__key_value_repeat1,
    STATE(156), 1,
      sym_comment,
    STATE(204), 1,
      sym__key_value,
  [4266] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__key_value_token1,
    ACTIONS(343), 1,
      sym_key,
    STATE(157), 1,
      sym_comment,
    STATE(204), 1,
      sym__key_value,
    STATE(221), 1,
      aux_sym__key_value_repeat1,
  [4285] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_AT_GT,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(158), 1,
      sym_comment,
  [4304] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(339), 1,
      sym__name,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(96), 1,
      sym_variable_name,
    STATE(159), 1,
      sym_comment,
  [4323] = 3,
    STATE(160), 1,
      sym_comment,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(357), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4336] = 3,
    STATE(161), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(361), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4349] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(162), 1,
      sym_comment,
  [4368] = 3,
    STATE(163), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(87), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4381] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__key_value_token1,
    ACTIONS(343), 1,
      sym_key,
    STATE(110), 1,
      sym__key_value,
    STATE(164), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym__key_value_repeat1,
  [4400] = 3,
    STATE(165), 1,
      sym_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(365), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4413] = 3,
    STATE(166), 1,
      sym_comment,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(369), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4426] = 3,
    STATE(167), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(373), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4439] = 3,
    STATE(168), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(67), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4452] = 3,
    STATE(169), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(377), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4465] = 3,
    STATE(170), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(381), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4478] = 3,
    STATE(171), 1,
      sym_comment,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(385), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4491] = 3,
    STATE(172), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(71), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4504] = 3,
    STATE(173), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(389), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4517] = 3,
    STATE(174), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(393), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4530] = 3,
    STATE(175), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(83), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4543] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(176), 1,
      sym_comment,
  [4562] = 3,
    STATE(177), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(397), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4575] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(178), 1,
      sym_comment,
  [4594] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__key_value_token1,
    ACTIONS(343), 1,
      sym_key,
    STATE(157), 1,
      aux_sym__key_value_repeat1,
    STATE(179), 1,
      sym_comment,
    STATE(214), 1,
      sym__key_value,
  [4613] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(341), 1,
      aux_sym__key_value_token1,
    ACTIONS(343), 1,
      sym_key,
    STATE(134), 1,
      sym__key_value,
    STATE(164), 1,
      aux_sym__key_value_repeat1,
    STATE(180), 1,
      sym_comment,
  [4632] = 3,
    STATE(181), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(401), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4645] = 3,
    STATE(182), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(405), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4658] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(183), 1,
      sym_comment,
  [4677] = 6,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(184), 1,
      sym_comment,
  [4696] = 3,
    STATE(185), 1,
      sym_comment,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(411), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4709] = 3,
    ACTIONS(415), 1,
      sym_text,
    STATE(186), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4721] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_POUND_GT,
    STATE(187), 1,
      sym_comment,
    STATE(216), 1,
      aux_sym_comment_repeat1,
  [4737] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(283), 1,
      sym_pipe_separator,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(188), 1,
      sym_comment,
  [4753] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(421), 1,
      aux_sym__key_value_token1,
    STATE(189), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4767] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(425), 1,
      aux_sym__key_value_token1,
    STATE(190), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4781] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(427), 1,
      aux_sym__key_value_token1,
    STATE(191), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4795] = 3,
    ACTIONS(433), 1,
      sym_text,
    STATE(192), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4807] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(435), 1,
      aux_sym__key_value_token1,
    STATE(193), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4821] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(439), 1,
      aux_sym__key_value_token1,
    STATE(194), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4835] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(443), 1,
      aux_sym__key_value_token1,
    STATE(195), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4849] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(445), 1,
      sym_number,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(196), 1,
      sym_comment,
  [4865] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(197), 1,
      sym_comment,
  [4881] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(447), 1,
      aux_sym__key_value_token1,
    STATE(198), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4895] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(451), 1,
      aux_sym__key_value_token1,
    STATE(199), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4909] = 3,
    ACTIONS(457), 1,
      sym_text,
    STATE(200), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_LT_POUND,
      sym_variable_open,
      anon_sym_LT_AT,
  [4921] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(459), 1,
      aux_sym__key_value_token1,
    STATE(201), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4935] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(463), 1,
      aux_sym__key_value_token1,
    STATE(202), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4949] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(467), 1,
      aux_sym__key_value_token1,
    STATE(203), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [4963] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(471), 1,
      aux_sym__key_value_token1,
    STATE(204), 1,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4977] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(475), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      anon_sym_POUND_GT,
    STATE(205), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [4991] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(480), 1,
      aux_sym__key_value_token1,
    STATE(206), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5005] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(484), 1,
      aux_sym__key_value_token1,
    STATE(207), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [5019] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(488), 1,
      aux_sym__key_value_token1,
    STATE(208), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [5033] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(490), 1,
      aux_sym__key_value_token1,
    STATE(209), 1,
      sym_comment,
    ACTIONS(492), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [5047] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_POUND_GT,
    STATE(205), 1,
      aux_sym_comment_repeat1,
    STATE(210), 1,
      sym_comment,
  [5063] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(496), 1,
      aux_sym__key_value_token1,
    STATE(211), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [5077] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(498), 1,
      aux_sym__key_value_token1,
    STATE(212), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [5091] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(502), 1,
      aux_sym__key_value_token1,
    STATE(213), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5105] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(506), 1,
      aux_sym__key_value_token1,
    STATE(214), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5119] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(508), 1,
      aux_sym__key_value_token1,
    STATE(215), 1,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_RBRACE,
      sym_pipe_separator,
  [5133] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(512), 1,
      anon_sym_POUND_GT,
    STATE(205), 1,
      aux_sym_comment_repeat1,
    STATE(216), 1,
      sym_comment,
  [5149] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(417), 1,
      aux_sym_comment_token1,
    ACTIONS(514), 1,
      anon_sym_POUND_GT,
    STATE(210), 1,
      aux_sym_comment_repeat1,
    STATE(217), 1,
      sym_comment,
  [5165] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym__key_value_repeat1,
    STATE(218), 1,
      sym_comment,
  [5181] = 5,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(236), 1,
      aux_sym__key_value_token1,
    ACTIONS(516), 1,
      sym_number,
    STATE(196), 1,
      aux_sym__key_value_repeat1,
    STATE(219), 1,
      sym_comment,
  [5197] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(518), 1,
      aux_sym__key_value_token1,
    STATE(220), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5211] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(107), 1,
      sym_key,
    ACTIONS(520), 1,
      aux_sym__key_value_token1,
    STATE(221), 2,
      sym_comment,
      aux_sym__key_value_repeat1,
  [5225] = 4,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    ACTIONS(112), 1,
      sym_key,
    ACTIONS(114), 1,
      aux_sym__key_value_token1,
    STATE(222), 1,
      sym_comment,
  [5238] = 3,
    ACTIONS(13), 1,
      anon_sym_LT_POUND,
    STATE(223), 1,
      sym_comment,
    ACTIONS(523), 2,
      aux_sym_comment_token1,
      anon_sym_POUND_GT,
  [5249] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_comment,
  [5259] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym_comment,
  [5269] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(529), 1,
      anon_sym_AT_GT,
    STATE(226), 1,
      sym_comment,
  [5279] = 3,
    ACTIONS(3), 1,
      anon_sym_LT_POUND,
    ACTIONS(531), 1,
      anon_sym_AT_GT,
    STATE(227), 1,
      sym_comment,
  [5289] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [5293] = 1,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 275,
  [SMALL_STATE(7)] = 335,
  [SMALL_STATE(8)] = 372,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 446,
  [SMALL_STATE(11)] = 483,
  [SMALL_STATE(12)] = 520,
  [SMALL_STATE(13)] = 557,
  [SMALL_STATE(14)] = 596,
  [SMALL_STATE(15)] = 635,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 752,
  [SMALL_STATE(19)] = 787,
  [SMALL_STATE(20)] = 826,
  [SMALL_STATE(21)] = 860,
  [SMALL_STATE(22)] = 893,
  [SMALL_STATE(23)] = 926,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 992,
  [SMALL_STATE(26)] = 1025,
  [SMALL_STATE(27)] = 1058,
  [SMALL_STATE(28)] = 1091,
  [SMALL_STATE(29)] = 1124,
  [SMALL_STATE(30)] = 1157,
  [SMALL_STATE(31)] = 1190,
  [SMALL_STATE(32)] = 1223,
  [SMALL_STATE(33)] = 1256,
  [SMALL_STATE(34)] = 1289,
  [SMALL_STATE(35)] = 1322,
  [SMALL_STATE(36)] = 1355,
  [SMALL_STATE(37)] = 1382,
  [SMALL_STATE(38)] = 1408,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1461,
  [SMALL_STATE(41)] = 1489,
  [SMALL_STATE(42)] = 1515,
  [SMALL_STATE(43)] = 1541,
  [SMALL_STATE(44)] = 1567,
  [SMALL_STATE(45)] = 1592,
  [SMALL_STATE(46)] = 1617,
  [SMALL_STATE(47)] = 1644,
  [SMALL_STATE(48)] = 1667,
  [SMALL_STATE(49)] = 1698,
  [SMALL_STATE(50)] = 1721,
  [SMALL_STATE(51)] = 1746,
  [SMALL_STATE(52)] = 1774,
  [SMALL_STATE(53)] = 1796,
  [SMALL_STATE(54)] = 1830,
  [SMALL_STATE(55)] = 1854,
  [SMALL_STATE(56)] = 1878,
  [SMALL_STATE(57)] = 1900,
  [SMALL_STATE(58)] = 1924,
  [SMALL_STATE(59)] = 1945,
  [SMALL_STATE(60)] = 1974,
  [SMALL_STATE(61)] = 2005,
  [SMALL_STATE(62)] = 2036,
  [SMALL_STATE(63)] = 2067,
  [SMALL_STATE(64)] = 2092,
  [SMALL_STATE(65)] = 2121,
  [SMALL_STATE(66)] = 2149,
  [SMALL_STATE(67)] = 2175,
  [SMALL_STATE(68)] = 2203,
  [SMALL_STATE(69)] = 2231,
  [SMALL_STATE(70)] = 2259,
  [SMALL_STATE(71)] = 2286,
  [SMALL_STATE(72)] = 2313,
  [SMALL_STATE(73)] = 2340,
  [SMALL_STATE(74)] = 2367,
  [SMALL_STATE(75)] = 2394,
  [SMALL_STATE(76)] = 2421,
  [SMALL_STATE(77)] = 2448,
  [SMALL_STATE(78)] = 2475,
  [SMALL_STATE(79)] = 2502,
  [SMALL_STATE(80)] = 2529,
  [SMALL_STATE(81)] = 2556,
  [SMALL_STATE(82)] = 2583,
  [SMALL_STATE(83)] = 2610,
  [SMALL_STATE(84)] = 2637,
  [SMALL_STATE(85)] = 2664,
  [SMALL_STATE(86)] = 2691,
  [SMALL_STATE(87)] = 2718,
  [SMALL_STATE(88)] = 2745,
  [SMALL_STATE(89)] = 2772,
  [SMALL_STATE(90)] = 2799,
  [SMALL_STATE(91)] = 2826,
  [SMALL_STATE(92)] = 2853,
  [SMALL_STATE(93)] = 2880,
  [SMALL_STATE(94)] = 2907,
  [SMALL_STATE(95)] = 2935,
  [SMALL_STATE(96)] = 2963,
  [SMALL_STATE(97)] = 2991,
  [SMALL_STATE(98)] = 3019,
  [SMALL_STATE(99)] = 3047,
  [SMALL_STATE(100)] = 3075,
  [SMALL_STATE(101)] = 3103,
  [SMALL_STATE(102)] = 3131,
  [SMALL_STATE(103)] = 3159,
  [SMALL_STATE(104)] = 3187,
  [SMALL_STATE(105)] = 3212,
  [SMALL_STATE(106)] = 3237,
  [SMALL_STATE(107)] = 3260,
  [SMALL_STATE(108)] = 3277,
  [SMALL_STATE(109)] = 3299,
  [SMALL_STATE(110)] = 3321,
  [SMALL_STATE(111)] = 3343,
  [SMALL_STATE(112)] = 3365,
  [SMALL_STATE(113)] = 3387,
  [SMALL_STATE(114)] = 3409,
  [SMALL_STATE(115)] = 3431,
  [SMALL_STATE(116)] = 3453,
  [SMALL_STATE(117)] = 3475,
  [SMALL_STATE(118)] = 3497,
  [SMALL_STATE(119)] = 3513,
  [SMALL_STATE(120)] = 3535,
  [SMALL_STATE(121)] = 3557,
  [SMALL_STATE(122)] = 3579,
  [SMALL_STATE(123)] = 3599,
  [SMALL_STATE(124)] = 3619,
  [SMALL_STATE(125)] = 3639,
  [SMALL_STATE(126)] = 3659,
  [SMALL_STATE(127)] = 3679,
  [SMALL_STATE(128)] = 3701,
  [SMALL_STATE(129)] = 3723,
  [SMALL_STATE(130)] = 3745,
  [SMALL_STATE(131)] = 3767,
  [SMALL_STATE(132)] = 3789,
  [SMALL_STATE(133)] = 3811,
  [SMALL_STATE(134)] = 3833,
  [SMALL_STATE(135)] = 3855,
  [SMALL_STATE(136)] = 3875,
  [SMALL_STATE(137)] = 3897,
  [SMALL_STATE(138)] = 3919,
  [SMALL_STATE(139)] = 3941,
  [SMALL_STATE(140)] = 3963,
  [SMALL_STATE(141)] = 3985,
  [SMALL_STATE(142)] = 4001,
  [SMALL_STATE(143)] = 4021,
  [SMALL_STATE(144)] = 4041,
  [SMALL_STATE(145)] = 4060,
  [SMALL_STATE(146)] = 4075,
  [SMALL_STATE(147)] = 4094,
  [SMALL_STATE(148)] = 4113,
  [SMALL_STATE(149)] = 4132,
  [SMALL_STATE(150)] = 4151,
  [SMALL_STATE(151)] = 4164,
  [SMALL_STATE(152)] = 4183,
  [SMALL_STATE(153)] = 4196,
  [SMALL_STATE(154)] = 4209,
  [SMALL_STATE(155)] = 4228,
  [SMALL_STATE(156)] = 4247,
  [SMALL_STATE(157)] = 4266,
  [SMALL_STATE(158)] = 4285,
  [SMALL_STATE(159)] = 4304,
  [SMALL_STATE(160)] = 4323,
  [SMALL_STATE(161)] = 4336,
  [SMALL_STATE(162)] = 4349,
  [SMALL_STATE(163)] = 4368,
  [SMALL_STATE(164)] = 4381,
  [SMALL_STATE(165)] = 4400,
  [SMALL_STATE(166)] = 4413,
  [SMALL_STATE(167)] = 4426,
  [SMALL_STATE(168)] = 4439,
  [SMALL_STATE(169)] = 4452,
  [SMALL_STATE(170)] = 4465,
  [SMALL_STATE(171)] = 4478,
  [SMALL_STATE(172)] = 4491,
  [SMALL_STATE(173)] = 4504,
  [SMALL_STATE(174)] = 4517,
  [SMALL_STATE(175)] = 4530,
  [SMALL_STATE(176)] = 4543,
  [SMALL_STATE(177)] = 4562,
  [SMALL_STATE(178)] = 4575,
  [SMALL_STATE(179)] = 4594,
  [SMALL_STATE(180)] = 4613,
  [SMALL_STATE(181)] = 4632,
  [SMALL_STATE(182)] = 4645,
  [SMALL_STATE(183)] = 4658,
  [SMALL_STATE(184)] = 4677,
  [SMALL_STATE(185)] = 4696,
  [SMALL_STATE(186)] = 4709,
  [SMALL_STATE(187)] = 4721,
  [SMALL_STATE(188)] = 4737,
  [SMALL_STATE(189)] = 4753,
  [SMALL_STATE(190)] = 4767,
  [SMALL_STATE(191)] = 4781,
  [SMALL_STATE(192)] = 4795,
  [SMALL_STATE(193)] = 4807,
  [SMALL_STATE(194)] = 4821,
  [SMALL_STATE(195)] = 4835,
  [SMALL_STATE(196)] = 4849,
  [SMALL_STATE(197)] = 4865,
  [SMALL_STATE(198)] = 4881,
  [SMALL_STATE(199)] = 4895,
  [SMALL_STATE(200)] = 4909,
  [SMALL_STATE(201)] = 4921,
  [SMALL_STATE(202)] = 4935,
  [SMALL_STATE(203)] = 4949,
  [SMALL_STATE(204)] = 4963,
  [SMALL_STATE(205)] = 4977,
  [SMALL_STATE(206)] = 4991,
  [SMALL_STATE(207)] = 5005,
  [SMALL_STATE(208)] = 5019,
  [SMALL_STATE(209)] = 5033,
  [SMALL_STATE(210)] = 5047,
  [SMALL_STATE(211)] = 5063,
  [SMALL_STATE(212)] = 5077,
  [SMALL_STATE(213)] = 5091,
  [SMALL_STATE(214)] = 5105,
  [SMALL_STATE(215)] = 5119,
  [SMALL_STATE(216)] = 5133,
  [SMALL_STATE(217)] = 5149,
  [SMALL_STATE(218)] = 5165,
  [SMALL_STATE(219)] = 5181,
  [SMALL_STATE(220)] = 5197,
  [SMALL_STATE(221)] = 5211,
  [SMALL_STATE(222)] = 5225,
  [SMALL_STATE(223)] = 5238,
  [SMALL_STATE(224)] = 5249,
  [SMALL_STATE(225)] = 5259,
  [SMALL_STATE(226)] = 5269,
  [SMALL_STATE(227)] = 5279,
  [SMALL_STATE(228)] = 5289,
  [SMALL_STATE(229)] = 5293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(147),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(118),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(25),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2), SHIFT_REPEAT(180),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_close, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_close, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(20),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 1, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 1, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_start_repeat1, 2, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_start_repeat1, 2, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 7),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 7),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_options, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 6),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(37),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_open, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(49),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_open, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_open, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(56),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(58),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_automad_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(217),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(155),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(46),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_automad_repeat1, 2), SHIFT_REPEAT(59),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automad, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(217),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(46),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(37),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(65),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(141),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 4),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 2), SHIFT_REPEAT(37),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 2), SHIFT_REPEAT(79),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(37),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2), SHIFT_REPEAT(179),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_function_name, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_function_name, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3, .production_id = 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_end, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_end, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_close, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_close, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_close, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_close, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 5, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 5, .production_id = 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_close, 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_close, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 10),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 10),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 11),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 11),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_else, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_else, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 8),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 8),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_math, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_math, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 7),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 7),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_start, 4),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_start, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pipe_repeat1, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_repeat1, 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 3),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(223),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 4),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_options_repeat1, 4),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 9),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 9),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_math, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_math, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipe, 6),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipe, 6),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_options_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pipe_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_repeat1, 2), SHIFT_REPEAT(222),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [525] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
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
