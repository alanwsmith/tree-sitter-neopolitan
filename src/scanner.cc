#include <tree_sitter/parser.h>

enum TokenType {
  CODE_START_TERMINATOR,
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
                                                         unsigned length){};

bool is_end_of_code_start_end_block(TSLexer *lexer) {

  lexer->mark_end(lexer);
  while (lexer->eof(lexer) == false) {
    lexer->advance(lexer, false);
    // this is for code_start_end blocks
    if (lexer->lookahead == 45) {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 45) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 32) {
          lexer->advance(lexer, false);
          if (lexer->lookahead == 47) {
            lexer->advance(lexer, false);
            if (lexer->lookahead == 99) {
              lexer->advance(lexer, false);
              if (lexer->lookahead == 111) {
                lexer->advance(lexer, false);
                if (lexer->lookahead == 100) {
                  lexer->advance(lexer, false);
                  if (lexer->lookahead == 101) {
                    lexer->advance(lexer, false);
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return false;
};

bool tree_sitter_neopolitan_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  return false;
};
}
