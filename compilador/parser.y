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
%left ELSE
%nonassoc EQUAL NOT_EQUAL LEQ GEQ GREATER_THAN LESS_THAN
%left PLUS_OPERATOR MINUS_OPERATOR
%left MULTI_OPERATOR DIVISION_OPERATOR MOD_OPERATOR POWER_OPERATOR
%nonassoc CONCAT
%%
prog    : stmlist                                                       {} 
        ;

stmlist : stm SEMICOLON                                                 {}
        | stm SEMICOLON stmlist				                            {}
        ;

stm     : TYPE ids
        | TYPE ID ASSIGN expr                                           {}
        | ID ASSIGN expr                                                {}
		| expr															{}
        | ID COPY_STRING expr                                           {}
        | DEF TYPE ID PARENTHESES_INITIATOR paramlist PARENTHESES_TERMINATOR
            BRACES_INITIATOR stmlist BRACES_TERMINATOR                  {}
        | WHILE expr 
            BRACES_INITIATOR stmlist BRACES_TERMINATOR                  {}
        | FOR PARENTHESES_INITIATOR init PARENTHESES_TERMINATOR body    {}
        | IF PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR body
            ELIF PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR body                                              {}
        | IF PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR body
            ELIF PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR body
            ELSE body                                                   {}
        | IF PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR body
            %prec ELSE body                                                   {}
        | BREAK                                                         {}
        | RETURN expr                                                   {}
        | IN PARENTHESES_INITIATOR ID PARENTHESES_TERMINATOR            {}
        | OUT expr                                                      {}
        | STRUCT ID BRACES_INITIATOR fieldlist BRACES_TERMINATOR        {}
        | TUPLE PARENTHESES_INITIATOR types PARENTHESES_TERMINATOR
            ID ASSIGN PARENTHESES_INITIATOR exprlist PARENTHESES_TERMINATOR {}
        | ARRAY BRACKETS_INITIATOR VALUE BRACKETS_TERMINATOR            {}
        | OPEN PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR         {}
        | CLOSE PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR        {}
        ;

body    : BRACES_INITIATOR stmlist BRACES_TERMINATOR                    {}

init    : TYPE ID ITERATOR range                                        {}
        ;

range   : BRACKETS_INITIATOR expr COMMA expr BRACKETS_TERMINATOR        {}
        | ID                                                            {}
        ;

ids     : ID                                                            {}
        | decl ids                                                      {}
        ;

decl    : ID COMMA
        | ID ASSIGN expr COMMA
        ;

types   : TYPE                                                          {}
        | TYPE COMMA types                                              {}
        ;

paramlist   : param                                                     {}
            | param COMMA paramlist                                     {}
            ;

param   : 
        | TYPE ID                                                       {}
        ;

fieldlist   : field SEMICOLON                                           {}
            | field SEMICOLON fieldlist                                 {}
            ;

field   : TYPE ID                                                       {}
        ;

exprlist    : expr                                                      {}
            | exprlist COMMA expr                                       {}
            ;

expr    : val                                                           {}
		| expr PLUS_OPERATOR expr                                       {}
        | expr MINUS_OPERATOR expr                                      {}
        | expr MULTI_OPERATOR expr                                      {}
        | expr DIVISION_OPERATOR expr                                   {}
        | expr MOD_OPERATOR expr                                        {}
        | expr POWER_OPERATOR expr                                      {}
        | expr CONCAT expr                                              {}
        | expr EQUAL expr                                               {}
        | expr NOT_EQUAL expr                                           {}
        | expr LEQ expr                                                 {}
        | expr GEQ expr                                                 {}
        | expr LESS_THAN expr                                           {}
        | expr GREATER_THAN expr                                        {}
        | NOT expr                                                      {}
        | expr AND expr                                                 {}
        | expr OR expr                                                  {}
        | PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR             {}
        | attrlist                                                      {}
        ;

attrlist    : ID SEPARATOR ID                                           {}
            | ID SEPARATOR attrlist                                     {}
            ;

val : ID                                                                {}
    | VALUE                                                             {}
    ;

%%

int main (void) {
  return yyparse ( );
}

int yyerror (char *msg) {
  fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
  return 0;
}