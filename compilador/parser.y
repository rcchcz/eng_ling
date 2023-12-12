%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "./record/record.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

char * cat(char *, char *, char *, char *, char *);

%}

%union {
    char * sValue;  /* string value */
    int    iValue; 	/* integer value */
    double dValue;  /* double value */
    struct record * rec;
};

%token  <sValue> ID TYPE VALUE LEN_STRING
%token  ASSIGN
        COMMA SEMICOLON SEPARATOR
        DEF ARRAY STRUCT TUPLE
        WHILE FOR ITERATOR IF ELSE ELIF BREAK RETURN
        BRACES_INITIATOR BRACES_TERMINATOR BRACKETS_INITIATOR BRACKETS_TERMINATOR PARENTHESES_INITIATOR PARENTHESES_TERMINATOR
        IN OUT OPEN CLOSE
        EQUAL NOT_EQUAL LEQ GEQ GREATER_THAN LESS_THAN
        NOT AND OR
        PLUS_OPERATOR MINUS_OPERATOR MULTI_OPERATOR DIVISION_OPERATOR MOD_OPERATOR POWER_OPERATOR
        CONCAT COPY_STRING

%type <rec> prog stmlist stm assignment else_opt out expr val body break return types
%type <rec> idlist decl decl_elem  exprlist attrlist while for array_decl construct
%type <rec> field

%start prog

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

stmlist     : stm SEMICOLON                                                     { char * s = cat($1->code, ";\n", "", "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  free(s); }
            | stm SEMICOLON stmlist				                                      { char * s = cat($1->code, ";\n", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            ;

stm         : funcdef                                                           {}
            | structdef                                                         {}
            | decl                                                              { $$ = createRecord($1->code, "");
                                                                                  freeRecord($1); }
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

field       : TYPE ID                                                           { char * s = cat($1, " ", $2, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  free($2);
                                                                                  free(s); }
            | ARRAY LESS_THAN TYPE GREATER_THAN ID                              { char * s = cat($3, "", $5, "[]", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($3);
                                                                                  free($5);
                                                                                  free(s); }
            | ID ID                                                             { char * s = cat($1, " ", $2, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  free($2);
                                                                                  free(s); }
            ;

decl        : TYPE idlist                                                       { char * s = cat($1, " ", $2->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  freeRecord($2);
                                                                                  free(s); }
            | struct_decl                                                       {}
            | tuple_decl                                                        {}
            | array_decl                                                        { $$ = createRecord($1->code, "");
                                                                                  freeRecord($1); }
            ;

idlist      : decl_elem                                                         { $$ = createRecord($1->code, "");
                                                                                  freeRecord($1); }
            | decl_elem COMMA idlist                                            { char * s = cat($1->code, ", ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            ;

decl_elem   : ID                                                                { $$ = createRecord($1, "");
                                                                                  free($1); }
            | assignment                                                        { $$ = createRecord($1->code, "");
                                                                                  free($1); }
            ;

assignment  : ID ASSIGN expr                                                    { char * s = cat($1, " = ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            ;

struct_decl : STRUCT ID ID                                                      {}
            | STRUCT ID ID ASSIGN construct                                     {}
            ;

construct   : BRACES_INITIATOR exprlist BRACES_TERMINATOR                       { char * s = cat("{", $2->code, "}", "", ""); 
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($2);
                                                                                  free(s); }
            ;

tuple_decl  : TUPLE PARENTHESES_INITIATOR types PARENTHESES_TERMINATOR
                ID ASSIGN PARENTHESES_INITIATOR exprlist PARENTHESES_TERMINATOR {}
            ;

types       : TYPE                                                              { $$ = createRecord($1, "");
                                                                                  free($1); }
            | TYPE COMMA types                                                  { char * s = cat($1, ", ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  freeRecord($3);
                                                                                  free(s);}
            ;

exprlist    : expr                                                              { $$ = createRecord($1->code, "");
                                                                                  free($1); }
            | exprlist COMMA expr                                               { char * s = cat($1->code, ", ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            ;

array_decl  : ARRAY LESS_THAN TYPE GREATER_THAN ID
                BRACKETS_INITIATOR expr BRACKETS_TERMINATOR                     { char * s = cat($3, $5, "[", $7->code, "]");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($3);
                                                                                  free($5);
                                                                                  freeRecord($7);
                                                                                  free(s); }
            | ARRAY LESS_THAN TYPE GREATER_THAN ID ASSIGN construct             { char * s = cat($3, $5, "[] = ", $7->code, "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($3);
                                                                                  free($5);
                                                                                  freeRecord($7);
                                                                                  free(s); }
            ;

expr        : val                                                               { $$ = createRecord($1->code, "");
                                                                                  freeRecord($1); }
            | len                                                               {}
            | expr PLUS_OPERATOR expr                                           { char * s = cat($1->code, " + " , $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr MINUS_OPERATOR expr                                          { char * s = cat($1->code, " - " , $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr MULTI_OPERATOR expr                                          { char * s = cat($1->code, " * " , $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr DIVISION_OPERATOR expr                                       { char * s = cat($1->code, " / " , $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr MOD_OPERATOR expr                                            { char * s = cat($1->code, " % " , $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr POWER_OPERATOR expr                                          { char * s = cat("pow(", $1->code, " , ", $3->code, ")");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr CONCAT expr                                                  {}
            | expr EQUAL expr                                                   { char * s = cat($1->code, " == ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr NOT_EQUAL expr                                               { char * s = cat($1->code, " != ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr LEQ expr                                                     { char * s = cat($1->code, " <= ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr GEQ expr                                                     { char * s = cat($1->code, " >= ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr LESS_THAN expr                                               { char * s = cat($1->code, " < ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr GREATER_THAN expr                                            { char * s = cat($1->code, " > ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | NOT expr                                                          { char * s = cat("!", $2->code, "", "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($2);
                                                                                  free(s); }
            | expr AND expr                                                     { char * s = cat($1->code, " && ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | expr OR expr                                                      { char * s = cat($1->code, " || ", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            | PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR                 { char * s = cat("(", $2->code, ")", "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($2);
                                                                                  free(s); }
            | attrlist                                                          { $$ = createRecord($1->code, "");
                                                                                  freeRecord($1); }
            ;

attrlist    : ID SEPARATOR ID                                                   { char * s = cat($1, ".", $3, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  free($3);
                                                                                  free(s); }
            | ID SEPARATOR attrlist                                             { char * s = cat($1, ".", $3->code, "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  free($1);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            ;

val         : ID                                                                { $$ = createRecord($1, "");
                                                                                  free($1); }
            | VALUE                                                             { $$ = createRecord($1, "");
                                                                                  free($1); }
            ;

if          : IF expr body if_opt                                               {printf("if \n");}
            ;

if_opt      : elif_opt else_opt                                                 {printf("if_opt \n");}
            ;

elif_opt    :                                                                   {printf("elif_opt vazio \n");}
            | ELIF expr body elif_opt                                           {printf("elif_opt \n");}
            ;

else_opt    :                                                                   {}
            | ELSE body                                                         {}

while       : WHILE expr body                                                   { char * s = cat("loop: if(", $2->code, "){\n", $3->code, "goto loop;\n}");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($2);
                                                                                  freeRecord($3);
                                                                                  free(s); }
            ;

for         : FOR PARENTHESES_INITIATOR init PARENTHESES_TERMINATOR body        {}
            ;

init        : TYPE ID ITERATOR range                                            {}
            ;

range       : BRACKETS_INITIATOR expr COMMA expr BRACKETS_TERMINATOR            {}
            | ID                                                                {}
            ;

return      : RETURN expr                                                       { char * s = cat("return ", $2->code, "", "", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($2);
                                                                                  free(s); }
            ;

break       : BREAK                                                             { $$ = createRecord("break",""); }
            ;

str_copy    : ID COPY_STRING expr                                               {}
            ;

in          : IN PARENTHESES_INITIATOR ID PARENTHESES_TERMINATOR                {}
            ;

out         : OUT expr                                                          { char * s = cat("printf", "(", $2->code, ")", "");
                                                                                  $$ = createRecord(s, "");
                                                                                  freeRecord($2);
                                                                                  free(s); }
            ;

open        : OPEN PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR             {}
            ;

close       : CLOSE PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR            {}
            ;

len         : LEN_STRING PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR      {}
            ;           

%%

int main (void) {
  return yyparse ( );
}

int yyerror (char *msg) {
  fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
  return 0;
}

char * cat(char * s1, char * s2, char * s3, char * s4, char * s5){
  int tam;
  char * output;

  tam = strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4) + strlen(s5)+ 1;
  output = (char *) malloc(sizeof(char) * tam);
  
  if (!output){
    printf("Allocation problem. Closing application...\n");
    exit(0);
  }
  
  sprintf(output, "%s%s%s%s%s", s1, s2, s3, s4, s5);
  
  return output;
}