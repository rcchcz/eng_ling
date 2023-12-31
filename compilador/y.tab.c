/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "./record/record.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;
extern FILE * yyin, * yyout;

char * cat(char *, char *, char *, char *, char *);


#line 87 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

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
#line 18 "parser.y"

    char * sValue;  /* string value */
    int    iValue; 	/* integer value */
    double dValue;  /* double value */
    struct record * rec;

#line 244 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

#define YYUNDEFTOK  2
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    56,    60,    67,    69,    70,    72,    74,
      76,    78,    80,    81,    83,    85,    87,    88,    90,    91,
      94,   100,   109,   112,   114,   121,   122,   126,   130,   137,
     142,   147,   154,   159,   160,   161,   165,   167,   174,   176,
     180,   187,   188,   191,   197,   201,   203,   210,   212,   219,
     226,   234,   236,   237,   242,   247,   252,   257,   262,   267,
     272,   277,   282,   287,   292,   297,   302,   306,   311,   316,
     320,   324,   329,   336,   338,   342,   350,   353,   354,   357,
     358,   360,   367,   370,   373,   374,   377,   383,   386,   393,
     396,   402,   405,   408
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "TYPE", "VALUE", "LEN_STRING",
  "ASSIGN", "COMMA", "SEMICOLON", "SEPARATOR", "DEF", "ARRAY", "STRUCT",
  "TUPLE", "WHILE", "FOR", "ITERATOR", "IF", "ELSE", "ELIF", "BREAK",
  "RETURN", "BRACES_INITIATOR", "BRACES_TERMINATOR", "BRACKETS_INITIATOR",
  "BRACKETS_TERMINATOR", "PARENTHESES_INITIATOR", "PARENTHESES_TERMINATOR",
  "IN", "OUT", "OPEN", "CLOSE", "EQUAL", "NOT_EQUAL", "LEQ", "GEQ",
  "GREATER_THAN", "LESS_THAN", "NOT", "AND", "OR", "PLUS_OPERATOR",
  "MINUS_OPERATOR", "MULTI_OPERATOR", "DIVISION_OPERATOR", "MOD_OPERATOR",
  "POWER_OPERATOR", "CONCAT", "COPY_STRING", "$accept", "prog", "stmlist",
  "stm", "body", "funcdef", "structdef", "paramlist", "param", "fieldlist",
  "field", "decl", "idlist", "decl_elem", "assignment", "struct_decl",
  "construct", "tuple_decl", "types", "exprlist", "array_decl", "expr",
  "attrlist", "val", "if", "if_opt", "elif_opt", "else_opt", "while",
  "for", "init", "range", "return", "break", "str_copy", "in", "out",
  "open", "close", "len", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     124,    -1,    36,   -60,    16,    50,    13,    49,    28,    11,
      30,    11,   -60,    11,    11,    51,    11,    52,    53,    11,
      58,   -60,    80,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     229,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,    11,    79,    11,    83,   -60,    84,
     -60,    11,    90,    91,    60,    69,    95,    21,    96,    92,
     148,    97,   148,   229,   192,   109,   229,    44,    44,   261,
     -60,   124,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,   229,    92,   -60,
     229,    36,   213,   -60,   -60,   118,    50,    86,   117,    50,
     123,    98,   124,   -60,   122,   104,   113,   -60,   115,   -60,
     119,   120,   -60,   277,   277,   277,   277,   277,   277,   261,
     245,    40,    40,    93,    93,    93,    93,   101,   -60,   -60,
     121,   129,   142,   -60,   156,   138,   140,   153,    96,   163,
     143,   151,   146,    11,   -60,   154,   -60,   -60,   -60,   167,
     146,    50,    34,    11,   -60,   -60,    50,   -60,   168,   -60,
      31,   -60,   148,   146,   -60,   -60,   -60,   -60,   138,    11,
      37,   229,   -60,   149,    11,   -60,   -60,   113,   -60,   -60,
     -15,    11,   -60,    11,    73,   -60,   -60,   229,    32,    11,
     -60,   171,   -60
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
       0,    47,    28,     0,     0,    85,    83,    77,    80,    50,
       0,     0,    43,     0,     0,    78,    49,    48,     0,     0,
      44,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -56,   -60,   -59,   -60,   -60,    26,   -60,    22,
      -4,   -60,    88,   -60,     6,   -60,    19,   -60,    61,    15,
     -60,    -9,   155,   -55,   -60,   -60,    24,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,   103,    23,    24,   131,   132,   136,
     133,    25,    48,    49,    26,    27,   154,    28,   101,   170,
      29,    30,    31,    32,    33,   144,   145,   164,    34,    35,
     105,   176,    36,    37,    38,    39,    40,    41,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    55,    62,   106,    63,    64,    44,    66,    50,    45,
      69,   186,   110,   111,    59,   112,     3,     4,    72,    73,
      74,    75,    76,    77,    98,    78,    79,    80,    81,    82,
      83,    84,    85,    86,   109,    87,     3,    90,    14,    47,
     181,   168,    92,    51,    99,   181,   140,   109,    46,     3,
      19,    56,    57,    52,    53,    58,   174,    61,    70,   169,
     190,   182,    54,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,    65,    67,
      68,   189,    88,   161,    82,    83,    84,    85,    86,    71,
      44,   166,    91,    93,    94,   137,    96,    50,    95,    97,
     100,   104,    45,   177,   178,   175,    72,    73,    74,    75,
      76,    77,   108,    78,    79,    80,    81,    82,    83,    84,
      85,    86,   130,   134,   135,   141,   139,     1,     2,     3,
       4,   138,   142,   143,   162,     5,     6,     7,     8,     9,
      10,    86,    11,   146,   171,    12,    13,   147,   148,    -1,
     151,    14,   137,    15,    16,    17,    18,   150,   149,   152,
     180,   153,   156,    19,   155,   184,   158,   159,   160,   102,
     165,   102,   187,   163,   171,   173,   183,   167,   172,   128,
     191,    72,    73,    74,    75,    76,    77,   179,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   192,   188,   157,
      89,   185,     0,     0,    72,    73,    74,    75,    76,    77,
       0,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     107,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,   129,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,     0,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    72,    73,    74,    75,    76,    77,     0,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    72,    73,
      74,    75,    76,    77,     0,    78,     0,    80,    81,    82,
      83,    84,    85,    86,    72,    73,    74,    75,    76,    77,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       9,     5,    11,    62,    13,    14,     7,    16,     2,    10,
      19,    26,    67,    68,     3,    71,     5,     6,    33,    34,
      35,    36,    37,    38,     3,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     3,    44,     5,    46,    27,     3,
       8,     7,    51,    27,    23,     8,   102,     3,    49,     5,
      39,    38,     3,     3,     4,    27,    25,    27,     0,    25,
      28,    24,    12,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    27,    27,
      27,     8,     3,   142,    44,    45,    46,    47,    48,     9,
       7,   150,     8,     3,     3,    99,    27,    91,    38,     4,
       4,     4,    10,   162,   163,   160,    33,    34,    35,    36,
      37,    38,     3,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    37,     7,     3,    28,     3,     4,     5,
       6,     8,    28,    20,   143,    11,    12,    13,    14,    15,
      16,    48,    18,    28,   153,    21,    22,    28,    28,    48,
       8,    27,   156,    29,    30,    31,    32,    28,    37,     3,
     169,    23,     9,    39,    24,   174,     3,    24,    17,    23,
       3,    23,   181,    19,   183,     7,    27,   151,   156,    91,
     189,    33,    34,    35,    36,    37,    38,   168,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    26,   183,   138,
      45,   177,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    33,    34,
      35,    36,    37,    38,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    11,    12,    13,    14,    15,
      16,    18,    21,    22,    27,    29,    30,    31,    32,    39,
      51,    52,    53,    55,    56,    61,    64,    65,    67,    70,
      71,    72,    73,    74,    78,    79,    82,    83,    84,    85,
      86,    87,    88,    89,     7,    10,    49,     3,    62,    63,
      64,    27,     3,     4,    12,    60,    38,     3,    27,     3,
      71,    27,    71,    71,    71,    27,    71,    27,    27,    71,
       0,     9,    33,    34,    35,    36,    37,    38,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    71,     3,    72,
      71,     8,    71,     3,     3,    38,    27,     4,     3,    23,
       4,    68,    23,    54,     4,    80,    54,    28,     3,     3,
      73,    73,    52,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    62,    28,
       4,    57,    58,    60,    37,     7,    59,    60,     8,    28,
      52,     3,    28,    20,    75,    76,    28,    28,    28,    37,
      28,     8,     3,    23,    66,    24,     9,    68,     3,    24,
      17,    54,    71,    19,    77,     3,    54,    57,     7,    25,
      69,    71,    59,     7,    25,    73,    81,    54,    54,    66,
      71,     8,    24,    27,    71,    76,    26,    71,    69,     8,
      28,    71,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    55,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    65,    65,    66,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    75,    76,    76,    77,
      77,    78,    79,    80,    81,    81,    82,    83,    84,    85,
      86,    87,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     6,     5,     1,     3,     0,     1,     2,     3,     2,
       5,     2,     2,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     5,     3,     9,     1,     3,     1,     3,     8,
       7,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       1,     3,     3,     1,     1,     4,     2,     0,     4,     0,
       2,     3,     5,     4,     5,     1,     2,     1,     3,     4,
       2,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 53 "parser.y"
                                                                                { fprintf(yyout, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\nint main () {\n%s\n return 0;\n}", (yyvsp[0].rec)->code); }
#line 1582 "y.tab.c"
    break;

  case 3:
#line 56 "parser.y"
                                                                                { char * s = cat((yyvsp[-1].rec)->code, ";\n", "", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  free(s); }
#line 1591 "y.tab.c"
    break;

  case 4:
#line 60 "parser.y"
                                                                                                      { char * s = cat((yyvsp[-2].rec)->code, ";\n", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1601 "y.tab.c"
    break;

  case 5:
#line 67 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1608 "y.tab.c"
    break;

  case 6:
#line 69 "parser.y"
                                                                                {}
#line 1614 "y.tab.c"
    break;

  case 7:
#line 70 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1621 "y.tab.c"
    break;

  case 8:
#line 72 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1628 "y.tab.c"
    break;

  case 9:
#line 74 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1635 "y.tab.c"
    break;

  case 10:
#line 76 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1642 "y.tab.c"
    break;

  case 11:
#line 78 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1649 "y.tab.c"
    break;

  case 12:
#line 80 "parser.y"
                                                                                {}
#line 1655 "y.tab.c"
    break;

  case 13:
#line 81 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1662 "y.tab.c"
    break;

  case 14:
#line 83 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1669 "y.tab.c"
    break;

  case 15:
#line 85 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1676 "y.tab.c"
    break;

  case 16:
#line 87 "parser.y"
                                                                                {}
#line 1682 "y.tab.c"
    break;

  case 17:
#line 88 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1689 "y.tab.c"
    break;

  case 18:
#line 90 "parser.y"
                                                                                {}
#line 1695 "y.tab.c"
    break;

  case 19:
#line 91 "parser.y"
                                                                                {}
#line 1701 "y.tab.c"
    break;

  case 20:
#line 94 "parser.y"
                                                                                { char * s = cat("{\n", (yyvsp[-1].rec)->code, "\n}", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  free(s); }
#line 1710 "y.tab.c"
    break;

  case 21:
#line 101 "parser.y"
                                                                                { char * s = cat((yyvsp[-4].rec)->code, "(", (yyvsp[-2].rec)->code, ")", (yyvsp[0].rec)->code);
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-4].rec));
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1721 "y.tab.c"
    break;

  case 22:
#line 109 "parser.y"
                                                                                {}
#line 1727 "y.tab.c"
    break;

  case 23:
#line 112 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code,""); 
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1734 "y.tab.c"
    break;

  case 24:
#line 114 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, ", ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1744 "y.tab.c"
    break;

  case 25:
#line 121 "parser.y"
                                                                                { (yyval.rec) = createRecord("",""); }
#line 1750 "y.tab.c"
    break;

  case 26:
#line 122 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code,""); 
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1757 "y.tab.c"
    break;

  case 27:
#line 126 "parser.y"
                                                                                { char * s = cat((yyvsp[-1].rec)->code, ";", "", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  free(s); }
#line 1766 "y.tab.c"
    break;

  case 28:
#line 130 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, "; ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1776 "y.tab.c"
    break;

  case 29:
#line 137 "parser.y"
                                                                                { char * s = cat((yyvsp[-1].sValue), " ", (yyvsp[0].sValue), "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-1].sValue));
                                                                                  free((yyvsp[0].sValue));
                                                                                  free(s); }
#line 1786 "y.tab.c"
    break;

  case 30:
#line 142 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].sValue), "", (yyvsp[0].sValue), "[]", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-2].sValue));
                                                                                  free((yyvsp[0].sValue));
                                                                                  free(s); }
#line 1796 "y.tab.c"
    break;

  case 31:
#line 147 "parser.y"
                                                                                { char * s = cat((yyvsp[-1].sValue), " ", (yyvsp[0].sValue), "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-1].sValue));
                                                                                  free((yyvsp[0].sValue));
                                                                                  free(s); }
#line 1806 "y.tab.c"
    break;

  case 32:
#line 154 "parser.y"
                                                                                { char * s = cat((yyvsp[-1].sValue), " ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-1].sValue));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1816 "y.tab.c"
    break;

  case 33:
#line 159 "parser.y"
                                                                                {}
#line 1822 "y.tab.c"
    break;

  case 34:
#line 160 "parser.y"
                                                                                {}
#line 1828 "y.tab.c"
    break;

  case 35:
#line 161 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1835 "y.tab.c"
    break;

  case 36:
#line 165 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1842 "y.tab.c"
    break;

  case 37:
#line 167 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, ", ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1852 "y.tab.c"
    break;

  case 38:
#line 174 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].sValue), "");
                                                                                  free((yyvsp[0].sValue)); }
#line 1859 "y.tab.c"
    break;

  case 39:
#line 176 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  free((yyvsp[0].rec)); }
#line 1866 "y.tab.c"
    break;

  case 40:
#line 180 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].sValue), " = ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-2].sValue));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1876 "y.tab.c"
    break;

  case 41:
#line 187 "parser.y"
                                                                                {}
#line 1882 "y.tab.c"
    break;

  case 42:
#line 188 "parser.y"
                                                                                {}
#line 1888 "y.tab.c"
    break;

  case 43:
#line 191 "parser.y"
                                                                                { char * s = cat("{", (yyvsp[-1].rec)->code, "}", "", ""); 
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  free(s); }
#line 1897 "y.tab.c"
    break;

  case 44:
#line 198 "parser.y"
                                                                                {}
#line 1903 "y.tab.c"
    break;

  case 45:
#line 201 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].sValue), "");
                                                                                  free((yyvsp[0].sValue)); }
#line 1910 "y.tab.c"
    break;

  case 46:
#line 203 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].sValue), ", ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-2].sValue));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s);}
#line 1920 "y.tab.c"
    break;

  case 47:
#line 210 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  free((yyvsp[0].rec)); }
#line 1927 "y.tab.c"
    break;

  case 48:
#line 212 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, ", ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1937 "y.tab.c"
    break;

  case 49:
#line 220 "parser.y"
                                                                                { char * s = cat((yyvsp[-5].sValue), (yyvsp[-3].sValue), "[", (yyvsp[-1].rec)->code, "]");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-5].sValue));
                                                                                  free((yyvsp[-3].sValue));
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  free(s); }
#line 1948 "y.tab.c"
    break;

  case 50:
#line 226 "parser.y"
                                                                                { char * s = cat((yyvsp[-4].sValue), (yyvsp[-2].sValue), "[] = ", (yyvsp[0].rec)->code, "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-4].sValue));
                                                                                  free((yyvsp[-2].sValue));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1959 "y.tab.c"
    break;

  case 51:
#line 234 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 1966 "y.tab.c"
    break;

  case 52:
#line 236 "parser.y"
                                                                                {}
#line 1972 "y.tab.c"
    break;

  case 53:
#line 237 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " + " , (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1982 "y.tab.c"
    break;

  case 54:
#line 242 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " - " , (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 1992 "y.tab.c"
    break;

  case 55:
#line 247 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " * " , (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2002 "y.tab.c"
    break;

  case 56:
#line 252 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " / " , (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2012 "y.tab.c"
    break;

  case 57:
#line 257 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " % " , (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2022 "y.tab.c"
    break;

  case 58:
#line 262 "parser.y"
                                                                                { char * s = cat("pow(", (yyvsp[-2].rec)->code, " , ", (yyvsp[0].rec)->code, ")");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2032 "y.tab.c"
    break;

  case 59:
#line 267 "parser.y"
                                                                                { char * s = cat("strcat(", (yyvsp[-2].rec)->code, ", ", (yyvsp[0].rec)->code, ")");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2042 "y.tab.c"
    break;

  case 60:
#line 272 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " == ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2052 "y.tab.c"
    break;

  case 61:
#line 277 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " != ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2062 "y.tab.c"
    break;

  case 62:
#line 282 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " <= ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2072 "y.tab.c"
    break;

  case 63:
#line 287 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " >= ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2082 "y.tab.c"
    break;

  case 64:
#line 292 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " < ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2092 "y.tab.c"
    break;

  case 65:
#line 297 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " > ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2102 "y.tab.c"
    break;

  case 66:
#line 302 "parser.y"
                                                                                { char * s = cat("!", (yyvsp[0].rec)->code, "", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2111 "y.tab.c"
    break;

  case 67:
#line 306 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " && ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2121 "y.tab.c"
    break;

  case 68:
#line 311 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].rec)->code, " || ", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2131 "y.tab.c"
    break;

  case 69:
#line 316 "parser.y"
                                                                                { char * s = cat("(", (yyvsp[-1].rec)->code, ")", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  free(s); }
#line 2140 "y.tab.c"
    break;

  case 70:
#line 320 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].rec)->code, "");
                                                                                  freeRecord((yyvsp[0].rec)); }
#line 2147 "y.tab.c"
    break;

  case 71:
#line 324 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].sValue), ".", (yyvsp[0].sValue), "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-2].sValue));
                                                                                  free((yyvsp[0].sValue));
                                                                                  free(s); }
#line 2157 "y.tab.c"
    break;

  case 72:
#line 329 "parser.y"
                                                                                { char * s = cat((yyvsp[-2].sValue), ".", (yyvsp[0].rec)->code, "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-2].sValue));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2167 "y.tab.c"
    break;

  case 73:
#line 336 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].sValue), "");
                                                                                  free((yyvsp[0].sValue)); }
#line 2174 "y.tab.c"
    break;

  case 74:
#line 338 "parser.y"
                                                                                { (yyval.rec) = createRecord((yyvsp[0].sValue), "");
                                                                                  free((yyvsp[0].sValue)); }
#line 2181 "y.tab.c"
    break;

  case 75:
#line 342 "parser.y"
                                                                                { char *s = cat("if(", (yyvsp[-2].rec)->code, ")", (yyvsp[-1].rec)->code, (yyvsp[0].rec)->code);
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-2].rec));
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2192 "y.tab.c"
    break;

  case 76:
#line 350 "parser.y"
                                                                                { (yyval.rec) = createRecord("",""); }
#line 2198 "y.tab.c"
    break;

  case 77:
#line 353 "parser.y"
                                                                                { (yyval.rec) = createRecord("",""); }
#line 2204 "y.tab.c"
    break;

  case 78:
#line 354 "parser.y"
                                                                                { (yyval.rec) = createRecord("",""); }
#line 2210 "y.tab.c"
    break;

  case 79:
#line 357 "parser.y"
                                                                                { (yyval.rec) = createRecord("",""); }
#line 2216 "y.tab.c"
    break;

  case 80:
#line 358 "parser.y"
                                                                                { (yyval.rec) = createRecord("",""); }
#line 2222 "y.tab.c"
    break;

  case 81:
#line 360 "parser.y"
                                                                                { char * s = cat("loop: if(", (yyvsp[-1].rec)->code, ")", (yyvsp[0].rec)->code, "goto loop");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[-1].rec));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2232 "y.tab.c"
    break;

  case 82:
#line 367 "parser.y"
                                                                                {}
#line 2238 "y.tab.c"
    break;

  case 83:
#line 370 "parser.y"
                                                                                {}
#line 2244 "y.tab.c"
    break;

  case 84:
#line 373 "parser.y"
                                                                                {}
#line 2250 "y.tab.c"
    break;

  case 85:
#line 374 "parser.y"
                                                                                {}
#line 2256 "y.tab.c"
    break;

  case 86:
#line 377 "parser.y"
                                                                                { char * s = cat("return ", (yyvsp[0].rec)->code, "", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2265 "y.tab.c"
    break;

  case 87:
#line 383 "parser.y"
                                                                                { (yyval.rec) = createRecord("break",""); }
#line 2271 "y.tab.c"
    break;

  case 88:
#line 386 "parser.y"
                                                                                { char * s = cat("strcpy(", (yyvsp[-2].sValue), ", ", (yyvsp[0].rec)->code, ")");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  free((yyvsp[-2].sValue));
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2281 "y.tab.c"
    break;

  case 89:
#line 393 "parser.y"
                                                                                {}
#line 2287 "y.tab.c"
    break;

  case 90:
#line 396 "parser.y"
                                                                                { char * s = cat("printf", (yyvsp[0].rec)->code, "", "", "");
                                                                                  (yyval.rec) = createRecord(s, "");
                                                                                  freeRecord((yyvsp[0].rec));
                                                                                  free(s); }
#line 2296 "y.tab.c"
    break;

  case 91:
#line 402 "parser.y"
                                                                                {}
#line 2302 "y.tab.c"
    break;

  case 92:
#line 405 "parser.y"
                                                                                {}
#line 2308 "y.tab.c"
    break;

  case 93:
#line 408 "parser.y"
                                                                                {}
#line 2314 "y.tab.c"
    break;


#line 2318 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 411 "parser.y"


int main (int argc, char ** argv) {
 	int codigo;

    if (argc != 3) {
       printf("Usage: $./compiler input.txt output.txt\nClosing application...\n");
       exit(0);
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    codigo = yyparse();

    fclose(yyin);
    fclose(yyout);

	return codigo;
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
