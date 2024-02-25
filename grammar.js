/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "mdx",
  precedence: ($) => [
    [$.jsx_section, $.markdown_section],
    [$.interpolation, $.word]
  ],
  externals: $ => [
    $.import_start,
    $.interpolation_start,
    $.interpolation_end,
    $.markdown,
    $.eof
    // $.markdown
  ],
  extras: $ => [
    /[^/S/r/n]+/
  ],
  rules: {
    document: ($) =>
      seq(
        choice($.jsx_section, $.markdown_section),
        repeat(
          seq(
            $.newline_token,
            $.newline_token,
            choice($.jsx_section, $.markdown_section),
          ),
        ),
      ),
    // lines that start with import or export
    jsx_section: ($) => repeat1(seq(choice($.import_statement, $.html_component, $.jsx_component), $.newline_token)),
    // 1 or more non-empty lines
    markdown_section: ($) => repeat1(
      seq(
        choice(
          $.interpolation,
          $.markdown_text,
        ),
      )
    ),
    interpolation: ($) => seq(
      $.interpolation_start, /.*/, $.interpolation_end
    ),
    markdown_text: ($) => seq(repeat1(/\S+/), $.newline_token),
    import_statement: ($) =>
      seq(
        $.import_start,
        optional(
          seq(
            choice(
              seq(
                alias(/\{/, $.left_brace),
                repeat(choice($.identifier, ',')),
                alias(/\}/, $.right_brace),
              ),
              $.identifier,
            ),
            "from",
          )
        ),
        $.string,
        optional($.semicolon),
      ),
    html_component: ($) => choice(

    ),
    jsx_component: ($) => seq(/[^\\]</, /.+/, /[^\\]\/>/),
    semicolon: ($) => /;/,
    word: ($) => /[/S]+/,
    identifier: ($) => /[a-zA-z_]+[A-Za-z_0-9]*/,
    string: ($) =>
      choice(
        $.double_quoted_string,
        $.single_quoted_string,
        $.backtick_quoted_string,
      ),
    double_quoted_string: ($) => /".*"/,
    single_quoted_string: ($) => /'.*'/,
    backtick_quoted_string: ($) => /`.*`/,

    // taken from markdown
    newline_token: ($) => token.immediate(/\n|\r\n?/),
    // _horizontal_whitespace: $ => token.immediate(/[^/S/r/n]+/),
  },
});
