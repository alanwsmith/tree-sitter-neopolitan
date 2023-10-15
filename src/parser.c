#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 1
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_dashes = 1,
  sym_list_dash = 2,
  sym_list_section_token = 3,
  anon_sym_LT = 4,
  sym_following_word_chars = 5,
  sym_non_lt_char = 6,
  sym_p_section_token = 7,
  sym_newline = 8,
  sym_title_section_token = 9,
  sym_whitespace = 10,
  sym_source_file = 11,
  sym_headline = 12,
  sym_initial_word_chars = 13,
  sym_list_item = 14,
  sym_list_section = 15,
  sym_lt_with_non_lt_char = 16,
  sym_p_section = 17,
  sym_paragraph = 18,
  sym_paragraph_body = 19,
  sym_paragraph_first_word = 20,
  sym_title_section = 21,
  sym_word = 22,
  sym_wordbreak = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_p_section_repeat1 = 25,
  aux_sym_paragraph_repeat1 = 26,
  anon_alias_sym_headline = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dashes] = "dashes",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_newline] = "newline",
  [sym_title_section_token] = "title_section_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_headline] = "headline",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_list_item] = "list_item",
  [sym_list_section] = "list_section",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_p_section] = "p_section",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_body] = "paragraph_body",
  [sym_paragraph_first_word] = "paragraph_first_word",
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
  [sym_dashes] = sym_dashes,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_newline] = sym_newline,
  [sym_title_section_token] = sym_title_section_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_headline] = sym_headline,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_list_item] = sym_list_item,
  [sym_list_section] = sym_list_section,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_p_section] = sym_p_section,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_body] = sym_paragraph_body,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
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
  [sym_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_list_dash] = {
    .visible = true,
    .named = true,
  },
  [sym_list_section_token] = {
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
  [sym_p_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_title_section_token] = {
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
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_list_section] = {
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
  [sym_paragraph_body] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_first_word] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_list_dash);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_list_section] = STATE(8),
    [sym_p_section] = STATE(8),
    [sym_title_section] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(9), 1,
      sym_newline,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(18), 1,
      sym_word,
    STATE(29), 1,
      sym_lt_with_non_lt_char,
    STATE(30), 1,
      sym_initial_word_chars,
  [22] = 7,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(14), 1,
      sym_non_lt_char,
    ACTIONS(17), 1,
      sym_newline,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(18), 1,
      sym_word,
    STATE(29), 1,
      sym_lt_with_non_lt_char,
    STATE(30), 1,
      sym_initial_word_chars,
  [44] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(18), 1,
      sym_word,
    STATE(29), 1,
      sym_lt_with_non_lt_char,
    STATE(30), 1,
      sym_initial_word_chars,
    STATE(31), 1,
      sym_paragraph_body,
  [66] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(19), 1,
      sym_newline,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(18), 1,
      sym_word,
    STATE(29), 1,
      sym_lt_with_non_lt_char,
    STATE(30), 1,
      sym_initial_word_chars,
  [88] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(21), 1,
      sym_newline,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(18), 1,
      sym_word,
    STATE(29), 1,
      sym_lt_with_non_lt_char,
    STATE(30), 1,
      sym_initial_word_chars,
  [110] = 4,
    ACTIONS(25), 1,
      sym_non_lt_char,
    STATE(17), 1,
      sym_paragraph_first_word,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(7), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
  [125] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(9), 4,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [138] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_dashes,
    STATE(9), 4,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [151] = 4,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(17), 1,
      sym_paragraph_first_word,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(7), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
  [166] = 4,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(17), 1,
      sym_paragraph_first_word,
    STATE(27), 1,
      sym_paragraph,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [180] = 4,
    ACTIONS(41), 1,
      sym_non_lt_char,
    STATE(11), 1,
      sym_headline,
    STATE(14), 1,
      sym_paragraph,
    STATE(17), 1,
      sym_paragraph_first_word,
  [193] = 3,
    ACTIONS(41), 1,
      sym_non_lt_char,
    STATE(17), 1,
      sym_paragraph_first_word,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
  [204] = 2,
    ACTIONS(45), 1,
      sym_non_lt_char,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [212] = 2,
    ACTIONS(49), 1,
      sym_non_lt_char,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [220] = 3,
    ACTIONS(51), 1,
      sym_list_section_token,
    ACTIONS(53), 1,
      sym_p_section_token,
    ACTIONS(55), 1,
      sym_title_section_token,
  [230] = 3,
    ACTIONS(57), 1,
      sym_newline,
    ACTIONS(59), 1,
      sym_whitespace,
    STATE(2), 1,
      sym_wordbreak,
  [240] = 3,
    ACTIONS(57), 1,
      sym_newline,
    ACTIONS(59), 1,
      sym_whitespace,
    STATE(20), 1,
      sym_wordbreak,
  [250] = 1,
    ACTIONS(61), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [256] = 1,
    ACTIONS(17), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [262] = 2,
    ACTIONS(65), 1,
      sym_non_lt_char,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [270] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [275] = 2,
    ACTIONS(69), 1,
      sym_list_dash,
    STATE(22), 1,
      sym_list_item,
  [282] = 2,
    ACTIONS(71), 1,
      sym_newline,
    ACTIONS(73), 1,
      sym_whitespace,
  [289] = 1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [294] = 2,
    ACTIONS(77), 1,
      sym_newline,
    ACTIONS(79), 1,
      sym_whitespace,
  [301] = 1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [306] = 1,
    ACTIONS(83), 1,
      sym_newline,
  [310] = 1,
    ACTIONS(85), 1,
      sym_following_word_chars,
  [314] = 1,
    ACTIONS(87), 1,
      sym_following_word_chars,
  [318] = 1,
    ACTIONS(89), 1,
      sym_newline,
  [322] = 1,
    ACTIONS(91), 1,
      sym_non_lt_char,
  [326] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [330] = 1,
    ACTIONS(95), 1,
      sym_following_word_chars,
  [334] = 1,
    ACTIONS(97), 1,
      sym_whitespace,
  [338] = 1,
    ACTIONS(99), 1,
      sym_following_word_chars,
  [342] = 1,
    ACTIONS(101), 1,
      sym_newline,
  [346] = 1,
    ACTIONS(103), 1,
      sym_newline,
  [350] = 1,
    ACTIONS(105), 1,
      sym_newline,
  [354] = 1,
    ACTIONS(107), 1,
      sym_newline,
  [358] = 1,
    ACTIONS(109), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 125,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 220,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 240,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 289,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 310,
  [SMALL_STATE(30)] = 314,
  [SMALL_STATE(31)] = 318,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 326,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 334,
  [SMALL_STATE(36)] = 338,
  [SMALL_STATE(37)] = 342,
  [SMALL_STATE(38)] = 346,
  [SMALL_STATE(39)] = 350,
  [SMALL_STATE(40)] = 354,
  [SMALL_STATE(41)] = 358,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_section_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_section_repeat1, 2), SHIFT_REPEAT(34),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
