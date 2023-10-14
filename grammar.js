module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.title_section
      )
    ),

    empty_line: _ => /\n *\n/,

    paragraph: $ => seq(
      $.paragraph_first_word, 
      repeat(
        $.word
      )
    ),

    paragraph_first_word: _ => seq(
      /\w+/
    ),

    title_headline: $ => alias(
      $.paragraph, 
      'title_headline'
    ),

    title_section: $ => seq(
      $.title_token, 
      $.title_headline
    ),

    title_start: $ => seq(
      $.title_token, 
      $.empty_line
    ),

    title_token: _ => '-- title',

    whitespace: _ => /[ \t]+/,

    word: _ => seq(
      /\S+/
    ),
  }
});



