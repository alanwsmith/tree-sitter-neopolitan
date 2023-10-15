module.exports = grammar({
  name: 'neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.code_start_section,
        $.code_end_section,
        $.list_section,
        $.html_section,
        $.p_section,
        $.title_section,
        $.todo_section,
      )
    ),

    _attr: $ => choice(
      $.attr_bool,
      $.attr_kv_pair,
    ),

    attr_kv_pair: $ => seq(
      $.attr_dashes,
      $.nb_whitespace,
      $.attr_key,
      $.attr_separator,
      $.nb_whitespace,
      $.attr_value,
      $.newline,
    ),

    attr_bool: $ => seq(
      $.attr_dashes,
      $.nb_whitespace,
      /[^:\n]+/,
      $.newline,
    ),

    attr_dashes: _ => "--",

    attr_key: _ => /[^:\n]+/,

    attr_separator: _ => ":",

    attr_value: _ => /[^\n]+/,

    code_body: _ => /([^-][^-][^ ][^\/])+/,

    code_end_section: $ => seq(
      $.section_dashes,
      $.section_start_end_token,
      $.code_section_token,
    ),

    code_start_section: $ => seq(
      $.section_dashes,
      $.code_section_token,
      $.section_start_end_token,
      $.newline,
      $.newline,
      $.code_body,
      $.code_start_terminator,
    ),

    code_section_token: _ => "code",

    headline: $ => alias($.paragraph, 'headline'),

    // NOTE: This doesn't really work. Need 
    // to roll out to an external parser
    // since tree-sitter doesn't support negative 
    // look-ahead and I'm not sure how to 
    // do the regex parse without it
    html_body: _ => /([^\n][^\n][^-][^-])+/,

    html_section: $ => seq(
      $.section_dashes,
      $.html_section_token,
      $.newline,
      $.newline,
      $.html_body,
      $.newline,
    ),

    html_section_token: _ => /html */,

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    list_dash: _ => "-",

    list_item: $ => seq(
      $.list_dash,
      $.nb_whitespace,
      repeat($.paragraph),
    ),

    list_section: $ => seq(
      $.section_dashes,
      $.list_section_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.list_item),
    ),

    list_section_token: _ => /list */,

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    following_word_chars: _ => /[^ \n\t]+/,

    nb_whitespace: _ => /[ \t]+/,

    newline: _ => / *\n/,

    non_lt_char: _ => /[^< \n\t]/,

    p_section: $ => seq(
      $.section_dashes,
      $.p_section_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.paragraph),
    ),

    p_section_token: _ => /p */,

    // TODO: split out to paragraph body 
    paragraph: $ =>
      seq(
        $.paragraph_first_word,
        $._wordbreak,
        repeat(
          seq(
            $.word,
            $._wordbreak,
          ),
        ),
        $.newline,
      ),

    // This is everything after
    // The first word
    paragraph_body: $ => prec.left(repeat1(
      seq($.word, $._wordbreak)
    )),

    // TODO: Switch to specific first
    // paragraph character
    paragraph_first_word: $ => seq(
      $.non_lt_char,
      $.following_word_chars,
    ),

    section_dashes: _ => /-- +/,

    section_start_end_token: _ => "/",

    title_section: $ => prec.left(
      5,
      seq(
        $.section_dashes,
        $.title_section_token,
        $.newline,
        optional(repeat1($._attr)),
        $.newline,
        $.headline,
        optional(repeat1($.paragraph)),
      )
    ),

    title_section_token: _ => "title",

    todo_left_bracket: _ => "[",

    todo_right_bracket: _ => "]",

    todo_checkmark: _ => /[xX]/,

    empty_todo_bracket: $ => seq(
      $.todo_left_bracket,
      $.todo_right_bracket,
    ),

    completed_todo_bracket: $ => seq(
      $.todo_left_bracket,
      $.todo_checkmark,
      $.todo_right_bracket,
    ),

    in_progress_todo_bracket: $ => seq(
      $.todo_left_bracket,
      $.not_a_checkmark,
      $.todo_right_bracket,
    ),

    not_a_checkmark: _ => /[^xX\]]+/,

    todo_item: $ => seq(
      choice(
        $.completed_todo_bracket,
        $.empty_todo_bracket,
        $.in_progress_todo_bracket,
      ),
      $.nb_whitespace,
      repeat1(
        seq($.paragraph_body, $.newline)
      )
    ),

    todo_section: $ => seq(
      $.section_dashes,
      $.todo_section_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.todo_item),
    ),

    todo_section_token: _ => "todo",

    word: $ => seq(
      $.initial_word_chars,
      $.following_word_chars
    ),

    _wordbreak: $ => choice(
      $.nb_whitespace,
      $.newline,
    ),
  },

  extras: _ => [],

  externals: $ => [
    $.code_start_terminator,
  ],

});

