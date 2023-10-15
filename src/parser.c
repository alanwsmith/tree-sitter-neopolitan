#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_dashes = 1,
  sym_list_dash = 2,
  sym_list_section_token = 3,
  anon_sym_LT = 4,
  sym_following_word_chars = 5,
  sym_non_lt_char = 6,
  sym_optional_nb_whitespace = 7,
  sym_p_section_token = 8,
  sym_newline = 9,
  sym_title_section_token = 10,
  sym_todo_left_bracket = 11,
  sym_todo_checkmark = 12,
  sym_todo_section_token = 13,
  sym_whitespace = 14,
  sym_source_file = 15,
  sym_initial_word_chars = 16,
  sym_list_item = 17,
  sym_list_section = 18,
  sym_lt_with_non_lt_char = 19,
  sym_p_section = 20,
  sym_paragraph = 21,
  sym_paragraph_first_word = 22,
  sym_word = 23,
  sym_wordbreak = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_list_item_repeat1 = 26,
  aux_sym_list_section_repeat1 = 27,
  aux_sym_paragraph_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dashes] = "dashes",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_optional_nb_whitespace] = "optional_nb_whitespace",
  [sym_p_section_token] = "p_section_token",
  [sym_newline] = "newline",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
  [sym_todo_section_token] = "todo_section_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_list_item] = "list_item",
  [sym_list_section] = "list_section",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_p_section] = "p_section",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
  [aux_sym_list_section_repeat1] = "list_section_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dashes] = sym_dashes,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_optional_nb_whitespace] = sym_optional_nb_whitespace,
  [sym_p_section_token] = sym_p_section_token,
  [sym_newline] = sym_newline,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
  [sym_todo_section_token] = sym_todo_section_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_list_item] = sym_list_item,
  [sym_list_section] = sym_list_section,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_p_section] = sym_p_section,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
  [aux_sym_list_section_repeat1] = aux_sym_list_section_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
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
  [sym_optional_nb_whitespace] = {
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
  [sym_todo_left_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_checkmark] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_section_token] = {
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
  [sym_paragraph_first_word] = {
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
  [aux_sym_list_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
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
  [6] = 2,
  [7] = 7,
  [8] = 3,
  [9] = 9,
  [10] = 4,
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
  [21] = 20,
  [22] = 22,
  [23] = 16,
  [24] = 17,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (eof) ADVANCE(17);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(22);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(23);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(34);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [sym_list_section_token] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_optional_nb_whitespace] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_title_section_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
    [sym_todo_section_token] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_list_section] = STATE(12),
    [sym_p_section] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    STATE(26), 1,
      sym_word,
    STATE(33), 1,
      sym_initial_word_chars,
    STATE(34), 1,
      sym_lt_with_non_lt_char,
  [22] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(11), 1,
      sym_newline,
    STATE(2), 1,
      aux_sym_paragraph_repeat1,
    STATE(26), 1,
      sym_word,
    STATE(33), 1,
      sym_initial_word_chars,
    STATE(34), 1,
      sym_lt_with_non_lt_char,
  [44] = 5,
    ACTIONS(15), 1,
      sym_list_dash,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(21), 1,
      sym_paragraph_first_word,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(4), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [62] = 7,
    ACTIONS(20), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(26), 1,
      sym_newline,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(26), 1,
      sym_word,
    STATE(33), 1,
      sym_initial_word_chars,
    STATE(34), 1,
      sym_lt_with_non_lt_char,
  [84] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(28), 1,
      sym_newline,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(26), 1,
      sym_word,
    STATE(33), 1,
      sym_initial_word_chars,
    STATE(34), 1,
      sym_lt_with_non_lt_char,
  [106] = 5,
    ACTIONS(32), 1,
      sym_list_dash,
    ACTIONS(34), 1,
      sym_non_lt_char,
    STATE(21), 1,
      sym_paragraph_first_word,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(4), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [124] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(36), 1,
      sym_newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(26), 1,
      sym_word,
    STATE(33), 1,
      sym_initial_word_chars,
    STATE(34), 1,
      sym_lt_with_non_lt_char,
  [146] = 5,
    ACTIONS(34), 1,
      sym_non_lt_char,
    ACTIONS(40), 1,
      sym_list_dash,
    STATE(21), 1,
      sym_paragraph_first_word,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(7), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [164] = 4,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(20), 1,
      sym_paragraph_first_word,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [179] = 4,
    ACTIONS(34), 1,
      sym_non_lt_char,
    STATE(20), 1,
      sym_paragraph_first_word,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [194] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_list_section,
      sym_p_section,
      aux_sym_source_file_repeat1,
  [206] = 3,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      sym_dashes,
    STATE(13), 3,
      sym_list_section,
      sym_p_section,
      aux_sym_source_file_repeat1,
  [218] = 3,
    ACTIONS(53), 1,
      sym_list_dash,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(15), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [230] = 3,
    ACTIONS(57), 1,
      sym_list_dash,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(15), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [242] = 2,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(62), 2,
      sym_list_dash,
      sym_non_lt_char,
  [251] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(66), 2,
      sym_list_dash,
      sym_non_lt_char,
  [260] = 3,
    ACTIONS(68), 1,
      sym_non_lt_char,
    STATE(20), 1,
      sym_paragraph_first_word,
    STATE(11), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [271] = 1,
    ACTIONS(70), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [277] = 3,
    ACTIONS(72), 1,
      sym_newline,
    ACTIONS(74), 1,
      sym_whitespace,
    STATE(8), 1,
      sym_wordbreak,
  [287] = 3,
    ACTIONS(72), 1,
      sym_newline,
    ACTIONS(74), 1,
      sym_whitespace,
    STATE(3), 1,
      sym_wordbreak,
  [297] = 2,
    ACTIONS(76), 1,
      sym_list_dash,
    STATE(14), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [305] = 2,
    ACTIONS(62), 1,
      sym_non_lt_char,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [313] = 2,
    ACTIONS(66), 1,
      sym_non_lt_char,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [321] = 1,
    ACTIONS(26), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [327] = 3,
    ACTIONS(72), 1,
      sym_newline,
    ACTIONS(74), 1,
      sym_whitespace,
    STATE(25), 1,
      sym_wordbreak,
  [337] = 2,
    ACTIONS(78), 1,
      sym_newline,
    ACTIONS(80), 1,
      sym_whitespace,
  [344] = 2,
    ACTIONS(82), 1,
      sym_list_section_token,
    ACTIONS(84), 1,
      sym_p_section_token,
  [351] = 2,
    ACTIONS(86), 1,
      sym_newline,
    ACTIONS(88), 1,
      sym_whitespace,
  [358] = 1,
    ACTIONS(90), 1,
      sym_following_word_chars,
  [362] = 1,
    ACTIONS(92), 1,
      sym_whitespace,
  [366] = 1,
    ACTIONS(94), 1,
      sym_following_word_chars,
  [370] = 1,
    ACTIONS(96), 1,
      sym_following_word_chars,
  [374] = 1,
    ACTIONS(98), 1,
      sym_following_word_chars,
  [378] = 1,
    ACTIONS(100), 1,
      sym_newline,
  [382] = 1,
    ACTIONS(102), 1,
      sym_newline,
  [386] = 1,
    ACTIONS(104), 1,
      sym_newline,
  [390] = 1,
    ACTIONS(106), 1,
      sym_newline,
  [394] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [398] = 1,
    ACTIONS(110), 1,
      sym_non_lt_char,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 179,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 206,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 287,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 313,
  [SMALL_STATE(25)] = 321,
  [SMALL_STATE(26)] = 327,
  [SMALL_STATE(27)] = 337,
  [SMALL_STATE(28)] = 344,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 358,
  [SMALL_STATE(31)] = 362,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 370,
  [SMALL_STATE(34)] = 374,
  [SMALL_STATE(35)] = 378,
  [SMALL_STATE(36)] = 382,
  [SMALL_STATE(37)] = 386,
  [SMALL_STATE(38)] = 390,
  [SMALL_STATE(39)] = 394,
  [SMALL_STATE(40)] = 398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(32),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(40),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(31),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
