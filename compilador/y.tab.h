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
    LEN_STRING = 260,              /* LEN_STRING  */
    ASSIGN = 261,                  /* ASSIGN  */
    COMMENT = 262,                 /* COMMENT  */
    FLOAT_VALUE = 263,             /* FLOAT_VALUE  */
    INT_VALUE = 264,               /* INT_VALUE  */
    STRING_VALUE = 265,            /* STRING_VALUE  */
    TRUE_VALUE = 266,              /* TRUE_VALUE  */
    FALSE_VALUE = 267,             /* FALSE_VALUE  */
    COMMA = 268,                   /* COMMA  */
    SEMICOLON = 269,               /* SEMICOLON  */
    BLOCK_BEGIN = 270,             /* BLOCK_BEGIN  */
    BLOCK_END = 271,               /* BLOCK_END  */
    DEF = 272,                     /* DEF  */
    ARRAY = 273,                   /* ARRAY  */
    STRUCT = 274,                  /* STRUCT  */
    TUPLE = 275,                   /* TUPLE  */
    WHILE = 276,                   /* WHILE  */
    FOR = 277,                     /* FOR  */
    ITERATOR = 278,                /* ITERATOR  */
    IF = 279,                      /* IF  */
    ELSE = 280,                    /* ELSE  */
    ELIF = 281,                    /* ELIF  */
    THEN = 282,                    /* THEN  */
    BREAK = 283,                   /* BREAK  */
    RETURN = 284,                  /* RETURN  */
    DO = 285,                      /* DO  */
    BRACES_INITIATOR = 286,        /* BRACES_INITIATOR  */
    BRACES_TERMINATOR = 287,       /* BRACES_TERMINATOR  */
    BRACKETS_INITIATOR = 288,      /* BRACKETS_INITIATOR  */
    BRACKETS_TERMINATOR = 289,     /* BRACKETS_TERMINATOR  */
    PARENTHESES_INITIATOR = 290,   /* PARENTHESES_INITIATOR  */
    PARENTHESES_TERMINATOR = 291,  /* PARENTHESES_TERMINATOR  */
    IN = 292,                      /* IN  */
    OUT = 293,                     /* OUT  */
    OPEN = 294,                    /* OPEN  */
    CLOSE = 295,                   /* CLOSE  */
    EQUAL = 296,                   /* EQUAL  */
    NOT_EQUAL = 297,               /* NOT_EQUAL  */
    LEQ = 298,                     /* LEQ  */
    GEQ = 299,                     /* GEQ  */
    GREATER_THAN = 300,            /* GREATER_THAN  */
    NOT = 301,                     /* NOT  */
    AND = 302,                     /* AND  */
    OR = 303,                      /* OR  */
    PLUS_OPERATOR = 304,           /* PLUS_OPERATOR  */
    MINUS_OPERATOR = 305,          /* MINUS_OPERATOR  */
    MULTI_OPERATOR = 306,          /* MULTI_OPERATOR  */
    DIVISION_OPERATOR = 307,       /* DIVISION_OPERATOR  */
    MOD_OPERATOR = 308,            /* MOD_OPERATOR  */
    POWER_OPERATOR = 309,          /* POWER_OPERATOR  */
    CONCAT = 310,                  /* CONCAT  */
    COPY_STRING = 311              /* COPY_STRING  */
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
#define LEN_STRING 260
#define ASSIGN 261
#define COMMENT 262
#define FLOAT_VALUE 263
#define INT_VALUE 264
#define STRING_VALUE 265
#define TRUE_VALUE 266
#define FALSE_VALUE 267
#define COMMA 268
#define SEMICOLON 269
#define BLOCK_BEGIN 270
#define BLOCK_END 271
#define DEF 272
#define ARRAY 273
#define STRUCT 274
#define TUPLE 275
#define WHILE 276
#define FOR 277
#define ITERATOR 278
#define IF 279
#define ELSE 280
#define ELIF 281
#define THEN 282
#define BREAK 283
#define RETURN 284
#define DO 285
#define BRACES_INITIATOR 286
#define BRACES_TERMINATOR 287
#define BRACKETS_INITIATOR 288
#define BRACKETS_TERMINATOR 289
#define PARENTHESES_INITIATOR 290
#define PARENTHESES_TERMINATOR 291
#define IN 292
#define OUT 293
#define OPEN 294
#define CLOSE 295
#define EQUAL 296
#define NOT_EQUAL 297
#define LEQ 298
#define GEQ 299
#define GREATER_THAN 300
#define NOT 301
#define AND 302
#define OR 303
#define PLUS_OPERATOR 304
#define MINUS_OPERATOR 305
#define MULTI_OPERATOR 306
#define DIVISION_OPERATOR 307
#define MOD_OPERATOR 308
#define POWER_OPERATOR 309
#define CONCAT 310
#define COPY_STRING 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

	char * sValue;  /* string value */
	

#line 184 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
