grammar Grammar;

NEWLINE: [\r\n]+;
SPACE: [ \t] -> skip;

prog: 'int main()' '{' NEWLINE* (statement NEWLINE)* '}';

VARIABLE_NAME: [a-zA-Z]+;

base_type: 'int' | 'bool' | 'void';

variable_declaration: base_type VARIABLE_NAME';';

INTEGER: [1-9][0-9]+ | [0-9];

variable_definition: VARIABLE_NAME '=' expression';';

variable_declaration_definition: base_type VARIABLE_NAME '=' expression';';

statement: variable_declaration | variable_definition | variable_declaration_definition
                                | 'if' '(' expression ')' '{' NEWLINE* statement NEWLINE* '}' ('else' '{' NEWLINE* statement NEWLINE* '}')?;

binary_operator: '+' | '-' | '*' | '/' | '==' | '&&' | '||' || '^';

expression: VARIABLE_NAME binary_operator expression | INTEGER | VARIABLE_NAME;
