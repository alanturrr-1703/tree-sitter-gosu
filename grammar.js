const DIGITS = token(choice(
  '0', 
  seq(/[1-9]/, optional(seq(optional('_'), sep1(/[0-9]+/, /_+/))))
));

const DECIMAL_DIGITS = token(sep1(/[0-9]+/, '_'));

const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'));

const PREC = {
  COMMENT: 0,
  EXPRESSION: 1,
  CALL: 2,
};

module.exports = grammar({
  name: "gosu",

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/,
  ],

  rules: {
    source_file: $ => seq(
      repeat($.header),
      repeat($.statement)
    ),

    header: $ => seq(
      $.package_declaration,
      repeat($.import_statement)
    ),

    package_declaration: $ => seq(
      'package',
      $.qualified_identifier,
      ';'
    ),

    import_statement: $ => seq(
      'import',
      $.qualified_identifier,
      ';'
    ),

    qualified_identifier: $ => prec.right(seq($.identifier, repeat(seq('.', $.identifier)))),

    statement: $ => choice(
      $.function_declaration,
      $.variable_declaration,
      $.expression_statement
    ),

    function_declaration: $ => seq(
      'function',
      $.identifier,
      $.parameter_list,
      $.block
    ),

    parameter_list: $ => seq(
      '(',
      optional(commaSep($.identifier)),
      ')'
    ),

    block: $ => seq('{', repeat($.statement), '}'),

    variable_declaration: $ => seq(
      'var',
      $.variable_declarator_list
    ),

    variable_declarator_list: $ => commaSep1($.variable_declarator),

    variable_declarator: $ => seq(
      $.identifier,
      optional(seq('=', $.variable_initializer))
    ),

    variable_initializer: $ => choice(
      $.expression,
      $.array_initializer
    ),

    array_initializer: $ => seq(
      '{',
      optional(commaSep($.expression)),
      '}'
    ),

    expression_statement: $ => seq(
      $.expression,
      optional(';')
    ),

    expression: $ => choice(
      $.number_literal,
      $.function_call,
      $.binary_expression,
      $.identifier,
      $.string
    ),

    number_literal: $ => choice(
      DIGITS,
      seq('0x', HEX_DIGITS),
    ),

    binary_expression: $ => prec.left(PREC.EXPRESSION, seq(
      $.expression,
      choice('+', '-', '*', '/', '%'),
      $.expression
    )),

    function_call: $ => seq(
      $.identifier,
      $.argument_list
    ),

    argument_list: $ => seq(
      '(',
      optional(commaSep($.expression)),
      ')'
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: $ => /"([^"\\]|\\.)*"/,

    line_comment: _ => token(prec(PREC.COMMENT, seq('//', /[^\n]*/))),

    block_comment: _ => token(prec(PREC.COMMENT, seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')))
  }
});

/**
 * Creates a rule to match one or more of the rules separated by `separator`
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
