#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
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
  sym_non_lt_char = 6,
  sym_optional_nb_whitespace = 7,
  sym_p_section_token = 8,
  sym_newline = 9,
  sym_title_section_token = 10,
  sym_todo_left_bracket = 11,
  sym_todo_right_bracket = 12,
  sym_todo_checkmark = 13,
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
  sym_todo_item = 29,
  sym_todo_section = 30,
  sym_word = 31,
  sym_wordbreak = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_list_item_repeat1 = 34,
  aux_sym_list_section_repeat1 = 35,
  aux_sym_paragraph_repeat1 = 36,
  aux_sym_todo_item_repeat1 = 37,
  aux_sym_todo_section_repeat1 = 38,
  anon_alias_sym_headline = 39,
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
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
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
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_optional_nb_whitespace] = sym_optional_nb_whitespace,
  [sym_p_section_token] = sym_p_section_token,
  [sym_newline] = sym_newline,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
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
  [sym_todo_right_bracket] = {
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
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 6,
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
  [35] = 27,
  [36] = 36,
  [37] = 33,
  [38] = 28,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (eof) ADVANCE(18);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t') ADVANCE(27);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(30);
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
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
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
    [sym_source_file] = STATE(62),
    [sym_list_section] = STATE(14),
    [sym_p_section] = STATE(14),
    [sym_title_section] = STATE(14),
    [sym_todo_section] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(10), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_paragraph_body,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_todo_left_bracket,
  [30] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_paragraph_body,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_todo_left_bracket,
  [60] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_paragraph_body,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [85] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(21), 1,
      sym_newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [107] = 5,
    ACTIONS(25), 1,
      sym_list_dash,
    ACTIONS(27), 1,
      sym_non_lt_char,
    STATE(33), 1,
      sym_paragraph_first_word,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(6), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [125] = 7,
    ACTIONS(30), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym_non_lt_char,
    ACTIONS(36), 1,
      sym_newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [147] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym_dashes,
    STATE(8), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [161] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(43), 1,
      sym_newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [183] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(45), 1,
      sym_newline,
    STATE(7), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [205] = 5,
    ACTIONS(49), 1,
      sym_list_dash,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(33), 1,
      sym_paragraph_first_word,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(12), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [223] = 5,
    ACTIONS(51), 1,
      sym_non_lt_char,
    ACTIONS(55), 1,
      sym_list_dash,
    STATE(33), 1,
      sym_paragraph_first_word,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(6), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [241] = 4,
    ACTIONS(59), 1,
      sym_todo_left_bracket,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(13), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(47), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [257] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(8), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [271] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(64), 1,
      sym_newline,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [293] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(66), 1,
      sym_newline,
    STATE(5), 1,
      aux_sym_paragraph_repeat1,
    STATE(31), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(53), 1,
      sym_lt_with_non_lt_char,
  [315] = 4,
    ACTIONS(70), 1,
      sym_todo_left_bracket,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(13), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(47), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [331] = 4,
    ACTIONS(27), 1,
      sym_non_lt_char,
    STATE(37), 1,
      sym_paragraph_first_word,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(18), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [346] = 4,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(37), 1,
      sym_paragraph_first_word,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(18), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [361] = 2,
    ACTIONS(74), 1,
      sym_non_lt_char,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_dashes,
      anon_sym_LT,
      sym_todo_left_bracket,
  [371] = 3,
    ACTIONS(70), 1,
      sym_todo_left_bracket,
    STATE(17), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(47), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [383] = 3,
    ACTIONS(78), 1,
      sym_list_dash,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(23), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [395] = 3,
    ACTIONS(82), 1,
      sym_list_dash,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(23), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [407] = 4,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(37), 1,
      sym_paragraph_first_word,
    STATE(40), 1,
      sym_paragraph,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [421] = 3,
    ACTIONS(87), 1,
      sym_non_lt_char,
    STATE(37), 1,
      sym_paragraph_first_word,
    STATE(19), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [432] = 4,
    ACTIONS(89), 1,
      sym_list_section_token,
    ACTIONS(91), 1,
      sym_p_section_token,
    ACTIONS(93), 1,
      sym_title_section_token,
    ACTIONS(95), 1,
      sym_todo_section_token,
  [445] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(99), 2,
      sym_list_dash,
      sym_non_lt_char,
  [454] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(103), 2,
      sym_list_dash,
      sym_non_lt_char,
  [463] = 4,
    ACTIONS(87), 1,
      sym_non_lt_char,
    STATE(24), 1,
      sym_headline,
    STATE(34), 1,
      sym_paragraph,
    STATE(37), 1,
      sym_paragraph_first_word,
  [476] = 1,
    ACTIONS(36), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [482] = 3,
    ACTIONS(105), 1,
      sym_newline,
    ACTIONS(107), 1,
      sym_whitespace,
    STATE(30), 1,
      sym_wordbreak,
  [492] = 1,
    ACTIONS(109), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [498] = 3,
    ACTIONS(105), 1,
      sym_newline,
    ACTIONS(107), 1,
      sym_whitespace,
    STATE(15), 1,
      sym_wordbreak,
  [508] = 2,
    ACTIONS(113), 1,
      sym_non_lt_char,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [516] = 2,
    ACTIONS(99), 1,
      sym_non_lt_char,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [524] = 2,
    ACTIONS(115), 1,
      sym_list_dash,
    STATE(22), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [532] = 3,
    ACTIONS(105), 1,
      sym_newline,
    ACTIONS(107), 1,
      sym_whitespace,
    STATE(16), 1,
      sym_wordbreak,
  [542] = 2,
    ACTIONS(103), 1,
      sym_non_lt_char,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [550] = 2,
    ACTIONS(117), 1,
      sym_newline,
    ACTIONS(119), 1,
      sym_whitespace,
  [557] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [562] = 2,
    ACTIONS(123), 1,
      sym_optional_nb_whitespace,
    ACTIONS(125), 1,
      sym_todo_checkmark,
  [569] = 2,
    ACTIONS(127), 1,
      sym_newline,
    ACTIONS(129), 1,
      sym_whitespace,
  [576] = 1,
    ACTIONS(131), 1,
      sym_whitespace,
  [580] = 1,
    ACTIONS(133), 1,
      sym_following_word_chars,
  [584] = 1,
    ACTIONS(135), 1,
      sym_newline,
  [588] = 1,
    ACTIONS(137), 1,
      sym_whitespace,
  [592] = 1,
    ACTIONS(139), 1,
      sym_whitespace,
  [596] = 1,
    ACTIONS(141), 1,
      sym_newline,
  [600] = 1,
    ACTIONS(143), 1,
      sym_newline,
  [604] = 1,
    ACTIONS(145), 1,
      sym_newline,
  [608] = 1,
    ACTIONS(147), 1,
      sym_following_word_chars,
  [612] = 1,
    ACTIONS(149), 1,
      sym_following_word_chars,
  [616] = 1,
    ACTIONS(151), 1,
      sym_following_word_chars,
  [620] = 1,
    ACTIONS(153), 1,
      sym_non_lt_char,
  [624] = 1,
    ACTIONS(155), 1,
      sym_newline,
  [628] = 1,
    ACTIONS(157), 1,
      sym_newline,
  [632] = 1,
    ACTIONS(159), 1,
      sym_newline,
  [636] = 1,
    ACTIONS(161), 1,
      sym_newline,
  [640] = 1,
    ACTIONS(163), 1,
      sym_whitespace,
  [644] = 1,
    ACTIONS(165), 1,
      sym_todo_right_bracket,
  [648] = 1,
    ACTIONS(167), 1,
      sym_newline,
  [652] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [656] = 1,
    ACTIONS(171), 1,
      sym_todo_right_bracket,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 293,
  [SMALL_STATE(17)] = 315,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 407,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 463,
  [SMALL_STATE(30)] = 476,
  [SMALL_STATE(31)] = 482,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 498,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 516,
  [SMALL_STATE(36)] = 524,
  [SMALL_STATE(37)] = 532,
  [SMALL_STATE(38)] = 542,
  [SMALL_STATE(39)] = 550,
  [SMALL_STATE(40)] = 557,
  [SMALL_STATE(41)] = 562,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 576,
  [SMALL_STATE(44)] = 580,
  [SMALL_STATE(45)] = 584,
  [SMALL_STATE(46)] = 588,
  [SMALL_STATE(47)] = 592,
  [SMALL_STATE(48)] = 596,
  [SMALL_STATE(49)] = 600,
  [SMALL_STATE(50)] = 604,
  [SMALL_STATE(51)] = 608,
  [SMALL_STATE(52)] = 612,
  [SMALL_STATE(53)] = 616,
  [SMALL_STATE(54)] = 620,
  [SMALL_STATE(55)] = 624,
  [SMALL_STATE(56)] = 628,
  [SMALL_STATE(57)] = 632,
  [SMALL_STATE(58)] = 636,
  [SMALL_STATE(59)] = 640,
  [SMALL_STATE(60)] = 644,
  [SMALL_STATE(61)] = 648,
  [SMALL_STATE(62)] = 652,
  [SMALL_STATE(63)] = 656,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(54),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(52),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(54),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(59),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
