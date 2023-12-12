/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    TYPE = 259,
    VALUE = 260,
    LEN_STRING = 261,
    ASSIGN = 262,
    COMMA = 263,
    SEMICOLON = 264,
    SEPARATOR = 265,
    DEF = 266,
    ARRAY = 267,
    STRUCT = 268,
    TUPLE = 269,
    WHILE = 270,
    FOR = 271,
    ITERATOR = 272,
    IF = 273,
    ELSE = 274,
    ELIF = 275,
    BREAK = 276,
    RETURN = 277,
    BRACES_INITIATOR = 278,
    BRACES_TERMINATOR = 279,
    BRACKETS_INITIATOR = 280,
    BRACKETS_TERMINATOR = 281,
    PARENTHESES_INITIATOR = 282,
    PARENTHESES_TERMINATOR = 283,
    IN = 284,
    OUT = 285,
    OPEN = 286,
    CLOSE = 287,
    EQUAL = 288,
    NOT_EQUAL = 289,
    LEQ = 290,
    GEQ = 291,
    GREATER_THAN = 292,
    LESS_THAN = 293,
    NOT = 294,
    AND = 295,
    OR = 296,
    PLUS_OPERATOR = 297,
    MINUS_OPERATOR = 298,
    MULTI_OPERATOR = 299,
    DIVISION_OPERATOR = 300,
    MOD_OPERATOR = 301,
    POWER_OPERATOR = 302,
    CONCAT = 303,
    COPY_STRING = 304
  };
#endif
/* Tokens.  */
#define ID 258
#define TYPE 259
#define VALUE 260
#define LEN_STRING 261
#define ASSIGN 262
#define COMMA 263
#define SEMICOLON 264
#define SEPARATOR 265
#define DEF 266
#define ARRAY 267
#define STRUCT 268
#define TUPLE 269
#define WHILE 270
#define FOR 271
#define ITERATOR 272
#define IF 273
#define ELSE 274
#define ELIF 275
#define BREAK 276
#define RETURN 277
#define BRACES_INITIATOR 278
#define BRACES_TERMINATOR 279
#define BRACKETS_INITIATOR 280
#define BRACKETS_TERMINATOR 281
#define PARENTHESES_INITIATOR 282
#define PARENTHESES_TERMINATOR 283
#define IN 284
#define OUT 285
#define OPEN 286
#define CLOSE 287
#define EQUAL 288
#define NOT_EQUAL 289
#define LEQ 290
#define GEQ 291
#define GREATER_THAN 292
#define LESS_THAN 293
#define NOT 294
#define AND 295
#define OR 296
#define PLUS_OPERATOR 297
#define MINUS_OPERATOR 298
#define MULTI_OPERATOR 299
#define DIVISION_OPERATOR 300
#define MOD_OPERATOR 301
#define POWER_OPERATOR 302
#define CONCAT 303
#define COPY_STRING 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y"

    char * sValue;  /* string value */
    int    iValue; 	/* integer value */
    double dValue;  /* double value */
    struct record * rec;

#line 162 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
