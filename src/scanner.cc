#include <tree_sitter/parser.h>

enum TokenType {
  CODE_START_TERMINATOR,
};

struct Scanner {
  Scanner() {}
};


extern "C" {

void * tree_sitter_neopolitan_external_scanner_create() {
  return new Scanner();
};

void tree_sitter_neopolitan_external_scanner_destroy(void *payload) {
  Scanner* const scanner = static_cast<Scanner*>(payload);
  delete scanner;
};

unsigned tree_sitter_neopolitan_external_scanner_serialize(
  void *payload,
  char *buffer
) {
    return 1;
};

void tree_sitter_neopolitan_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // ...
};


bool tree_sitter_neopolitan_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
    return true;
};

}

