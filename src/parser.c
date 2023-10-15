#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
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
  aux_sym_list_section_repeat1 = 25,
  aux_sym_p_section_repeat1 = 26,
  aux_sym_paragraph_repeat1 = 27,
  anon_alias_sym_headline = 28,
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
  [aux_sym_list_section_repeat1] = "list_section_repeat1",
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
  [aux_sym_list_section_repeat1] = aux_sym_list_section_repeat1,
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
  [aux_sym_list_section_repeat1] = {
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
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(20);
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
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
    [sym_source_file] = STATE(34),
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
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 1,
      sym_word,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
    STATE(31), 1,
      sym_initial_word_chars,
  [22] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      sym_newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 1,
      sym_word,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
    STATE(31), 1,
      sym_initial_word_chars,
  [44] = 7,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(16), 1,
      sym_non_lt_char,
    ACTIONS(19), 1,
      sym_newline,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 1,
      sym_word,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
    STATE(31), 1,
      sym_initial_word_chars,
  [66] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 1,
      sym_word,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
    STATE(31), 1,
      sym_initial_word_chars,
    STATE(32), 1,
      sym_paragraph_body,
  [88] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(21), 1,
      sym_newline,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(22), 1,
      sym_word,
    STATE(30), 1,
      sym_lt_with_non_lt_char,
    STATE(31), 1,
      sym_initial_word_chars,
  [110] = 4,
    ACTIONS(25), 1,
      sym_non_lt_char,
    STATE(18), 1,
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
    STATE(18), 1,
      sym_paragraph_first_word,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(7), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
  [166] = 3,
    ACTIONS(41), 1,
      sym_list_dash,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(11), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [178] = 4,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(18), 1,
      sym_paragraph_first_word,
    STATE(28), 1,
      sym_paragraph,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [192] = 3,
    ACTIONS(48), 1,
      sym_list_dash,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(11), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [204] = 3,
    ACTIONS(50), 1,
      sym_non_lt_char,
    STATE(18), 1,
      sym_paragraph_first_word,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_p_section_repeat1,
  [215] = 4,
    ACTIONS(50), 1,
      sym_non_lt_char,
    STATE(12), 1,
      sym_headline,
    STATE(18), 1,
      sym_paragraph_first_word,
    STATE(21), 1,
      sym_paragraph,
  [228] = 2,
    ACTIONS(54), 1,
      sym_list_dash,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [236] = 2,
    ACTIONS(58), 1,
      sym_non_lt_char,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [244] = 3,
    ACTIONS(60), 1,
      sym_newline,
    ACTIONS(62), 1,
      sym_whitespace,
    STATE(3), 1,
      sym_wordbreak,
  [254] = 3,
    ACTIONS(64), 1,
      sym_list_section_token,
    ACTIONS(66), 1,
      sym_p_section_token,
    ACTIONS(68), 1,
      sym_title_section_token,
  [264] = 2,
    ACTIONS(70), 1,
      sym_list_dash,
    STATE(13), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [272] = 2,
    ACTIONS(74), 1,
      sym_non_lt_char,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [280] = 3,
    ACTIONS(60), 1,
      sym_newline,
    ACTIONS(62), 1,
      sym_whitespace,
    STATE(24), 1,
      sym_wordbreak,
  [290] = 1,
    ACTIONS(76), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [296] = 1,
    ACTIONS(19), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [302] = 2,
    ACTIONS(80), 1,
      sym_non_lt_char,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [310] = 2,
    ACTIONS(82), 1,
      sym_newline,
    ACTIONS(84), 1,
      sym_whitespace,
  [317] = 2,
    ACTIONS(86), 1,
      sym_newline,
    ACTIONS(88), 1,
      sym_whitespace,
  [324] = 1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [329] = 1,
    ACTIONS(92), 1,
      sym_newline,
  [333] = 1,
    ACTIONS(94), 1,
      sym_following_word_chars,
  [337] = 1,
    ACTIONS(96), 1,
      sym_following_word_chars,
  [341] = 1,
    ACTIONS(98), 1,
      sym_newline,
  [345] = 1,
    ACTIONS(100), 1,
      sym_non_lt_char,
  [349] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [353] = 1,
    ACTIONS(104), 1,
      sym_following_word_chars,
  [357] = 1,
    ACTIONS(106), 1,
      sym_whitespace,
  [361] = 1,
    ACTIONS(108), 1,
      sym_following_word_chars,
  [365] = 1,
    ACTIONS(110), 1,
      sym_newline,
  [369] = 1,
    ACTIONS(112), 1,
      sym_newline,
  [373] = 1,
    ACTIONS(114), 1,
      sym_newline,
  [377] = 1,
    ACTIONS(116), 1,
      sym_newline,
  [381] = 1,
    ACTIONS(118), 1,
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
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 272,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 290,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 310,
  [SMALL_STATE(27)] = 317,
  [SMALL_STATE(28)] = 324,
  [SMALL_STATE(29)] = 329,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 345,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 353,
  [SMALL_STATE(36)] = 357,
  [SMALL_STATE(37)] = 361,
  [SMALL_STATE(38)] = 365,
  [SMALL_STATE(39)] = 369,
  [SMALL_STATE(40)] = 373,
  [SMALL_STATE(41)] = 377,
  [SMALL_STATE(42)] = 381,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(33),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_section_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_section_repeat1, 2), SHIFT_REPEAT(35),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(36),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
