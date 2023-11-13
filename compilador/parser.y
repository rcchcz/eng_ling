%{
#include <stdio.h>
#include <string>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

%}

%union {
	char * sValue;  /* string value */
	};

%token  <sValue> ID TYPE LEN_STRING
%token  ASSIGN COMMENT
        FLOAT_VALUE INT_VALUE STRING_VALUE TRUE_VALUE FALSE_VALUE
        COMMA SEMICOLON BLOCK_BEGIN BLOCK_END
        DEF ARRAY STRUCT TUPLE
        WHILE FOR ITERATOR IF ELSE ELIF THEN BREAK RETURN DO
        BRACES_INITIATOR BRACES_TERMINATOR BRACKETS_INITIATOR BRACKETS_TERMINATOR PARENTHESES_INITIATOR PARENTHESES_TERMINATOR
        IN OUT OPEN CLOSE
        EQUAL NOT_EQUAL LEQ GEQ GREATER_THAN
        NOT AND OR
        PLUS_OPERATOR MINUS_OPERATOR MULTI_OPERATOR DIVISION_OPERATOR MOD_OPERATOR POWER_OPERATOR
        CONCAT COPY_STRING

%start prog

%type <sValue> stm

%%
prog : stmlist {} 
	 ;

stm : ID ASSIGN ID {printf("%s <- %s \n",$1, $3);}
    | WHILE ID DO stm						{}
	| BLOCK_BEGIN stmlist BLOCK_END			{}
	| IF ID THEN stm 						{}
	| IF ID THEN stm ELSE stm 				{}
	;
	
stmlist : stm								{}
		| stmlist SEMICOLON stm					{}
	    ;
%%

int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}