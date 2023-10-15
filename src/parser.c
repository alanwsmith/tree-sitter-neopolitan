#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_attr_bool_token1 = 1,
  sym_attr_dashes = 2,
  sym_attr_separator = 3,
  sym_attr_value = 4,
  sym_code_section_token = 5,
  sym_html_body = 6,
  sym_html_section_token = 7,
  sym_list_dash = 8,
  sym_list_section_token = 9,
  anon_sym_LT = 10,
  sym_following_word_chars = 11,
  sym_nb_whitespace = 12,
  sym_newline = 13,
  sym_non_lt_char = 14,
  sym_p_section_token = 15,
  sym_section_dashes = 16,
  sym_section_start_end_token = 17,
  sym_title_section_token = 18,
  sym_todo_left_bracket = 19,
  sym_todo_right_bracket = 20,
  sym_todo_checkmark = 21,
  sym_not_a_checkmark = 22,
  sym_todo_section_token = 23,
  sym_code_body = 24,
  sym_source_file = 25,
  sym__attr = 26,
  sym_attr_kv_pair = 27,
  sym_attr_bool = 28,
  sym_attr_key = 29,
  sym_code_end_section = 30,
  sym_code_start_section = 31,
  sym_headline = 32,
  sym_html_section = 33,
  sym_initial_word_chars = 34,
  sym_list_item = 35,
  sym_list_section = 36,
  sym_lt_with_non_lt_char = 37,
  sym_p_section = 38,
  sym_paragraph = 39,
  sym_paragraph_body = 40,
  sym_paragraph_first_word = 41,
  sym_title_section = 42,
  sym_empty_todo_bracket = 43,
  sym_completed_todo_bracket = 44,
  sym_in_progress_todo_bracket = 45,
  sym_todo_item = 46,
  sym_todo_section = 47,
  sym_word = 48,
  sym__wordbreak = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_code_end_section_repeat1 = 51,
  aux_sym_list_section_repeat1 = 52,
  aux_sym_list_section_repeat2 = 53,
  aux_sym_paragraph_repeat1 = 54,
  aux_sym_todo_item_repeat1 = 55,
  aux_sym_todo_section_repeat1 = 56,
  anon_alias_sym_headline = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_attr_bool_token1] = "attr_bool_token1",
  [sym_attr_dashes] = "attr_dashes",
  [sym_attr_separator] = "attr_separator",
  [sym_attr_value] = "attr_value",
  [sym_code_section_token] = "code_section_token",
  [sym_html_body] = "html_body",
  [sym_html_section_token] = "html_section_token",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_nb_whitespace] = "nb_whitespace",
  [sym_newline] = "newline",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_section_dashes] = "section_dashes",
  [sym_section_start_end_token] = "section_start_end_token",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
  [sym_not_a_checkmark] = "not_a_checkmark",
  [sym_todo_section_token] = "todo_section_token",
  [sym_code_body] = "code_body",
  [sym_source_file] = "source_file",
  [sym__attr] = "_attr",
  [sym_attr_kv_pair] = "attr_kv_pair",
  [sym_attr_bool] = "attr_bool",
  [sym_attr_key] = "attr_key",
  [sym_code_end_section] = "code_end_section",
  [sym_code_start_section] = "code_start_section",
  [sym_headline] = "headline",
  [sym_html_section] = "html_section",
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
  [sym__wordbreak] = "_wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_code_end_section_repeat1] = "code_end_section_repeat1",
  [aux_sym_list_section_repeat1] = "list_section_repeat1",
  [aux_sym_list_section_repeat2] = "list_section_repeat2",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_todo_item_repeat1] = "todo_item_repeat1",
  [aux_sym_todo_section_repeat1] = "todo_section_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_attr_bool_token1] = aux_sym_attr_bool_token1,
  [sym_attr_dashes] = sym_attr_dashes,
  [sym_attr_separator] = sym_attr_separator,
  [sym_attr_value] = sym_attr_value,
  [sym_code_section_token] = sym_code_section_token,
  [sym_html_body] = sym_html_body,
  [sym_html_section_token] = sym_html_section_token,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_nb_whitespace] = sym_nb_whitespace,
  [sym_newline] = sym_newline,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_section_dashes] = sym_section_dashes,
  [sym_section_start_end_token] = sym_section_start_end_token,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
  [sym_not_a_checkmark] = sym_not_a_checkmark,
  [sym_todo_section_token] = sym_todo_section_token,
  [sym_code_body] = sym_code_body,
  [sym_source_file] = sym_source_file,
  [sym__attr] = sym__attr,
  [sym_attr_kv_pair] = sym_attr_kv_pair,
  [sym_attr_bool] = sym_attr_bool,
  [sym_attr_key] = sym_attr_key,
  [sym_code_end_section] = sym_code_end_section,
  [sym_code_start_section] = sym_code_start_section,
  [sym_headline] = sym_headline,
  [sym_html_section] = sym_html_section,
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
  [sym__wordbreak] = sym__wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_code_end_section_repeat1] = aux_sym_code_end_section_repeat1,
  [aux_sym_list_section_repeat1] = aux_sym_list_section_repeat1,
  [aux_sym_list_section_repeat2] = aux_sym_list_section_repeat2,
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
  [aux_sym_attr_bool_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_attr_dashes] = {
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
  [sym_code_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_html_body] = {
    .visible = true,
    .named = true,
  },
  [sym_html_section_token] = {
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
  [sym_section_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_section_start_end_token] = {
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
  [sym_code_body] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__attr] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_kv_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym_code_end_section] = {
    .visible = true,
    .named = true,
  },
  [sym_code_start_section] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_html_section] = {
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
  [sym__wordbreak] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_end_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_section_repeat2] = {
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
  [95] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '\t') ADVANCE(44);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(46);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(26);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(46);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_attr_bool_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_attr_dashes);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_attr_separator);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_attr_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_code_section_token);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_html_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_html_section_token);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t') ADVANCE(44);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_section_dashes);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_section_start_end_token);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_not_a_checkmark);
      if (lookahead != 0 &&
          lookahead != 'X' &&
          lookahead != ']' &&
          lookahead != 'x') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 28},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_dashes] = ACTIONS(1),
    [sym_attr_separator] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_nb_whitespace] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_section_start_end_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
    [sym_code_body] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_code_end_section] = STATE(4),
    [sym_code_start_section] = STATE(4),
    [sym_html_section] = STATE(4),
    [sym_list_section] = STATE(4),
    [sym_p_section] = STATE(4),
    [sym_title_section] = STATE(4),
    [sym_todo_section] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_section_dashes] = ACTIONS(3),
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
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
    STATE(83), 1,
      sym_paragraph_body,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
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
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
    STATE(83), 1,
      sym_paragraph_body,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
      sym_todo_left_bracket,
  [60] = 3,
    ACTIONS(3), 1,
      sym_section_dashes,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(5), 8,
      sym_code_end_section,
      sym_code_start_section,
      sym_html_section,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [77] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_section_dashes,
    STATE(5), 8,
      sym_code_end_section,
      sym_code_start_section,
      sym_html_section,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [94] = 4,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(72), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [111] = 4,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(72), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [128] = 4,
    ACTIONS(34), 1,
      sym_todo_left_bracket,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(72), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [145] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
    STATE(83), 1,
      sym_paragraph_body,
  [170] = 5,
    ACTIONS(41), 1,
      sym_list_dash,
    ACTIONS(43), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [188] = 7,
    ACTIONS(46), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      sym_newline,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [210] = 5,
    ACTIONS(56), 1,
      sym_list_dash,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(17), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [228] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(60), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [250] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(62), 1,
      sym_newline,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [272] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(64), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(53), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [294] = 7,
    ACTIONS(66), 1,
      sym_code_section_token,
    ACTIONS(68), 1,
      sym_html_section_token,
    ACTIONS(70), 1,
      sym_list_section_token,
    ACTIONS(72), 1,
      sym_p_section_token,
    ACTIONS(74), 1,
      sym_section_start_end_token,
    ACTIONS(76), 1,
      sym_title_section_token,
    ACTIONS(78), 1,
      sym_todo_section_token,
  [316] = 5,
    ACTIONS(58), 1,
      sym_non_lt_char,
    ACTIONS(82), 1,
      sym_list_dash,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [334] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(86), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [347] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(88), 1,
      sym_newline,
    STATE(24), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [360] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(90), 1,
      sym_newline,
    STATE(18), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [373] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(92), 1,
      sym_newline,
    STATE(31), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [386] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(34), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [401] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [416] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(96), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [429] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(23), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [444] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(100), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [457] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [472] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [487] = 3,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    STATE(6), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(72), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [500] = 3,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    STATE(7), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(72), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [513] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(106), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [526] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [541] = 3,
    ACTIONS(84), 1,
      sym_attr_dashes,
    ACTIONS(110), 1,
      sym_newline,
    STATE(26), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [554] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [569] = 3,
    ACTIONS(114), 1,
      sym_attr_dashes,
    ACTIONS(117), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [582] = 3,
    ACTIONS(121), 1,
      sym_list_dash,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(37), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [594] = 3,
    ACTIONS(125), 1,
      sym_list_dash,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(37), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [606] = 3,
    ACTIONS(121), 1,
      sym_list_dash,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(37), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [618] = 2,
    ACTIONS(130), 1,
      sym_non_lt_char,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_section_dashes,
      sym_todo_left_bracket,
  [628] = 2,
    ACTIONS(134), 1,
      sym_list_dash,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_non_lt_char,
      sym_section_dashes,
  [637] = 2,
    ACTIONS(138), 1,
      sym_list_dash,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      sym_non_lt_char,
      sym_section_dashes,
  [646] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(25), 1,
      sym_headline,
    STATE(49), 1,
      sym_paragraph,
    STATE(51), 1,
      sym_paragraph_first_word,
  [659] = 3,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    STATE(32), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [670] = 3,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    STATE(27), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [681] = 3,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(51), 1,
      sym_paragraph_first_word,
    STATE(28), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [692] = 4,
    ACTIONS(58), 1,
      sym_non_lt_char,
    STATE(22), 1,
      sym_headline,
    STATE(49), 1,
      sym_paragraph,
    STATE(51), 1,
      sym_paragraph_first_word,
  [705] = 3,
    ACTIONS(140), 1,
      sym_todo_right_bracket,
    ACTIONS(142), 1,
      sym_todo_checkmark,
    ACTIONS(144), 1,
      sym_not_a_checkmark,
  [715] = 2,
    ACTIONS(146), 1,
      sym_list_dash,
    STATE(36), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [723] = 1,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      sym_non_lt_char,
      sym_section_dashes,
  [729] = 1,
    ACTIONS(49), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [735] = 3,
    ACTIONS(150), 1,
      sym_nb_whitespace,
    ACTIONS(152), 1,
      sym_newline,
    STATE(14), 1,
      sym__wordbreak,
  [745] = 2,
    ACTIONS(146), 1,
      sym_list_dash,
    STATE(38), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [753] = 3,
    ACTIONS(154), 1,
      sym_nb_whitespace,
    ACTIONS(156), 1,
      sym_newline,
    STATE(50), 1,
      sym__wordbreak,
  [763] = 1,
    ACTIONS(158), 2,
      sym_attr_dashes,
      sym_newline,
  [768] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [773] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [778] = 2,
    ACTIONS(164), 1,
      sym_attr_separator,
    ACTIONS(166), 1,
      sym_newline,
  [785] = 2,
    ACTIONS(168), 1,
      sym_nb_whitespace,
    ACTIONS(170), 1,
      sym_newline,
  [792] = 2,
    ACTIONS(172), 1,
      sym_nb_whitespace,
    ACTIONS(174), 1,
      sym_newline,
  [799] = 2,
    ACTIONS(176), 1,
      aux_sym_attr_bool_token1,
    STATE(95), 1,
      sym_attr_key,
  [806] = 1,
    ACTIONS(178), 2,
      sym_attr_dashes,
      sym_newline,
  [811] = 1,
    ACTIONS(180), 1,
      sym_nb_whitespace,
  [815] = 1,
    ACTIONS(182), 1,
      sym_newline,
  [819] = 1,
    ACTIONS(184), 1,
      sym_code_body,
  [823] = 1,
    ACTIONS(186), 1,
      sym_newline,
  [827] = 1,
    ACTIONS(188), 1,
      sym_nb_whitespace,
  [831] = 1,
    ACTIONS(190), 1,
      sym_todo_right_bracket,
  [835] = 1,
    ACTIONS(192), 1,
      sym_todo_right_bracket,
  [839] = 1,
    ACTIONS(194), 1,
      sym_nb_whitespace,
  [843] = 1,
    ACTIONS(196), 1,
      sym_html_body,
  [847] = 1,
    ACTIONS(198), 1,
      sym_newline,
  [851] = 1,
    ACTIONS(200), 1,
      sym_nb_whitespace,
  [855] = 1,
    ACTIONS(202), 1,
      sym_newline,
  [859] = 1,
    ACTIONS(204), 1,
      sym_non_lt_char,
  [863] = 1,
    ACTIONS(206), 1,
      sym_newline,
  [867] = 1,
    ACTIONS(208), 1,
      sym_following_word_chars,
  [871] = 1,
    ACTIONS(210), 1,
      sym_following_word_chars,
  [875] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [879] = 1,
    ACTIONS(214), 1,
      sym_newline,
  [883] = 1,
    ACTIONS(216), 1,
      sym_newline,
  [887] = 1,
    ACTIONS(218), 1,
      sym_nb_whitespace,
  [891] = 1,
    ACTIONS(220), 1,
      sym_nb_whitespace,
  [895] = 1,
    ACTIONS(222), 1,
      sym_newline,
  [899] = 1,
    ACTIONS(224), 1,
      sym_newline,
  [903] = 1,
    ACTIONS(226), 1,
      sym_code_section_token,
  [907] = 1,
    ACTIONS(228), 1,
      sym_attr_value,
  [911] = 1,
    ACTIONS(230), 1,
      sym_following_word_chars,
  [915] = 1,
    ACTIONS(232), 1,
      sym_nb_whitespace,
  [919] = 1,
    ACTIONS(234), 1,
      sym_following_word_chars,
  [923] = 1,
    ACTIONS(236), 1,
      sym_newline,
  [927] = 1,
    ACTIONS(238), 1,
      sym_newline,
  [931] = 1,
    ACTIONS(240), 1,
      sym_newline,
  [935] = 1,
    ACTIONS(242), 1,
      sym_section_start_end_token,
  [939] = 1,
    ACTIONS(244), 1,
      sym_newline,
  [943] = 1,
    ACTIONS(246), 1,
      sym_attr_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 386,
  [SMALL_STATE(23)] = 401,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 444,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 487,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 513,
  [SMALL_STATE(32)] = 526,
  [SMALL_STATE(33)] = 541,
  [SMALL_STATE(34)] = 554,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 582,
  [SMALL_STATE(37)] = 594,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 628,
  [SMALL_STATE(41)] = 637,
  [SMALL_STATE(42)] = 646,
  [SMALL_STATE(43)] = 659,
  [SMALL_STATE(44)] = 670,
  [SMALL_STATE(45)] = 681,
  [SMALL_STATE(46)] = 692,
  [SMALL_STATE(47)] = 705,
  [SMALL_STATE(48)] = 715,
  [SMALL_STATE(49)] = 723,
  [SMALL_STATE(50)] = 729,
  [SMALL_STATE(51)] = 735,
  [SMALL_STATE(52)] = 745,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 763,
  [SMALL_STATE(55)] = 768,
  [SMALL_STATE(56)] = 773,
  [SMALL_STATE(57)] = 778,
  [SMALL_STATE(58)] = 785,
  [SMALL_STATE(59)] = 792,
  [SMALL_STATE(60)] = 799,
  [SMALL_STATE(61)] = 806,
  [SMALL_STATE(62)] = 811,
  [SMALL_STATE(63)] = 815,
  [SMALL_STATE(64)] = 819,
  [SMALL_STATE(65)] = 823,
  [SMALL_STATE(66)] = 827,
  [SMALL_STATE(67)] = 831,
  [SMALL_STATE(68)] = 835,
  [SMALL_STATE(69)] = 839,
  [SMALL_STATE(70)] = 843,
  [SMALL_STATE(71)] = 847,
  [SMALL_STATE(72)] = 851,
  [SMALL_STATE(73)] = 855,
  [SMALL_STATE(74)] = 859,
  [SMALL_STATE(75)] = 863,
  [SMALL_STATE(76)] = 867,
  [SMALL_STATE(77)] = 871,
  [SMALL_STATE(78)] = 875,
  [SMALL_STATE(79)] = 879,
  [SMALL_STATE(80)] = 883,
  [SMALL_STATE(81)] = 887,
  [SMALL_STATE(82)] = 891,
  [SMALL_STATE(83)] = 895,
  [SMALL_STATE(84)] = 899,
  [SMALL_STATE(85)] = 903,
  [SMALL_STATE(86)] = 907,
  [SMALL_STATE(87)] = 911,
  [SMALL_STATE(88)] = 915,
  [SMALL_STATE(89)] = 919,
  [SMALL_STATE(90)] = 923,
  [SMALL_STATE(91)] = 927,
  [SMALL_STATE(92)] = 931,
  [SMALL_STATE(93)] = 935,
  [SMALL_STATE(94)] = 939,
  [SMALL_STATE(95)] = 943,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(74),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 6),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_end_section_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_end_section_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_end_section_repeat1, 2), SHIFT_REPEAT(89),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(74),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_end_section, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 7),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(69),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat2, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat2, 2), SHIFT_REPEAT(88),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_kv_pair, 7),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_start_section, 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_section, 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_key, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_bool, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_progress_todo_bracket, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_body] = sym_code_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_body] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_neopolitan_external_scanner_create(void);
void tree_sitter_neopolitan_external_scanner_destroy(void *);
bool tree_sitter_neopolitan_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_neopolitan_external_scanner_serialize(void *, char *);
void tree_sitter_neopolitan_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_neopolitan(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_neopolitan_external_scanner_create,
      tree_sitter_neopolitan_external_scanner_destroy,
      tree_sitter_neopolitan_external_scanner_scan,
      tree_sitter_neopolitan_external_scanner_serialize,
      tree_sitter_neopolitan_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
