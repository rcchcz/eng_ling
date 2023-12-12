/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#include <math.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;


#line 83 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    int    iValue; 	/* integer value */
    double dValue;  /* double value */
    struct record * rec;

#line 243 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_TYPE = 4,                       /* TYPE  */
  YYSYMBOL_VALUE = 5,                      /* VALUE  */
  YYSYMBOL_LEN_STRING = 6,                 /* LEN_STRING  */
  YYSYMBOL_ASSIGN = 7,                     /* ASSIGN  */
  YYSYMBOL_COMMENT = 8,                    /* COMMENT  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_SEMICOLON = 10,                 /* SEMICOLON  */
  YYSYMBOL_SEPARATOR = 11,                 /* SEPARATOR  */
  YYSYMBOL_DEF = 12,                       /* DEF  */
  YYSYMBOL_ARRAY = 13,                     /* ARRAY  */
  YYSYMBOL_STRUCT = 14,                    /* STRUCT  */
  YYSYMBOL_TUPLE = 15,                     /* TUPLE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_ITERATOR = 18,                  /* ITERATOR  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_ELIF = 21,                      /* ELIF  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_BRACES_INITIATOR = 24,          /* BRACES_INITIATOR  */
  YYSYMBOL_BRACES_TERMINATOR = 25,         /* BRACES_TERMINATOR  */
  YYSYMBOL_BRACKETS_INITIATOR = 26,        /* BRACKETS_INITIATOR  */
  YYSYMBOL_BRACKETS_TERMINATOR = 27,       /* BRACKETS_TERMINATOR  */
  YYSYMBOL_PARENTHESES_INITIATOR = 28,     /* PARENTHESES_INITIATOR  */
  YYSYMBOL_PARENTHESES_TERMINATOR = 29,    /* PARENTHESES_TERMINATOR  */
  YYSYMBOL_IN = 30,                        /* IN  */
  YYSYMBOL_OUT = 31,                       /* OUT  */
  YYSYMBOL_OPEN = 32,                      /* OPEN  */
  YYSYMBOL_CLOSE = 33,                     /* CLOSE  */
  YYSYMBOL_EQUAL = 34,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 35,                 /* NOT_EQUAL  */
  YYSYMBOL_LEQ = 36,                       /* LEQ  */
  YYSYMBOL_GEQ = 37,                       /* GEQ  */
  YYSYMBOL_GREATER_THAN = 38,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 39,                 /* LESS_THAN  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_PLUS_OPERATOR = 43,             /* PLUS_OPERATOR  */
  YYSYMBOL_MINUS_OPERATOR = 44,            /* MINUS_OPERATOR  */
  YYSYMBOL_MULTI_OPERATOR = 45,            /* MULTI_OPERATOR  */
  YYSYMBOL_DIVISION_OPERATOR = 46,         /* DIVISION_OPERATOR  */
  YYSYMBOL_MOD_OPERATOR = 47,              /* MOD_OPERATOR  */
  YYSYMBOL_POWER_OPERATOR = 48,            /* POWER_OPERATOR  */
  YYSYMBOL_CONCAT = 49,                    /* CONCAT  */
  YYSYMBOL_COPY_STRING = 50,               /* COPY_STRING  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_prog = 52,                      /* prog  */
  YYSYMBOL_stmlist = 53,                   /* stmlist  */
  YYSYMBOL_stm = 54,                       /* stm  */
  YYSYMBOL_body = 55,                      /* body  */
  YYSYMBOL_funcdef = 56,                   /* funcdef  */
  YYSYMBOL_structdef = 57,                 /* structdef  */
  YYSYMBOL_paramlist = 58,                 /* paramlist  */
  YYSYMBOL_param = 59,                     /* param  */
  YYSYMBOL_fieldlist = 60,                 /* fieldlist  */
  YYSYMBOL_field = 61,                     /* field  */
  YYSYMBOL_decl = 62,                      /* decl  */
  YYSYMBOL_idlist = 63,                    /* idlist  */
  YYSYMBOL_decl_elem = 64,                 /* decl_elem  */
  YYSYMBOL_assignment = 65,                /* assignment  */
  YYSYMBOL_struct_decl = 66,               /* struct_decl  */
  YYSYMBOL_construct = 67,                 /* construct  */
  YYSYMBOL_tuple_decl = 68,                /* tuple_decl  */
  YYSYMBOL_types = 69,                     /* types  */
  YYSYMBOL_exprlist = 70,                  /* exprlist  */
  YYSYMBOL_array_decl = 71,                /* array_decl  */
  YYSYMBOL_expr = 72,                      /* expr  */
  YYSYMBOL_attrlist = 73,                  /* attrlist  */
  YYSYMBOL_val = 74,                       /* val  */
  YYSYMBOL_if = 75,                        /* if  */
  YYSYMBOL_if_opt = 76,                    /* if_opt  */
  YYSYMBOL_elif_opt = 77,                  /* elif_opt  */
  YYSYMBOL_else_opt = 78,                  /* else_opt  */
  YYSYMBOL_while = 79,                     /* while  */
  YYSYMBOL_for = 80,                       /* for  */
  YYSYMBOL_init = 81,                      /* init  */
  YYSYMBOL_range = 82,                     /* range  */
  YYSYMBOL_return = 83,                    /* return  */
  YYSYMBOL_break = 84,                     /* break  */
  YYSYMBOL_str_copy = 85,                  /* str_copy  */
  YYSYMBOL_in = 86,                        /* in  */
  YYSYMBOL_out = 87,                       /* out  */
  YYSYMBOL_open = 88,                      /* open  */
  YYSYMBOL_close = 89,                     /* close  */
  YYSYMBOL_len = 90                        /* len  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    48,    48,    51,    52,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      72,    75,    79,    82,    83,    86,    87,    90,    91,    94,
      95,    96,    99,   100,   101,   102,   105,   106,   109,   110,
     113,   116,   117,   120,   123,   127,   128,   131,   132,   135,
     137,   140,   141,   142,   145,   148,   151,   154,   157,   160,
     161,   164,   167,   170,   173,   176,   179,   182,   185,   188,
     189,   192,   193,   196,   198,   202,   205,   208,   209,   212,
     213,   216,   219,   222,   225,   226,   229,   232,   235,   238,
     241,   246,   249,   252
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "TYPE", "VALUE",
  "LEN_STRING", "ASSIGN", "COMMENT", "COMMA", "SEMICOLON", "SEPARATOR",
  "DEF", "ARRAY", "STRUCT", "TUPLE", "WHILE", "FOR", "ITERATOR", "IF",
  "ELSE", "ELIF", "BREAK", "RETURN", "BRACES_INITIATOR",
  "BRACES_TERMINATOR", "BRACKETS_INITIATOR", "BRACKETS_TERMINATOR",
  "PARENTHESES_INITIATOR", "PARENTHESES_TERMINATOR", "IN", "OUT", "OPEN",
  "CLOSE", "EQUAL", "NOT_EQUAL", "LEQ", "GEQ", "GREATER_THAN", "LESS_THAN",
  "NOT", "AND", "OR", "PLUS_OPERATOR", "MINUS_OPERATOR", "MULTI_OPERATOR",
  "DIVISION_OPERATOR", "MOD_OPERATOR", "POWER_OPERATOR", "CONCAT",
  "COPY_STRING", "$accept", "prog", "stmlist", "stm", "body", "funcdef",
  "structdef", "paramlist", "param", "fieldlist", "field", "decl",
  "idlist", "decl_elem", "assignment", "struct_decl", "construct",
  "tuple_decl", "types", "exprlist", "array_decl", "expr", "attrlist",
  "val", "if", "if_opt", "elif_opt", "else_opt", "while", "for", "init",
  "range", "return", "break", "str_copy", "in", "out", "open", "close",
  "len", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,     2,    17,   -61,   -13,    15,   -12,    36,    13,   110,
      16,   110,   -61,   110,   110,    34,   110,    50,    51,   110,
      43,   -61,    70,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     229,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   110,    42,   110,    74,   -61,    73,
     -61,    79,    82,    83,    48,    60,    85,     9,    86,    81,
     146,    89,   146,   229,   213,    91,   229,    35,    35,   261,
     -61,    95,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   229,    81,   -61,
     229,    17,    67,   -61,   -61,    98,    15,    68,   112,    15,
      96,    92,    95,   -61,   117,    93,   103,   -61,   100,   -61,
     101,   102,   -61,   277,   277,   277,   277,   277,   277,   261,
     245,   -23,   -23,    84,    84,    84,    84,    87,   -61,   -61,
      94,   108,   130,   -61,   137,   118,   116,   133,    86,   142,
     121,   129,   124,   110,   -61,   131,   -61,   -61,   -61,   150,
     124,    15,    10,   110,   -61,   -61,    15,   -61,   147,   -61,
       3,   -61,   146,   124,   -61,   -61,   -61,   -61,   118,   110,
       7,   229,   -61,   127,   -61,   110,   -61,   -61,   -61,   -61,
     169,   110,   -61,   110,    12,   -61,   229,     5,   110,   -61,
     192,   -61
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    73,     0,    74,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     5,     6,     7,     8,    33,    34,    35,
       9,    70,    51,    10,    11,    12,    14,    13,    15,    16,
      17,    18,    19,    52,     0,     0,     0,    38,    32,    36,
      39,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,    86,     0,     0,    90,     0,     0,    66,
       1,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    71,    72,
      88,     0,     0,    31,    29,     0,    25,     0,    41,     0,
      45,     0,     0,    81,     0,     0,    77,    69,     0,    73,
       0,     0,     4,    60,    61,    62,    63,    65,    64,    67,
      68,    53,    54,    55,    56,    57,    58,    59,    37,    93,
       0,     0,    23,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    79,    89,    91,    92,     0,
       0,    25,     0,     0,    42,    22,    27,    46,     0,    20,
       0,    82,     0,     0,    76,    30,    21,    24,     0,     0,
       0,    47,    28,     0,    85,     0,    83,    78,    80,    50,
       0,     0,    43,     0,     0,    49,    48,     0,     0,    44,
       0,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -60,   -61,   -59,   -61,   -61,    -2,   -61,     0,
      -4,   -61,    66,   -61,     6,   -61,   -10,   -61,    21,   -22,
     -61,    -9,   119,   -37,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    20,    21,    22,   103,    23,    24,   131,   132,   136,
     133,    25,    48,    49,    26,    27,   154,    28,   101,   170,
      29,    30,    31,    32,    33,   144,   145,   164,    34,    35,
     105,   176,    36,    37,    38,    39,    40,    41,    42,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    55,    62,   106,    63,    64,   174,    66,    50,    44,
      69,   112,    98,    45,   181,    51,   181,   168,    52,    53,
      47,   188,    82,    83,    84,    85,    86,    56,    54,   175,
     110,   111,   182,    99,   189,    87,   169,    90,   109,    57,
       3,    58,   140,    70,    61,    88,    72,    73,    74,    75,
      76,    77,    46,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    65,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    67,    68,
      71,    44,    91,   161,    92,    93,    94,    95,    96,    97,
     100,   166,    45,   104,   108,   137,   129,    50,     1,     2,
       3,     4,   130,   177,   178,   138,   134,     5,     6,     7,
       8,     9,    10,    59,    11,     3,     4,    12,    13,   135,
     141,   139,   142,    14,   143,    15,    16,    17,    18,   146,
     147,   148,   149,    86,   162,    19,    -1,   150,    14,   151,
     152,   155,   153,   156,   171,   158,   159,   160,   102,   167,
      19,   163,   137,   165,   173,   183,   172,   128,   179,   157,
     180,   187,     0,     0,    89,     0,   184,     0,     0,     0,
     102,     0,   186,     0,   171,     0,     0,     0,     0,   190,
      72,    73,    74,    75,    76,    77,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   185,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   191,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,     0,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   107,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    72,    73,    74,    75,    76,    77,     0,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    72,
      73,    74,    75,    76,    77,     0,    78,     0,    80,    81,
      82,    83,    84,    85,    86,    72,    73,    74,    75,    76,
      77,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,     0,     0,     0,
      80,    81,    82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       9,     5,    11,    62,    13,    14,     3,    16,     2,     7,
      19,    71,     3,    11,     9,    28,     9,     7,     3,     4,
       3,     9,    45,    46,    47,    48,    49,    39,    13,    26,
      67,    68,    25,    24,    29,    44,    26,    46,     3,     3,
       5,    28,   102,     0,    28,     3,    34,    35,    36,    37,
      38,    39,    50,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    28,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    28,    28,
      10,     7,     9,   142,     5,     3,     3,    39,    28,     4,
       4,   150,    11,     4,     3,    99,    29,    91,     3,     4,
       5,     6,     4,   162,   163,     9,    38,    12,    13,    14,
      15,    16,    17,     3,    19,     5,     6,    22,    23,     7,
       3,    29,    29,    28,    21,    30,    31,    32,    33,    29,
      29,    29,    38,    49,   143,    40,    49,    29,    28,     9,
       3,    25,    24,    10,   153,     3,    25,    18,    24,   151,
      40,    20,   156,     3,     7,    28,   156,    91,   168,   138,
     169,   183,    -1,    -1,    45,    -1,   175,    -1,    -1,    -1,
      24,    -1,   181,    -1,   183,    -1,    -1,    -1,    -1,   188,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    34,    35,    36,    37,    38,    39,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    12,    13,    14,    15,    16,
      17,    19,    22,    23,    28,    30,    31,    32,    33,    40,
      52,    53,    54,    56,    57,    62,    65,    66,    68,    71,
      72,    73,    74,    75,    79,    80,    83,    84,    85,    86,
      87,    88,    89,    90,     7,    11,    50,     3,    63,    64,
      65,    28,     3,     4,    13,    61,    39,     3,    28,     3,
      72,    28,    72,    72,    72,    28,    72,    28,    28,    72,
       0,    10,    34,    35,    36,    37,    38,    39,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    72,     3,    73,
      72,     9,     5,     3,     3,    39,    28,     4,     3,    24,
       4,    69,    24,    55,     4,    81,    55,    29,     3,     3,
      74,    74,    53,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    63,    29,
       4,    58,    59,    61,    38,     7,    60,    61,     9,    29,
      53,     3,    29,    21,    76,    77,    29,    29,    29,    38,
      29,     9,     3,    24,    67,    25,    10,    69,     3,    25,
      18,    55,    72,    20,    78,     3,    55,    58,     7,    26,
      70,    72,    60,     7,     3,    26,    82,    55,    55,    67,
      72,     9,    25,    28,    72,    27,    72,    70,     9,    29,
      72,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    56,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    67,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    75,    76,    77,    77,    78,
      78,    79,    80,    81,    82,    82,    83,    84,    85,    86,
      87,    88,    89,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     6,     5,     1,     3,     0,     1,     2,     3,     2,
       5,     2,     2,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     5,     3,     9,     1,     3,     1,     3,     8,
       7,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       1,     3,     3,     1,     1,     4,     2,     0,     3,     0,
       2,     3,     5,     4,     5,     1,     2,     1,     3,     4,
       2,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: stmlist  */
#line 48 "parser.y"
                                                                                {}
#line 1471 "y.tab.c"
    break;

  case 3: /* stmlist: stm SEMICOLON  */
#line 51 "parser.y"
                                                                                {printf("stm1: %s \n", (yyvsp[-1].sValue));}
#line 1477 "y.tab.c"
    break;

  case 4: /* stmlist: stm SEMICOLON stmlist  */
#line 52 "parser.y"
                                                                                                      {printf("stm2: %s \n", (yyvsp[-2].sValue));}
#line 1483 "y.tab.c"
    break;

  case 5: /* stm: funcdef  */
#line 55 "parser.y"
                                                                                {}
#line 1489 "y.tab.c"
    break;

  case 6: /* stm: structdef  */
#line 56 "parser.y"
                                                                                {}
#line 1495 "y.tab.c"
    break;

  case 7: /* stm: decl  */
#line 57 "parser.y"
                                                                                {}
#line 1501 "y.tab.c"
    break;

  case 8: /* stm: assignment  */
#line 58 "parser.y"
                                                                                {}
#line 1507 "y.tab.c"
    break;

  case 9: /* stm: expr  */
#line 59 "parser.y"
                                                                                {}
#line 1513 "y.tab.c"
    break;

  case 10: /* stm: if  */
#line 60 "parser.y"
                                                                                {printf("stm if \n");}
#line 1519 "y.tab.c"
    break;

  case 11: /* stm: while  */
#line 61 "parser.y"
                                                                                {}
#line 1525 "y.tab.c"
    break;

  case 12: /* stm: for  */
#line 62 "parser.y"
                                                                                {}
#line 1531 "y.tab.c"
    break;

  case 13: /* stm: break  */
#line 63 "parser.y"
                                                                                {}
#line 1537 "y.tab.c"
    break;

  case 14: /* stm: return  */
#line 64 "parser.y"
                                                                                {printf("return \n");}
#line 1543 "y.tab.c"
    break;

  case 15: /* stm: str_copy  */
#line 65 "parser.y"
                                                                                {}
#line 1549 "y.tab.c"
    break;

  case 16: /* stm: in  */
#line 66 "parser.y"
                                                                                {}
#line 1555 "y.tab.c"
    break;

  case 17: /* stm: out  */
#line 67 "parser.y"
                                                                                {}
#line 1561 "y.tab.c"
    break;

  case 18: /* stm: open  */
#line 68 "parser.y"
                                                                                {}
#line 1567 "y.tab.c"
    break;

  case 19: /* stm: close  */
#line 69 "parser.y"
                                                                                {}
#line 1573 "y.tab.c"
    break;

  case 20: /* body: BRACES_INITIATOR stmlist BRACES_TERMINATOR  */
#line 72 "parser.y"
                                                                                {printf("body \n");}
#line 1579 "y.tab.c"
    break;

  case 21: /* funcdef: DEF field PARENTHESES_INITIATOR paramlist PARENTHESES_TERMINATOR body  */
#line 76 "parser.y"
                                                                                {printf("funcdef \n");}
#line 1585 "y.tab.c"
    break;

  case 22: /* structdef: STRUCT ID BRACES_INITIATOR fieldlist BRACES_TERMINATOR  */
#line 79 "parser.y"
                                                                                {}
#line 1591 "y.tab.c"
    break;

  case 23: /* paramlist: param  */
#line 82 "parser.y"
                                                                                {}
#line 1597 "y.tab.c"
    break;

  case 24: /* paramlist: param COMMA paramlist  */
#line 83 "parser.y"
                                                                                {}
#line 1603 "y.tab.c"
    break;

  case 26: /* param: field  */
#line 87 "parser.y"
                                                                                {}
#line 1609 "y.tab.c"
    break;

  case 27: /* fieldlist: field SEMICOLON  */
#line 90 "parser.y"
                                                                                {}
#line 1615 "y.tab.c"
    break;

  case 28: /* fieldlist: field SEMICOLON fieldlist  */
#line 91 "parser.y"
                                                                                {}
#line 1621 "y.tab.c"
    break;

  case 29: /* field: TYPE ID  */
#line 94 "parser.y"
                                                                                {printf("field: \n\t type: %s \n\t id: %s \n", (yyvsp[-1].sValue), (yyvsp[0].sValue));}
#line 1627 "y.tab.c"
    break;

  case 30: /* field: ARRAY LESS_THAN TYPE GREATER_THAN ID  */
#line 95 "parser.y"
                                                                                {printf("arr: \n\t type: %s \n\t id: %s \n", (yyvsp[-2].sValue), (yyvsp[0].sValue));}
#line 1633 "y.tab.c"
    break;

  case 31: /* field: ID ID  */
#line 96 "parser.y"
                                                                                {printf("struct (possibility of struct, does compiler know this id?): \n\t type: %s \n\t id: %s \n", (yyvsp[-1].sValue), (yyvsp[0].sValue));}
#line 1639 "y.tab.c"
    break;

  case 32: /* decl: TYPE idlist  */
#line 99 "parser.y"
                                                                                {printf("decl type: %s \n", (yyvsp[-1].sValue));}
#line 1645 "y.tab.c"
    break;

  case 33: /* decl: struct_decl  */
#line 100 "parser.y"
                                                                                {}
#line 1651 "y.tab.c"
    break;

  case 34: /* decl: tuple_decl  */
#line 101 "parser.y"
                                                                                {}
#line 1657 "y.tab.c"
    break;

  case 35: /* decl: array_decl  */
#line 102 "parser.y"
                                                                                {}
#line 1663 "y.tab.c"
    break;

  case 36: /* idlist: decl_elem  */
#line 105 "parser.y"
                                                                                {}
#line 1669 "y.tab.c"
    break;

  case 37: /* idlist: decl_elem COMMA idlist  */
#line 106 "parser.y"
                                                                                {}
#line 1675 "y.tab.c"
    break;

  case 38: /* decl_elem: ID  */
#line 109 "parser.y"
                                                                                {printf("declelem id: %s \n", (yyvsp[0].sValue));}
#line 1681 "y.tab.c"
    break;

  case 39: /* decl_elem: assignment  */
#line 110 "parser.y"
                                                                                {}
#line 1687 "y.tab.c"
    break;

  case 40: /* assignment: ID ASSIGN expr  */
#line 113 "parser.y"
                                                                                {printf("assignment id: %s \n", (yyvsp[-2].sValue));}
#line 1693 "y.tab.c"
    break;

  case 41: /* struct_decl: STRUCT ID ID  */
#line 116 "parser.y"
                                                                                {}
#line 1699 "y.tab.c"
    break;

  case 42: /* struct_decl: STRUCT ID ID ASSIGN construct  */
#line 117 "parser.y"
                                                                                {}
#line 1705 "y.tab.c"
    break;

  case 43: /* construct: BRACES_INITIATOR exprlist BRACES_TERMINATOR  */
#line 120 "parser.y"
                                                                                {}
#line 1711 "y.tab.c"
    break;

  case 44: /* tuple_decl: TUPLE PARENTHESES_INITIATOR types PARENTHESES_TERMINATOR ID ASSIGN PARENTHESES_INITIATOR exprlist PARENTHESES_TERMINATOR  */
#line 124 "parser.y"
                                                                                {}
#line 1717 "y.tab.c"
    break;

  case 45: /* types: TYPE  */
#line 127 "parser.y"
                                                                                {}
#line 1723 "y.tab.c"
    break;

  case 46: /* types: TYPE COMMA types  */
#line 128 "parser.y"
                                                                                {}
#line 1729 "y.tab.c"
    break;

  case 47: /* exprlist: expr  */
#line 131 "parser.y"
                                                                                {}
#line 1735 "y.tab.c"
    break;

  case 48: /* exprlist: exprlist COMMA expr  */
#line 132 "parser.y"
                                                                                {}
#line 1741 "y.tab.c"
    break;

  case 49: /* array_decl: ARRAY LESS_THAN TYPE GREATER_THAN ID BRACKETS_INITIATOR expr BRACKETS_TERMINATOR  */
#line 136 "parser.y"
                                                                               {}
#line 1747 "y.tab.c"
    break;

  case 50: /* array_decl: ARRAY LESS_THAN TYPE GREATER_THAN ID ASSIGN construct  */
#line 137 "parser.y"
                                                                                {}
#line 1753 "y.tab.c"
    break;

  case 52: /* expr: len  */
#line 141 "parser.y"
                                                                                {}
#line 1759 "y.tab.c"
    break;

  case 53: /* expr: expr PLUS_OPERATOR expr  */
#line 142 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "+" , (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1767 "y.tab.c"
    break;

  case 54: /* expr: expr MINUS_OPERATOR expr  */
#line 145 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "-" , (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1775 "y.tab.c"
    break;

  case 55: /* expr: expr MULTI_OPERATOR expr  */
#line 148 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "*" , (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1783 "y.tab.c"
    break;

  case 56: /* expr: expr DIVISION_OPERATOR expr  */
#line 151 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "/" , (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1791 "y.tab.c"
    break;

  case 57: /* expr: expr MOD_OPERATOR expr  */
#line 154 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "%" , (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1799 "y.tab.c"
    break;

  case 58: /* expr: expr POWER_OPERATOR expr  */
#line 157 "parser.y"
                                                                                { char * s = cat("pow(", (yyvsp[-2].rec)->code, ",", (yyvsp[0].rec)->code, ");");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1807 "y.tab.c"
    break;

  case 59: /* expr: expr CONCAT expr  */
#line 160 "parser.y"
                                                                                {}
#line 1813 "y.tab.c"
    break;

  case 60: /* expr: expr EQUAL expr  */
#line 161 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "==", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1821 "y.tab.c"
    break;

  case 61: /* expr: expr NOT_EQUAL expr  */
#line 164 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "!=", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1829 "y.tab.c"
    break;

  case 62: /* expr: expr LEQ expr  */
#line 167 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "<=", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1837 "y.tab.c"
    break;

  case 63: /* expr: expr GEQ expr  */
#line 170 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, ">=", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1845 "y.tab.c"
    break;

  case 64: /* expr: expr LESS_THAN expr  */
#line 173 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "<", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1853 "y.tab.c"
    break;

  case 65: /* expr: expr GREATER_THAN expr  */
#line 176 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, ">", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1861 "y.tab.c"
    break;

  case 66: /* expr: NOT expr  */
#line 179 "parser.y"
                                                                                { char * s = cat("!", (yyvsp[0].rec)->code, ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1869 "y.tab.c"
    break;

  case 67: /* expr: expr AND expr  */
#line 182 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "&&", (yyvsp[0].rec)->code ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1877 "y.tab.c"
    break;

  case 68: /* expr: expr OR expr  */
#line 185 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "||", (yyvsp[0].rec)->code ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 1885 "y.tab.c"
    break;

  case 69: /* expr: PARENTHESES_INITIATOR expr PARENTHESES_TERMINATOR  */
#line 188 "parser.y"
                                                                                {}
#line 1891 "y.tab.c"
    break;

  case 70: /* expr: attrlist  */
#line 189 "parser.y"
                                                                                {}
#line 1897 "y.tab.c"
    break;

  case 71: /* attrlist: ID SEPARATOR ID  */
#line 192 "parser.y"
                                                                                {}
#line 1903 "y.tab.c"
    break;

  case 72: /* attrlist: ID SEPARATOR attrlist  */
#line 193 "parser.y"
                                                                                {}
#line 1909 "y.tab.c"
    break;

  case 73: /* val: ID  */
#line 196 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].sValue), "");
                                                                                  free((yyvsp[0].sValue)); }
#line 1916 "y.tab.c"
    break;

  case 74: /* val: VALUE  */
#line 198 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].sValue), "");
                                                                                  free((yyvsp[0].sValue)); }
#line 1923 "y.tab.c"
    break;

  case 75: /* if: IF expr body if_opt  */
#line 202 "parser.y"
                                                                                {printf("if \n");}
#line 1929 "y.tab.c"
    break;

  case 76: /* if_opt: elif_opt else_opt  */
#line 205 "parser.y"
                                                                                {printf("if_opt \n");}
#line 1935 "y.tab.c"
    break;

  case 77: /* elif_opt: %empty  */
#line 208 "parser.y"
                                                                                {printf("elif_opt vazio \n");}
#line 1941 "y.tab.c"
    break;

  case 78: /* elif_opt: ELIF expr body  */
#line 209 "parser.y"
                                                                                {printf("elif_opt \n");}
#line 1947 "y.tab.c"
    break;

  case 79: /* else_opt: %empty  */
#line 212 "parser.y"
                                                                                {printf("else_opt vazio\n");}
#line 1953 "y.tab.c"
    break;

  case 80: /* else_opt: ELSE body  */
#line 213 "parser.y"
                                                                                {printf("else_opt \n");}
#line 1959 "y.tab.c"
    break;

  case 81: /* while: WHILE expr body  */
#line 216 "parser.y"
                                                                                {printf("while \n");}
#line 1965 "y.tab.c"
    break;

  case 82: /* for: FOR PARENTHESES_INITIATOR init PARENTHESES_TERMINATOR body  */
#line 219 "parser.y"
                                                                                {}
#line 1971 "y.tab.c"
    break;

  case 83: /* init: TYPE ID ITERATOR range  */
#line 222 "parser.y"
                                                                                {}
#line 1977 "y.tab.c"
    break;

  case 84: /* range: BRACKETS_INITIATOR expr COMMA expr BRACKETS_TERMINATOR  */
#line 225 "parser.y"
                                                                                {}
#line 1983 "y.tab.c"
    break;

  case 85: /* range: ID  */
#line 226 "parser.y"
                                                                                {}
#line 1989 "y.tab.c"
    break;

  case 86: /* return: RETURN expr  */
#line 229 "parser.y"
                                                                                {}
#line 1995 "y.tab.c"
    break;

  case 87: /* break: BREAK  */
#line 232 "parser.y"
                                                                                {}
#line 2001 "y.tab.c"
    break;

  case 88: /* str_copy: ID COPY_STRING expr  */
#line 235 "parser.y"
                                                                                {}
#line 2007 "y.tab.c"
    break;

  case 89: /* in: IN PARENTHESES_INITIATOR ID PARENTHESES_TERMINATOR  */
#line 238 "parser.y"
                                                                                {}
#line 2013 "y.tab.c"
    break;

  case 90: /* out: OUT expr  */
#line 241 "parser.y"
                                                                                { char * s = cat("printf", "(", (yyvsp[0].rec)->code, ")", ";");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free(s); }
#line 2021 "y.tab.c"
    break;

  case 91: /* open: OPEN PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR  */
#line 246 "parser.y"
                                                                                {}
#line 2027 "y.tab.c"
    break;

  case 92: /* close: CLOSE PARENTHESES_INITIATOR val PARENTHESES_TERMINATOR  */
#line 249 "parser.y"
                                                                                {}
#line 2033 "y.tab.c"
    break;

  case 93: /* len: LEN_STRING PARENTHESES_INITIATOR VALUE PARENTHESES_TERMINATOR  */
#line 252 "parser.y"
                                                                               { }
#line 2039 "y.tab.c"
    break;


#line 2043 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 255 "parser.y"


int main (void) {
  return yyparse ( );
}

int yyerror (char *msg) {
  fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
  return 0;
}
