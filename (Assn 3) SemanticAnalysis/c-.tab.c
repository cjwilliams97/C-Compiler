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
#line 1 "c-.y"

// // // // // // // // // // // // // // // // // // // // // // // 
// CS445 - Scanner for c- Compiler
//
// Connor Williams
// Jan 24, 2021    

#include "scanType.h"  // TokenData Type
#include "ourGetOpt.h"
#include "tree.h"
#include <stdio.h>
#include <string.h>
#include "symbolTable.h"
#include "semantic.h"
extern int yylex();
extern FILE *yyin;
extern int line;         // ERR line number from the scanner!!
extern int numErrors;    // ERR err count
extern int numWarnings;
bool semanticDebugging = false;
TreeNode *syntaxTree;
SymbolTable *symbolTable;
#define YYERROR_VERBOSE
void yyerror(const char *msg)
{
    printf("ERROR(%d): %s\n", line, msg);
    numErrors++;
}


#line 101 "c-.tab.c"

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
#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STATIC = 258,
    INT = 259,
    BOOL = 260,
    CHAR = 261,
    IF = 262,
    THEN = 263,
    ELSE = 264,
    WHILE = 265,
    DO = 266,
    FOR = 267,
    TO = 268,
    BY = 269,
    RETURN = 270,
    BREAK = 271,
    OR = 272,
    AND = 273,
    NOT = 274,
    GEQ = 275,
    LEQ = 276,
    EQ = 277,
    NEQ = 278,
    MAX = 279,
    MIN = 280,
    ADDASS = 281,
    SUBASS = 282,
    MULASS = 283,
    DIVASS = 284,
    INC = 285,
    DEC = 286,
    CHARCONST = 287,
    ID = 288,
    NUMCONST = 289,
    STRINGCONST = 290,
    BOOLCONST = 291,
    TRUE = 292,
    FALSE = 293,
    CHSIGN = 294,
    SIZEOF = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "c-.y"

    TokenData *tokenData;
    TreeNode *treeNode;
    ExpType type;

#line 200 "c-.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_C_TAB_H_INCLUDED  */



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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

#define YYUNDEFTOK  2
#define YYMAXUTOK   295


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
       2,     2,     2,     2,     2,     2,     2,    47,     2,     2,
      50,    51,    45,    43,    57,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    54,
      42,    55,    41,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    55,    56,    59,    60,    63,    66,    67,
      70,    71,    74,    75,    78,    79,    82,    83,    84,    87,
      88,    91,    92,    95,    96,    99,   102,   103,   106,   107,
     110,   113,   114,   117,   120,   121,   124,   125,   126,   127,
     130,   131,   134,   135,   138,   139,   140,   141,   144,   145,
     146,   147,   148,   151,   152,   155,   156,   159,   162,   163,
     164,   165,   166,   167,   168,   169,   172,   173,   176,   177,
     180,   181,   184,   185,   188,   189,   190,   191,   192,   193,
     196,   197,   200,   201,   204,   205,   208,   209,   212,   213,
     216,   217,   218,   221,   222,   225,   226,   227,   230,   231,
     234,   235,   238,   239,   240,   243,   246,   247,   250,   251,
     254,   255,   256,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STATIC", "INT", "BOOL", "CHAR", "IF",
  "THEN", "ELSE", "WHILE", "DO", "FOR", "TO", "BY", "RETURN", "BREAK",
  "OR", "AND", "NOT", "GEQ", "LEQ", "EQ", "NEQ", "MAX", "MIN", "ADDASS",
  "SUBASS", "MULASS", "DIVASS", "INC", "DEC", "CHARCONST", "ID",
  "NUMCONST", "STRINGCONST", "BOOLCONST", "TRUE", "FALSE", "CHSIGN",
  "SIZEOF", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'{'", "'}'",
  "'('", "')'", "'['", "']'", "';'", "'='", "':'", "','", "'?'", "$accept",
  "program", "decList", "decl", "varDecl", "scopedVarDecl", "varDeclList",
  "varDeclInit", "varDeclId", "typeSpec", "funDecl", "parms", "parmList",
  "parmTypeList", "parmIdList", "parmId", "stmt", "expStmt",
  "compoundStmt", "stmtList", "otherStmt", "localDecls", "selectStmt",
  "matched", "unmatched", "iterRange", "returnStmt", "breakStmt", "exp",
  "simpleExp", "andExp", "unaryRelExp", "relExp", "relop", "minmaxExp",
  "minmaxop", "sumExp", "sumop", "mulExp", "mulop", "unaryExp", "unaryop",
  "factor", "mutable", "immutable", "call", "args", "argList", "constant", YY_NULLPTR
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
     295,    62,    60,    43,    45,    42,    47,    37,   123,   125,
      40,    41,    91,    93,    59,    61,    58,    44,    63
};
# endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,  -120,  -120,  -120,   -28,    33,     2,  -120,  -120,     9,
    -120,   105,  -120,  -120,    62,   -23,  -120,    15,    25,    13,
      21,  -120,   105,    45,  -120,    65,   129,    50,    46,  -120,
      89,   105,    66,    63,    68,  -120,   129,  -120,    79,  -120,
    -120,  -120,  -120,  -120,   129,  -120,   113,   114,  -120,  -120,
     180,     5,    81,  -120,   149,  -120,  -120,  -120,  -120,  -120,
      85,    25,   129,   129,   102,   122,    91,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,    92,   113,
     -14,  -120,    89,  -120,  -120,   129,   129,    99,   129,   129,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   149,   149,
    -120,  -120,   149,  -120,  -120,  -120,   149,  -120,  -120,  -120,
      12,     8,    97,  -120,   106,  -120,    78,  -120,   129,   129,
     129,   129,  -120,  -120,   129,  -120,  -120,   108,    96,   115,
    -120,   114,  -120,    82,     5,    81,  -120,    89,    89,   129,
    -120,   105,  -120,    65,    11,  -120,  -120,  -120,  -120,  -120,
    -120,   129,  -120,   127,  -120,  -120,  -120,   158,    57,    65,
      35,  -120,  -120,  -120,    89,    89,   129,    36,  -120,  -120,
    -120,  -120,  -120,    83,  -120,   129,   113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    16,    17,    18,     0,     0,     2,     4,     5,     0,
       6,    22,     1,     3,    14,     0,    11,    12,     0,     0,
      21,    24,    22,     0,     7,     0,     0,    28,    25,    27,
       0,     0,     0,     0,    14,    10,     0,   111,   100,   110,
     112,   113,    95,    96,     0,    97,    13,    67,    69,    71,
      73,    81,    85,    89,     0,    94,    99,    98,   103,   104,
       0,     0,     0,     0,     0,     0,     0,    41,    32,    20,
      37,    36,    45,    30,    42,    43,    38,    39,     0,    65,
      99,    23,     0,    15,    70,   107,     0,     0,     0,     0,
      77,    74,    78,    79,    82,    83,    76,    75,     0,     0,
      86,    87,     0,    90,    91,    92,     0,    93,    29,    26,
       0,     0,     0,    55,     0,    57,    35,    31,     0,     0,
       0,     0,    63,    64,     0,    19,   109,     0,   106,     0,
     102,    66,    68,    72,    80,    84,    88,     0,     0,     0,
      56,     0,    40,     0,     0,    59,    60,    61,    62,    58,
     105,     0,   101,    48,    49,    46,    51,     0,     0,     0,
       0,    33,    34,   108,     0,     0,     0,     0,     9,    44,
      50,    47,    52,    53,     8,     0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   164,  -120,  -120,  -119,   146,  -120,     3,
    -120,   153,  -120,   147,  -120,   116,   -78,  -120,  -120,  -120,
    -120,  -120,  -120,   -87,   -70,  -120,  -120,  -120,   -33,   -24,
      98,   -35,  -120,  -120,    90,  -120,    93,  -120,    87,  -120,
     -49,  -120,  -120,   -26,  -120,  -120,  -120,  -120,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,   142,    15,    16,    17,    18,
      10,    19,    20,    21,    28,    29,    69,    70,    71,   144,
      72,   116,    73,    74,    75,   157,    76,    77,    78,    79,
      47,    48,    49,    98,    50,    99,    51,   102,    52,   106,
      53,    54,    55,    80,    57,    58,   127,   128,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    84,    46,     9,   125,   107,     1,     2,     3,     9,
      56,    87,   118,   119,   120,   121,   122,   123,    62,   138,
     137,    63,    11,    64,   160,    88,    65,    66,    56,    88,
      36,    24,   114,    12,    25,     4,    56,    56,   110,   111,
     167,   124,    14,    37,    38,    39,    40,    41,   100,   101,
     153,   155,   126,   129,   132,    42,    43,   136,    27,    67,
     161,    44,    56,    56,    30,    68,   162,   154,   156,    45,
     166,    26,    56,    56,    88,    31,    56,   169,   171,    33,
      56,   141,     1,     2,     3,   145,   146,   147,   148,   168,
     174,   149,    25,    25,   170,   172,    62,   175,    34,    63,
      88,    64,    60,    61,    65,    66,    94,    95,    36,     1,
       2,     3,    22,    56,    23,   158,    83,    82,   163,   143,
      23,    37,    38,    39,    40,    41,   103,   104,   105,    85,
      88,    86,    89,    42,    43,   112,   164,    67,   108,    44,
      56,    36,   173,    68,   159,   115,   117,    45,    36,    56,
     130,   176,   139,   151,    37,    38,    39,    40,    41,   150,
     140,    37,    38,    39,    40,    41,    42,    43,   152,   165,
      13,    35,    44,    42,    43,    32,   113,   109,    81,    44,
      45,    37,    38,    39,    40,    41,   131,    45,   133,   135,
       0,     0,   134,    42,    43,     0,     0,     0,     0,    44,
      90,    91,    92,    93,    94,    95,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97
};

static const yytype_int16 yycheck[] =
{
      26,    36,    26,     0,    82,    54,     4,     5,     6,     6,
      36,    44,    26,    27,    28,    29,    30,    31,     7,    11,
       8,    10,    50,    12,   143,    17,    15,    16,    54,    17,
      19,    54,    65,     0,    57,    33,    62,    63,    62,    63,
     159,    55,    33,    32,    33,    34,    35,    36,    43,    44,
     137,   138,    85,    86,    89,    44,    45,   106,    33,    48,
      49,    50,    88,    89,    51,    54,   144,   137,   138,    58,
      13,    56,    98,    99,    17,    54,   102,   164,   165,    34,
     106,     3,     4,     5,     6,   118,   119,   120,   121,    54,
      54,   124,    57,    57,   164,   165,     7,    14,    33,    10,
      17,    12,    52,    57,    15,    16,    24,    25,    19,     4,
       5,     6,    50,   139,    52,   139,    53,    51,   151,   116,
      52,    32,    33,    34,    35,    36,    45,    46,    47,    50,
      17,    52,    18,    44,    45,    33,     9,    48,    53,    50,
     166,    19,   166,    54,   141,    54,    54,    58,    19,   175,
      51,   175,    55,    57,    32,    33,    34,    35,    36,    51,
      54,    32,    33,    34,    35,    36,    44,    45,    53,    11,
       6,    25,    50,    44,    45,    22,    54,    61,    31,    50,
      58,    32,    33,    34,    35,    36,    88,    58,    98,   102,
      -1,    -1,    99,    44,    45,    -1,    -1,    -1,    -1,    50,
      20,    21,    22,    23,    24,    25,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    33,    60,    61,    62,    63,    68,
      69,    50,     0,    62,    33,    65,    66,    67,    68,    70,
      71,    72,    50,    52,    54,    57,    56,    33,    73,    74,
      51,    54,    70,    34,    33,    66,    19,    32,    33,    34,
      35,    36,    44,    45,    50,    58,    88,    89,    90,    91,
      93,    95,    97,    99,   100,   101,   102,   103,   104,   107,
      52,    57,     7,    10,    12,    15,    16,    48,    54,    75,
      76,    77,    79,    81,    82,    83,    85,    86,    87,    88,
     102,    72,    51,    53,    90,    50,    52,    87,    17,    18,
      20,    21,    22,    23,    24,    25,    41,    42,    92,    94,
      43,    44,    96,    45,    46,    47,    98,    99,    53,    74,
      88,    88,    33,    54,    87,    54,    80,    54,    26,    27,
      28,    29,    30,    31,    55,    75,    87,   105,   106,    87,
      51,    89,    90,    93,    95,    97,    99,     8,    11,    55,
      54,     3,    64,    68,    78,    87,    87,    87,    87,    87,
      51,    57,    53,    82,    83,    82,    83,    84,    88,    68,
      65,    49,    75,    87,     9,    11,    13,    65,    54,    82,
      83,    82,    83,    88,    54,    14,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    73,    73,    74,    74,
      75,    76,    76,    77,    78,    78,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    98,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   104,   105,   105,   106,   106,
     107,   107,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     4,     3,
       3,     1,     1,     3,     1,     4,     1,     1,     1,     6,
       5,     1,     0,     3,     1,     2,     3,     1,     1,     3,
       1,     2,     1,     4,     2,     0,     1,     1,     1,     1,
       2,     0,     1,     1,     6,     1,     4,     6,     4,     4,
       6,     4,     6,     3,     5,     2,     3,     2,     3,     3,
       3,     3,     3,     2,     2,     1,     3,     1,     3,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     1,     4,     1,     0,     3,     1,
       1,     1,     1,     1
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
#line 52 "c-.y"
                              {syntaxTree = (yyvsp[0].treeNode);}
#line 1520 "c-.tab.c"
    break;

  case 3:
#line 55 "c-.y"
                                   {(yyval.treeNode) = setSibling((yyvsp[-1].treeNode), (yyvsp[0].treeNode));}
#line 1526 "c-.tab.c"
    break;

  case 4:
#line 56 "c-.y"
                           {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1532 "c-.tab.c"
    break;

  case 5:
#line 59 "c-.y"
                              {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1538 "c-.tab.c"
    break;

  case 6:
#line 60 "c-.y"
                              {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1544 "c-.tab.c"
    break;

  case 7:
#line 63 "c-.y"
                                               {(yyval.treeNode) = setNodeType((yyvsp[-2].type), (yyvsp[-1].treeNode), false);}
#line 1550 "c-.tab.c"
    break;

  case 8:
#line 66 "c-.y"
                                                      {setScoped((yyvsp[-1].treeNode)); (yyval.treeNode) = setNodeType((yyvsp[-2].type), (yyvsp[-1].treeNode), true);}
#line 1556 "c-.tab.c"
    break;

  case 9:
#line 67 "c-.y"
                                               {setScoped((yyvsp[-1].treeNode)); (yyval.treeNode) = setNodeType((yyvsp[-2].type), (yyvsp[-1].treeNode), false);}
#line 1562 "c-.tab.c"
    break;

  case 10:
#line 70 "c-.y"
                                                  {(yyval.treeNode) = setSibling((yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1568 "c-.tab.c"
    break;

  case 11:
#line 71 "c-.y"
                                  {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1574 "c-.tab.c"
    break;

  case 12:
#line 74 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1580 "c-.tab.c"
    break;

  case 13:
#line 75 "c-.y"
                                              {(yyvsp[-2].treeNode)->child[0] = (yyvsp[0].treeNode); (yyvsp[-2].treeNode)->isInitialized = true; (yyval.treeNode) = (yyvsp[-2].treeNode);}
#line 1586 "c-.tab.c"
    break;

  case 14:
#line 78 "c-.y"
                         {(yyval.treeNode) = newDeclNode(VarDeclK, Void, (yyvsp[0].tokenData), NULL, NULL, NULL, false);}
#line 1592 "c-.tab.c"
    break;

  case 15:
#line 79 "c-.y"
                                          {(yyval.treeNode) = newDeclNode(VarDeclK, Void, (yyvsp[-3].tokenData), NULL, NULL, NULL, true);}
#line 1598 "c-.tab.c"
    break;

  case 16:
#line 82 "c-.y"
                          {(yyval.type) = Integer;}
#line 1604 "c-.tab.c"
    break;

  case 17:
#line 83 "c-.y"
                           {(yyval.type) = Boolean;}
#line 1610 "c-.tab.c"
    break;

  case 18:
#line 84 "c-.y"
                           {(yyval.type) = Char;}
#line 1616 "c-.tab.c"
    break;

  case 19:
#line 87 "c-.y"
                                                     {(yyval.treeNode) = newDeclNode(FuncDeclK, (yyvsp[-5].type), (yyvsp[-4].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL, false);}
#line 1622 "c-.tab.c"
    break;

  case 20:
#line 88 "c-.y"
                                            {(yyval.treeNode) = newDeclNode(FuncDeclK, Void, (yyvsp[-4].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL, false);}
#line 1628 "c-.tab.c"
    break;

  case 21:
#line 91 "c-.y"
                               {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1634 "c-.tab.c"
    break;

  case 22:
#line 92 "c-.y"
                      {(yyval.treeNode) = NULL;}
#line 1640 "c-.tab.c"
    break;

  case 23:
#line 95 "c-.y"
                                                {(yyval.treeNode) = setSibling((yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1646 "c-.tab.c"
    break;

  case 24:
#line 96 "c-.y"
                                   {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1652 "c-.tab.c"
    break;

  case 25:
#line 99 "c-.y"
                                          {setScoped((yyvsp[0].treeNode)); (yyval.treeNode) = setNodeType((yyvsp[-1].type), (yyvsp[0].treeNode), false);}
#line 1658 "c-.tab.c"
    break;

  case 26:
#line 102 "c-.y"
                                            {(yyval.treeNode) = setSibling((yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1664 "c-.tab.c"
    break;

  case 27:
#line 103 "c-.y"
                             {(yyval.treeNode)=(yyvsp[0].treeNode);}
#line 1670 "c-.tab.c"
    break;

  case 28:
#line 106 "c-.y"
                         {(yyval.treeNode) = newDeclNode(ParmK, Void, (yyvsp[0].tokenData), NULL, NULL, NULL, false);}
#line 1676 "c-.tab.c"
    break;

  case 29:
#line 107 "c-.y"
                                {(yyval.treeNode) = newDeclNode(ParmK, Void, (yyvsp[-2].tokenData), NULL, NULL, NULL, true);}
#line 1682 "c-.tab.c"
    break;

  case 30:
#line 110 "c-.y"
                                 {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1688 "c-.tab.c"
    break;

  case 31:
#line 113 "c-.y"
                             {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 1694 "c-.tab.c"
    break;

  case 32:
#line 114 "c-.y"
                          {(yyval.treeNode) = NULL;}
#line 1700 "c-.tab.c"
    break;

  case 33:
#line 117 "c-.y"
                                                  {(yyval.treeNode) = newStmtNode(CompoundK, (yyvsp[-3].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[-1].treeNode), NULL);}
#line 1706 "c-.tab.c"
    break;

  case 34:
#line 120 "c-.y"
                                    {(yyval.treeNode) = setSibling((yyvsp[-1].treeNode), (yyvsp[0].treeNode));}
#line 1712 "c-.tab.c"
    break;

  case 35:
#line 121 "c-.y"
                      {(yyval.treeNode) = NULL;}
#line 1718 "c-.tab.c"
    break;

  case 36:
#line 124 "c-.y"
                                   {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1724 "c-.tab.c"
    break;

  case 37:
#line 125 "c-.y"
                              {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1730 "c-.tab.c"
    break;

  case 38:
#line 126 "c-.y"
                                 {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1736 "c-.tab.c"
    break;

  case 39:
#line 127 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1742 "c-.tab.c"
    break;

  case 40:
#line 130 "c-.y"
                                               {(yyval.treeNode) = setSibling((yyvsp[-1].treeNode), (yyvsp[0].treeNode));}
#line 1748 "c-.tab.c"
    break;

  case 41:
#line 131 "c-.y"
                      {(yyval.treeNode) = NULL;}
#line 1754 "c-.tab.c"
    break;

  case 42:
#line 134 "c-.y"
                              {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1760 "c-.tab.c"
    break;

  case 43:
#line 135 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1766 "c-.tab.c"
    break;

  case 44:
#line 138 "c-.y"
                                                             {(yyval.treeNode) = newStmtNode(IfK, (yyvsp[-5].tokenData), NULL, (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1772 "c-.tab.c"
    break;

  case 45:
#line 139 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1778 "c-.tab.c"
    break;

  case 46:
#line 140 "c-.y"
                                                 {(yyval.treeNode) = newStmtNode(WhileK, (yyvsp[-3].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1784 "c-.tab.c"
    break;

  case 47:
#line 141 "c-.y"
                                                      {(yyval.treeNode) = newStmtNode(ForK, (yyvsp[-5].tokenData), (yyvsp[-4].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1790 "c-.tab.c"
    break;

  case 48:
#line 144 "c-.y"
                                                {(yyval.treeNode) = newStmtNode(IfK, (yyvsp[-3].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1796 "c-.tab.c"
    break;

  case 49:
#line 145 "c-.y"
                                                  {(yyval.treeNode) = newStmtNode(IfK, (yyvsp[-3].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1802 "c-.tab.c"
    break;

  case 50:
#line 146 "c-.y"
                                                               {(yyval.treeNode) = newStmtNode(IfK, (yyvsp[-5].tokenData), NULL, (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1808 "c-.tab.c"
    break;

  case 51:
#line 147 "c-.y"
                                                   {(yyval.treeNode) = newStmtNode(WhileK, (yyvsp[-3].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1814 "c-.tab.c"
    break;

  case 52:
#line 148 "c-.y"
                                                        {(yyval.treeNode) = newStmtNode(ForK, (yyvsp[-5].tokenData), (yyvsp[-4].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1820 "c-.tab.c"
    break;

  case 53:
#line 151 "c-.y"
                                             {(yyval.treeNode) = newStmtNode(RangeK, (yyvsp[-1].tokenData), NULL, (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1826 "c-.tab.c"
    break;

  case 54:
#line 152 "c-.y"
                                                          {(yyval.treeNode) = newStmtNode(RangeK, (yyvsp[-3].tokenData), NULL, (yyvsp[-4].treeNode), (yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 1832 "c-.tab.c"
    break;

  case 55:
#line 155 "c-.y"
                                 {(yyval.treeNode) = newStmtNode(ReturnK, (yyvsp[-1].tokenData), NULL, NULL, NULL, NULL);}
#line 1838 "c-.tab.c"
    break;

  case 56:
#line 156 "c-.y"
                                     {(yyval.treeNode) = newStmtNode(ReturnK, (yyvsp[-2].tokenData), NULL, (yyvsp[-1].treeNode), NULL, NULL);}
#line 1844 "c-.tab.c"
    break;

  case 57:
#line 159 "c-.y"
                                {(yyval.treeNode) = newStmtNode(BreakK, (yyvsp[-1].tokenData), NULL, NULL, NULL, NULL);}
#line 1850 "c-.tab.c"
    break;

  case 58:
#line 162 "c-.y"
                                      {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1856 "c-.tab.c"
    break;

  case 59:
#line 163 "c-.y"
                                         {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1862 "c-.tab.c"
    break;

  case 60:
#line 164 "c-.y"
                                         {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1868 "c-.tab.c"
    break;

  case 61:
#line 165 "c-.y"
                                         {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1874 "c-.tab.c"
    break;

  case 62:
#line 166 "c-.y"
                                         {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1880 "c-.tab.c"
    break;

  case 63:
#line 167 "c-.y"
                                  {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[0].tokenData), (yyvsp[-1].treeNode), NULL, NULL);}
#line 1886 "c-.tab.c"
    break;

  case 64:
#line 168 "c-.y"
                                  {(yyval.treeNode) = newExpNode(AssignK, (yyvsp[0].tokenData), (yyvsp[-1].treeNode), NULL, NULL);}
#line 1892 "c-.tab.c"
    break;

  case 65:
#line 169 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1898 "c-.tab.c"
    break;

  case 66:
#line 172 "c-.y"
                                          {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1904 "c-.tab.c"
    break;

  case 67:
#line 173 "c-.y"
                             {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1910 "c-.tab.c"
    break;

  case 68:
#line 176 "c-.y"
                                             {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1916 "c-.tab.c"
    break;

  case 69:
#line 177 "c-.y"
                                  {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1922 "c-.tab.c"
    break;

  case 70:
#line 180 "c-.y"
                                      {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[0].treeNode), NULL, NULL);}
#line 1928 "c-.tab.c"
    break;

  case 71:
#line 181 "c-.y"
                             {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1934 "c-.tab.c"
    break;

  case 72:
#line 184 "c-.y"
                                                {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1940 "c-.tab.c"
    break;

  case 73:
#line 185 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1946 "c-.tab.c"
    break;

  case 74:
#line 188 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 1952 "c-.tab.c"
    break;

  case 75:
#line 189 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 1958 "c-.tab.c"
    break;

  case 76:
#line 190 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 1964 "c-.tab.c"
    break;

  case 77:
#line 191 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 1970 "c-.tab.c"
    break;

  case 78:
#line 192 "c-.y"
                         {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 1976 "c-.tab.c"
    break;

  case 79:
#line 193 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 1982 "c-.tab.c"
    break;

  case 80:
#line 196 "c-.y"
                                                {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 1988 "c-.tab.c"
    break;

  case 81:
#line 197 "c-.y"
                             {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 1994 "c-.tab.c"
    break;

  case 82:
#line 200 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2000 "c-.tab.c"
    break;

  case 83:
#line 201 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2006 "c-.tab.c"
    break;

  case 84:
#line 204 "c-.y"
                                          {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 2012 "c-.tab.c"
    break;

  case 85:
#line 205 "c-.y"
                             {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2018 "c-.tab.c"
    break;

  case 86:
#line 208 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2024 "c-.tab.c"
    break;

  case 87:
#line 209 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2030 "c-.tab.c"
    break;

  case 88:
#line 212 "c-.y"
                                            {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[-2].treeNode), (yyvsp[0].treeNode), NULL);}
#line 2036 "c-.tab.c"
    break;

  case 89:
#line 213 "c-.y"
                               {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2042 "c-.tab.c"
    break;

  case 90:
#line 216 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2048 "c-.tab.c"
    break;

  case 91:
#line 217 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2054 "c-.tab.c"
    break;

  case 92:
#line 218 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2060 "c-.tab.c"
    break;

  case 93:
#line 221 "c-.y"
                                       {(yyval.treeNode) = newExpNode(OpK, (yyvsp[-1].tokenData), (yyvsp[0].treeNode), NULL, NULL);}
#line 2066 "c-.tab.c"
    break;

  case 94:
#line 222 "c-.y"
                             {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2072 "c-.tab.c"
    break;

  case 95:
#line 225 "c-.y"
                          {(yyval.tokenData) = changeTokenType((yyvsp[0].tokenData));}
#line 2078 "c-.tab.c"
    break;

  case 96:
#line 226 "c-.y"
                          {(yyval.tokenData) = changeTokenType((yyvsp[0].tokenData));}
#line 2084 "c-.tab.c"
    break;

  case 97:
#line 227 "c-.y"
                          {(yyval.tokenData) = (yyvsp[0].tokenData);}
#line 2090 "c-.tab.c"
    break;

  case 98:
#line 230 "c-.y"
                                {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2096 "c-.tab.c"
    break;

  case 99:
#line 231 "c-.y"
                              {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2102 "c-.tab.c"
    break;

  case 100:
#line 234 "c-.y"
                         {(yyval.treeNode) = newExpNode(IdK, (yyvsp[0].tokenData), NULL, NULL, NULL);}
#line 2108 "c-.tab.c"
    break;

  case 101:
#line 235 "c-.y"
                                     {(yyval.treeNode) = newExpNode(IdArrK, (yyvsp[-2].tokenData), newExpNode(IdK, (yyvsp[-3].tokenData), NULL, NULL, NULL), (yyvsp[-1].treeNode), NULL);}
#line 2114 "c-.tab.c"
    break;

  case 102:
#line 238 "c-.y"
                                  {(yyval.treeNode) = (yyvsp[-1].treeNode);}
#line 2120 "c-.tab.c"
    break;

  case 103:
#line 239 "c-.y"
                           {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2126 "c-.tab.c"
    break;

  case 104:
#line 240 "c-.y"
                               {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2132 "c-.tab.c"
    break;

  case 105:
#line 243 "c-.y"
                                      {(yyval.treeNode) = newExpNode(CallK, (yyvsp[-3].tokenData), (yyvsp[-1].treeNode), NULL, NULL);}
#line 2138 "c-.tab.c"
    break;

  case 106:
#line 246 "c-.y"
                              {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2144 "c-.tab.c"
    break;

  case 107:
#line 247 "c-.y"
                      {(yyval.treeNode) = NULL;}
#line 2150 "c-.tab.c"
    break;

  case 108:
#line 250 "c-.y"
                                      {(yyval.treeNode) = setSibling((yyvsp[-2].treeNode), (yyvsp[0].treeNode));}
#line 2156 "c-.tab.c"
    break;

  case 109:
#line 251 "c-.y"
                          {(yyval.treeNode) = (yyvsp[0].treeNode);}
#line 2162 "c-.tab.c"
    break;

  case 110:
#line 254 "c-.y"
                               {(yyval.treeNode) = newExpNode(ConstantK, (yyvsp[0].tokenData), NULL, NULL, NULL);}
#line 2168 "c-.tab.c"
    break;

  case 111:
#line 255 "c-.y"
                                {(yyval.treeNode) = newExpNode(ConstantK, (yyvsp[0].tokenData), NULL, NULL, NULL);}
#line 2174 "c-.tab.c"
    break;

  case 112:
#line 256 "c-.y"
                                  {(yyval.treeNode) = newExpNode(ConstantK, (yyvsp[0].tokenData), NULL, NULL, NULL);}
#line 2180 "c-.tab.c"
    break;

  case 113:
#line 257 "c-.y"
                                {(yyval.treeNode) = newExpNode(ConstantK, (yyvsp[0].tokenData), NULL, NULL, NULL);}
#line 2186 "c-.tab.c"
    break;


#line 2190 "c-.tab.c"

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
#line 261 "c-.y"
             
int main(int argc, char **argv)
{
    #ifdef YYDEBUG
    yydebug = 0;
    #endif

    int c;
    extern char *optarg;
    extern int optind;
    int dflg, pflg, Pflg, hflg, Sflg;
    int errflg;
    char *ofile;
    char *infile;
    errflg = dflg = pflg = Pflg = hflg = Sflg= 0;
    ofile = NULL;
    infile = NULL;
    while (1) {

        // hunt for a string of options
        while ((c = ourGetopt(argc, argv, (char *)"dpPo:")) != EOF)
            switch (c) {
                case        'd':
                    dflg = 1;
                    break;
                case        'p':
                    pflg = 1;
                    break;
                case        'P':
                    Pflg = 1;
                    break;
                case        'o':
		            if (ofile) {
		                break;
		            }
                    ofile = strdup(optarg);
                    break;
                case        '?':
                    errflg = 1;
                case        'h':
                    hflg = 1;
                    break;
                case        'S':
                    Sflg = 1;
                    break;
                default:
                    break;
            }

            // report any errors or usage request
            if (errflg) {
                (void)fprintf(stderr, "usage: cmd [-a] [-o <filename>] files...\n");
                exit(2);
            }
            if (hflg) {
                printf("Usage: c- [options] [sourceFile]\n");
            }

            // pick off a nonoption
            if (optind < argc) {
                infile = strdup(argv[optind]);
                optind++;
            }
            else {
                break;
            }
        }
    //if command line arguments were provided, open the file
    if (infile) {
        if ((yyin = fopen(infile, "r"))) {
            // file open successful
        }
        else {
            // failed to open file
            numErrors++;
            printf("ERROR(ARGLIST): source file \"%s\" could not be opened.\n", infile);
            printf("Number of warnings: %d\n", numWarnings);
            printf("Number of errors: %d\n", numErrors);
            exit(1);
        }
    }
    if (dflg == 1)
    {
        //yydebug = 1;
    }
    //parse
    numErrors = 0;
    numWarnings = 0;
    yyparse();
    if (numErrors == 0) {
        if (pflg == 1) {
            printTree(syntaxTree, 0, -1, 0);
        }
        symbolTable = new SymbolTable();
        if (dflg) {
            symbolTable->debug(true);
            semanticDebugging = true;
        }
        else {
            symbolTable->debug(false);
        }
        semanticAnalysis(syntaxTree, symbolTable);
    }
    if (Pflg == 1 && numErrors == 0) {
        PrintTree(syntaxTree, 0, -1, 0);
    }
    printf("Number of warnings: %d\n", numWarnings);
    printf("Number of errors: %d\n", numErrors);
    return 0;
}
