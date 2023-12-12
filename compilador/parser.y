%{
#include <stdio.h>
#include <string.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

%}

%union {
    char * sValue;  /* string value */
};

%token  <sValue> ID TYPE VALUE LEN_STRING
%token  ASSIGN COMMENT
        COMMA SEMICOLON SEPARATOR
        DEF ARRAY STRUCT TUPLE
        WHILE FOR ITERATOR IF ELSE ELIF BREAK RETURN
        BRACES_INITIATOR BRACES_TERMINATOR BRACKETS_INITIATOR BRACKETS_TERMINATOR PARENTHESES_INITIATOR PARENTHESES_TERMINATOR
        IN OUT OPEN CLOSE
        EQUAL NOT_EQUAL LEQ GEQ GREATER_THAN LESS_THAN
        NOT AND OR
        PLUS_OPERATOR MINUS_OPERATOR MULTI_OPERATOR DIVISION_OPERATOR MOD_OPERATOR POWER_OPERATOR
        CONCAT COPY_STRING

%start prog

%type <sValue> prog stmlist stm

%right ASSIGN
%left OR
%left AND
%left NOT
%left ELSE ELIF
%nonassoc EQUAL NOT_EQUAL LEQ GEQ GREATER_THAN LESS_THAN
%left PLUS_OPERATOR MINUS_OPERATOR
%left MULTI_OPERATOR DIVISION_OPERATOR MOD_OPERATOR POWER_OPERATOR
%nonassoc CONCAT
%%
prog        : stmlist                                                           {} 
            ;

stmlist     : stm SEMICOLON                                                     {printf("stm1: %s \n", $1);}
            | stm SEMICOLON stmlist				                                      {printf("stm2: %s \n", $1);}
            ;

stm         : funcdef                                                           {}
            | structdef                                                         {}
            | decl                                                              {}
            | assignment                                                        {}
            | expr                                                              {}
            | if                                                                {printf("stm if \n");}
            | while                                                             {} 
            | for                                                               {}
            | break                                                             {}
            | return                                                            {printf("return \n");}
            | str_copy                                                          {}
            | in                                                                {}
            | out                                                               {}
            | open                                                              {}
            | close                                                             {}
            ;

body        : BRACES_INITIATOR stmlist BRACES_TERMINATOR                        {printf("body \n");}
            ;

funcdef     : DEF field
                PARENTHESES_INITIATOR paramlist PARENTHESES_TERMINATOR body     {printf("funcdef \n");}
            ;

structdef   : STRUCT ID BRACES_INITIATOR fieldlist BRACES_TERMINATOR            {}
            ;

paramlist   : param                                                             {}
            | param COMMA paramlist                                             {}
            ;

param       : 
            | field                                                             {}
            ;

fieldlist   : field SEMICOLON                                                   {}
            | field SEMICOLON fieldlist                                         {}
            ;

field       : TYPE ID                                                           {printf("field: \n\t type: %s \n\t id: %s \n", $1, $2);}
            | ARRAY LESS_THAN TYPE GREATER_THAN ID                              {printf("arr: \n\t type: %s \n\t id: %s \n", $3, $5);}
            | ID ID                                                             {printf("struct (possibility of struct, does compiler know this id?): \n\t type: %s \n\t id: %s \n", $1, $2);}
            ;

decl        : TYPE idlist                                                       {printf("decl type: %s \n", $1);}
            | struct_decl                                                       {}
            | tuple_decl                                                        {}
            | array_decl                                                        {}
            ;

idlist      : decl_elem                                                         {}
            | decl_elem COMMA idlist                                            {}
            ;

decl_elem   : ID                                                                {printf("declelem id: %s \n", $1);}
            | assignment                                                        {}
            ;

assignment  : ID ASSIGN expr                                                    {printf("assignment id: %s \n", $1);}
            ;

struct_decl : STRUCT ID ID                                                      {}
            | STRUCT ID ID ASSIGN construct                                     {}
            ;

construct   : BRACES_INITIATOR exprlist BRACES_TERMINATOR                       {}
            ;

tuple_decl  : TUPLE PARENTHESES_INITIATOR types PARENTHESES_TERMINATOR
                ID ASSIGN PARENTHESES_INITIATOR exprlist PARENTHESES_TERMINATOR {}
            ;

types       : TYPE                                                              {}
            | TYPE COMMA types                                                  {}
            ;

exprlist    : expr                                                              {}
            | exprlist COMMA expr                                               {}
            ;

array_decl  : ARRAY LESS_THAN TYPE GREATER_THAN ID
                BRACKETS_INITIATOR expr BRACKETS_TERMINATOR                    {}
            | ARRAY LESS_THAN TYPE GREATER_THAN ID ASSIGN construct             {}
            ;

expr        : val    
            | len                                                               {}
            | expr PLUS_OPERATOR expr                                           {}
            | expr MINUS_OPERATOR expr                                          {}
            | expr MULTI_OPERATOR expr                                          {}
            | expr DIVISION_OPERATOR expr                                       {}
            | expr MOD_OPERATOR expr                                            {}
            | expr POWER_OPERATOR expr                                          {}
            | expr CONCAT expr                                                  {}
            | expr EQUAL expr                                                   {printf("equal expr \n");}
            | expr NOT_EQUAL expr                                               {}
            | expr LEQ expr                                                     {}
            | expr GEQ expr                                                     {}
            | expr LESS_THAN expr                                               {}
            | expr GREATER_THAN expr                                            {}
            | NOT expr                                                          {}
            | expr AND expr                                                     {}
            | expr OR expr                                                      {}
            | PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR                 {}
            | attrlist                                                          {}
            ;

attrlist    : ID SEPARATOR ID                                                   {}
            | ID SEPARATOR attrlist                                             {}
            ;

val         : ID                                                                {printf("val id: %s \n", $1);}
            | VALUE                                                             {printf("val value: %s \n", $1);}
            ;

if          : IF expr body if_opt                                               {printf("if \n");}
            ;

if_opt      : elif_opt else_opt                                                 {printf("if_opt \n");}
            ;

elif_opt    :                                                                   {printf("elif_opt vazio \n");}
            | ELIF expr body                                                    {printf("elif_opt \n");}
            ;

else_opt    :                                                                   {printf("else_opt vazio\n");}
            | ELSE body                                                         {printf("else_opt \n");}
            ;

while       : WHILE expr body                                                   {printf("while \n");}
            ;

for         : FOR PARENTHESES_INITIATOR init PARENTHESES_TERMINATOR body        {}
            ;

init        : TYPE ID ITERATOR range                                            {}
            ;

range       : BRACKETS_INITIATOR expr COMMA expr BRACKETS_TERMINATOR            {}
            | ID                                                                {}
            ;

return      : RETURN expr                                                       {}
            ;

break       : BREAK                                                             {}
            ;

str_copy    : ID COPY_STRING expr                                               {}
            ;

in          : IN PARENTHESES_INITIATOR ID PARENTHESES_TERMINATOR                {}
            ;

out         : OUT expr                                                          {}
            ;

open        : OPEN PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR             {}
            ;

close       : CLOSE PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR            {}
            ;

len         : LEN_STRING PARENTHESES_INITIATOR VALUE PARENTHESES_TERMINATOR    {printf("len(%s) -> %zu \n", $3,  strlen($3)-2);}
            ;           

%%

int main (void) {
  return yyparse ( );
}

int yyerror (char *msg) {
  fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
  return 0;
}