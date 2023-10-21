module.exports = grammar({
  name: 'neopolitan',
  rules: {
    source_file: $ => $.neo_doc,

    neo_doc: $ => repeat1(
      choice(
        field("categories_section", $.categories_section),
        //$.code_container,
        field("code_section", $.code_section),
        field("css_section", $.css_section),
        field("h1_section", $.h1_section),
        field("h2_section", $.h2_section),
        field("h3_section", $.h3_section),
        field("h4_section", $.h4_section),
        field("h5_section", $.h5_section),
        field("h6_section", $.h6_section),
        field("html_container", $.html_container),
        field("html_sectcion", $.html_section),
        field("list_sectoin", $.list_section),
        field("metadata_section", $.metadata_section),
        field("notes_section", $.notes_section),
        field("p_section", $.p_section),
        field("ref_section", $.ref_section),
        field("results_container", $.results_container),
        field("script_section", $.script_section),
        field("title_section", $.title_section),
        field("tldr_section", $.tldr_container),
        field("todo_section", $.todo_section),
      )
    ),


    attribute: $ => seq(
      $.attr_dashes,
      $.nb_whitespace,
      choice(
        field("boolean_attribute", $.boolean_attribute),
        field("key_value_attribute", $.key_value_attribute),
      ),
      // For some reason the "line_ending" call doesn't work
      // here so hard coding the regex
      // $.tmp_newline,
      $.line_ending,
    ),

    // tmp_newline: $ => /\n/,


    key_value_attribute: $ => seq(
      field('key_value_attribute_key', $.attr_key),
      $.attr_separator,
      $.nb_whitespace,
      field('key_value_attribute_value', $.attr_value),
    ),

    boolean_attribute: $ => seq(
      field('boolean_attribute_value', $.line_remainder),
    ),

    // attr_bool_value: _ => /[^:\n]+/,

    // attr_dashes: _ => "--",

    attr_key: _ => /[^:\n]+/,

    attr_separator: _ => ":",

    attr_value: _ => /[^\n]+/,

    categories_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.categories_token,
      $.line_ending,
      repeat1($.attribute),
      //   // optional($.empty_space),
    ),


    code_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.code_token,
      $.line_ending,
      repeat($.attribute),
      // optional(repeat($.tmp_attr)),
      //$.tmp_attr,
      // repeat($.tmp_attr),
      // for some reaons $.line_ending doesn't work here
      // so using direct `/\n/`` for now
      /\n/,
      // $.line_ending,
      field("code_section_body", $.code_section_body),
      optional($.any_whitespace_or_line_endings),
      //$.line_ending,
      // $.line_ending,
      // $.line_ending,
      // $.line_ending,

      // $.attribute,
      // optional(repeat1($.attribute)),
      // repeat($.attribute),
      // $.attribute_dashes,
      // $.nb_whitespace,
      // field("attr_bool_value", $.line_remainder),
      // $.line_ending,
      // $.line_ending,
      // field("code_section_body", $.code_section_body),
      // optional($.any_whitespace_or_line_endings),
    ),

    results_container: $ => seq(
      field("results_container_start_token", $.results_container_start_token),
      $.results_container_body,
      $.any_whitespace_or_line_endings,
      field("results_container_end_token", $.results_container_end_token),
      optional($.any_whitespace_or_line_endings),
    ),

    results_container_end_token: $ => seq(
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.results_token,
    ),

    results_container_start_token: $ => seq(
      $.section_dashes,
      $.single_space,
      $.results_token,
      $.container_token,
      $.line_ending,
      $.line_ending,
    ),


    css_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.css_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      field("css_section_body", $.css_section_body),
      $.line_ending,
      // No need to add empty_space here. All the
      // empty space gets pulled in by the scanner.
      // Doesn't look like that's an issue
    ),

    following_word_chars: _ => /[^ \n\t]+/,

    h1_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h1_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h2_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h2_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h3_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h3_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h4_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h4_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h5_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h5_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.headline,
      optional(repeat1($.paragraph)),
      // optional($.empty_space),
    ),

    h6_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.h6_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
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
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.html_container_body,
      $.line_ending,
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.html_token,
      $.line_ending,
      $.line_ending,
      // optional($.empty_space),
      // TODO: Add parsing for following 
      // paragraphs here
    ),

    html_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.html_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      field('html_section_body', $.html_section_body),
      $.line_ending,
      // No need to add empty_space here. All the
      // empty space gets pulled in by the scanner.
      // Doesn't look like that's an issue
    ),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    // For some reason the scanner version doesn't
    // work so using the regex here
    line_ending: $ => / *\n/,

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
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      repeat1($.list_item),
      optional($.empty_space),
    ),

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    metadata_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.metadata_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      // optional($.empty_space),
    ),

    nb_whitespace: _ => /[ \t]+/,

    // this also has "-" which might
    // be better off to be moved elsewhere
    non_lt_char: _ => /[^-< \n\t]/,

    notes_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.notes_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      repeat1($.list_item),
      optional($.empty_space),
    ),

    p_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.p_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      repeat1($.paragraph),
      $.line_ending,
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
        $.line_ending,
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
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      repeat1($.paragraph),
      // optional($.empty_space),
    ),

    script_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.script_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      field("script_section_body", $.script_section_body),
      $.line_ending,
      // No need to add empty_space here. All the
      // empty space gets pulled in by the scanner.
      // Doesn't look like that's an issue
    ),

    section_dashes: _ => /-- +/,

    title_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.title_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      $.headline,
      optional(repeat1($.paragraph)),
      $.line_ending

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
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      // TODO: Update this to contain other
      // sections as well as just 
      // paragraphs
      optional(repeat1($.paragraph)),
      $.section_dashes,
      $.single_space,
      $.container_token,
      $.tldr_token,
      $.line_ending,
      $.line_ending,
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
        seq($.paragraph_body, $.line_ending)
      )
    ),

    todo_section: $ => seq(
      $.section_dashes,
      $.single_space,
      $.todo_token,
      $.line_ending,
      optional(repeat1($.attribute)),
      $.line_ending,
      repeat1($.todo_item),
      optional($.empty_space),
    ),

    word: $ => seq(
      $.initial_word_chars,
      $.following_word_chars
    ),

    _wordbreak: $ => choice(
      $.nb_whitespace,
      $.line_ending,
    ),
  },

  extras: _ => [],

  externals: $ => [
    $.any_whitespace_or_line_endings,
    // $.attribute_dashes, // remove when attr_dashes is working
    $.attr_dashes,
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
    $.line_remainder,
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


// code_container: $ => seq(
//   $.section_dashes,
//   $.single_space,
//   $.code_token,
//   $.container_token,
//   $.line_ending,
//   optional(repeat1($.attribute)),
//   $.line_ending,
//   field("code_container_body", $.code_container_body),
//   $.line_ending,
//   $.section_dashes,
//   $.single_space,
//   $.container_token,
//   $.code_token,
//   $.line_ending,
//   $.line_ending,
//   // optional($.empty_space),
//   // TODO: Add parsing for following
//   // paragraphs here
// ),

// code_section: $ => seq(
//   $.section_dashes,
//   $.single_space,
//   $.code_token,
//   $.line_ending,
//   optional(repeat1($.attribute)),
//   $.line_ending,
//   field("code_section_body", $.code_section_body),
//   $.line_ending,
//   // No need to add empty_space here. All the
//   // empty space gets pulled in by the scanner.
//   // Doesn't look like that's an issue
// ),
