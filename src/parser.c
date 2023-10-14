#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_empty_line = 1,
  anon_sym_LT = 2,
  sym_following_word_chars = 3,
  sym_non_lt_char = 4,
  sym_p_section_header = 5,
  aux_sym_single_newline_token1 = 6,
  sym_title_token = 7,
  sym_whitespace = 8,
  sym_source_file = 9,
  sym_headline = 10,
  sym_initial_word_chars = 11,
  sym_lt_with_non_lt_char = 12,
  sym_p_section = 13,
  sym_paragraph = 14,
  sym_paragraph_first_word = 15,
  sym_single_newline = 16,
  sym_title_section = 17,
  sym_word = 18,
  sym_wordbreak = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_p_section_repeat1 = 21,
  aux_sym_paragraph_repeat1 = 22,
  anon_alias_sym_headline = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_empty_line] = "empty_line",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_header] = "p_section_header",
  [aux_sym_single_newline_token1] = "single_newline_token1",
  [sym_title_token] = "title_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_headline] = "headline",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_p_section] = "p_section",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_single_newline] = "single_newline",
  [sym_title_section] = "title_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_p_section_repeat1] = "p_section_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_empty_line] = sym_empty_line,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_header] = sym_p_section_header,
  [aux_sym_single_newline_token1] = aux_sym_single_newline_token1,
  [sym_title_token] = sym_title_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_headline] = sym_headline,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_p_section] = sym_p_section,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_single_newline] = sym_single_newline,
  [sym_title_section] = sym_title_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_p_section_repeat1] = aux_sym_p_section_repeat1,
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
  [sym_p_section_header] = {
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
  [sym_p_section] = {
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
  [aux_sym_p_section_repeat1] = {
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 7,
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
  [29] = 7,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
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
      if (lookahead == 'p') ADVANCE(18);
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
      ACCEPT_TOKEN(sym_p_section_header);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_single_newline_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_title_token);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
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
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_header] = ACTIONS(1),
    [aux_sym_single_newline_token1] = ACTIONS(1),
    [sym_title_token] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_p_section] = STATE(17),
    [sym_title_section] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_p_section_header] = ACTIONS(3),
    [sym_title_token] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      aux_sym_single_newline_token1,
    ACTIONS(13), 1,
      sym_whitespace,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(5), 1,
      sym_wordbreak,
    STATE(11), 1,
      sym_single_newline,
    STATE(16), 1,
      sym_word,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(33), 1,
      sym_lt_with_non_lt_char,
  [31] = 10,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    ACTIONS(13), 1,
      sym_whitespace,
    ACTIONS(15), 1,
      aux_sym_single_newline_token1,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(5), 1,
      sym_wordbreak,
    STATE(14), 1,
      sym_single_newline,
    STATE(16), 1,
      sym_word,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(33), 1,
      sym_lt_with_non_lt_char,
  [62] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      aux_sym_single_newline_token1,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(16), 1,
      sym_word,
    STATE(20), 1,
      sym_single_newline,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(33), 1,
      sym_lt_with_non_lt_char,
  [87] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      aux_sym_single_newline_token1,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(16), 1,
      sym_word,
    STATE(20), 1,
      sym_single_newline,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(33), 1,
      sym_lt_with_non_lt_char,
  [112] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      aux_sym_single_newline_token1,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(16), 1,
      sym_word,
    STATE(19), 1,
      sym_single_newline,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(33), 1,
      sym_lt_with_non_lt_char,
  [137] = 2,
    ACTIONS(19), 2,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      sym_empty_line,
      anon_sym_LT,
      sym_p_section_header,
      sym_title_token,
  [149] = 4,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(3), 1,
      sym_paragraph_first_word,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [165] = 7,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(28), 1,
      sym_non_lt_char,
    ACTIONS(31), 1,
      aux_sym_single_newline_token1,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(16), 1,
      sym_word,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(33), 1,
      sym_lt_with_non_lt_char,
  [187] = 4,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(3), 1,
      sym_paragraph_first_word,
    STATE(12), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [203] = 3,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 2,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_p_section_header,
      sym_title_token,
  [217] = 4,
    ACTIONS(43), 1,
      sym_non_lt_char,
    STATE(3), 1,
      sym_paragraph_first_word,
    STATE(12), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [233] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym_p_section_header,
    ACTIONS(51), 1,
      sym_title_token,
    STATE(13), 3,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [248] = 3,
    ACTIONS(39), 1,
      sym_non_lt_char,
    ACTIONS(37), 2,
      anon_sym_LT,
      aux_sym_single_newline_token1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [261] = 4,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(3), 1,
      sym_paragraph_first_word,
    STATE(26), 1,
      sym_paragraph,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [276] = 5,
    ACTIONS(13), 1,
      sym_whitespace,
    ACTIONS(58), 1,
      aux_sym_single_newline_token1,
    STATE(27), 1,
      sym_single_newline,
    STATE(28), 1,
      sym_wordbreak,
    ACTIONS(56), 2,
      anon_sym_LT,
      sym_non_lt_char,
  [293] = 4,
    ACTIONS(3), 1,
      sym_p_section_header,
    ACTIONS(5), 1,
      sym_title_token,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [308] = 2,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_p_section_header,
      aux_sym_single_newline_token1,
      sym_title_token,
  [319] = 2,
    ACTIONS(65), 1,
      sym_non_lt_char,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_p_section_header,
      sym_title_token,
  [329] = 2,
    ACTIONS(69), 1,
      sym_non_lt_char,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_p_section_header,
      sym_title_token,
  [339] = 4,
    ACTIONS(71), 1,
      sym_non_lt_char,
    STATE(2), 1,
      sym_paragraph_first_word,
    STATE(22), 1,
      sym_headline,
    STATE(23), 1,
      sym_paragraph,
  [352] = 2,
    ACTIONS(75), 1,
      sym_empty_line,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [361] = 1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_empty_line,
      sym_p_section_header,
      sym_title_token,
  [368] = 1,
    ACTIONS(79), 4,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
      sym_whitespace,
  [375] = 1,
    ACTIONS(81), 4,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
      sym_whitespace,
  [382] = 1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_p_section_header,
      sym_title_token,
  [388] = 1,
    ACTIONS(37), 3,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
  [394] = 1,
    ACTIONS(31), 3,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
  [400] = 1,
    ACTIONS(17), 3,
      anon_sym_LT,
      sym_non_lt_char,
      aux_sym_single_newline_token1,
  [406] = 2,
    ACTIONS(11), 1,
      aux_sym_single_newline_token1,
    STATE(36), 1,
      sym_single_newline,
  [413] = 1,
    ACTIONS(85), 1,
      sym_following_word_chars,
  [417] = 1,
    ACTIONS(87), 1,
      sym_following_word_chars,
  [421] = 1,
    ACTIONS(89), 1,
      sym_following_word_chars,
  [425] = 1,
    ACTIONS(91), 1,
      sym_non_lt_char,
  [429] = 1,
    ACTIONS(93), 1,
      sym_following_word_chars,
  [433] = 1,
    ACTIONS(95), 1,
      sym_empty_line,
  [437] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [441] = 1,
    ACTIONS(99), 1,
      sym_empty_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 319,
  [SMALL_STATE(20)] = 329,
  [SMALL_STATE(21)] = 339,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 400,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 413,
  [SMALL_STATE(32)] = 417,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 425,
  [SMALL_STATE(35)] = 429,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 441,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_newline, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_newline, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(34),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wordbreak, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_section_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_section_repeat1, 2), SHIFT_REPEAT(35),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1), SHIFT_REPEAT(29),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
