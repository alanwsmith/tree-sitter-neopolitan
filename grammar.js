module.exports = grammar({
  name: 'neopolitan',
  rules: {
    source_file: $ =>
      repeat1(
        choice(
          $.categories_section,
          // $.code_container,
          // $.code_section,
          $.code_section_results_pair,
          $.css_section,
          $.h1_section,
          $.h2_section,
          $.h3_section,
          $.h4_section,
          $.h5_section,
          $.h6_section,
          $.html_container,
          $.html_section,
          $.list_section,
          $.metadata_section,
          $.notes_section,
          $.p_section,
          $.ref_section,
          $.script_section,
          $.title_section,
          $.tldr_container,
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

    categories_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.categories_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      // optional($.empty_space),
    ),

    // code_container: $ => seq(
    //   $.section_dashes,
    //   $.single_space,
    //   $.code_token,
    //   $.container_token,
    //   $.newline,
    //   optional(repeat1($._attr)),
    //   $.newline,
    //   field("code_container_body", $.code_container_body),
    //   $.newline,
    //   $.section_dashes,
    //   $.single_space,
    //   $.container_token,
    //   $.code_token,
    //   $.newline,
    //   $.newline,
    //   // optional($.empty_space),
    //   // TODO: Add parsing for following 
    //   // paragraphs here
    // ),

    // code_section: $ => seq(
    //   $.section_dashes,
    //   $.single_space,
    //   $.code_token,
    //   $.newline,
    //   optional(repeat1($._attr)),
    //   $.newline,
    //   field("code_section_body", $.code_section_body),
    //   $.newline,
    //   // No need to add empty_space here. All the
    //   // empty space gets pulled in by the scanner.
    //   // Doesn't look like that's an issue
    // ),

    code_section_results_pair: $ => seq(
      $.code_section,
      $.results_container,
    ),

    code_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.code_token,
      $.line_ending,
      $.attribute_dashes,
      $.nb_whitespace,
      field("attr_bool_value", $.word_raw),
      $.line_ending,
      $.line_ending,
      field("code_section_body", $.code_section_body),
      optional($.any_whitespace_or_newlines),
      // $.line_ending,
    ),


    results_container: $ => seq(
      $.section_dashes,
      $.single_space,
      $.results_token,
      $.container_token,
      $.line_ending,
      $.line_ending,
      $.results_container_body,
      $.any_whitespace_or_newlines,
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.results_token,
      $.line_ending,
      optional($.any_whitespace_or_newlines),
    ),


    css_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.css_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      field("css_section_body", $.css_section_body),
      $.newline,
      // No need to add empty_space here. All the
      // empty space gets pulled in by the scanner.
      // Doesn't look like that's an issue
    ),

    following_word_chars: _ => /[^ \n\t]+/,

    h1_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h1_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h2_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h2_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h3_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h3_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h4_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h4_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h5_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h5_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h6_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h6_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
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
      // optional($.empty_space),
      // TODO: Add parsing for following 
      // paragraphs here
    ),

    html_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.html_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      field('html_section_body', $.html_section_body),
      $.newline,
      // No need to add empty_space here. All the
      // empty space gets pulled in by the scanner.
      // Doesn't look like that's an issue
    ),

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
      optional($.empty_space),
    ),

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    metadata_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.metadata_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      // optional($.empty_space),
    ),

    nb_whitespace: _ => /[ \t]+/,

    newline: _ => / *\n/,

    // this also has "-" which might
    // be better off to be moved elsewhere
    non_lt_char: _ => /[^-< \n\t]/,

    notes_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.notes_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.list_item),
      optional($.empty_space),
    ),

    p_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.p_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.paragraph),
      // optional($.empty_space),
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

    ref_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.ref_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      repeat1($.paragraph),
      // optional($.empty_space),
    ),

    script_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.script_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      field("script_section_body", $.script_section_body),
      $.newline,
      // No need to add empty_space here. All the
      // empty space gets pulled in by the scanner.
      // Doesn't look like that's an issue
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
      // this is requiring two empty lines
      // right now. Will look at that at some 
      // point
      // optional($.empty_space),
    ),

    tldr_container: $ => seq(
      $.section_dashes,
      $.single_space,
      $.tldr_token,
      $.container_token,
      $.newline,
      optional(repeat1($._attr)),
      $.newline,
      // TODO: Update this to contain other
      // sections as well as just 
      // paragraphs
      optional(repeat1($.paragraph)),
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.tldr_token,
      $.newline,
      $.newline,
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
      optional($.empty_space),
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
    $.any_whitespace_or_newlines,
    $.attribute_dashes,
    $.categories_token,
    $.code_container_body,
    $.code_section_body,
    $.code_token,
    $.container_token,
    $.css_section_body,
    $.css_token,
    $.empty_space,
    $.h1_token,
    $.h2_token,
    $.h3_token,
    $.h4_token,
    $.h5_token,
    $.h6_token,
    $.html_container_body,
    $.html_section_body,
    $.html_token,
    $.line_ending,
    $.list_token,
    $.metadata_token,
    $.notes_token,
    $.p_token,
    $.ref_token,
    $.results_container_body,
    $.results_token,
    $.script_section_body,
    $.script_token,
    $.section_dashes,
    $.single_space,
    $.title_token,
    $.tldr_token,
    $.todo_token,
    $.word_raw,
    $.error_sentinel,
  ],

});

