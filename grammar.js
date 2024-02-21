module.exports = grammar({
  name: "mdx",
  rules: {
    document: ($) => repeat($.section),
    section: ($) => choice($.standalone_jsx, $.markdown),
    standalone_jsx: ($) => choice($.import_statement, $.export_statement),
    import_statement: ($) => seq($.import_start, $.statement_body, $.semicolon),
    export_statement: ($) => seq($.export_start, $.statement_body, $.semicolon),
    import_start: ($) => /import/,
    export_start: ($) => /export/,
    statement_body: ($) => /[^;]*/,
    semicolon: ($) => /;/,
    markdown: ($) => /markdown/,
  },
});
