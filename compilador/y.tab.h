/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    TYPE = 259,                    /* TYPE  */
    VALUE = 260,                   /* VALUE  */
    LEN_STRING = 261,              /* LEN_STRING  */
    ASSIGN = 262,                  /* ASSIGN  */
    COMMENT = 263,                 /* COMMENT  */
    COMMA = 264,                   /* COMMA  */
    SEMICOLON = 265,               /* SEMICOLON  */
    SEPARATOR = 266,               /* SEPARATOR  */
    DEF = 267,                     /* DEF  */
    ARRAY = 268,                   /* ARRAY  */
    STRUCT = 269,                  /* STRUCT  */
    TUPLE = 270,                   /* TUPLE  */
    WHILE = 271,                   /* WHILE  */
    FOR = 272,                     /* FOR  */
    ITERATOR = 273,                /* ITERATOR  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    ELIF = 276,                    /* ELIF  */
    BREAK = 277,                   /* BREAK  */
    RETURN = 278,                  /* RETURN  */
    BRACES_INITIATOR = 279,        /* BRACES_INITIATOR  */
    BRACES_TERMINATOR = 280,       /* BRACES_TERMINATOR  */
    BRACKETS_INITIATOR = 281,      /* BRACKETS_INITIATOR  */
    BRACKETS_TERMINATOR = 282,     /* BRACKETS_TERMINATOR  */
    PARENTHESES_INITIATOR = 283,   /* PARENTHESES_INITIATOR  */
    PARENTHESES_TERMINATOR = 284,  /* PARENTHESES_TERMINATOR  */
    IN = 285,                      /* IN  */
    OUT = 286,                     /* OUT  */
    OPEN = 287,                    /* OPEN  */
    CLOSE = 288,                   /* CLOSE  */
    EQUAL = 289,                   /* EQUAL  */
    NOT_EQUAL = 290,               /* NOT_EQUAL  */
    LEQ = 291,                     /* LEQ  */
    GEQ = 292,                     /* GEQ  */
    GREATER_THAN = 293,            /* GREATER_THAN  */
    LESS_THAN = 294,               /* LESS_THAN  */
    NOT = 295,                     /* NOT  */
    AND = 296,                     /* AND  */
    OR = 297,                      /* OR  */
    PLUS_OPERATOR = 298,           /* PLUS_OPERATOR  */
    MINUS_OPERATOR = 299,          /* MINUS_OPERATOR  */
    MULTI_OPERATOR = 300,          /* MULTI_OPERATOR  */
    DIVISION_OPERATOR = 301,       /* DIVISION_OPERATOR  */
    MOD_OPERATOR = 302,            /* MOD_OPERATOR  */
    POWER_OPERATOR = 303,          /* POWER_OPERATOR  */
    CONCAT = 304,                  /* CONCAT  */
    COPY_STRING = 305              /* COPY_STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#define LESS_THAN 294
#define NOT 295
#define AND 296
#define OR 297
#define PLUS_OPERATOR 298
#define MINUS_OPERATOR 299
#define MULTI_OPERATOR 300
#define DIVISION_OPERATOR 301
#define MOD_OPERATOR 302
#define POWER_OPERATOR 303
#define CONCAT 304
#define COPY_STRING 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"

    char * sValue;  /* string value */

#line 171 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
