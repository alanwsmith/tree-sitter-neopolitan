module.exports = grammar({
  name: 'neopolitan',
  rules: {
    source_file: $ =>
      repeat1(
        choice(
          $.code_container,
          $.code_section,
          $.html_container,
          $.html_section,
          $.list_section,
          $.p_section,
          $.title_section,
          $.todo_section,
        )
      ),

    _attr: $ => choice(
      field("attr_bool", $.attr_bool),
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
      field('attr_bool_value', $.attr_bool_value),
      $.newline,
    ),

    attr_bool_value: _ => /[^:\n]+/,

    attr_dashes: _ => "--",

    attr_key: _ => /[^:\n]+/,

    attr_separator: _ => ":",

    attr_value: _ => /[^\n]+/,

    // code_end_section: $ => seq(
    //   $.section_dashes,
    //   $.single_space,
    //   $.section_start_end_token,
    //   $.code_section_token,
    //   $.newline,
    //   $.newline,
    //   repeat1($.paragraph),
    // ),

    // code_start_section: $ => seq(
    //   $.section_dashes,
    //   $.single_space,
    //   $.code_section_token,
    //   $.section_start_end_token,
    //   $.newline,
    //   optional(repeat1($._attr)),
    //   $.newline,
    //   field('code_body', $.code_body),
    // ),

    code_container: $ => seq(
      $.section_dashes,
      $.single_space,
      $.code_token,
      $.container_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      field("code_container_body", $.code_container_body),
      $.newline,
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.code_token,
      $.newline,
      $.newline,
      $.empty_space,



    ),

    code_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.code_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      field("code_section_body", $.code_section_body),
      $.newline,
    ),

    headline: $ => alias($.paragraph, 'headline'),

    html_container: $ => seq(
      $.section_dashes,
      $.single_space,
      $.html_token,
      $.container_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.html_container_body,
      $.newline,
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.html_token,
      $.newline,
      $.newline,
    ),

    html_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.html_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.html_section_body,
      $.newline,
    ),

    // html_container_end: $ => seq(
    //   $.section_dashes,
    //   $.single_space,
    //   $.section_start_end_token,
    //   $.html_token,
    //   $.newline,
    //   $.newline,
    //   repeat1($.paragraph),
    // ),

    // html_container_start: $ => seq(
    //   $.section_dashes,
    //   $.single_space,
    //   $.html_token,
    //   $.section_start_end_token,
    //   $.newline,
    //   $.newline,
    //   $.html_body,
    // ),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    list_dash: _ => "-",

    list_item: $ => seq(
      $.list_dash,
      $.nb_whitespace,
      repeat($.paragraph),
    ),

    list_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.list_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.list_item),
    ),

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    following_word_chars: _ => /[^ \n\t]+/,

    nb_whitespace: _ => /[ \t]+/,

    newline: _ => / *\n/,

    // this also has "-" which might
    // be better off to be moved elsewhere
    non_lt_char: _ => /[^-< \n\t]/,

    p_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.p_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.paragraph),
    ),

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

    title_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.title_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      $.empty_space,
    ),

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
      $.single_space,
      $.todo_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.todo_item),
    ),

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
    $.code_container_body,
    $.code_section_body,
    $.code_token,
    $.container_token,
    $.empty_space,
    $.html_container_body,
    $.html_section_body,
    $.html_token,
    $.list_token,
    $.p_token,
    $.section_dashes,
    $.single_space,
    $.title_token,
    $.todo_token,
    $.error_sentinel,
  ],

});

