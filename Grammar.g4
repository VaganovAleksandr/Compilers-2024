grammar Grammar;

NEWLINE: [\r\n]+;
SPACE: [ \t] -> skip;

prog: 'int' 'main' '()' '{' NEWLINE* (statement NEWLINE*)* '}';

VARIABLE_NAME: [a-zA-Z]+;

base_type: int='int'
         | bool='bool'
         | void='void'
         ;

variable_declaration: base_type var_name=VARIABLE_NAME';';

INTEGER: [1-9][0-9]+ | [0-9];

variable_definition: VARIABLE_NAME '=' expression';';

variable_declaration_definition: base_type VARIABLE_NAME '=' expression';';

print: 'print' '(' expression ')';

function: print;

statement: variable_declaration
         | variable_definition
         | variable_declaration_definition
         | 'if' '(' expr=expression ')' '{' NEWLINE* (if=statement NEWLINE*)* '}' ('else' '{' NEWLINE* (else=statement NEWLINE*)* '}')?
         | function ';'
         ;

UNARY_OPERATOR: '-'
              | '*'
              | '&'
              ;

BINARY_OPERATOR: '+'
               | '-'
               | '*'
               | '/'
               | '=='
               | '&&'
               | '||'
               | '^'
               ;

expression: expr1=expression BINARY_OPERATOR expr2=expression | UNARY_OPERATOR? INTEGER | VARIABLE_NAME;
