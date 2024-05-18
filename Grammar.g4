grammar Grammar;

NEWLINE: [\r\n]+;
SPACE: [ \t] -> skip;

pre_main: function_declaration | class;

prog: (pre_main NEWLINE*)* 'int' 'main' '()' '{' NEWLINE* (statement NEWLINE*)* '}';

VARIABLE_NAME: [a-zA-Z]+;

base_type: int='int'
         | bool='bool'
         | void='void'
         | str='string'
         ;

function_declaration: 'func' type VARIABLE_NAME '(' parameter_list? ')' '{' NEWLINE* (statement NEWLINE*)* '}' NEWLINE*;

array_type: base_type '*';

parameter: type VARIABLE_NAME;

type: base_type | array_type;

parameter_list : parameter(','parameter)* ;

method: 'method' type VARIABLE_NAME '('parameter_list?')' '{' NEWLINE* (statement NEWLINE)* '}' NEWLINE*;

class_field: type VARIABLE_NAME ';';

class_statement: method | class_field;

class: 'class' VARIABLE_NAME '{' NEWLINE* (class_statement NEWLINE)* '}' ';';

variable_declaration: type var_name=VARIABLE_NAME';';

INTEGER: [1-9][0-9]+ | [0-9];

SCHAR: ~[-+*&/^"\\\r\n];

STRING: '"' SCHAR* '"';

variable_definition: VARIABLE_NAME '=' expression';';

variable_declaration_definition: type VARIABLE_NAME '=' expression';';

print: 'print' '(' expression ')';

function: print;

if_statement: NEWLINE* statement NEWLINE*;

else_statement: NEWLINE* statement NEWLINE*;

statement: variable_declaration
         | variable_definition
         | variable_declaration_definition
         | 'if' '(' expr=expression ')' '{' if_statement* '}' ('else' '{' else_statement* '}')?
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

expression: expr1=expression BINARY_OPERATOR expr2=expression | STRING | UNARY_OPERATOR? INTEGER | UNARY_OPERATOR? VARIABLE_NAME;