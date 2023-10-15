#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_attr_dashes = 1,
  sym_attr_key = 2,
  sym_attr_separator = 3,
  sym_attr_value = 4,
  sym_dashes = 5,
  sym_list_dash = 6,
  sym_list_section_token = 7,
  anon_sym_LT = 8,
  sym_following_word_chars = 9,
  sym_nb_whitespace = 10,
  sym_newline = 11,
  sym_non_lt_char = 12,
  sym_p_section_token = 13,
  sym_title_section_token = 14,
  sym_todo_left_bracket = 15,
  sym_todo_right_bracket = 16,
  sym_todo_checkmark = 17,
  sym_not_a_checkmark = 18,
  sym_todo_section_token = 19,
  sym_source_file = 20,
  sym_attr = 21,
  sym_headline = 22,
  sym_initial_word_chars = 23,
  sym_list_item = 24,
  sym_list_section = 25,
  sym_lt_with_non_lt_char = 26,
  sym_p_section = 27,
  sym_paragraph = 28,
  sym_paragraph_body = 29,
  sym_paragraph_first_word = 30,
  sym_title_section = 31,
  sym_empty_todo_bracket = 32,
  sym_completed_todo_bracket = 33,
  sym_in_progress_todo_bracket = 34,
  sym_todo_item = 35,
  sym_todo_section = 36,
  sym_word = 37,
  sym_wordbreak = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_list_item_repeat1 = 40,
  aux_sym_list_section_repeat1 = 41,
  aux_sym_p_section_repeat1 = 42,
  aux_sym_paragraph_repeat1 = 43,
  aux_sym_todo_item_repeat1 = 44,
  aux_sym_todo_section_repeat1 = 45,
  anon_alias_sym_headline = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_attr_dashes] = "attr_dashes",
  [sym_attr_key] = "attr_key",
  [sym_attr_separator] = "attr_separator",
  [sym_attr_value] = "attr_value",
  [sym_dashes] = "dashes",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_nb_whitespace] = "nb_whitespace",
  [sym_newline] = "newline",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
  [sym_not_a_checkmark] = "not_a_checkmark",
  [sym_todo_section_token] = "todo_section_token",
  [sym_source_file] = "source_file",
  [sym_attr] = "attr",
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
  [aux_sym_p_section_repeat1] = "p_section_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_todo_item_repeat1] = "todo_item_repeat1",
  [aux_sym_todo_section_repeat1] = "todo_section_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_attr_dashes] = sym_attr_dashes,
  [sym_attr_key] = sym_attr_key,
  [sym_attr_separator] = sym_attr_separator,
  [sym_attr_value] = sym_attr_value,
  [sym_dashes] = sym_dashes,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_nb_whitespace] = sym_nb_whitespace,
  [sym_newline] = sym_newline,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
  [sym_not_a_checkmark] = sym_not_a_checkmark,
  [sym_todo_section_token] = sym_todo_section_token,
  [sym_source_file] = sym_source_file,
  [sym_attr] = sym_attr,
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
  [aux_sym_p_section_repeat1] = aux_sym_p_section_repeat1,
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
  [sym_attr_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
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
  [sym_nb_whitespace] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
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
  [aux_sym_p_section_repeat1] = {
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 7,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 9,
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
  [39] = 38,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 34,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(24);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(35);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(35);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attr_dashes);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attr_key);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attr_separator);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attr_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t') ADVANCE(33);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_not_a_checkmark);
      if (lookahead != 0 &&
          lookahead != 'X' &&
          lookahead != ']' &&
          lookahead != 'x') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_separator] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_nb_whitespace] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_list_section] = STATE(8),
    [sym_p_section] = STATE(8),
    [sym_title_section] = STATE(8),
    [sym_todo_section] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
    STATE(57), 1,
      sym_paragraph_body,
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
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
    STATE(57), 1,
      sym_paragraph_body,
    ACTIONS(13), 3,
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
    STATE(59), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [77] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
    STATE(57), 1,
      sym_paragraph_body,
  [102] = 4,
    ACTIONS(27), 1,
      sym_todo_left_bracket,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(6), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(59), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [119] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(30), 1,
      sym_newline,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
  [141] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(12), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [155] = 5,
    ACTIONS(36), 1,
      sym_list_dash,
    ACTIONS(38), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(9), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [173] = 5,
    ACTIONS(43), 1,
      sym_list_dash,
    ACTIONS(45), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(15), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [191] = 7,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      sym_newline,
    ACTIONS(52), 1,
      sym_non_lt_char,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
  [213] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_dashes,
    STATE(12), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [227] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(60), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
  [249] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(62), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
  [271] = 5,
    ACTIONS(45), 1,
      sym_non_lt_char,
    ACTIONS(66), 1,
      sym_list_dash,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(9), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [289] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(68), 1,
      sym_newline,
    STATE(17), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
  [311] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(70), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(42), 1,
      sym_word,
    STATE(52), 1,
      sym_lt_with_non_lt_char,
    STATE(53), 1,
      sym_initial_word_chars,
  [333] = 4,
    ACTIONS(45), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [348] = 3,
    ACTIONS(21), 1,
      sym_todo_left_bracket,
    STATE(4), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(59), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [361] = 4,
    ACTIONS(38), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [376] = 4,
    ACTIONS(45), 1,
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
    ACTIONS(45), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [406] = 4,
    ACTIONS(45), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [421] = 3,
    ACTIONS(82), 1,
      sym_list_dash,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(25), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [433] = 3,
    ACTIONS(86), 1,
      sym_list_dash,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(25), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [445] = 2,
    ACTIONS(89), 1,
      sym_non_lt_char,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_dashes,
      anon_sym_LT,
      sym_todo_left_bracket,
  [455] = 4,
    ACTIONS(91), 1,
      sym_non_lt_char,
    STATE(18), 1,
      sym_headline,
    STATE(38), 1,
      sym_paragraph_first_word,
    STATE(43), 1,
      sym_paragraph,
  [468] = 4,
    ACTIONS(93), 1,
      sym_list_section_token,
    ACTIONS(95), 1,
      sym_p_section_token,
    ACTIONS(97), 1,
      sym_title_section_token,
    ACTIONS(99), 1,
      sym_todo_section_token,
  [481] = 3,
    ACTIONS(101), 1,
      sym_attr_dashes,
    ACTIONS(103), 1,
      sym_newline,
    STATE(33), 2,
      sym_attr,
      aux_sym_p_section_repeat1,
  [492] = 3,
    ACTIONS(91), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    STATE(21), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [503] = 3,
    ACTIONS(105), 1,
      sym_attr_dashes,
    ACTIONS(108), 1,
      sym_newline,
    STATE(31), 2,
      sym_attr,
      aux_sym_p_section_repeat1,
  [514] = 3,
    ACTIONS(91), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    STATE(23), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [525] = 3,
    ACTIONS(101), 1,
      sym_attr_dashes,
    ACTIONS(110), 1,
      sym_newline,
    STATE(31), 2,
      sym_attr,
      aux_sym_p_section_repeat1,
  [536] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(114), 2,
      sym_list_dash,
      sym_non_lt_char,
  [545] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(118), 2,
      sym_list_dash,
      sym_non_lt_char,
  [554] = 3,
    ACTIONS(120), 1,
      sym_todo_right_bracket,
    ACTIONS(122), 1,
      sym_todo_checkmark,
    ACTIONS(124), 1,
      sym_not_a_checkmark,
  [564] = 1,
    ACTIONS(126), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [570] = 3,
    ACTIONS(128), 1,
      sym_nb_whitespace,
    ACTIONS(130), 1,
      sym_newline,
    STATE(7), 1,
      sym_wordbreak,
  [580] = 3,
    ACTIONS(128), 1,
      sym_nb_whitespace,
    ACTIONS(130), 1,
      sym_newline,
    STATE(16), 1,
      sym_wordbreak,
  [590] = 2,
    ACTIONS(118), 1,
      sym_non_lt_char,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [598] = 1,
    ACTIONS(50), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [604] = 3,
    ACTIONS(128), 1,
      sym_nb_whitespace,
    ACTIONS(130), 1,
      sym_newline,
    STATE(41), 1,
      sym_wordbreak,
  [614] = 2,
    ACTIONS(134), 1,
      sym_non_lt_char,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [622] = 2,
    ACTIONS(136), 1,
      sym_list_dash,
    STATE(24), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [630] = 2,
    ACTIONS(114), 1,
      sym_non_lt_char,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [638] = 2,
    ACTIONS(138), 1,
      sym_nb_whitespace,
    ACTIONS(140), 1,
      sym_newline,
  [645] = 1,
    ACTIONS(142), 2,
      sym_attr_dashes,
      sym_newline,
  [650] = 2,
    ACTIONS(144), 1,
      sym_nb_whitespace,
    ACTIONS(146), 1,
      sym_newline,
  [657] = 1,
    ACTIONS(148), 1,
      sym_nb_whitespace,
  [661] = 1,
    ACTIONS(150), 1,
      sym_nb_whitespace,
  [665] = 1,
    ACTIONS(152), 1,
      sym_non_lt_char,
  [669] = 1,
    ACTIONS(154), 1,
      sym_following_word_chars,
  [673] = 1,
    ACTIONS(156), 1,
      sym_following_word_chars,
  [677] = 1,
    ACTIONS(158), 1,
      sym_newline,
  [681] = 1,
    ACTIONS(160), 1,
      sym_nb_whitespace,
  [685] = 1,
    ACTIONS(162), 1,
      sym_nb_whitespace,
  [689] = 1,
    ACTIONS(164), 1,
      sym_newline,
  [693] = 1,
    ACTIONS(166), 1,
      sym_newline,
  [697] = 1,
    ACTIONS(168), 1,
      sym_nb_whitespace,
  [701] = 1,
    ACTIONS(170), 1,
      sym_attr_value,
  [705] = 1,
    ACTIONS(172), 1,
      sym_following_word_chars,
  [709] = 1,
    ACTIONS(174), 1,
      sym_nb_whitespace,
  [713] = 1,
    ACTIONS(176), 1,
      sym_todo_right_bracket,
  [717] = 1,
    ACTIONS(178), 1,
      sym_todo_right_bracket,
  [721] = 1,
    ACTIONS(180), 1,
      sym_newline,
  [725] = 1,
    ACTIONS(182), 1,
      sym_newline,
  [729] = 1,
    ACTIONS(184), 1,
      sym_newline,
  [733] = 1,
    ACTIONS(186), 1,
      sym_newline,
  [737] = 1,
    ACTIONS(188), 1,
      sym_nb_whitespace,
  [741] = 1,
    ACTIONS(190), 1,
      sym_newline,
  [745] = 1,
    ACTIONS(192), 1,
      sym_following_word_chars,
  [749] = 1,
    ACTIONS(194), 1,
      sym_attr_key,
  [753] = 1,
    ACTIONS(196), 1,
      sym_newline,
  [757] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [761] = 1,
    ACTIONS(200), 1,
      sym_attr_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 289,
  [SMALL_STATE(17)] = 311,
  [SMALL_STATE(18)] = 333,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 406,
  [SMALL_STATE(24)] = 421,
  [SMALL_STATE(25)] = 433,
  [SMALL_STATE(26)] = 445,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 468,
  [SMALL_STATE(29)] = 481,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 503,
  [SMALL_STATE(32)] = 514,
  [SMALL_STATE(33)] = 525,
  [SMALL_STATE(34)] = 536,
  [SMALL_STATE(35)] = 545,
  [SMALL_STATE(36)] = 554,
  [SMALL_STATE(37)] = 564,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 580,
  [SMALL_STATE(40)] = 590,
  [SMALL_STATE(41)] = 598,
  [SMALL_STATE(42)] = 604,
  [SMALL_STATE(43)] = 614,
  [SMALL_STATE(44)] = 622,
  [SMALL_STATE(45)] = 630,
  [SMALL_STATE(46)] = 638,
  [SMALL_STATE(47)] = 645,
  [SMALL_STATE(48)] = 650,
  [SMALL_STATE(49)] = 657,
  [SMALL_STATE(50)] = 661,
  [SMALL_STATE(51)] = 665,
  [SMALL_STATE(52)] = 669,
  [SMALL_STATE(53)] = 673,
  [SMALL_STATE(54)] = 677,
  [SMALL_STATE(55)] = 681,
  [SMALL_STATE(56)] = 685,
  [SMALL_STATE(57)] = 689,
  [SMALL_STATE(58)] = 693,
  [SMALL_STATE(59)] = 697,
  [SMALL_STATE(60)] = 701,
  [SMALL_STATE(61)] = 705,
  [SMALL_STATE(62)] = 709,
  [SMALL_STATE(63)] = 713,
  [SMALL_STATE(64)] = 717,
  [SMALL_STATE(65)] = 721,
  [SMALL_STATE(66)] = 725,
  [SMALL_STATE(67)] = 729,
  [SMALL_STATE(68)] = 733,
  [SMALL_STATE(69)] = 737,
  [SMALL_STATE(70)] = 741,
  [SMALL_STATE(71)] = 745,
  [SMALL_STATE(72)] = 749,
  [SMALL_STATE(73)] = 753,
  [SMALL_STATE(74)] = 757,
  [SMALL_STATE(75)] = 761,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(51),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(36),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(71),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(49),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_section_repeat1, 2), SHIFT_REPEAT(50),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_p_section_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_progress_todo_bracket, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
