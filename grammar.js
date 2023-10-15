module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.list_section,
        $.p_section,
        $.title_section,
        $.todo_section,
      )
    ),

    attr: $ => seq(
      $.attr_dashes,
      $.nb_whitespace,
      choice(
        $.attr_bool,
        $.attr_kv_pair,
      ),
      $.newline,
    ),

    attr_kv_pair: $ => seq(
      $.attr_key,
      $.attr_separator,
      $.nb_whitespace,
      $.attr_value,
    ),

    attr_bool: _ => /[^:\n]+/,

    attr_dashes: _ => "--",

    attr_key: _ => /[^:\n]+/,

    attr_separator: _ => ":",

    attr_value: _ => /[^\n]+/,

    section_dashes: _ => /-- +/,

    headline: $ => alias($.paragraph, 'headline'),

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
      optional(repeat1($.attr)),
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
      optional(repeat1($.attr)),
      $.newline,
      repeat1($.paragraph),
    ),

    p_section_token: _ => /p */,

    // TODO: split out to paragraph body 
    paragraph: $ =>
      seq(
        $.paragraph_first_word,
        $.wordbreak,
        repeat(
          seq(
            $.word,
            $.wordbreak,
          ),
        ),
        $.newline,
      ),

    // this is everything after
    // the first word
    paragraph_body: $ => prec.left(repeat1(
      seq($.word, $.wordbreak)
    )),

    // TODO: Switch to specific first
    // paragraph character
    paragraph_first_word: $ => seq(
      $.non_lt_char,
      $.following_word_chars,
    ),

    title_section: $ => prec.left(
      5,
      seq(
        $.section_dashes,
        $.title_section_token,
        $.newline,
        optional(repeat1($.attr)),
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
      optional(repeat1($.attr)),
      $.newline,
      repeat1($.todo_item),
    ),

    todo_section_token: _ => "todo",

    word: $ => seq(
      $.initial_word_chars,
      $.following_word_chars
    ),

    wordbreak: $ => choice(
      $.nb_whitespace,
      $.newline,
    ),
  },

  extras: _ => []

});

