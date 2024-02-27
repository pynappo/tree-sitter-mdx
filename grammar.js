/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "mdx",
  precedence: ($) => [
    [$.jsx_section, $.markdown_section],
    [$.interpolation, $.markdown_word],
  ],
  externals: ($) => [
    $.import_start,
    $.interpolation_start,
    $.interpolation_end,
    $.markdown,
    $.eof,
    // $.markdown
  ],
  extras: ($) => [/[^/S/r/n]+/],
  rules: {
    document: ($) =>
      seq(
        optional(repeat1($.end_of_line)),
        choice($.jsx_section, $.markdown_section),
        repeat(
          seq(
            $.end_of_line,
            repeat1($.end_of_line),
            choice($.jsx_section, $.markdown_section),
          ),
        ),
      ),
    // lines that start with import or export
    jsx_section: ($) =>
      repeat1(
        seq(
          choice($.import_statement, $.html_component, $.jsx_component),
          $.end_of_line,
        ),
      ),
    // 1 or more non-empty lines
    markdown_section: ($) =>
      seq(repeat1(choice($.interpolation, $.markdown_word)), $.end_of_line),
    interpolation: ($) =>
      seq(
        $.interpolation_start,
        alias(/[^\}]+/, $.interpolation_content), // temp
        $.interpolation_end,
      ),
    markdown_word: ($) => /[^\{\s]+/,
    import_statement: ($) =>
      seq(
        $.import_start,
        optional(
          seq(
            choice(
              seq(
                alias(/\{/, $.left_brace),
                repeat(choice($.identifier, ",")),
                alias(/\}/, $.right_brace),
              ),
              $.identifier,
            ),
            "from",
          ),
        ),
        $.string,
        optional($.semicolon),
      ),
    html_component: ($) => choice(),
    jsx_component: ($) => seq(/[^\\]</, /.+/, /[^\\]\/>/),
    semicolon: ($) => /;/,
    word: ($) => /[/S]+/,
    identifier: ($) => /[a-zA-z_]+[A-Za-z_0-9]*/,
    string: ($) =>
      field(
        "type",
        choice(
          $.double_quoted_string,
          $.single_quoted_string,
          $.backtick_quoted_string,
        ),
      ),
    double_quoted_string: ($) => /".*"/,
    single_quoted_string: ($) => /'.*'/,
    backtick_quoted_string: ($) => /`.*`/,

    // taken from markdown
    end_of_line: ($) => choice(token.immediate(/\n|\r\n?/), $.eof),
    // _horizontal_whitespace: $ => token.immediate(/[^/S/r/n]+/),
  },
});
