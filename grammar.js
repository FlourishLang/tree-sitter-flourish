



module.exports = grammar({
  name: 'flourish',

  // inline: $ => [$.statement],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($.statement),
    statement: $ => seq($.expression,"\n"),
    expression:$ => choice($.cmd,seq($.cmd,$._arguments)),
    _arguments: $ => repeat1($.argument),
    cmd:$ => choice($.identifier,$.operator),
    operator:$ => choice('+','-'),
    identifier: $ => /[a-zA-Z][0-9a-zA-Z]*/,
    number: $ => /\d+/,
    argument:$ => choice($.number,$.identifier,$.compoundExpression),
    compoundExpression:$ =>  seq('(',$.expression,')') 

    
    
    

  }
});
