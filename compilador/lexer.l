/* 
 * Sample: 
 * Description: Count the number of characters and the number of lines 
 *              from standard input
 * Usage: (1) $ flex sample2.l
 *        (2) $ gcc lex.yy.c -ll (or -lfl)
 *        (3) $ ./a.out
 *        stdin> whatever you like
 *	      stdin> Ctrl-D
 */

%{
  #include <stdio.h>  
%}

%%

[ \t\n]                 {}
[0-9]+.[0-9]+           {yylval.sValue = strdup(yytext); return(VALUE);}
[0-9]+                  {yylval.sValue = strdup(yytext); return(VALUE);}
\"([^"]*)\"             {yylval.sValue = strdup(yytext); return(VALUE);}
"true"                  {yylval.sValue = strdup(yytext); return(VALUE);}
"false"                 {yylval.sValue = strdup(yytext); return(VALUE);}
"void"                  {yylval.sValue = strdup(yytext); return(TYPE);}
"bool"                  {yylval.sValue = strdup(yytext); return(TYPE);}
"int"                   {yylval.sValue = strdup(yytext); return(TYPE);}
"float"                 {yylval.sValue = strdup(yytext); return(TYPE);}
"string"                {yylval.sValue = strdup(yytext); return(TYPE);}
"arr"                   {return(ARRAY);}
"struct"                {return(STRUCT);}
"tpl"                   {return(TUPLE);}
"while"                 {return(WHILE);}
"{"                     {return(BRACES_INITIATOR);}
"}"                     {return(BRACES_TERMINATOR);}
"["                     {return(BRACKETS_INITIATOR);}
"]"                     {return(BRACKETS_TERMINATOR);}
"("                     {return(PARENTHESES_INITIATOR);}
")"                     {return(PARENTHESES_TERMINATOR);}
"in"                    {return(IN);}
"out"                   {return(OUT);}
"open"                  {return(OPEN);}
"close"                 {return(CLOSE);}
"def"                   {return(DEF);}
"for"                   {return(FOR);}
":"                     {return(ITERATOR);}
"if"                    {return(IF);}
"else"                  {return(ELSE);}
"elif"                  {return(ELIF);}
"break"                 {return(BREAK);}
"return"                {return(RETURN);}
"len"                   {return(LEN_STRING);}
","                     {return(COMMA);}
";"                     {return(SEMICOLON);}
"<="                    {return(LEQ);}
"<-"                    {return(COPY_STRING);}
"<"                     {return(LESS_THAN);}
">="                    {return(GEQ);}
">"                     {return(GREATER_THAN);}
"=="                    {return(EQUAL);}
"!="                    {return(NOT_EQUAL);}
"!"                     {return(NOT);}
"&&"                    {return(AND);}
"||"                    {return(OR);}
"++"                    {return(CONCAT);}
"+"                     {return(PLUS_OPERATOR);}
"-"                     {return(MINUS_OPERATOR);}
"*"                     {return(MULTI_OPERATOR);}
"/"                     {return(DIVISION_OPERATOR);}
"%"                     {return(MOD_OPERATOR);}
"**"                    {return(POWER_OPERATOR);}
"="                     {return(ASSIGN);}
[a-zA-Z][a-zA-Z0-9]*    {yylval.sValue = strdup(yytext); return ID;}
^\#[^\n]*               {}
"."                     {return(SEPARATOR);}
.                       {printf("Invalid character.\n");}

%%

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif
