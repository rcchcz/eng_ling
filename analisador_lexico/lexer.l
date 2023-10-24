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

[ \t\n]                 ;
[0-9]+.[0-9]+           {printf("FLOAT_VALUE(%s)\n",yytext);}
[0-9]+                  {printf("INT_VALUE(%s)\n",yytext);}
\"[a-zA-Z0-9 ]*\"       {printf("STRING_VALUE(%s)\n",yytext);}
"void"                  {printf("TYPE(VOID)\n");}
"bool"                  {printf("TYPE(BOOL)\n");}
"int"                   {printf("TYPE(INT)\n");}
"float"                 {printf("TYPE(FLOAT)\n");}
"string"                {printf("TYPE(STRING)\n");}
"arr"                   {printf("ARRAY\n");}
"struct"                {printf("STRUCT\n");}
"while"                 {printf("WHILE\n");}
"{"                     {printf("BRACES_INITIATOR\n");}
"}"                     {printf("BRACES_TERMINATOR\n");}
"["                     {printf("BRACKETS_INITIATOR\n");}
"]"                     {printf("BRACKETS_TERMINATOR\n");}
"("                     {printf("PARENTHESES_INITIATOR\n");}
")"                     {printf("PARENTHESES_TERMINATOR\n");}
"in"                    {printf("IN\n");}
"out"                   {printf("OUT\n");}
"open"                  {printf("OPEN\n");}
"close"                 {printf("CLOSE\n");}
"def"                   {printf("DEF\n");}
"for"                   {printf("FOR\n");}
":"                     {printf("ITERATOR\n");}
"if"                    {printf("IF\n");}
"else"                  {printf("ELSE\n");}
"elif"                  {printf("ELIF\n");}
"break"                 {printf("BREAK\n");}
"return"                {printf("RETURN\n");}
","                     {printf("COMMA\n");}
";"                     {printf("SEMICOLON\n");}
"<="                    {printf("LEQ\n");}
"<"                     {printf("LESS_THAN\n");}
">="                    {printf("GEQ\n");}
">"                     {printf("GREATER_THAN\n");}
"=="                    {printf("EQUAL\n");}
"!"                     {printf("NOT\n");}
"&&"                    {printf("AND\n");}
"||"                    {printf("OR\n");}
"+"                     {printf("PLUS_OPERATOR\n");}
"-"                     {printf("MINUS_OPERATOR\n");}
"*"                     {printf("MULTI_OPERATOR\n");}
"/"                     {printf("DIVISION_OPERATOR\n");}
"%"                     {printf("MOD_OPERATOR\n");}
"**"                    {printf("POWER_OPERATOR\n");}
"="                     {printf("ASSIGNMENT\n");}
[a-zA-Z][a-zA-Z0-9]*    {printf("ID(%s)\n",yytext);}
\#[^\#]*\n                {printf("COMMENT(%s)\n",yytext);}
.                       {printf("Invalid character.\n");}

%%

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif

int main(void)
{
  yylex();  
  return 0;
}