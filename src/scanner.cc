#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>

enum TokenType {
  CODE_START_TERMINATOR,
  HTML_START_TERMINATOR,
  SECTION_DASHES,
  SINGLE_SPACE,
};

struct Scanner {
  Scanner() {}
};

extern "C" {

void *tree_sitter_neopolitan_external_scanner_create() {
  // TODO: Figure out what to put here for an empty pointer
  return new Scanner();
};

void tree_sitter_neopolitan_external_scanner_destroy(void *payload) {
  Scanner *const scanner = static_cast<Scanner *>(payload);
  delete scanner;
};

unsigned tree_sitter_neopolitan_external_scanner_serialize(void *payload,
                                                           char *buffer) {
  // I just threw 1 in here. It's working, but
  // TBD on what this actually does
  return 1;
};

void tree_sitter_neopolitan_external_scanner_deserialize(void *payload,
                                                         const char *buffer,
                                                         unsigned length) {
  ;
};

static bool is_single_space(TSLexer *lexer) {
  // NOTE: This is currently just a single whitespace
  int dash = ' ';
  if (lexer->lookahead == dash) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    return true;
  }
  return false;
};

static bool is_section_dashes(TSLexer *lexer) {
  int dash = '-';
  if (lexer->lookahead == dash) {
    lexer->advance(lexer, false);
    if (lexer->lookahead == dash) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  };
};

static bool terminator(TSLexer *lexer, char *pattern) {
  lexer->mark_end(lexer);
  int char_ints[9];
  size_t len = strlen(pattern);
  int char_count;
  for (char_count = 0; char_count <= len; char_count++) {
    char_ints[char_count] = pattern[char_count];
  };
  int tracker = 0;
  while (lexer->eof(lexer) == false) {
    if (lexer->lookahead == char_ints[tracker]) {
      tracker += 1;
      lexer->advance(lexer, false);
      if (tracker == len) {
        return true;
      };
    } else {
      tracker = 0;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    };
  }
  return false;
};

bool tree_sitter_neopolitan_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (valid_symbols[CODE_START_TERMINATOR]) {
    lexer->result_symbol = CODE_START_TERMINATOR;
    char code_end[9] = "-- /code";
    return terminator(lexer, code_end);
  } else if (valid_symbols[HTML_START_TERMINATOR]) {
    lexer->result_symbol = HTML_START_TERMINATOR;
    char html_end[9] = "-- /html";
    return terminator(lexer, html_end);
  } else if (valid_symbols[SECTION_DASHES]) {
    lexer->result_symbol = SECTION_DASHES;
    return is_section_dashes(lexer);
  } else if (valid_symbols[SINGLE_SPACE]) {
    lexer->result_symbol = SINGLE_SPACE;
    return is_single_space(lexer);
  };

  return false;
};
};
