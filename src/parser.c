#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 1
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_empty_line = 1,
  anon_sym_LT = 2,
  sym_following_word_chars = 3,
  sym_non_lt_char = 4,
  aux_sym_single_newline_token1 = 5,
  sym_title_token = 6,
  sym_whitespace = 7,
  sym_source_file = 8,
  sym_headline = 9,
  sym_initial_word_chars = 10,
  sym_lt_with_non_lt_char = 11,
  sym_paragraph = 12,
  sym_paragraph_first_word = 13,
  sym_single_newline = 14,
  sym_title_section = 15,
  sym_word = 16,
  sym_wordbreak = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_paragraph_repeat1 = 19,
  anon_alias_sym_headline = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_empty_line] = "empty_line",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [aux_sym_single_newline_token1] = "single_newline_token1",
  [sym_title_token] = "title_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_headline] = "headline",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_single_newline] = "single_newline",
  [sym_title_section] = "title_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_empty_line] = sym_empty_line,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [aux_sym_single_newline_token1] = aux_sym_single_newline_token1,
  [sym_title_token] = sym_title_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_headline] = sym_headline,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_single_newline] = sym_single_newline,
  [sym_title_section] = sym_title_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [anon_alias_sym_headline] = anon_alias_sym_headline,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_following_word_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_non_lt_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_single_newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_title_token] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_initial_word_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_with_non_lt_char] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_first_word] = {
    .visible = true,
    .named = true,
  },
  [sym_single_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_title_section] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_wordbreak] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_headline] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_headline,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_paragraph, 2,
    sym_paragraph,
    anon_alias_sym_headline,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 10,
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
  [24] = 9,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_empty_line);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_single_newline_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_title_token);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [aux_sym_single_newline_token1] = ACTIONS(1),
    [sym_title_token] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_title_section] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_title_token] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(9), 1,
      aux_sym_single_newline_token1,
    ACTIONS(11), 1,
      sym_whitespace,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(6), 1,
      sym_wordbreak,
    STATE(8), 1,
      sym_word,
    STATE(12), 1,
      sym_single_newline,
    STATE(28), 1,
      sym_initial_word_chars,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
  [31] = 10,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      sym_whitespace,
    ACTIONS(13), 1,
      aux_sym_single_newline_token1,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(6), 1,
      sym_wordbreak,
    STATE(8), 1,
      sym_word,
    STATE(10), 1,
      sym_single_newline,
    STATE(28), 1,
      sym_initial_word_chars,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
  [62] = 8,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(13), 1,
      aux_sym_single_newline_token1,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(8), 1,
      sym_word,
    STATE(23), 1,
      sym_single_newline,
    STATE(28), 1,
      sym_initial_word_chars,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
  [87] = 8,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(13), 1,
      aux_sym_single_newline_token1,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(8), 1,
      sym_word,
    STATE(22), 1,
      sym_single_newline,
    STATE(28), 1,
      sym_initial_word_chars,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
  [112] = 8,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(13), 1,
      aux_sym_single_newline_token1,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(8), 1,
      sym_word,
    STATE(22), 1,
      sym_single_newline,
    STATE(28), 1,
      sym_initial_word_chars,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
  [137] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(18), 1,
      sym_non_lt_char,
    ACTIONS(21), 1,
      aux_sym_single_newline_token1,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(8), 1,
      sym_word,
    STATE(28), 1,
      sym_initial_word_chars,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
  [159] = 5,
    ACTIONS(11), 1,
      sym_whitespace,
    ACTIONS(25), 1,
      aux_sym_single_newline_token1,
    STATE(20), 1,
      sym_single_newline,
    STATE(21), 1,
      sym_wordbreak,
    ACTIONS(23), 2,
      anon_sym_LT,
      sym_non_lt_char,
  [176] = 2,
    ACTIONS(30), 2,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      sym_empty_line,
      anon_sym_LT,
      sym_title_token,
  [187] = 3,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(36), 2,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_title_token,
  [200] = 2,
    ACTIONS(30), 1,
      sym_non_lt_char,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_single_newline_token1,
      sym_title_token,
  [210] = 3,
    ACTIONS(36), 1,
      sym_non_lt_char,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_title_token,
    ACTIONS(34), 2,
      anon_sym_LT,
      aux_sym_single_newline_token1,
  [222] = 4,
    ACTIONS(40), 1,
      sym_non_lt_char,
    STATE(2), 1,
      sym_paragraph_first_word,
    STATE(26), 1,
      sym_paragraph,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [236] = 3,
    ACTIONS(3), 1,
      sym_title_token,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [247] = 4,
    ACTIONS(44), 1,
      sym_non_lt_char,
    STATE(3), 1,
      sym_paragraph_first_word,
    STATE(19), 1,
      sym_headline,
    STATE(25), 1,
      sym_paragraph,
  [260] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym_title_token,
    STATE(16), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [271] = 1,
    ACTIONS(51), 4,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
      sym_whitespace,
  [278] = 1,
    ACTIONS(53), 4,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
      sym_whitespace,
  [285] = 2,
    ACTIONS(57), 1,
      sym_empty_line,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [293] = 1,
    ACTIONS(34), 3,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
  [299] = 1,
    ACTIONS(21), 3,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
  [305] = 1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_title_token,
  [311] = 1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_title_token,
  [317] = 1,
    ACTIONS(28), 3,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
  [323] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_title_token,
  [329] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [334] = 1,
    ACTIONS(67), 1,
      sym_empty_line,
  [338] = 1,
    ACTIONS(69), 1,
      sym_following_word_chars,
  [342] = 1,
    ACTIONS(71), 1,
      sym_following_word_chars,
  [346] = 1,
    ACTIONS(73), 1,
      sym_following_word_chars,
  [350] = 1,
    ACTIONS(75), 1,
      sym_non_lt_char,
  [354] = 1,
    ACTIONS(77), 1,
      sym_following_word_chars,
  [358] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 260,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 278,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 305,
  [SMALL_STATE(23)] = 311,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 323,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 342,
  [SMALL_STATE(30)] = 346,
  [SMALL_STATE(31)] = 350,
  [SMALL_STATE(32)] = 354,
  [SMALL_STATE(33)] = 358,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(31),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1), SHIFT_REPEAT(24),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_newline, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_newline, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wordbreak, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Neopolitan(void) {
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
