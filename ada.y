%{

/* Kyle Quinn
   ada.y
   Final Ada Grammar
*/

%}

%token IS BEG END PROCEDURE ID NUMBER TYPE ARRAY RAISE OTHERS
%token RECORD IN OUT RANGE CONSTANT DERIVES EXCEPTION NULLWORD LOOP IF STAR
%token THEN ELSEIF ELSE EXIT WHEN AND OR EQ NEQ LT GT GTE LTE TICK
%token NOT EXP ARROW OF DOTDOT ENDIF ENDREC ENDLOOP EXITWHEN
%type <integer> NUMBER
%type <var> ID
%type <var> type_name
%union {
	int integer;
	char *var;
}

%%
program                        : main_body {printf ("\n*******\nDone.\n*******\n");}
                               ;
main_body                      : main_specification IS declarative_part_sequence BEG sequence_of_statements exception_part END ';' /*{printf("end main\n");}*/
                               ;
main_specification             : PROCEDURE ID /*{printf("see main spec\n");}*/     
                               ;
procedure_body                 : procedure_specification IS declarative_part_sequence BEG sequence_of_statements exception_part END ';' /*{printf("end prec\n");}*/
                               ;
procedure_specification        : PROCEDURE ID formal_parameter_part
                               ;
formal_parameter_part          : '(' parameters ')'
                               | /* empty */
                               ;
parameters                     : identifier_list ':' mode type_name ';' parameters
                               | identifier_list ':' mode type_name
                               ;
identifier_list                : ID /*{printf("See an id: %s\n", $1);}*/
                               | ID ',' identifier_list
                               ;
mode                           : IN
                               | OUT
                               | IN OUT
                               | /* empty */
                               ;
type_name                      : ID
                               ; 
declarative_part_sequence      : declarative_part procedure_sequence
                               ;
procedure_sequence             : procedure_body procedure_sequence
                               | /* Empty */
                               ;
declarative_part               : decl ';' declarative_part /*{printf("in the first declarativve_part\n");}*/
                               | /* empty */  /*{printf("in the empty declarativve_part\n");}*/
                               ; 
decl                           : array_type_definition 
				               | record_type_definition
				               | name_type_definition 
                               | variable_declaration /*{printf("reduced a var decl\n");} */
				               | constant_variable_declaration
				               | exception_type_definition
                               ;
array_type_definition          : TYPE ID IS ARRAY '(' constant_option DOTDOT constant_option ')' OF type_name
                               ;
constant_option                : ID
                               | NUMBER
                               ;
constant_expression            : NUMBER
                               ;
record_type_definition         : TYPE ID IS RECORD component_list ENDREC
                               ;
component_list                 : variable_declaration ';' component_list
                               | variable_declaration ';'
                               ;
variable_declaration           : identifier_list ':' type_name  /*{printf ("%s is the type\n", $3);}*/
                               ; 
name_type_definition           : TYPE ID IS RANGE constant_option DOTDOT constant_option
                               ;
constant_variable_declaration  : identifier_list ':' CONSTANT DERIVES constant_expression
                               ;
exception_type_definition      : identifier_list ':' EXCEPTION
                               ;
sequence_of_statements         : statement_type sequence_of_statements
                               | /* empty */
                               ;
statement_type                 : NULLWORD ';'
                               | assignment_statement ';'
                               | procedure_call ';'
                               | loop_statement ';'
                               | if_statement ';'
                               | raise_exception ';'
                               | expression ';'
                               ;
assignment_statement           : ID DERIVES expression
                               ;
procedure_call                 : ID optional_actual_parameter_part
                               ;
loop_statement                 : LOOP sequence_of_statements loop_exit ENDLOOP
                               ;
loop_exit                      : EXIT ';'
                               | EXITWHEN expression ';'
                               | /* empty */
                               ;
if_statement                   : IF expression THEN sequence_of_statements if_more ENDIF
                               ;
if_more                        : ELSEIF expression THEN sequence_of_statements if_more
                               | ELSE sequence_of_statements
                               | /* empty */
                               ;
raise_exception                : RAISE ID
                               ;
expression                     : relation boolean_operator_list 
                               ;
boolean_operator_list          : boolean_operator relation boolean_operator_list
                               | /* empty */
                               ;
relation                       : simple_expression relational_operator_list
                               ;
relational_operator_list       : relational_operator simple_expression relational_operator_list
                               | /* empty */
                               ;
simple_expression              : term adding_operator_list
                               | '-' term adding_operator_list
                               ;
adding_operator_list           : adding_operator term adding_operator_list
                               | /* empty */
                               ;
term                           : factor multiplying_operator_list
                               ;
multiplying_operator_list      : multiplying_operator factor multiplying_operator_list
                               | /* empty */
                               ;
factor                         : primary primary_list
                               | NOT primary
                               ;
primary_list                   : STAR primary primary_list
                               | /* empty */
                               ;
primary                        : NUMBER
                               | ID
                               | '(' expression ')'
                               ;
boolean_operator               : AND 
                               | OR
                               ;
relational_operator            : EQ 
                               | NEQ 
                               | LT 
                               | LTE 
                               | GT 
                               | GTE
                               ;
adding_operator                : '+' 
                               | '-'
                               ;
multiplying_operator           : '*' 
                               | '/'
                               ;
optional_actual_parameter_part : '(' actual_parameter_part ')'
                               ;

actual_parameter_part          : expression ',' actual_parameter_part
                               | expression
                               ;
exception_part                 : EXCEPTION exception_body
                               | /* empty */
                               ;
exception_body                 : WHEN choice_sequence ARROW sequence_of_statements exception_body
                               | WHEN OTHERS ARROW sequence_of_statements
                               | /* empty */
                               ;
choice_sequence                : ID choice_sequence
                               | '|' ID choice_sequence
                               | /* empty */
                               ;	
		 
%%
#include <stdio.h>
#include <string.h>

main(){

    printf("About to scan. . . . . .\n");
	yyparse();

}
