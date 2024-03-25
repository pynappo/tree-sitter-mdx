/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "mdx",
  conflicts: ($) => [],
  precedences: ($) => [
    [$.jsx_section, $.markdown_section],
    [$.escaped_slash, $.interpolation, $.markdown_word],
  ],
  externals: ($) => [
    $.import_start,
    $.interpolation_start,
    $.interpolation_content,
    $.eof,
    $.error,
    // $.markdown
  ],
  // anything that isn't a whitespace or newline
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
      seq(
        repeat1(choice($.escaped_slash, $.interpolation, $.markdown_word)),
        $.end_of_line,
      ),
    interpolation: ($) =>
      seq(
        $.interpolation_start,
        optional($.interpolation_content), // temp
        alias(/\}/, $.interpolation_end),
      ),
    markdown_word: ($) => /[^\{\s]+/,
    escaped_slash: ($) => /\\\{/,
    import_statement: ($) =>
      seq(
        $.import_start,
        optional(
          seq(
            choice(
              seq(
                alias(/\{/, $.left_brace),
                repeat(choice($.jsx_identifier, ",")),
                alias(/\}/, $.right_brace),
              ),
              $.jsx_identifier,
            ),
            /from/,
          ),
        ),
        $.string,
        alias(/;/, $.semicolon),
      ),
    // TODO
    html_component: ($) => choice(),
    jsx_component: ($) => seq(/[^\\]</, /.+/, /[^\\]\/>/),
    jsx_identifier: ($) => /[$a-zA-z_]+[A-Za-z_0-9$]*/,
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
    end_of_line: ($) => token.immediate(/\n|\r\n?/),
    // fallback: (_) => prec.dynamic(-100, "_"),
    // _horizontal_whitespace: $ => token.immediate(/[^/S/r/n]+/),
  },
});
