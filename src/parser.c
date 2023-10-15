#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
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
  sym_newline = 6,
  sym_non_lt_char = 7,
  sym_p_section_token = 8,
  sym_title_section_token = 9,
  sym_todo_left_bracket = 10,
  sym_todo_right_bracket = 11,
  sym_todo_checkmark = 12,
  sym_not_a_checkmark = 13,
  sym_todo_section_token = 14,
  sym_whitespace = 15,
  sym_source_file = 16,
  sym_headline = 17,
  sym_initial_word_chars = 18,
  sym_list_item = 19,
  sym_list_section = 20,
  sym_lt_with_non_lt_char = 21,
  sym_p_section = 22,
  sym_paragraph = 23,
  sym_paragraph_body = 24,
  sym_paragraph_first_word = 25,
  sym_title_section = 26,
  sym_empty_todo_bracket = 27,
  sym_completed_todo_bracket = 28,
  sym_in_progress_todo_bracket = 29,
  sym_todo_item = 30,
  sym_todo_section = 31,
  sym_word = 32,
  sym_wordbreak = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_list_item_repeat1 = 35,
  aux_sym_list_section_repeat1 = 36,
  aux_sym_paragraph_repeat1 = 37,
  aux_sym_todo_item_repeat1 = 38,
  aux_sym_todo_section_repeat1 = 39,
  anon_alias_sym_headline = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dashes] = "dashes",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_newline] = "newline",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
  [sym_not_a_checkmark] = "not_a_checkmark",
  [sym_todo_section_token] = "todo_section_token",
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
  [sym_empty_todo_bracket] = "empty_todo_bracket",
  [sym_completed_todo_bracket] = "completed_todo_bracket",
  [sym_in_progress_todo_bracket] = "in_progress_todo_bracket",
  [sym_todo_item] = "todo_item",
  [sym_todo_section] = "todo_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
  [aux_sym_list_section_repeat1] = "list_section_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_todo_item_repeat1] = "todo_item_repeat1",
  [aux_sym_todo_section_repeat1] = "todo_section_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dashes] = sym_dashes,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_newline] = sym_newline,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
  [sym_not_a_checkmark] = sym_not_a_checkmark,
  [sym_todo_section_token] = sym_todo_section_token,
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
  [sym_empty_todo_bracket] = sym_empty_todo_bracket,
  [sym_completed_todo_bracket] = sym_completed_todo_bracket,
  [sym_in_progress_todo_bracket] = sym_in_progress_todo_bracket,
  [sym_todo_item] = sym_todo_item,
  [sym_todo_section] = sym_todo_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
  [aux_sym_list_section_repeat1] = aux_sym_list_section_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_todo_item_repeat1] = aux_sym_todo_item_repeat1,
  [aux_sym_todo_section_repeat1] = aux_sym_todo_section_repeat1,
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
  [sym_newline] = {
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
  [sym_title_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_left_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_right_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_checkmark] = {
    .visible = true,
    .named = true,
  },
  [sym_not_a_checkmark] = {
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
  [sym_empty_todo_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_completed_todo_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_in_progress_todo_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_item] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_section] = {
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
  [aux_sym_todo_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_todo_section_repeat1] = {
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
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 14,
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
  [37] = 28,
  [38] = 34,
  [39] = 39,
  [40] = 29,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(26);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_not_a_checkmark);
      if (lookahead != 0 &&
          lookahead != 'X' &&
          lookahead != ']' &&
          lookahead != 'x') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_list_section] = STATE(15),
    [sym_p_section] = STATE(15),
    [sym_title_section] = STATE(15),
    [sym_todo_section] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(49), 1,
      sym_paragraph_body,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_todo_left_bracket,
  [30] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(16), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(49), 1,
      sym_paragraph_body,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_todo_left_bracket,
  [60] = 4,
    ACTIONS(21), 1,
      sym_todo_left_bracket,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(6), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(48), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [77] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(49), 1,
      sym_paragraph_body,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [102] = 4,
    ACTIONS(27), 1,
      sym_todo_left_bracket,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(6), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(48), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [119] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(30), 1,
      sym_newline,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [141] = 7,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_newline,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [163] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_dashes,
    STATE(9), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [177] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(45), 1,
      sym_newline,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [199] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(47), 1,
      sym_newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [221] = 5,
    ACTIONS(51), 1,
      sym_list_dash,
    ACTIONS(53), 1,
      sym_non_lt_char,
    STATE(34), 1,
      sym_paragraph_first_word,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(14), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [239] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(55), 1,
      sym_newline,
    STATE(8), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [261] = 5,
    ACTIONS(59), 1,
      sym_list_dash,
    ACTIONS(61), 1,
      sym_non_lt_char,
    STATE(34), 1,
      sym_paragraph_first_word,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(14), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [279] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(9), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [293] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(66), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(32), 1,
      sym_word,
    STATE(45), 1,
      sym_initial_word_chars,
    STATE(54), 1,
      sym_lt_with_non_lt_char,
  [315] = 5,
    ACTIONS(53), 1,
      sym_non_lt_char,
    ACTIONS(70), 1,
      sym_list_dash,
    STATE(34), 1,
      sym_paragraph_first_word,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(12), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [333] = 3,
    ACTIONS(21), 1,
      sym_todo_left_bracket,
    STATE(4), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(48), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [346] = 4,
    ACTIONS(53), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [361] = 4,
    ACTIONS(61), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [376] = 4,
    ACTIONS(53), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [391] = 4,
    ACTIONS(53), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(19), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [406] = 2,
    ACTIONS(78), 1,
      sym_non_lt_char,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      sym_dashes,
      anon_sym_LT,
      sym_todo_left_bracket,
  [416] = 3,
    ACTIONS(82), 1,
      sym_list_dash,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(25), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [428] = 3,
    ACTIONS(86), 1,
      sym_list_dash,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(25), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [440] = 3,
    ACTIONS(89), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    STATE(21), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [451] = 4,
    ACTIONS(91), 1,
      sym_list_section_token,
    ACTIONS(93), 1,
      sym_p_section_token,
    ACTIONS(95), 1,
      sym_title_section_token,
    ACTIONS(97), 1,
      sym_todo_section_token,
  [464] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(101), 2,
      sym_list_dash,
      sym_non_lt_char,
  [473] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(105), 2,
      sym_list_dash,
      sym_non_lt_char,
  [482] = 4,
    ACTIONS(89), 1,
      sym_non_lt_char,
    STATE(22), 1,
      sym_headline,
    STATE(36), 1,
      sym_paragraph,
    STATE(38), 1,
      sym_paragraph_first_word,
  [495] = 1,
    ACTIONS(35), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [501] = 3,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(31), 1,
      sym_wordbreak,
  [511] = 1,
    ACTIONS(111), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [517] = 3,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(16), 1,
      sym_wordbreak,
  [527] = 3,
    ACTIONS(113), 1,
      sym_todo_right_bracket,
    ACTIONS(115), 1,
      sym_todo_checkmark,
    ACTIONS(117), 1,
      sym_not_a_checkmark,
  [537] = 2,
    ACTIONS(121), 1,
      sym_non_lt_char,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [545] = 2,
    ACTIONS(101), 1,
      sym_non_lt_char,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [553] = 3,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(11), 1,
      sym_wordbreak,
  [563] = 2,
    ACTIONS(123), 1,
      sym_list_dash,
    STATE(24), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [571] = 2,
    ACTIONS(105), 1,
      sym_non_lt_char,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [579] = 2,
    ACTIONS(125), 1,
      sym_newline,
    ACTIONS(127), 1,
      sym_whitespace,
  [586] = 2,
    ACTIONS(129), 1,
      sym_newline,
    ACTIONS(131), 1,
      sym_whitespace,
  [593] = 1,
    ACTIONS(133), 1,
      sym_whitespace,
  [597] = 1,
    ACTIONS(135), 1,
      sym_non_lt_char,
  [601] = 1,
    ACTIONS(137), 1,
      sym_following_word_chars,
  [605] = 1,
    ACTIONS(139), 1,
      sym_newline,
  [609] = 1,
    ACTIONS(141), 1,
      sym_whitespace,
  [613] = 1,
    ACTIONS(143), 1,
      sym_whitespace,
  [617] = 1,
    ACTIONS(145), 1,
      sym_newline,
  [621] = 1,
    ACTIONS(147), 1,
      sym_newline,
  [625] = 1,
    ACTIONS(149), 1,
      sym_newline,
  [629] = 1,
    ACTIONS(151), 1,
      sym_following_word_chars,
  [633] = 1,
    ACTIONS(153), 1,
      sym_following_word_chars,
  [637] = 1,
    ACTIONS(155), 1,
      sym_following_word_chars,
  [641] = 1,
    ACTIONS(157), 1,
      sym_whitespace,
  [645] = 1,
    ACTIONS(159), 1,
      sym_newline,
  [649] = 1,
    ACTIONS(161), 1,
      sym_newline,
  [653] = 1,
    ACTIONS(163), 1,
      sym_newline,
  [657] = 1,
    ACTIONS(165), 1,
      sym_newline,
  [661] = 1,
    ACTIONS(167), 1,
      sym_todo_right_bracket,
  [665] = 1,
    ACTIONS(169), 1,
      sym_todo_right_bracket,
  [669] = 1,
    ACTIONS(171), 1,
      sym_newline,
  [673] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [677] = 1,
    ACTIONS(175), 1,
      sym_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 261,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 293,
  [SMALL_STATE(17)] = 315,
  [SMALL_STATE(18)] = 333,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 440,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 464,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 482,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 511,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 537,
  [SMALL_STATE(37)] = 545,
  [SMALL_STATE(38)] = 553,
  [SMALL_STATE(39)] = 563,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 579,
  [SMALL_STATE(42)] = 586,
  [SMALL_STATE(43)] = 593,
  [SMALL_STATE(44)] = 597,
  [SMALL_STATE(45)] = 601,
  [SMALL_STATE(46)] = 605,
  [SMALL_STATE(47)] = 609,
  [SMALL_STATE(48)] = 613,
  [SMALL_STATE(49)] = 617,
  [SMALL_STATE(50)] = 621,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 629,
  [SMALL_STATE(53)] = 633,
  [SMALL_STATE(54)] = 637,
  [SMALL_STATE(55)] = 641,
  [SMALL_STATE(56)] = 645,
  [SMALL_STATE(57)] = 649,
  [SMALL_STATE(58)] = 653,
  [SMALL_STATE(59)] = 657,
  [SMALL_STATE(60)] = 661,
  [SMALL_STATE(61)] = 665,
  [SMALL_STATE(62)] = 669,
  [SMALL_STATE(63)] = 673,
  [SMALL_STATE(64)] = 677,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(44),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(35),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(54),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(53),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(55),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_progress_todo_bracket, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
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
