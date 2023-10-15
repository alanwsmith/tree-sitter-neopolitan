#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_attr_bool_token1 = 1,
  sym_attr_dashes = 2,
  sym_attr_separator = 3,
  sym_attr_value = 4,
  sym_code_body = 5,
  sym_code_section_token = 6,
  sym_html_body = 7,
  sym_html_section_token = 8,
  sym_list_dash = 9,
  sym_list_section_token = 10,
  anon_sym_LT = 11,
  sym_following_word_chars = 12,
  sym_nb_whitespace = 13,
  sym_newline = 14,
  sym_non_lt_char = 15,
  sym_p_section_token = 16,
  sym_section_dashes = 17,
  sym_section_start_end_token = 18,
  sym_title_section_token = 19,
  sym_todo_left_bracket = 20,
  sym_todo_right_bracket = 21,
  sym_todo_checkmark = 22,
  sym_not_a_checkmark = 23,
  sym_todo_section_token = 24,
  sym_code_start_terminator = 25,
  sym_source_file = 26,
  sym__attr = 27,
  sym_attr_kv_pair = 28,
  sym_attr_bool = 29,
  sym_attr_key = 30,
  sym_code_end_section = 31,
  sym_code_start_section = 32,
  sym_headline = 33,
  sym_html_section = 34,
  sym_initial_word_chars = 35,
  sym_list_item = 36,
  sym_list_section = 37,
  sym_lt_with_non_lt_char = 38,
  sym_p_section = 39,
  sym_paragraph = 40,
  sym_paragraph_body = 41,
  sym_paragraph_first_word = 42,
  sym_title_section = 43,
  sym_empty_todo_bracket = 44,
  sym_completed_todo_bracket = 45,
  sym_in_progress_todo_bracket = 46,
  sym_todo_item = 47,
  sym_todo_section = 48,
  sym_word = 49,
  sym__wordbreak = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_list_item_repeat1 = 52,
  aux_sym_list_section_repeat1 = 53,
  aux_sym_list_section_repeat2 = 54,
  aux_sym_paragraph_repeat1 = 55,
  aux_sym_todo_item_repeat1 = 56,
  aux_sym_todo_section_repeat1 = 57,
  anon_alias_sym_headline = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_attr_bool_token1] = "attr_bool_token1",
  [sym_attr_dashes] = "attr_dashes",
  [sym_attr_separator] = "attr_separator",
  [sym_attr_value] = "attr_value",
  [sym_code_body] = "code_body",
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
  [sym_code_start_terminator] = "code_start_terminator",
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
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
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
  [sym_code_body] = sym_code_body,
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
  [sym_code_start_terminator] = sym_code_start_terminator,
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
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
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
  [sym_code_body] = {
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
  [sym_code_start_terminator] = {
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
  [aux_sym_list_item_repeat1] = {
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
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 15,
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
  [53] = 45,
  [54] = 54,
  [55] = 49,
  [56] = 46,
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '\t') ADVANCE(50);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(41);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(52);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(52);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attr_bool_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_attr_dashes);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_attr_separator);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_attr_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_code_body);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_code_section_token);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_html_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_html_section_token);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t') ADVANCE(50);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_section_dashes);
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_section_start_end_token);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_not_a_checkmark);
      if (lookahead != 0 &&
          lookahead != 'X' &&
          lookahead != ']' &&
          lookahead != 'x') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_separator] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_nb_whitespace] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_section_dashes] = ACTIONS(1),
    [sym_section_start_end_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
    [sym_code_start_terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(86),
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
    ACTIONS(9), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(19), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
    STATE(81), 1,
      sym_paragraph_body,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
      sym_todo_left_bracket,
  [30] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(16), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(19), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
    STATE(81), 1,
      sym_paragraph_body,
    ACTIONS(11), 3,
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
  [94] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(19), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
    STATE(81), 1,
      sym_paragraph_body,
  [119] = 4,
    ACTIONS(30), 1,
      sym_todo_left_bracket,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(70), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [136] = 4,
    ACTIONS(34), 1,
      sym_todo_left_bracket,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(70), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [153] = 4,
    ACTIONS(30), 1,
      sym_todo_left_bracket,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(70), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [170] = 7,
    ACTIONS(39), 1,
      sym_code_section_token,
    ACTIONS(41), 1,
      sym_html_section_token,
    ACTIONS(43), 1,
      sym_list_section_token,
    ACTIONS(45), 1,
      sym_p_section_token,
    ACTIONS(47), 1,
      sym_section_start_end_token,
    ACTIONS(49), 1,
      sym_title_section_token,
    ACTIONS(51), 1,
      sym_todo_section_token,
  [192] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      sym_non_lt_char,
    ACTIONS(53), 1,
      sym_newline,
    STATE(18), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
  [214] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      sym_non_lt_char,
    ACTIONS(55), 1,
      sym_newline,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
  [236] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      sym_non_lt_char,
    ACTIONS(57), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
  [258] = 5,
    ACTIONS(61), 1,
      sym_list_dash,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(55), 1,
      sym_paragraph_first_word,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(17), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [276] = 5,
    ACTIONS(67), 1,
      sym_list_dash,
    ACTIONS(69), 1,
      sym_non_lt_char,
    STATE(55), 1,
      sym_paragraph_first_word,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(15), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [294] = 7,
    ACTIONS(72), 1,
      anon_sym_LT,
    ACTIONS(75), 1,
      sym_newline,
    ACTIONS(77), 1,
      sym_non_lt_char,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
  [316] = 5,
    ACTIONS(63), 1,
      sym_non_lt_char,
    ACTIONS(82), 1,
      sym_list_dash,
    STATE(55), 1,
      sym_paragraph_first_word,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(15), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [334] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      sym_non_lt_char,
    ACTIONS(84), 1,
      sym_newline,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
  [356] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(26), 1,
      sym_non_lt_char,
    ACTIONS(86), 1,
      sym_newline,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(54), 1,
      sym_word,
    STATE(75), 1,
      sym_lt_with_non_lt_char,
    STATE(76), 1,
      sym_initial_word_chars,
  [378] = 3,
    ACTIONS(30), 1,
      sym_todo_left_bracket,
    STATE(7), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(70), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [391] = 3,
    ACTIONS(30), 1,
      sym_todo_left_bracket,
    STATE(9), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(70), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [404] = 4,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [419] = 4,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [434] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(94), 1,
      sym_newline,
    STATE(37), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [447] = 4,
    ACTIONS(69), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [462] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(96), 1,
      sym_newline,
    STATE(37), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [475] = 4,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [490] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(100), 1,
      sym_newline,
    STATE(37), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [503] = 4,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [518] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(102), 1,
      sym_newline,
    STATE(37), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [531] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(104), 1,
      sym_newline,
    STATE(30), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [544] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(106), 1,
      sym_newline,
    STATE(24), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [557] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(108), 1,
      sym_newline,
    STATE(26), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [570] = 3,
    ACTIONS(92), 1,
      sym_attr_dashes,
    ACTIONS(110), 1,
      sym_newline,
    STATE(28), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [583] = 4,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(29), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [598] = 4,
    ACTIONS(63), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [613] = 3,
    ACTIONS(116), 1,
      sym_attr_dashes,
    ACTIONS(119), 1,
      sym_newline,
    STATE(37), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [626] = 3,
    ACTIONS(123), 1,
      sym_list_dash,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(40), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [638] = 2,
    ACTIONS(125), 1,
      sym_non_lt_char,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_section_dashes,
      sym_todo_left_bracket,
  [648] = 3,
    ACTIONS(129), 1,
      sym_list_dash,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(40), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [660] = 3,
    ACTIONS(123), 1,
      sym_list_dash,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(40), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [672] = 3,
    ACTIONS(134), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    STATE(23), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [683] = 4,
    ACTIONS(134), 1,
      sym_non_lt_char,
    STATE(27), 1,
      sym_headline,
    STATE(49), 1,
      sym_paragraph_first_word,
    STATE(51), 1,
      sym_paragraph,
  [696] = 4,
    ACTIONS(134), 1,
      sym_non_lt_char,
    STATE(35), 1,
      sym_headline,
    STATE(49), 1,
      sym_paragraph_first_word,
    STATE(51), 1,
      sym_paragraph,
  [709] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    ACTIONS(138), 2,
      sym_list_dash,
      sym_non_lt_char,
  [718] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    ACTIONS(142), 2,
      sym_list_dash,
      sym_non_lt_char,
  [727] = 3,
    ACTIONS(134), 1,
      sym_non_lt_char,
    STATE(49), 1,
      sym_paragraph_first_word,
    STATE(36), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [738] = 1,
    ACTIONS(75), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [744] = 3,
    ACTIONS(144), 1,
      sym_nb_whitespace,
    ACTIONS(146), 1,
      sym_newline,
    STATE(11), 1,
      sym__wordbreak,
  [754] = 2,
    ACTIONS(148), 1,
      sym_list_dash,
    STATE(41), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [762] = 2,
    ACTIONS(152), 1,
      sym_non_lt_char,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [770] = 3,
    ACTIONS(154), 1,
      sym_todo_right_bracket,
    ACTIONS(156), 1,
      sym_todo_checkmark,
    ACTIONS(158), 1,
      sym_not_a_checkmark,
  [780] = 2,
    ACTIONS(138), 1,
      sym_non_lt_char,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [788] = 3,
    ACTIONS(160), 1,
      sym_nb_whitespace,
    ACTIONS(162), 1,
      sym_newline,
    STATE(48), 1,
      sym__wordbreak,
  [798] = 3,
    ACTIONS(164), 1,
      sym_nb_whitespace,
    ACTIONS(166), 1,
      sym_newline,
    STATE(13), 1,
      sym__wordbreak,
  [808] = 2,
    ACTIONS(142), 1,
      sym_non_lt_char,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [816] = 2,
    ACTIONS(148), 1,
      sym_list_dash,
    STATE(38), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [824] = 2,
    ACTIONS(168), 1,
      sym_attr_separator,
    ACTIONS(170), 1,
      sym_newline,
  [831] = 2,
    ACTIONS(172), 1,
      aux_sym_attr_bool_token1,
    STATE(79), 1,
      sym_attr_key,
  [838] = 2,
    ACTIONS(174), 1,
      sym_nb_whitespace,
    ACTIONS(176), 1,
      sym_newline,
  [845] = 1,
    ACTIONS(178), 2,
      sym_attr_dashes,
      sym_newline,
  [850] = 1,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [855] = 2,
    ACTIONS(182), 1,
      sym_nb_whitespace,
    ACTIONS(184), 1,
      sym_newline,
  [862] = 1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [867] = 1,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [872] = 1,
    ACTIONS(190), 2,
      sym_attr_dashes,
      sym_newline,
  [877] = 1,
    ACTIONS(192), 1,
      sym_nb_whitespace,
  [881] = 1,
    ACTIONS(194), 1,
      sym_attr_value,
  [885] = 1,
    ACTIONS(196), 1,
      sym_code_start_terminator,
  [889] = 1,
    ACTIONS(198), 1,
      sym_nb_whitespace,
  [893] = 1,
    ACTIONS(200), 1,
      sym_nb_whitespace,
  [897] = 1,
    ACTIONS(202), 1,
      sym_following_word_chars,
  [901] = 1,
    ACTIONS(204), 1,
      sym_non_lt_char,
  [905] = 1,
    ACTIONS(206), 1,
      sym_nb_whitespace,
  [909] = 1,
    ACTIONS(208), 1,
      sym_following_word_chars,
  [913] = 1,
    ACTIONS(210), 1,
      sym_following_word_chars,
  [917] = 1,
    ACTIONS(212), 1,
      sym_newline,
  [921] = 1,
    ACTIONS(214), 1,
      sym_code_body,
  [925] = 1,
    ACTIONS(216), 1,
      sym_attr_separator,
  [929] = 1,
    ACTIONS(218), 1,
      sym_nb_whitespace,
  [933] = 1,
    ACTIONS(220), 1,
      sym_newline,
  [937] = 1,
    ACTIONS(222), 1,
      sym_nb_whitespace,
  [941] = 1,
    ACTIONS(224), 1,
      sym_html_body,
  [945] = 1,
    ACTIONS(226), 1,
      sym_todo_right_bracket,
  [949] = 1,
    ACTIONS(228), 1,
      sym_following_word_chars,
  [953] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [957] = 1,
    ACTIONS(232), 1,
      sym_newline,
  [961] = 1,
    ACTIONS(234), 1,
      sym_todo_right_bracket,
  [965] = 1,
    ACTIONS(236), 1,
      sym_newline,
  [969] = 1,
    ACTIONS(238), 1,
      sym_newline,
  [973] = 1,
    ACTIONS(240), 1,
      sym_newline,
  [977] = 1,
    ACTIONS(242), 1,
      sym_newline,
  [981] = 1,
    ACTIONS(244), 1,
      sym_nb_whitespace,
  [985] = 1,
    ACTIONS(246), 1,
      sym_newline,
  [989] = 1,
    ACTIONS(248), 1,
      sym_code_section_token,
  [993] = 1,
    ACTIONS(250), 1,
      sym_newline,
  [997] = 1,
    ACTIONS(252), 1,
      sym_newline,
  [1001] = 1,
    ACTIONS(254), 1,
      sym_newline,
  [1005] = 1,
    ACTIONS(256), 1,
      sym_section_start_end_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 378,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 404,
  [SMALL_STATE(23)] = 419,
  [SMALL_STATE(24)] = 434,
  [SMALL_STATE(25)] = 447,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 475,
  [SMALL_STATE(28)] = 490,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 518,
  [SMALL_STATE(31)] = 531,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 557,
  [SMALL_STATE(34)] = 570,
  [SMALL_STATE(35)] = 583,
  [SMALL_STATE(36)] = 598,
  [SMALL_STATE(37)] = 613,
  [SMALL_STATE(38)] = 626,
  [SMALL_STATE(39)] = 638,
  [SMALL_STATE(40)] = 648,
  [SMALL_STATE(41)] = 660,
  [SMALL_STATE(42)] = 672,
  [SMALL_STATE(43)] = 683,
  [SMALL_STATE(44)] = 696,
  [SMALL_STATE(45)] = 709,
  [SMALL_STATE(46)] = 718,
  [SMALL_STATE(47)] = 727,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 744,
  [SMALL_STATE(50)] = 754,
  [SMALL_STATE(51)] = 762,
  [SMALL_STATE(52)] = 770,
  [SMALL_STATE(53)] = 780,
  [SMALL_STATE(54)] = 788,
  [SMALL_STATE(55)] = 798,
  [SMALL_STATE(56)] = 808,
  [SMALL_STATE(57)] = 816,
  [SMALL_STATE(58)] = 824,
  [SMALL_STATE(59)] = 831,
  [SMALL_STATE(60)] = 838,
  [SMALL_STATE(61)] = 845,
  [SMALL_STATE(62)] = 850,
  [SMALL_STATE(63)] = 855,
  [SMALL_STATE(64)] = 862,
  [SMALL_STATE(65)] = 867,
  [SMALL_STATE(66)] = 872,
  [SMALL_STATE(67)] = 877,
  [SMALL_STATE(68)] = 881,
  [SMALL_STATE(69)] = 885,
  [SMALL_STATE(70)] = 889,
  [SMALL_STATE(71)] = 893,
  [SMALL_STATE(72)] = 897,
  [SMALL_STATE(73)] = 901,
  [SMALL_STATE(74)] = 905,
  [SMALL_STATE(75)] = 909,
  [SMALL_STATE(76)] = 913,
  [SMALL_STATE(77)] = 917,
  [SMALL_STATE(78)] = 921,
  [SMALL_STATE(79)] = 925,
  [SMALL_STATE(80)] = 929,
  [SMALL_STATE(81)] = 933,
  [SMALL_STATE(82)] = 937,
  [SMALL_STATE(83)] = 941,
  [SMALL_STATE(84)] = 945,
  [SMALL_STATE(85)] = 949,
  [SMALL_STATE(86)] = 953,
  [SMALL_STATE(87)] = 957,
  [SMALL_STATE(88)] = 961,
  [SMALL_STATE(89)] = 965,
  [SMALL_STATE(90)] = 969,
  [SMALL_STATE(91)] = 973,
  [SMALL_STATE(92)] = 977,
  [SMALL_STATE(93)] = 981,
  [SMALL_STATE(94)] = 985,
  [SMALL_STATE(95)] = 989,
  [SMALL_STATE(96)] = 993,
  [SMALL_STATE(97)] = 997,
  [SMALL_STATE(98)] = 1001,
  [SMALL_STATE(99)] = 1005,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(73),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(72),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(73),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(75),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(82),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat2, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat2, 2), SHIFT_REPEAT(74),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_key, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_kv_pair, 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_end_section, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_start_section, 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_section, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_bool, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_progress_todo_bracket, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_start_terminator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_start_terminator] = sym_code_start_terminator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_start_terminator] = true,
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
