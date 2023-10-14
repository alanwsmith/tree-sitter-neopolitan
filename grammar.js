module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.title_section
      )
    ),

    empty_line: _ => / *\n/,

    following_word_chars: _ => token(/[^ \n\t]/),

    non_lt_char: _ => token(/[^< \n\t]/),

    paragraph: $ => seq(
      repeat1(
        choice(
          $.paragraph_first_word, 
          seq(
            $.whitespace, $.word
          ),
        )
      )
    ),

    paragraph_first_word: $ => 
      /\S+/,

    title_headline: $ => alias(
      $.paragraph, 
      'title_headline'
    ),

    title_section: $ => seq(
      $.title_token, 
      $.empty_line,
      $.title_headline,
    ),

    title_token: _ => token(
      seq(
        "-- title",
        / *\n/
      ),
    ),


    whitespace: _ => /[ \t]+/,

    word: _ => token.immediate(seq(
      /[^< \n\t]/,
      /[^ \n\t]+/,
    )),
  },
  extras: _ => []
});



