/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
FILE *output;
int yylex();
void yyerror(char *s) {fprintf(output,"Error\n");}
int yywrap(void) { return 1;}


#line 82 "cucu.tab.c"

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

#include "cucu.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Number = 3,                     /* Number  */
  YYSYMBOL_GE = 4,                         /* GE  */
  YYSYMBOL_LE = 5,                         /* LE  */
  YYSYMBOL_Less_than = 6,                  /* Less_than  */
  YYSYMBOL_Greater_than = 7,               /* Greater_than  */
  YYSYMBOL_Equalto = 8,                    /* Equalto  */
  YYSYMBOL_Not_Equalto = 9,                /* Not_Equalto  */
  YYSYMBOL_And = 10,                       /* And  */
  YYSYMBOL_Or = 11,                        /* Or  */
  YYSYMBOL_Type = 12,                      /* Type  */
  YYSYMBOL_Return = 13,                    /* Return  */
  YYSYMBOL_Main = 14,                      /* Main  */
  YYSYMBOL_Double_quotes = 15,             /* Double_quotes  */
  YYSYMBOL_Id = 16,                        /* Id  */
  YYSYMBOL_If = 17,                        /* If  */
  YYSYMBOL_Else = 18,                      /* Else  */
  YYSYMBOL_While = 19,                     /* While  */
  YYSYMBOL_Assign = 20,                    /* Assign  */
  YYSYMBOL_sem = 21,                       /* sem  */
  YYSYMBOL_Com = 22,                       /* Com  */
  YYSYMBOL_rpr = 23,                       /* rpr  */
  YYSYMBOL_lpr = 24,                       /* lpr  */
  YYSYMBOL_R_SB = 25,                      /* R_SB  */
  YYSYMBOL_L_SB = 26,                      /* L_SB  */
  YYSYMBOL_Plus = 27,                      /* Plus  */
  YYSYMBOL_Minus = 28,                     /* Minus  */
  YYSYMBOL_Multiply = 29,                  /* Multiply  */
  YYSYMBOL_Divide = 30,                    /* Divide  */
  YYSYMBOL_Double_ast = 31,                /* Double_ast  */
  YYSYMBOL_For = 32,                       /* For  */
  YYSYMBOL_33_ = 33,                       /* "{"  */
  YYSYMBOL_34_ = 34,                       /* "}"  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_begin = 36,                     /* begin  */
  YYSYMBOL_program_begins = 37,            /* program_begins  */
  YYSYMBOL_var_decl = 38,                  /* var_decl  */
  YYSYMBOL_func_decl = 39,                 /* func_decl  */
  YYSYMBOL_func_defn = 40,                 /* func_defn  */
  YYSYMBOL_caller = 41,                    /* caller  */
  YYSYMBOL_call_ags = 42,                  /* call_ags  */
  YYSYMBOL_args = 43,                      /* args  */
  YYSYMBOL_if_st = 44,                     /* if_st  */
  YYSYMBOL_while_st = 45,                  /* while_st  */
  YYSYMBOL_for_st = 46,                    /* for_st  */
  YYSYMBOL_func_body = 47,                 /* func_body  */
  YYSYMBOL_statement = 48,                 /* statement  */
  YYSYMBOL_expr = 49,                      /* expr  */
  YYSYMBOL_prime_expr = 50                 /* prime_expr  */
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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   654

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    21,    21,    22,    25,    26,    27,    28,    29,    30,
      31,    32,    35,    36,    37,    38,    41,    42,    43,    44,
      47,    48,    50,    51,    53,    54,    57,    58,    59,    60,
      61,    62,    65,    66,    68,    71,    72,    73,    74,    77,
      78,    81,    82,    83,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   105,   106
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
  "\"end of file\"", "error", "\"invalid token\"", "Number", "GE", "LE",
  "Less_than", "Greater_than", "Equalto", "Not_Equalto", "And", "Or",
  "Type", "Return", "Main", "Double_quotes", "Id", "If", "Else", "While",
  "Assign", "sem", "Com", "rpr", "lpr", "R_SB", "L_SB", "Plus", "Minus",
  "Multiply", "Divide", "Double_ast", "For", "\"{\"", "\"}\"", "$accept",
  "begin", "program_begins", "var_decl", "func_decl", "func_defn",
  "caller", "call_ags", "args", "if_st", "while_st", "for_st", "func_body",
  "statement", "expr", "prime_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-28)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     298,   -85,   -13,    70,   -16,   -19,     9,   106,   106,    18,
      55,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     327,   106,    -9,   -85,   106,   354,   106,    54,   106,   106,
     363,   390,   292,   -85,   -85,   106,   106,   106,   106,   106,
     106,   106,   106,   -85,   106,   106,   106,   106,   106,   572,
     106,   -85,     6,   106,   399,   -85,   426,     3,    25,   599,
     435,   462,   -85,   -85,    34,    41,   106,   106,   572,   572,
     572,   572,   572,   572,   572,   572,   572,   572,   572,   572,
     572,   472,    46,    31,   264,    52,   608,   499,    48,   -85,
     -85,    68,   106,    43,    60,    -7,   509,   536,   -85,    73,
     628,   -85,   -85,   298,   281,   628,    39,   -85,   -85,   -85,
     599,   298,   298,   131,   131,   628,   -85,   -85,   -85,   298,
     -85,   608,   106,   -85,    94,   132,    75,    77,   -85,   563,
      83,   -85,   228,   246,   -85,    69,   298,   298,   298,   298,
     298,   156,   180,   204,   -85,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    61,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     2,     4,     5,     6,     7,     8,     9,    10,    11,
       0,    44,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     3,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,    60,
       0,    12,     0,     0,     0,    18,     0,     0,     0,    24,
       0,     0,    59,    57,     0,    62,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    58,    45,    54,    56,
      55,     0,     0,    62,     0,     0,    28,     0,    59,    41,
      23,     0,     0,     0,     0,     0,     0,     0,    13,    26,
       0,    17,    39,    21,     0,     0,     0,    19,    22,    25,
      24,     0,     0,     0,     0,     0,    30,    40,    16,    20,
      31,    28,     0,    15,     0,     0,     0,     0,    29,     0,
      32,    34,     0,     0,    14,     0,     0,    35,     0,    37,
       0,     0,     0,     0,    36,    38,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,     0,    76,   -85,   -85,   -85,    13,   -84,   -85,
     -85,   -85,   -48,   -31,    -1,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    10,   102,    12,    13,    14,    15,    58,    85,    16,
      17,    18,   103,    19,    20,    21
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    67,    25,    22,    26,    28,    30,    31,    27,     1,
      34,    50,    51,    50,    51,    52,   116,    53,    82,    53,
      49,   120,    83,    54,    90,    56,    59,    60,    61,    84,
       7,   128,     8,    29,    68,    69,    70,    71,    72,    73,
      74,    75,    32,    76,    77,    78,    79,    80,    91,    81,
      95,    86,    87,   100,   -27,    33,   119,     1,     1,   122,
     123,    26,    99,   124,   125,    96,    97,     2,     3,   107,
      23,     4,     5,     1,     6,   104,   111,    57,     7,     7,
       8,     8,   126,   127,   137,   139,    23,     9,   141,   108,
     142,   110,   143,   112,    24,   115,     8,     1,   132,    86,
     133,   135,   140,   117,   121,   109,     2,     3,    66,     1,
       4,     5,     0,     6,    86,     0,     0,     0,     7,   117,
       8,   129,    23,     0,   117,   117,     9,     0,   130,     0,
       7,     0,     8,     0,     1,     1,     0,   117,     0,   117,
       0,   117,   117,   117,     2,     3,     0,    65,     4,     5,
       0,     6,     0,     0,     0,     7,     7,     8,     8,     1,
       0,     0,     0,     0,     9,     0,   131,     0,     2,     3,
       0,     0,     4,     5,     0,     6,     0,     0,     0,     0,
       7,     0,     8,     1,     0,     0,     0,     0,     9,     0,
     144,     0,     2,     3,     0,     0,     4,     5,     0,     6,
       0,     0,     0,     0,     7,     0,     8,     1,     0,     0,
       0,     0,     9,     0,   145,     0,     2,     3,     0,     0,
       4,     5,     0,     6,     0,     0,     0,     0,     7,     0,
       8,     1,     0,     0,     0,     0,     9,     0,   146,     0,
       2,     3,     0,     0,     4,     5,     0,     6,     0,     1,
       0,     0,     7,     0,     8,     0,     0,     0,     2,     3,
       9,   136,     4,     5,     0,     6,     0,     1,     0,     0,
       7,     0,     8,     0,     0,     0,     2,     3,     9,   138,
       4,     5,     0,     6,     1,   101,     0,     0,     7,     0,
       8,     0,     0,     2,     3,     1,     9,     4,     5,     0,
       6,     1,   118,     0,    64,     7,     0,     8,    65,     0,
       2,     3,     0,     9,     4,     5,     7,     6,     8,     0,
       0,     0,     7,     0,     8,     0,     0,     0,     0,     0,
       9,    35,    36,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
       0,     0,     0,     0,    45,    46,    47,    48,    35,    36,
      37,    38,    39,    40,    41,    42,     0,    35,    36,    37,
      38,    39,    40,    41,    42,    55,    44,     0,     0,     0,
       0,    45,    46,    47,    48,    44,    62,     0,     0,     0,
      45,    46,    47,    48,    35,    36,    37,    38,    39,    40,
      41,    42,     0,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    44,     0,     0,    63,     0,    45,    46,    47,
      48,    44,    88,     0,     0,     0,    45,    46,    47,    48,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    35,
      36,    37,    38,    39,    40,    41,    42,    89,    44,     0,
       0,     0,     0,    45,    46,    47,    48,    44,    93,     0,
       0,     0,    45,    46,    47,    48,    35,    36,    37,    38,
      39,    40,    41,    42,     0,     0,    35,    36,    37,    38,
      39,    40,    41,    42,    44,    94,     0,     0,     0,    45,
      46,    47,    48,    98,    44,     0,     0,     0,     0,    45,
      46,    47,    48,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     0,    35,    36,    37,    38,    39,    40,    41,
      42,    44,     0,     0,   106,     0,    45,    46,    47,    48,
     113,    44,     0,     0,     0,     0,    45,    46,    47,    48,
      35,    36,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,    44,     0,
       0,     0,     0,    45,    46,    47,    48,    35,    36,    37,
      38,    39,    40,    41,    42,     0,    35,    36,    37,    38,
      39,    40,    41,    42,   134,    44,     0,     0,     0,     0,
      45,    46,    47,    48,    44,     0,     0,     0,     0,    45,
      46,    47,    48,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    35,    36,    37,    38,    39,    40,    41,    42,
       0,    92,     0,     0,     0,     0,    45,    46,    47,    48,
     105,     1,     0,     0,     0,    45,    46,    47,    48,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     8
};

static const yytype_int16 yycheck[] =
{
       0,    32,     3,    16,    20,    24,     7,     8,    24,     3,
      10,    20,    21,    20,    21,    24,   100,    26,    12,    26,
      21,   105,    16,    24,    21,    26,    27,    28,    29,    23,
      24,   115,    26,    24,    35,    36,    37,    38,    39,    40,
      41,    42,    24,    44,    45,    46,    47,    48,    23,    50,
      16,    52,    53,    22,    23,     0,   104,     3,     3,    20,
      21,    20,    16,   111,   112,    66,    67,    12,    13,    21,
      16,    16,    17,     3,    19,    23,    33,    23,    24,    24,
      26,    26,   113,   114,   132,   133,    16,    32,   136,    21,
     138,    92,   140,    33,    24,    22,    26,     3,    23,   100,
      23,    18,    33,   103,   105,    92,    12,    13,    32,     3,
      16,    17,    -1,    19,   115,    -1,    -1,    -1,    24,   119,
      26,   122,    16,    -1,   124,   125,    32,    -1,    34,    -1,
      24,    -1,    26,    -1,     3,     3,    -1,   137,    -1,   139,
      -1,   141,   142,   143,    12,    13,    -1,    16,    16,    17,
      -1,    19,    -1,    -1,    -1,    24,    24,    26,    26,     3,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    12,    13,
      -1,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,
      24,    -1,    26,     3,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    12,    13,    -1,    -1,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    -1,    26,     3,    -1,    -1,
      -1,    -1,    32,    -1,    34,    -1,    12,    13,    -1,    -1,
      16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,
      26,     3,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      12,    13,    -1,    -1,    16,    17,    -1,    19,    -1,     3,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    12,    13,
      32,    33,    16,    17,    -1,    19,    -1,     3,    -1,    -1,
      24,    -1,    26,    -1,    -1,    -1,    12,    13,    32,    33,
      16,    17,    -1,    19,     3,    21,    -1,    -1,    24,    -1,
      26,    -1,    -1,    12,    13,     3,    32,    16,    17,    -1,
      19,     3,    21,    -1,    12,    24,    -1,    26,    16,    -1,
      12,    13,    -1,    32,    16,    17,    24,    19,    26,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      32,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    30,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,     4,     5,     6,
       7,     8,     9,    10,    11,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    22,    23,    -1,    -1,    -1,
      27,    28,    29,    30,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    22,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,     4,
       5,     6,     7,     8,     9,    10,    11,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    22,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    21,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      22,     3,    -1,    -1,    -1,    27,    28,    29,    30,    -1,
      12,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    12,    13,    16,    17,    19,    24,    26,    32,
      36,    37,    38,    39,    40,    41,    44,    45,    46,    48,
      49,    50,    16,    16,    24,    49,    20,    24,    24,    24,
      49,    49,    24,     0,    37,     4,     5,     6,     7,     8,
       9,    10,    11,    21,    22,    27,    28,    29,    30,    49,
      20,    21,    24,    26,    49,    21,    49,    23,    42,    49,
      49,    49,    23,    25,    12,    16,    38,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    12,    16,    23,    43,    49,    49,    23,    21,
      21,    23,    22,    23,    23,    16,    49,    49,    21,    16,
      22,    21,    37,    47,    23,    22,    25,    21,    21,    42,
      49,    33,    33,    21,    21,    22,    43,    37,    21,    47,
      43,    49,    20,    21,    47,    47,    48,    48,    43,    49,
      34,    34,    23,    23,    21,    18,    33,    47,    33,    47,
      33,    47,    47,    47,    34,    34,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    37,    37,
      37,    37,    38,    38,    38,    38,    39,    39,    39,    39,
      40,    40,    41,    41,    42,    42,    43,    43,    43,    43,
      43,    43,    44,    44,    45,    46,    46,    46,    46,    47,
      47,    48,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    50,    50
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     8,     6,     6,     5,     3,     5,
       6,     5,     5,     4,     1,     3,     2,     1,     1,     4,
       3,     3,     7,    11,     7,     8,    10,     8,    10,     1,
       2,     4,     4,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
  case 5: /* program_begins: func_decl  */
#line 26 "cucu.y"
                            {fprintf(output,"FUN-DEC\n");}
#line 1316 "cucu.tab.c"
    break;

  case 6: /* program_begins: func_defn  */
#line 27 "cucu.y"
                            {fprintf(output,"FUN-DEF\n");}
#line 1322 "cucu.tab.c"
    break;

  case 12: /* var_decl: Type Id sem  */
#line 35 "cucu.y"
                      {fprintf(output,"\nlocal variable %s\n",(yyvsp[-1].str));}
#line 1328 "cucu.tab.c"
    break;

  case 13: /* var_decl: Type Id Assign expr sem  */
#line 36 "cucu.y"
                                    {fprintf(output,":=   local variable %s ",(yyvsp[-3].str));}
#line 1334 "cucu.tab.c"
    break;

  case 14: /* var_decl: Type Id L_SB expr R_SB Assign expr sem  */
#line 37 "cucu.y"
                                                    {fprintf(output,"Local variable- %s  ",(yyvsp[-6].str));}
#line 1340 "cucu.tab.c"
    break;

  case 15: /* var_decl: Type Id L_SB expr R_SB sem  */
#line 38 "cucu.y"
                                                {fprintf(output,"\nlocal variable %s\n",(yyvsp[-4].str));}
#line 1346 "cucu.tab.c"
    break;

  case 16: /* func_decl: Type Id lpr args rpr sem  */
#line 41 "cucu.y"
                                            {fprintf(output,"Variable- %s ",(yyvsp[-4].str));}
#line 1352 "cucu.tab.c"
    break;

  case 17: /* func_decl: Type Id lpr rpr sem  */
#line 42 "cucu.y"
                                            {fprintf(output,"Variable- %s ",(yyvsp[-3].str));}
#line 1358 "cucu.tab.c"
    break;

  case 18: /* func_decl: Return expr sem  */
#line 43 "cucu.y"
                                            {fprintf(output," RET ");}
#line 1364 "cucu.tab.c"
    break;

  case 19: /* func_decl: Return lpr expr rpr sem  */
#line 44 "cucu.y"
                                            {fprintf(output," RET ");}
#line 1370 "cucu.tab.c"
    break;

  case 20: /* func_defn: Type Id lpr args rpr func_body  */
#line 47 "cucu.y"
                                             {fprintf(output,"Identifier-%s ",(yyvsp[-4].str));fprintf(output,"\nFuntion Body\n");}
#line 1376 "cucu.tab.c"
    break;

  case 21: /* func_defn: Type Id lpr rpr func_body  */
#line 48 "cucu.y"
                                             {fprintf(output,"Identifier-%s ",(yyvsp[-3].str));fprintf(output,"\nFuntion Body\n");}
#line 1382 "cucu.tab.c"
    break;

  case 22: /* caller: Id lpr call_ags rpr sem  */
#line 50 "cucu.y"
                                             {fprintf(output,"Identifier-%s ",(yyvsp[-4].str));}
#line 1388 "cucu.tab.c"
    break;

  case 23: /* caller: Id lpr rpr sem  */
#line 51 "cucu.y"
                                            {fprintf(output,"Identifier-%s ",(yyvsp[-3].str));}
#line 1394 "cucu.tab.c"
    break;

  case 24: /* call_ags: expr  */
#line 53 "cucu.y"
                                        {fprintf(output,"FUN-ARG\n");}
#line 1400 "cucu.tab.c"
    break;

  case 25: /* call_ags: expr Com call_ags  */
#line 54 "cucu.y"
                                        {fprintf(output,"FUN-ARG\n");}
#line 1406 "cucu.tab.c"
    break;

  case 26: /* args: Type Id  */
#line 57 "cucu.y"
               {fprintf(output,"FUN-ARG\n");}
#line 1412 "cucu.tab.c"
    break;

  case 27: /* args: Id  */
#line 58 "cucu.y"
                      {fprintf(output,"FUN-ARG\n");}
#line 1418 "cucu.tab.c"
    break;

  case 29: /* args: Type Id Com args  */
#line 60 "cucu.y"
                         {fprintf(output,"FUN-ARG\n");}
#line 1424 "cucu.tab.c"
    break;

  case 30: /* args: Id Com args  */
#line 61 "cucu.y"
                    {fprintf(output,"FUN-ARG\n");}
#line 1430 "cucu.tab.c"
    break;

  case 31: /* args: expr Com args  */
#line 62 "cucu.y"
                      {fprintf(output,"FUN-ARG\n");}
#line 1436 "cucu.tab.c"
    break;

  case 32: /* if_st: If lpr expr rpr "{" func_body "}"  */
#line 65 "cucu.y"
                                                                       {fprintf(output,"Identifier-if ");}
#line 1442 "cucu.tab.c"
    break;

  case 33: /* if_st: If lpr expr rpr "{" func_body "}" Else "{" func_body "}"  */
#line 66 "cucu.y"
                                                                       {fprintf(output,"Identifier-if "); fprintf(output," Identifier-else ");}
#line 1448 "cucu.tab.c"
    break;

  case 34: /* while_st: While lpr expr rpr "{" func_body "}"  */
#line 68 "cucu.y"
                                                 {fprintf(output,"Identifier-While  ");}
#line 1454 "cucu.tab.c"
    break;

  case 45: /* expr: expr Plus expr  */
#line 87 "cucu.y"
                        {fprintf(output,"+ ");}
#line 1460 "cucu.tab.c"
    break;

  case 46: /* expr: expr GE expr  */
#line 88 "cucu.y"
                        {fprintf(output,">= ");}
#line 1466 "cucu.tab.c"
    break;

  case 47: /* expr: expr LE expr  */
#line 89 "cucu.y"
                        {fprintf(output,"<= ");}
#line 1472 "cucu.tab.c"
    break;

  case 48: /* expr: expr Less_than expr  */
#line 90 "cucu.y"
                                {fprintf(output,"< ");}
#line 1478 "cucu.tab.c"
    break;

  case 49: /* expr: expr Greater_than expr  */
#line 91 "cucu.y"
                                {fprintf(output,"> ");}
#line 1484 "cucu.tab.c"
    break;

  case 50: /* expr: expr Equalto expr  */
#line 92 "cucu.y"
                                {fprintf(output,"== ");}
#line 1490 "cucu.tab.c"
    break;

  case 51: /* expr: expr Not_Equalto expr  */
#line 93 "cucu.y"
                                {fprintf(output,"!= ");}
#line 1496 "cucu.tab.c"
    break;

  case 52: /* expr: expr And expr  */
#line 94 "cucu.y"
                                {fprintf(output,"AND ");}
#line 1502 "cucu.tab.c"
    break;

  case 53: /* expr: expr Or expr  */
#line 95 "cucu.y"
                                {fprintf(output,"OR ");}
#line 1508 "cucu.tab.c"
    break;

  case 54: /* expr: expr Minus expr  */
#line 96 "cucu.y"
                                {fprintf(output,"- ");}
#line 1514 "cucu.tab.c"
    break;

  case 55: /* expr: expr Divide expr  */
#line 97 "cucu.y"
                                {fprintf(output,"/ ");}
#line 1520 "cucu.tab.c"
    break;

  case 56: /* expr: expr Multiply expr  */
#line 98 "cucu.y"
                                {fprintf(output,"* ");}
#line 1526 "cucu.tab.c"
    break;

  case 61: /* prime_expr: Number  */
#line 105 "cucu.y"
                                {fprintf(output," Const - %d  ",(yyvsp[0].number));}
#line 1532 "cucu.tab.c"
    break;

  case 62: /* prime_expr: Id  */
#line 106 "cucu.y"
                                {fprintf(output,"variable- %s  ",(yyvsp[0].str));}
#line 1538 "cucu.tab.c"
    break;


#line 1542 "cucu.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 109 "cucu.y"



int main(int argc[],char *argv[])
{
extern FILE *yyin,*yyout;
yyin = fopen(argv[1],"r");
yyout = fopen("Lexer.txt","w");
output = fopen("Parser.txt","w");
yyparse();
return 0;
}
