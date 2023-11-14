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
    COMMENT = 263,
    COMMA = 264,
    SEMICOLON = 265,
    SEPARATOR = 266,
    DEF = 267,
    ARRAY = 268,
    STRUCT = 269,
    TUPLE = 270,
    WHILE = 271,
    FOR = 272,
    ITERATOR = 273,
    IF = 274,
    ELSE = 275,
    ELIF = 276,
    BREAK = 277,
    RETURN = 278,
    BRACES_INITIATOR = 279,
    BRACES_TERMINATOR = 280,
    BRACKETS_INITIATOR = 281,
    BRACKETS_TERMINATOR = 282,
    PARENTHESES_INITIATOR = 283,
    PARENTHESES_TERMINATOR = 284,
    IN = 285,
    OUT = 286,
    OPEN = 287,
    CLOSE = 288,
    EQUAL = 289,
    NOT_EQUAL = 290,
    LEQ = 291,
    GEQ = 292,
    GREATER_THAN = 293,
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
#define COMMENT 263
#define COMMA 264
#define SEMICOLON 265
#define SEPARATOR 266
#define DEF 267
#define ARRAY 268
#define STRUCT 269
#define TUPLE 270
#define WHILE 271
#define FOR 272
#define ITERATOR 273
#define IF 274
#define ELSE 275
#define ELIF 276
#define BREAK 277
#define RETURN 278
#define BRACES_INITIATOR 279
#define BRACES_TERMINATOR 280
#define BRACKETS_INITIATOR 281
#define BRACKETS_TERMINATOR 282
#define PARENTHESES_INITIATOR 283
#define PARENTHESES_TERMINATOR 284
#define IN 285
#define OUT 286
#define OPEN 287
#define CLOSE 288
#define EQUAL 289
#define NOT_EQUAL 290
#define LEQ 291
#define GEQ 292
#define GREATER_THAN 293
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
#line 12 "parser.y"

    char * sValue;  /* string value */

#line 159 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
