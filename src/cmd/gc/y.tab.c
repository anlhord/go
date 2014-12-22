/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 20 "go.y" /* yacc.c:339  */

#include <u.h>
#include <stdio.h>	/* if we don't, bison will, and go.h re-#defines getc */
#include <libc.h>
#include "go.h"

static void fixlbrace(int);

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    LLITERAL = 258,
    LASOP = 259,
    LCOLAS = 260,
    LBREAK = 261,
    LCASE = 262,
    LCHAN = 263,
    LCONST = 264,
    LCONTINUE = 265,
    LDDD = 266,
    LDEFAULT = 267,
    LDEFER = 268,
    LELSE = 269,
    LFALL = 270,
    LFOR = 271,
    LFUNC = 272,
    LGO = 273,
    LGOTO = 274,
    LIF = 275,
    LIMPORT = 276,
    LINTERFACE = 277,
    LMAP = 278,
    LNAME = 279,
    LPACKAGE = 280,
    LRANGE = 281,
    LRETURN = 282,
    LSELECT = 283,
    LSTRUCT = 284,
    LSWITCH = 285,
    LTYPE = 286,
    LVAR = 287,
    LANDAND = 288,
    LANDNOT = 289,
    LBODY = 290,
    LCOMM = 291,
    LDEC = 292,
    LEQ = 293,
    LGE = 294,
    LGT = 295,
    LIGNORE = 296,
    LINC = 297,
    LLE = 298,
    LLSH = 299,
    LLT = 300,
    LNE = 301,
    LOROR = 302,
    LRSH = 303,
    NotTypedSlice = 304,
    NotPackage = 305,
    NotParen = 306,
    PreferToRightParen = 307
  };
#endif
/* Tokens.  */
#define LLITERAL 258
#define LASOP 259
#define LCOLAS 260
#define LBREAK 261
#define LCASE 262
#define LCHAN 263
#define LCONST 264
#define LCONTINUE 265
#define LDDD 266
#define LDEFAULT 267
#define LDEFER 268
#define LELSE 269
#define LFALL 270
#define LFOR 271
#define LFUNC 272
#define LGO 273
#define LGOTO 274
#define LIF 275
#define LIMPORT 276
#define LINTERFACE 277
#define LMAP 278
#define LNAME 279
#define LPACKAGE 280
#define LRANGE 281
#define LRETURN 282
#define LSELECT 283
#define LSTRUCT 284
#define LSWITCH 285
#define LTYPE 286
#define LVAR 287
#define LANDAND 288
#define LANDNOT 289
#define LBODY 290
#define LCOMM 291
#define LDEC 292
#define LEQ 293
#define LGE 294
#define LGT 295
#define LIGNORE 296
#define LINC 297
#define LLE 298
#define LLSH 299
#define LLT 300
#define LNE 301
#define LOROR 302
#define LRSH 303
#define NotTypedSlice 304
#define NotPackage 305
#define NotParen 306
#define PreferToRightParen 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 28 "go.y" /* yacc.c:355  */

	Node*		node;
	NodeList*		list;
	Type*		type;
	Sym*		sym;
	struct	Val	val;
	int		i;

#line 228 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 243 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2174

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  670

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,    65,    55,    56,     2,
      60,    61,    53,    49,    76,    50,    64,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    63,
       2,    66,     2,    74,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    51,    69,    71,     2,     2,     2,
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
      45,    46,    47,    48,    57,    58,    59,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   136,   142,   153,   153,   168,   169,   172,
     173,   174,   177,   214,   225,   226,   229,   236,   243,   252,
     266,   267,   274,   274,   287,   291,   292,   296,   301,   307,
     311,   315,   319,   325,   331,   337,   342,   346,   350,   356,
     362,   366,   370,   376,   380,   386,   387,   391,   397,   406,
     412,   430,   435,   447,   463,   469,   477,   497,   515,   524,
     543,   542,   557,   556,   588,   591,   598,   597,   608,   614,
     621,   628,   639,   645,   648,   656,   655,   666,   672,   684,
     688,   693,   683,   714,   713,   726,   729,   735,   738,   750,
     754,   749,   772,   771,   787,   788,   792,   796,   800,   804,
     808,   812,   816,   820,   824,   828,   832,   836,   840,   844,
     848,   852,   856,   860,   865,   871,   872,   876,   887,   891,
     895,   899,   904,   908,   918,   922,   927,   935,   939,   940,
     951,   955,   959,   963,   967,   975,   976,   982,   989,   995,
    1002,  1005,  1012,  1018,  1035,  1042,  1043,  1050,  1051,  1070,
    1071,  1074,  1077,  1081,  1092,  1101,  1107,  1110,  1113,  1120,
    1121,  1127,  1140,  1155,  1163,  1175,  1180,  1186,  1190,  1193,
    1194,  1195,  1196,  1197,  1198,  1204,  1205,  1206,  1207,  1213,
    1214,  1215,  1216,  1217,  1223,  1224,  1227,  1230,  1231,  1232,
    1233,  1234,  1237,  1238,  1251,  1255,  1260,  1265,  1270,  1274,
    1275,  1278,  1284,  1291,  1297,  1304,  1310,  1321,  1337,  1366,
    1404,  1429,  1447,  1456,  1459,  1467,  1471,  1475,  1482,  1488,
    1493,  1505,  1508,  1520,  1521,  1527,  1528,  1534,  1538,  1544,
    1545,  1551,  1555,  1561,  1584,  1589,  1595,  1601,  1608,  1617,
    1626,  1641,  1647,  1652,  1656,  1663,  1676,  1677,  1683,  1689,
    1692,  1696,  1702,  1705,  1714,  1717,  1718,  1722,  1723,  1729,
    1730,  1731,  1732,  1733,  1735,  1734,  1749,  1755,  1759,  1763,
    1767,  1771,  1776,  1795,  1801,  1809,  1813,  1819,  1823,  1829,
    1833,  1839,  1843,  1852,  1856,  1860,  1864,  1870,  1873,  1881,
    1882,  1884,  1885,  1888,  1891,  1894,  1897,  1900,  1903,  1906,
    1909,  1912,  1915,  1918,  1921,  1924,  1927,  1933,  1937,  1941,
    1945,  1949,  1953,  1973,  1980,  1991,  1992,  1993,  1996,  1997,
    2000,  2004,  2014,  2018,  2022,  2026,  2030,  2034,  2038,  2044,
    2050,  2058,  2066,  2072,  2079,  2095,  2117,  2121,  2127,  2130,
    2133,  2137,  2147,  2151,  2170,  2178,  2179,  2191,  2192,  2195,
    2199,  2205,  2209,  2215,  2219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
const char *yytname[] =
{
  "$end", "error", "$undefined", "LLITERAL", "LASOP", "LCOLAS", "LBREAK",
  "LCASE", "LCHAN", "LCONST", "LCONTINUE", "LDDD", "LDEFAULT", "LDEFER",
  "LELSE", "LFALL", "LFOR", "LFUNC", "LGO", "LGOTO", "LIF", "LIMPORT",
  "LINTERFACE", "LMAP", "LNAME", "LPACKAGE", "LRANGE", "LRETURN",
  "LSELECT", "LSTRUCT", "LSWITCH", "LTYPE", "LVAR", "LANDAND", "LANDNOT",
  "LBODY", "LCOMM", "LDEC", "LEQ", "LGE", "LGT", "LIGNORE", "LINC", "LLE",
  "LLSH", "LLT", "LNE", "LOROR", "LRSH", "'+'", "'-'", "'|'", "'^'", "'*'",
  "'/'", "'%'", "'&'", "NotTypedSlice", "NotPackage", "NotParen", "'('",
  "')'", "PreferToRightParen", "';'", "'.'", "'$'", "'='", "':'", "'{'",
  "'}'", "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept",
  "file", "package", "loadsys", "$@1", "imports", "import", "import_stmt",
  "import_stmt_list", "import_here", "import_package", "import_safety",
  "import_there", "$@2", "xdcl", "common_dcl", "lconst", "vardcl",
  "constdcl", "constdcl1", "typedclname", "typedcl", "simple_stmt", "case",
  "compound_stmt", "$@3", "caseblock", "$@4", "caseblock_list",
  "loop_body", "$@5", "range_stmt", "for_header", "for_body", "for_stmt",
  "$@6", "if_header", "if_stmt", "$@7", "$@8", "$@9", "elseif", "$@10",
  "elseif_list", "else", "switch_stmt", "$@11", "$@12", "select_stmt",
  "$@13", "expr", "uexpr", "pseudocall", "pexpr_no_paren", "start_complit",
  "keyval", "bare_complitexpr", "complitexpr", "pexpr", "expr_or_type",
  "name_or_type", "lbrace", "new_name", "dcl_name", "onew_name", "sym",
  "hidden_importsym", "name", "labelname", "dotdotdot", "ontype", "ntype",
  "non_expr_type", "non_recvchantype", "convtype", "comptype",
  "fnret_type", "dotname", "othertype", "ptrtype", "recvchantype",
  "structtype", "interfacetype", "xfndcl", "fndcl", "hidden_fndcl",
  "fntype", "fnbody", "fnres", "fnlitdcl", "fnliteral", "xdcl_list",
  "vardcl_list", "constdcl_list", "typedcl_list", "structdcl_list",
  "interfacedcl_list", "structdcl", "packname", "embed", "interfacedcl",
  "indcl", "arg_type", "arg_type_list", "oarg_type_list_ocomma", "stmt",
  "non_dcl_stmt", "$@14", "stmt_list", "new_name_list", "dcl_name_list",
  "expr_list", "expr_or_type_list", "keyval_list", "braced_keyval_list",
  "osemi", "ocomma", "oexpr", "oexpr_list", "osimple_stmt",
  "ohidden_funarg_list", "ohidden_structdcl_list",
  "ohidden_interfacedcl_list", "oliteral", "hidden_import",
  "hidden_pkg_importsym", "hidden_pkgtype", "hidden_type",
  "hidden_type_non_recv_chan", "hidden_type_misc", "hidden_type_recv_chan",
  "hidden_type_func", "hidden_funarg", "hidden_structdcl",
  "hidden_interfacedcl", "ohidden_funres", "hidden_funres",
  "hidden_literal", "hidden_constant", "hidden_import_list",
  "hidden_funarg_list", "hidden_structdcl_list",
  "hidden_interfacedcl_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    43,
      45,   124,    94,    42,    47,    37,    38,   304,   305,   306,
      40,    41,   307,    59,    46,    36,    61,    58,   123,   125,
      33,   126,    91,    93,    63,    64,    44
};
# endif

#define YYPACT_NINF -514

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-514)))

#define YYTABLE_NINF -280

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -514,    50,    35,    37,  -514,    19,  -514,    97,  -514,  -514,
    -514,   143,    90,  -514,   150,   158,  -514,  -514,   129,  -514,
      52,   133,  1011,  -514,   146,   286,    29,  -514,   116,   215,
    -514,    37,   217,  -514,  -514,  -514,    19,  1771,  -514,    19,
     341,  -514,  -514,    27,   341,    19,  -514,   148,   155,  1631,
    -514,   148,  -514,   411,   415,  1631,  1631,  1631,  1631,  1631,
    1631,  1671,  1631,  1631,  1295,   165,  -514,   487,  -514,  -514,
    -514,  -514,  -514,   865,  -514,  -514,   162,   173,  -514,   168,
    -514,   175,   195,   148,   206,  -514,  -514,  -514,   218,    36,
    -514,  -514,    75,  -514,   214,    -1,   273,   214,   214,   235,
    -514,  -514,  -514,  -514,  -514,   239,  -514,  -514,  -514,  -514,
    -514,  -514,  -514,   250,  1791,  1791,  1791,  -514,   255,  -514,
    -514,  -514,  -514,  -514,  -514,   227,   173,  1335,  1751,   264,
     265,   268,  -514,  1631,  -514,  -514,   351,  1791,  2071,   256,
    -514,   312,   404,  1631,   395,  1791,  -514,  -514,   442,  -514,
    -514,  -514,   459,  -514,  -514,  -514,  -514,  -514,  -514,  1711,
    1671,  2071,   298,  -514,    21,  -514,   223,  -514,  -514,   282,
    2071,   289,  -514,   489,  -514,   552,  1631,  1631,  1631,  1631,
    -514,  1631,  1631,  1631,  -514,  1631,  1631,  1631,  1631,  1631,
    1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,  -514,
    1375,   512,  1631,  -514,  1631,  -514,  -514,  1239,  1631,  1631,
    1631,  -514,   615,    19,   265,   300,   365,  -514,   703,   703,
    -514,   151,   308,  -514,  1751,   363,  1791,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,   324,    19,  1631,  -514,  -514,   345,
    -514,   134,   323,  1791,  -514,  1751,  -514,  -514,  -514,   314,
     342,  1751,  1239,  -514,  -514,   339,    92,   383,  -514,   348,
     347,  -514,  -514,   349,  -514,    39,   106,  -514,  -514,   355,
    -514,  -514,   409,   623,  -514,  -514,  -514,   361,  -514,  -514,
    -514,   364,  1631,    19,   367,  1811,  -514,   366,  1791,  1791,
    -514,   387,  1631,   375,  2071,  2118,  -514,  1055,   812,   812,
     812,   812,  -514,   812,   812,  2095,  -514,   837,   837,   837,
     837,  -514,  -514,  -514,  -514,  1415,  -514,  -514,    34,  1471,
    -514,  1965,   379,  1144,  1931,  1415,  -514,  -514,  -514,  -514,
    -514,  -514,    -5,   256,   256,  2071,  1871,   391,   397,   400,
    -514,   406,   472,   703,   157,    44,  -514,   425,  -514,  -514,
    -514,   695,  -514,    14,   430,    19,   433,   434,   437,  -514,
    -514,   443,  1791,   444,  -514,  -514,  2071,  -514,  -514,  1511,
    1551,  1631,  -514,  -514,  -514,  1751,  -514,  1831,   446,    95,
     345,  1631,    19,   451,   457,  1751,  -514,   547,   452,  1791,
     117,   383,   409,   383,   462,   424,   455,  -514,  -514,    19,
     409,   494,    19,   469,    19,   471,   256,  -514,  1631,  1851,
    1791,  -514,   226,   238,   244,   266,  -514,  -514,  -514,  -514,
      19,   477,   256,  1631,  -514,  1996,  -514,  -514,   467,   480,
     476,  1671,   492,   497,   498,  -514,  1631,  -514,  -514,   504,
     508,  1239,  1144,  -514,   703,   531,  -514,  -514,  -514,    19,
     926,   703,    19,   703,  -514,  -514,   570,   261,  -514,  -514,
     515,   507,   703,   157,   703,   409,    19,    19,  -514,   521,
     516,  -514,  -514,  -514,  1831,  -514,  1239,  1631,  1631,   520,
    -514,  1751,   524,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
    1831,  -514,  -514,  -514,  -514,  -514,   532,  -514,  -514,  -514,
    1671,   529,  -514,  -514,  -514,   537,  -514,   539,   409,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,   256,   540,
    1415,  -514,  -514,   541,   552,  -514,   256,  1415,  1591,  1415,
    -514,  -514,   542,  -514,  -514,  -514,  -514,   247,  -514,  -514,
     252,  -514,  -514,   545,   553,   548,   557,   559,   551,  -514,
    -514,   562,   561,   703,   566,  -514,   573,  -514,  -514,   593,
    -514,   703,  -514,   580,   409,  -514,   588,  -514,  1891,   287,
    2071,  2071,  1631,   589,  1751,  -514,  -514,  1831,    31,  -514,
    1144,   409,   409,  -514,   260,   319,   584,    19,   594,   375,
     585,  -514,  2071,  -514,  -514,  -514,  -514,  1631,  -514,  -514,
    -514,  1891,    19,  -514,   926,   703,   409,  -514,    19,   261,
    -514,  -514,  -514,    19,    19,  -514,  -514,  -514,  -514,  -514,
    -514,   595,   635,  -514,  1631,  1631,  -514,  1671,   597,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  1415,   591,  -514,   601,
    -514,  -514,  -514,  -514,   605,   608,   609,  1831,    41,  -514,
    -514,  2021,  2046,   602,  -514,  1891,  -514,  1891,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  1631,   345,  -514
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     0,     1,     0,     7,     0,    22,   158,
     160,     0,     0,   159,   221,    20,     6,   347,     0,     4,
       0,     0,     0,    21,     0,     0,     0,    16,     0,     0,
       9,    22,     0,     8,    28,   127,   156,     0,    39,   156,
       0,   266,    75,     0,     0,     0,    79,     0,     0,   295,
      92,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,     0,    25,     0,   259,   260,
     263,   261,   262,    50,    94,   135,   147,   115,   164,   163,
     128,     0,     0,     0,   186,   199,   200,    26,   218,     0,
     140,    27,     0,    19,     0,     0,     0,     0,     0,     0,
     348,   161,   162,    11,    14,   289,    18,    22,    13,    17,
     157,   267,   154,     0,     0,     0,     0,   163,   192,   196,
     182,   180,   181,   179,   268,   135,     0,   297,   252,     0,
     213,   135,   271,   297,   152,   153,     0,     0,   279,   296,
     272,     0,     0,   297,     0,     0,    36,    48,     0,    29,
     277,   155,     0,   123,   118,   119,   122,   116,   117,     0,
       0,   149,     0,   150,   177,   175,   176,   120,   121,     0,
     294,     0,   222,     0,    32,     0,     0,     0,     0,     0,
      55,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   293,   264,     0,   141,   220,     0,     0,     0,
       0,   313,     0,     0,   213,     0,     0,   314,     0,     0,
      23,   290,     0,    12,   252,     0,     0,   197,   173,   171,
     172,   169,   170,   201,     0,     0,     0,   298,    73,     0,
      76,     0,    72,   165,   246,   163,   249,   151,   250,   291,
       0,   252,     0,   207,    80,    77,   158,     0,   206,     0,
     289,   243,   231,     0,    64,     0,     0,   204,   275,   289,
     229,   241,   305,     0,    90,    38,   227,   289,    49,    31,
     223,   289,     0,     0,    40,     0,   178,   148,     0,   167,
      35,   289,     0,     0,    51,    96,   111,   114,    97,   101,
     102,   100,   112,    99,    98,    95,   113,   103,   104,   105,
     106,   107,   108,   109,   110,   287,   124,   281,   291,     0,
     129,   294,     0,     0,   291,   287,   258,    60,   256,   255,
     273,   257,     0,    53,    52,   280,     0,     0,     0,     0,
     321,     0,     0,     0,     0,     0,   320,     0,   315,   316,
     317,     0,   349,     0,     0,   299,     0,     0,     0,    15,
      10,     0,     0,     0,   183,   193,    70,    66,    74,     0,
       0,   297,   166,   247,   248,   292,   253,   215,     0,     0,
       0,   297,     0,   239,     0,   252,   242,   290,     0,     0,
       0,     0,   305,     0,     0,   290,     0,   306,   234,     0,
     305,     0,   290,     0,   290,     0,    42,   278,     0,     0,
       0,   202,   173,   171,   172,   170,   141,   195,   194,   168,
     290,     0,    44,     0,   141,   143,   283,   284,   291,     0,
     291,   292,     0,     0,     0,   132,   293,   265,   292,     0,
       0,     0,     0,   219,     0,     0,   328,   318,   319,   299,
     303,     0,   301,     0,   327,   342,     0,     0,   344,   345,
       0,     0,     0,     0,     0,   305,     0,     0,   312,     0,
     300,   307,   311,   308,   215,   174,     0,     0,     0,     0,
     251,   252,   163,   216,   191,   189,   190,   187,   188,   212,
     215,   214,    81,    78,   240,   244,     0,   232,   205,   198,
       0,     0,    93,    62,    65,     0,   236,     0,   305,   230,
     203,   276,   233,    64,   228,    37,   224,    30,    41,     0,
     287,    45,   225,   289,    47,    33,    43,   287,     0,   292,
     288,   138,     0,   282,   125,   131,   130,     0,   136,   137,
       0,   274,   330,     0,     0,   321,     0,   320,     0,   337,
     353,   304,     0,     0,     0,   351,   302,   331,   343,     0,
     309,     0,   322,     0,   305,   333,     0,   350,   338,     0,
      69,    68,   297,     0,   252,   208,    85,   215,     0,    59,
       0,   305,   305,   235,     0,   174,     0,   290,     0,    46,
       0,   141,   145,   142,   285,   286,   126,   293,   133,    61,
     329,   338,   299,   326,     0,     0,   305,   325,     0,     0,
     323,   310,   334,   299,   299,   341,   210,   339,    67,    71,
     217,     0,    87,   245,     0,     0,    56,     0,    63,   238,
     237,    91,   139,   226,    34,   144,   287,     0,   332,     0,
     354,   324,   335,   352,     0,     0,     0,   215,     0,    86,
      82,     0,     0,     0,   134,   338,   346,   338,   340,   209,
      83,    88,    58,    57,   146,   336,   211,   297,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -514,  -514,  -514,  -514,  -514,  -514,  -514,    -9,  -514,  -514,
     627,  -514,     4,  -514,  -514,   651,  -514,  -136,   -28,    87,
    -514,  -126,  -111,  -514,    32,  -514,  -514,  -514,   164,  -369,
    -514,  -514,  -514,  -514,  -514,  -514,  -140,  -514,  -514,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,  -514,
     614,    10,    93,  -514,  -195,   153,   156,  -514,   248,   -57,
     439,     3,   -11,   396,   647,   378,   104,    20,  -514,   447,
    -514,   599,   528,  -514,  -514,  -514,  -514,   -36,   -37,   -31,
     -38,  -514,  -514,  -514,  -514,  -514,   -32,   475,  -459,  -514,
    -514,  -514,  -514,  -514,  -514,  -514,  -514,   296,  -110,  -217,
     306,  -514,   321,  -514,  -207,  -310,   672,  -514,  -238,  -514,
     -59,   -42,   200,  -514,  -323,  -239,  -278,  -193,  -514,  -112,
    -429,  -514,  -514,  -359,  -514,   294,  -514,   290,  -514,   368,
     257,   371,   243,   108,   119,  -513,  -514,  -430,   258,  -514,
     517,  -514,  -514
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     3,    14,    21,    30,   105,    31,
       8,    24,    16,    17,    65,   328,    67,   149,   521,   522,
     145,   146,    68,   503,   329,   441,   504,   580,   390,   368,
     476,   238,   239,   240,    69,   127,   254,    70,   133,   380,
     576,   649,   667,   622,   650,    71,   143,   401,    72,   141,
      73,    74,    75,    76,   315,   426,   427,   593,    77,   317,
     244,   136,    78,   150,   111,   117,    13,    80,    81,   246,
     418,   247,   163,   119,    82,    83,   483,   228,    84,   230,
     231,    85,    86,    87,   130,   214,    88,   253,   489,    89,
      90,    22,   281,   523,   277,   269,   260,   270,   271,   272,
     262,   386,   248,   249,   250,   330,   331,   323,   332,   273,
     152,    92,   318,   428,   429,   222,   376,   171,   140,   255,
     469,   554,   548,   398,   100,   212,   218,   615,   446,   348,
     349,   350,   352,   555,   550,   616,   617,   459,   460,    25,
     470,   556,   551
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     121,   120,   440,   274,   162,   123,   122,   139,   175,   322,
     325,   492,   280,   437,   379,   242,   237,   361,   276,   104,
     544,   388,   237,   165,   164,   110,   261,   559,   110,   166,
     396,   575,   237,   506,   132,   108,   624,   206,   403,   174,
     432,   512,   405,     9,   378,   430,   439,   461,   392,   394,
       4,     9,   421,   101,   142,    27,  -186,   118,   442,   213,
       5,   660,     7,   383,   443,   153,   154,   155,   156,   157,
     158,   134,   167,   168,    11,   466,     9,   229,   229,   229,
     208,  -185,   232,   232,   232,   241,   205,   128,   638,  -186,
     467,   229,   207,    10,    11,  -239,   232,   625,   626,   391,
     229,    10,    11,   102,   135,   232,   565,   627,   229,   327,
     431,   223,    28,   232,   175,   229,    29,   462,   623,    27,
     232,    15,   165,   164,   500,   259,    10,    11,   166,   501,
     383,   268,   541,   125,   118,   118,   118,   131,   229,   369,
       9,   209,   665,   232,   666,   291,    18,   384,   118,   583,
     530,   210,   532,    19,    27,  -239,   382,   118,   442,   393,
     455,  -239,   165,   164,   491,   118,   333,   334,   166,   153,
     157,    20,   118,   639,   505,     9,   507,   103,   496,   644,
      29,     9,    23,   134,   645,   646,   502,   229,   659,   229,
      10,    11,   232,    26,   232,   118,    33,   586,   211,   211,
     370,   211,   211,   540,   590,   612,   229,   456,   229,    93,
     210,   232,   359,   232,   229,    29,   135,   457,   106,   232,
     109,   520,   629,   630,  -218,    10,    11,   137,   172,   527,
     199,    10,    11,   200,  -270,  -154,   229,   201,   569,  -270,
     406,   232,   203,   537,   118,   202,   118,   642,   413,   412,
     422,   229,   229,   415,   414,   204,   232,   232,  -218,   479,
     237,  -182,   434,   118,   455,   118,  -185,   500,   516,   493,
     237,   118,   501,  -180,   573,  -269,   514,   261,  -184,  -181,
    -269,   165,   164,  -184,   588,     9,  -182,   166,   126,    11,
    -270,  -218,   126,   118,  -182,    94,  -270,   216,  -180,   669,
     220,  -179,   221,    95,  -181,   118,  -180,    96,   118,   118,
     224,   456,  -181,   653,   597,   442,   346,    97,    98,   235,
     598,   599,   346,   346,   251,   229,  -179,   333,   334,   631,
     232,  -269,   210,   252,  -179,    10,    11,  -269,   229,   487,
     485,   484,   628,   232,    35,   488,   486,   264,   229,    37,
     442,    99,   229,   232,  -183,   288,   618,   232,   113,   287,
     355,   524,   289,    47,    48,     9,   518,   621,   356,   360,
      51,   362,   229,   229,   533,   256,   259,   232,   232,  -183,
     367,   526,   118,    12,   268,   364,   371,  -183,   511,   215,
     375,   217,   219,   165,   164,   118,   636,   118,    32,   166,
      79,    61,   381,   377,   637,   118,    32,   383,   385,   118,
     387,   257,   397,    64,   112,    10,    11,   112,   395,     9,
     258,   129,   389,   112,   402,    10,    11,   404,   256,   118,
     118,   147,   151,   408,   416,     9,   487,   485,   484,     9,
     346,   423,   488,   486,   229,   151,   436,   346,   256,   232,
     420,   449,   487,   485,   484,   346,   275,   265,   488,   486,
     619,   237,   165,   164,   266,   450,     9,    37,   166,    10,
      11,   144,   451,   267,   452,   148,   113,   265,    10,    11,
     453,    47,    48,     9,   266,    10,    11,   229,    51,    10,
      11,   463,   232,   468,   118,   225,   471,   472,    10,    11,
     473,   118,   347,   279,   474,   475,   245,   490,   357,   358,
     118,     9,   115,     9,   112,   382,    10,    11,   495,   226,
     112,   498,   147,   508,   510,   282,   151,   668,   524,   513,
     515,    64,   517,    10,    11,   283,     9,   229,   525,   487,
     485,   484,   232,   529,   118,   488,   486,   173,   346,   531,
     290,   151,   438,   534,   547,   346,   237,   346,   535,   536,
      37,    10,    11,    10,    11,   538,   346,   342,   346,   113,
     533,   256,   319,   558,    47,    48,     9,   539,   560,   320,
     561,    51,   568,   572,   574,    79,    10,    11,   225,   165,
     164,   351,   467,   577,   118,   166,   579,   118,   581,    32,
     582,   585,   245,   596,   587,   115,   600,   257,  -158,   487,
     485,   484,   226,   365,   601,   488,   486,   602,   292,  -159,
     603,    10,    11,   336,    64,   604,    10,    11,   283,   245,
      79,    37,   337,   454,   605,   607,   608,   338,   339,   340,
     113,   465,   609,   611,   341,    47,    48,     9,   613,   648,
     620,   342,    51,   632,   635,   634,   647,   346,   107,   225,
     442,   151,   655,   138,   654,   346,   656,   118,   343,   657,
     658,   664,   346,    66,   633,   161,   115,   584,   170,   407,
     661,   344,   594,   226,   373,   595,   124,   345,   286,   354,
      11,   509,   374,   497,    91,    64,   480,    10,    11,   399,
     578,    79,   543,   336,   447,   346,   464,   448,   547,   346,
     567,   336,   337,   227,   233,   234,   643,   338,   339,   340,
     337,   563,   458,   640,   341,   338,   339,   340,     0,     0,
     353,   342,   341,   351,   542,     0,   263,     0,     0,   342,
     549,   552,     0,   557,   278,     0,     0,     0,   343,     0,
       0,   284,   562,   245,   564,   482,   343,     0,     0,   346,
     494,   346,     0,   245,     0,   112,     0,   345,     0,     0,
      11,     0,     0,   112,   293,   345,     0,   112,    11,     0,
     147,     0,   151,     0,     0,     0,     0,     0,     0,     0,
     294,   295,   296,   297,     0,   298,   299,   300,   151,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,   161,     0,   321,     0,   324,    79,
      79,     0,   138,   138,   335,   363,     0,   351,   546,     0,
     553,     0,     0,     0,     0,   458,     0,     0,     0,     0,
       0,   458,   372,   606,   566,   351,   178,     0,     0,     0,
     366,   610,     0,     0,    79,     0,   186,     0,     0,   245,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   176,
    -279,   178,   400,     0,     0,     0,     0,     0,     0,     0,
       0,   186,     0,     0,   411,   190,     0,   417,   419,     0,
     195,   196,   197,   198,   549,   641,   138,     0,   177,   178,
       0,   179,   180,   181,   182,   183,   138,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,     0,     0,     0,     0,     0,   425,
       0,  -279,     0,   161,   336,     0,     0,     0,     0,   425,
       0,  -279,     0,   337,     0,     0,     0,     0,   338,   339,
     545,     0,   245,     0,     0,   341,     0,     0,    79,     0,
       0,   411,   342,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     351,     0,   546,   138,   138,     0,   553,   458,   499,     0,
       0,   351,   351,     0,     0,     0,     0,     0,   345,     0,
      10,    11,     0,     0,     0,     0,     0,     0,   227,   519,
       0,    -2,    34,     0,    35,     0,     0,    36,     0,    37,
      38,    39,   138,     0,    40,     0,    41,    42,    43,    44,
      45,    46,     0,    47,    48,     9,     0,   138,    49,    50,
      51,    52,    53,    54,     0,   161,     0,    55,     0,     0,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,    58,    59,     0,     0,    60,     0,     0,
       0,    61,     0,     0,   -24,     0,     0,     0,     0,     0,
       0,    62,    63,    64,     0,    10,    11,     0,   177,   178,
       0,   570,   571,   181,   182,   183,     0,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     0,     0,   589,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,     0,     0,     0,     0,     0,
       0,   425,   592,   425,     0,   326,     0,    35,     0,     0,
      36,  -254,    37,    38,    39,     0,  -254,    40,     0,    41,
      42,   113,    44,    45,    46,     0,    47,    48,     9,     0,
       0,    49,    50,    51,    52,    53,    54,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,    58,    59,     0,     0,
      60,     0,     0,     0,    61,     0,     0,  -254,     0,     0,
       0,   170,   327,  -254,    62,    63,    64,     0,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,   652,
     326,   161,    35,     0,     0,    36,     0,    37,    38,    39,
     425,     0,    40,     0,    41,    42,   113,    44,    45,    46,
       0,    47,    48,     9,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,    58,    59,     0,     0,    60,     0,     0,    35,    61,
       0,     0,  -254,    37,     0,     0,   169,   327,  -254,    62,
      63,    64,   113,    10,    11,     0,     0,    47,    48,     9,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,    37,    56,    57,     0,    58,    59,     0,
       0,    60,   113,     0,     0,    61,     0,    47,    48,     9,
       0,   236,     0,     0,    51,    62,    63,    64,     0,    10,
      11,    55,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,    37,    56,    57,     0,    58,    59,     0,
       0,    60,   113,     0,     0,    61,     0,    47,    48,     9,
       0,     0,     0,     0,    51,    62,    63,    64,     0,    10,
      11,   159,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,    37,    56,    57,     0,    58,   160,     0,
       0,    60,   113,     0,     0,    61,   316,    47,    48,     9,
       0,     0,     0,     0,    51,    62,    63,    64,     0,    10,
      11,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     0,    58,    59,     0,
       0,    60,     0,     0,    35,    61,     0,     0,     0,    37,
       0,     0,     0,   424,     0,    62,    63,    64,   113,    10,
      11,     0,     0,    47,    48,     9,     0,     0,     0,     0,
      51,     0,   433,     0,     0,     0,     0,   159,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      56,    57,     0,    58,   160,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,   477,     0,     0,
      51,    62,    63,    64,     0,    10,    11,    55,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      56,    57,     0,    58,    59,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,   478,     0,     0,
      51,    62,    63,    64,     0,    10,    11,    55,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      56,    57,     0,    58,    59,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,     0,     0,     0,
      51,    62,    63,    64,     0,    10,    11,    55,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      56,    57,     0,    58,    59,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,     0,     0,   591,
      51,    62,    63,    64,     0,    10,    11,    55,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    37,
      56,    57,     0,    58,    59,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,     0,     0,     0,
      51,    62,    63,    64,     0,    10,    11,   159,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,   285,
      56,    57,     0,    58,   160,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,     0,     0,     0,
      51,    62,    63,    64,     0,    10,    11,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      56,    57,   243,    58,    59,     0,     0,    60,   113,     0,
       0,    61,     0,    47,    48,     9,     0,     0,     0,    37,
      51,    62,    63,    64,     0,    10,    11,   225,   113,     0,
       0,     0,     0,    47,    48,     9,     0,     0,     0,    37,
      51,     0,     0,     0,   115,     0,     0,   114,   113,     0,
       0,   226,     0,    47,    48,     9,     0,     0,     0,    37,
      51,     0,     0,    64,   115,    10,    11,   225,   113,     0,
       0,   116,     0,    47,    48,     9,     0,     0,     0,    37,
      51,     0,     0,    64,   115,    10,    11,   409,   113,     0,
       0,   226,     0,    47,    48,     9,     0,     0,     0,   285,
      51,     0,     0,    64,   115,    10,    11,   225,   113,     0,
       0,   410,     0,    47,    48,     9,     0,     0,     0,   336,
      51,     0,     0,    64,   115,    10,    11,   225,   337,     0,
       0,   481,     0,   338,   339,   340,     0,     0,     0,   336,
     341,     0,     0,    64,   115,    10,    11,   444,   337,     0,
       0,   226,     0,   338,   339,   340,     0,     0,     0,     0,
     341,     0,     0,    64,   343,    10,    11,   342,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   345,   343,     0,    11,     0,     0,     0,
       0,   614,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   345,   177,   178,    11,   179,     0,   181,
     182,   183,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,   178,
       0,   179,     0,   181,   182,   183,     0,   438,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,     0,     0,     0,     0,     0,   177,
     178,     0,   179,     0,   181,   182,   183,     0,   435,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,     0,   177,   178,     0,   179,     0,   181,
     182,   183,     0,   528,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,     0,   177,
     178,     0,   179,     0,   181,   182,   183,     0,   662,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,     0,   177,   178,     0,   179,     0,   181,
     182,   183,     0,   663,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   177,   178,
       0,     0,     0,   181,   182,   183,     0,     0,   185,   186,
     187,   188,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   178,     0,     0,     0,   181,   182,   183,     0,
       0,   185,   186,   187,   188,     0,   190,   191,   192,   193,
     194,   195,   196,   197,   198
};

static const yytype_int16 yycheck[] =
{
      37,    37,   325,   143,    61,    37,    37,    49,    67,   202,
     205,   380,   148,   323,   252,   127,   127,   224,   144,    28,
     449,   260,   133,    61,    61,    36,   136,   457,    39,    61,
     269,   490,   143,   392,    45,    31,     5,     1,   277,    67,
     318,   400,   281,    24,   251,    11,   324,     3,   265,   266,
       0,    24,   291,    24,    51,     3,    35,    37,    63,    60,
      25,    20,    25,    24,    69,    55,    56,    57,    58,    59,
      60,    35,    62,    63,    75,    61,    24,   114,   115,   116,
       5,    60,   114,   115,   116,   127,    83,    60,   601,    68,
      76,   128,    89,    74,    75,     3,   128,    66,    67,    60,
     137,    74,    75,    74,    68,   137,   465,    76,   145,    68,
      76,   107,    60,   145,   173,   152,    64,    73,   577,     3,
     152,    24,   160,   160,     7,   136,    74,    75,   160,    12,
      24,   142,   442,    40,   114,   115,   116,    44,   175,     5,
      24,    66,   655,   175,   657,   173,     3,   257,   128,   508,
     428,    76,   430,    63,     3,    63,    64,   137,    63,    53,
       3,    69,   200,   200,    69,   145,   208,   209,   200,   159,
     160,    21,   152,   602,   391,    24,   393,    61,   385,   609,
      64,    24,    24,    35,   613,   614,    69,   224,   647,   226,
      74,    75,   224,    64,   226,   175,    63,   520,    94,    95,
      66,    97,    98,   441,   527,   564,   243,    50,   245,    63,
      76,   243,   221,   245,   251,    64,    68,    60,     3,   251,
       3,   416,   581,   582,     1,    74,    75,    72,    63,   424,
      68,    74,    75,    60,     7,    67,   273,    64,   476,    12,
     282,   273,    67,   436,   224,    72,   226,   606,   285,   285,
     292,   288,   289,   285,   285,    60,   288,   289,    35,   371,
     371,    35,   319,   243,     3,   245,    60,     7,   404,   381,
     381,   251,    12,    35,   481,     7,   402,   387,    60,    35,
      12,   319,   319,    60,   523,    24,    60,   319,    40,    75,
      63,    68,    44,   273,    68,     9,    69,    24,    60,   668,
      65,    35,    63,    17,    60,   285,    68,    21,   288,   289,
      60,    50,    68,   636,    67,    63,   212,    31,    32,    64,
      73,    69,   218,   219,    60,   362,    60,   369,   370,    69,
     362,    63,    76,    68,    68,    74,    75,    69,   375,   377,
     377,   377,   580,   375,     3,   377,   377,    35,   385,     8,
      63,    65,   389,   385,    35,    73,    69,   389,    17,    61,
      60,   420,    73,    22,    23,    24,   408,   574,     3,    61,
      29,     8,   409,   410,   431,    24,   387,   409,   410,    60,
      35,   423,   362,     5,   395,    61,    63,    68,   399,    95,
      76,    97,    98,   431,   431,   375,   591,   377,    20,   431,
      22,    60,    63,    61,   597,   385,    28,    24,    60,   389,
      63,    60,     3,    72,    36,    74,    75,    39,    63,    24,
      69,    43,    73,    45,    63,    74,    75,    63,    24,   409,
     410,    53,    54,    66,    68,    24,   474,   474,   474,    24,
     336,    66,   474,   474,   481,    67,    67,   343,    24,   481,
      63,    60,   490,   490,   490,   351,    61,    53,   490,   490,
     572,   572,   500,   500,    60,    68,    24,     8,   500,    74,
      75,    60,    72,    69,    68,    60,    17,    53,    74,    75,
       8,    22,    23,    24,    60,    74,    75,   524,    29,    74,
      75,    66,   524,    63,   474,    36,    63,    63,    74,    75,
      63,   481,   212,    61,    61,    61,   128,    61,   218,   219,
     490,    24,    53,    24,   136,    64,    74,    75,    61,    60,
     142,    69,   144,    61,    69,    66,   148,   667,   587,    35,
      61,    72,    61,    74,    75,    76,    24,   574,    61,   577,
     577,   577,   574,    76,   524,   577,   577,    60,   444,    69,
      61,   173,    76,    61,   450,   451,   667,   453,    61,    61,
       8,    74,    75,    74,    75,    61,   462,    36,   464,    17,
     627,    24,    60,     3,    22,    23,    24,    69,    63,   201,
      73,    29,    61,    63,    60,   207,    74,    75,    36,   627,
     627,   213,    76,    61,   574,   627,    67,   577,    61,   221,
      61,    61,   224,    61,    63,    53,    61,    60,    60,   647,
     647,   647,    60,   235,    61,   647,   647,    60,    66,    60,
      69,    74,    75,     8,    72,    63,    74,    75,    76,   251,
     252,     8,    17,   343,    73,    69,    63,    22,    23,    24,
      17,   351,    49,    63,    29,    22,    23,    24,    60,    14,
      61,    36,    29,    69,    69,    61,    61,   553,    31,    36,
      63,   283,    61,    49,    73,   561,    61,   647,    53,    61,
      61,    69,   568,    22,   587,    61,    53,   513,    64,   283,
     648,    66,   529,    60,   245,   529,    39,    72,   160,   214,
      75,   395,   245,   387,    22,    72,   375,    74,    75,    76,
     500,   323,   445,     8,   336,   601,    11,   336,   604,   605,
     467,     8,    17,   114,   115,   116,   608,    22,    23,    24,
      17,   463,   344,   604,    29,    22,    23,    24,    -1,    -1,
     213,    36,    29,   355,   444,    -1,   137,    -1,    -1,    36,
     450,   451,    -1,   453,   145,    -1,    -1,    -1,    53,    -1,
      -1,   152,   462,   375,   464,   377,    53,    -1,    -1,   655,
     382,   657,    -1,   385,    -1,   387,    -1,    72,    -1,    -1,
      75,    -1,    -1,   395,   175,    72,    -1,   399,    75,    -1,
     402,    -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,   177,   178,   179,    -1,   181,   182,   183,   420,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,   200,    -1,   202,    -1,   204,   441,
     442,    -1,   208,   209,   210,   226,    -1,   449,   450,    -1,
     452,    -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,    -1,
      -1,   463,   243,   553,   466,   467,    34,    -1,    -1,    -1,
     236,   561,    -1,    -1,   476,    -1,    44,    -1,    -1,   481,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     4,
       5,    34,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,   285,    48,    -1,   288,   289,    -1,
      53,    54,    55,    56,   604,   605,   282,    -1,    33,    34,
      -1,    36,    37,    38,    39,    40,   292,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    66,    -1,   319,     8,    -1,    -1,    -1,    -1,   325,
      -1,    76,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,   574,    -1,    -1,    29,    -1,    -1,   580,    -1,
      -1,   362,    36,    -1,    -1,   587,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
     602,    -1,   604,   369,   370,    -1,   608,   609,   389,    -1,
      -1,   613,   614,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,   409,   410,
      -1,     0,     1,    -1,     3,    -1,    -1,     6,    -1,     8,
       9,    10,   408,    -1,    13,    -1,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    24,    -1,   423,    27,    28,
      29,    30,    31,    32,    -1,   431,    -1,    36,    -1,    -1,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    74,    75,    -1,    33,    34,
      -1,   477,   478,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,   500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   524,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   520,    -1,    -1,    -1,    -1,    -1,
      -1,   527,   528,   529,    -1,     1,    -1,     3,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,    -1,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,
      -1,   597,    68,    69,    70,    71,    72,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   624,   625,
       1,   627,     3,    -1,    -1,     6,    -1,     8,     9,    10,
     636,    -1,    13,    -1,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,     3,    60,
      -1,    -1,    63,     8,    -1,    -1,    11,    68,    69,    70,
      71,    72,    17,    74,    75,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    17,    -1,    -1,    60,    -1,    22,    23,    24,
      -1,    26,    -1,    -1,    29,    70,    71,    72,    -1,    74,
      75,    36,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    17,    -1,    -1,    60,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    70,    71,    72,    -1,    74,
      75,    36,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    17,    -1,    -1,    60,    61,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    70,    71,    72,    -1,    74,
      75,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,     3,    60,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    68,    -1,    70,    71,    72,    17,    74,
      75,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    70,    71,    72,    -1,    74,    75,    36,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    70,    71,    72,    -1,    74,    75,    36,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    70,    71,    72,    -1,    74,    75,    36,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,    68,
      29,    70,    71,    72,    -1,    74,    75,    36,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    70,    71,    72,    -1,    74,    75,    36,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,     8,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    70,    71,    72,    -1,    74,    75,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
      49,    50,    11,    52,    53,    -1,    -1,    56,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    70,    71,    72,    -1,    74,    75,    36,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    -1,    -1,    -1,    53,    -1,    -1,    36,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    -1,    -1,    72,    53,    74,    75,    36,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    -1,    -1,    72,    53,    74,    75,    36,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    -1,    -1,    72,    53,    74,    75,    36,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    -1,    -1,    72,    53,    74,    75,    36,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,     8,
      29,    -1,    -1,    72,    53,    74,    75,    36,    17,    -1,
      -1,    60,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    72,    53,    74,    75,    36,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    53,    -1,    75,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    33,    34,    75,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    36,    -1,    38,    39,    40,    -1,    76,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    73,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    67,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    40,    -1,    67,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    67,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    33,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    34,    -1,    -1,    -1,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    78,    80,    81,     0,    25,    79,    25,    87,    24,
      74,    75,   142,   143,    82,    24,    89,    90,     3,    63,
      21,    83,   168,    24,    88,   216,    64,     3,    60,    64,
      84,    86,   142,    63,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    36,    49,    50,    52,    53,
      56,    60,    70,    71,    72,    91,    92,    93,    99,   111,
     114,   122,   125,   127,   128,   129,   130,   135,   139,   142,
     144,   145,   151,   152,   155,   158,   159,   160,   163,   166,
     167,   183,   188,    63,     9,    17,    21,    31,    32,    65,
     201,    24,    74,    61,    84,    85,     3,    87,    89,     3,
     139,   141,   142,    17,    36,    53,    60,   142,   144,   150,
     154,   155,   156,   163,   141,   129,   135,   112,    60,   142,
     161,   129,   139,   115,    35,    68,   138,    72,   127,   188,
     195,   126,   138,   123,    60,    97,    98,   142,    60,    94,
     140,   142,   187,   128,   128,   128,   128,   128,   128,    36,
      53,   127,   136,   149,   155,   157,   163,   128,   128,    11,
     127,   194,    63,    60,    95,   187,     4,    33,    34,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    68,
      60,    64,    72,    67,    60,   138,     1,   138,     5,    66,
      76,   143,   202,    60,   162,   202,    24,   202,   203,   202,
      65,    63,   192,    89,    60,    36,    60,   148,   154,   155,
     156,   157,   163,   148,   148,    64,    26,    99,   108,   109,
     110,   188,   196,    11,   137,   142,   146,   148,   179,   180,
     181,    60,    68,   164,   113,   196,    24,    60,    69,   139,
     173,   175,   177,   148,    35,    53,    60,    69,   139,   172,
     174,   175,   176,   186,   113,    61,    98,   171,   148,    61,
      94,   169,    66,    76,   148,     8,   149,    61,    73,    73,
      61,    95,    66,   148,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   131,    61,   136,   189,    60,
     142,   127,   194,   184,   127,   131,     1,    68,    92,   101,
     182,   183,   185,   188,   188,   127,     8,    17,    22,    23,
      24,    29,    36,    53,    66,    72,   143,   204,   206,   207,
     208,   142,   209,   217,   164,    60,     3,   204,   204,    84,
      61,   181,     8,   148,    61,   142,   127,    35,   106,     5,
      66,    63,   148,   137,   146,    76,   193,    61,   181,   185,
     116,    63,    64,    24,   175,    60,   178,    63,   192,    73,
     105,    60,   176,    53,   176,    63,   192,     3,   200,    76,
     148,   124,    63,   192,    63,   192,   188,   140,    66,    36,
      60,   148,   154,   155,   156,   163,    68,   148,   147,   148,
      63,   192,   188,    66,    68,   127,   132,   133,   190,   191,
      11,    76,   193,    31,   136,    73,    67,   182,    76,   193,
     191,   102,    63,    69,    36,    60,   205,   206,   208,    60,
      68,    72,    68,     8,   204,     3,    50,    60,   142,   214,
     215,     3,    73,    66,    11,   204,    61,    76,    63,   197,
     217,    63,    63,    63,    61,    61,   107,    26,    26,   196,
     179,    60,   142,   153,   154,   155,   156,   157,   163,   165,
      61,    69,   106,   196,   142,    61,   181,   177,    69,   148,
       7,    12,    69,   100,   103,   176,   200,   176,    61,   174,
      69,   139,   200,    35,    98,    61,    94,    61,   188,   148,
     131,    95,    96,   170,   187,    61,   188,   131,    67,    76,
     193,    69,   193,   136,    61,    61,    61,   194,    61,    69,
     185,   182,   204,   207,   197,    24,   142,   143,   199,   204,
     211,   219,   204,   142,   198,   210,   218,   204,     3,   214,
      63,    73,   204,   215,   204,   200,   142,   209,    61,   185,
     127,   127,    63,   181,    60,   165,   117,    61,   189,    67,
     104,    61,    61,   200,   105,    61,   191,    63,   192,   148,
     191,    68,   127,   134,   132,   133,    61,    67,    73,    69,
      61,    61,    60,    69,    63,    73,   204,    69,    63,    49,
     204,    63,   200,    60,    60,   204,   212,   213,    69,   196,
      61,   181,   120,   165,     5,    66,    67,    76,   185,   200,
     200,    69,    69,    96,    61,    69,   131,   194,   212,   197,
     211,   204,   200,   210,   214,   197,   197,    61,    14,   118,
     121,   127,   127,   191,    73,    61,    61,    61,    61,   165,
      20,   101,    67,    67,    69,   212,   212,   119,   113,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    79,    81,    80,    82,    82,    83,
      83,    83,    84,    84,    85,    85,    86,    86,    86,    87,
      88,    88,    90,    89,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      94,    94,    94,    95,    95,    96,    96,    96,    97,    98,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     102,   101,   104,   103,   105,   105,   107,   106,   108,   108,
     108,   109,   109,   109,   110,   112,   111,   113,   113,   115,
     116,   117,   114,   119,   118,   120,   120,   121,   121,   123,
     124,   122,   126,   125,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   138,   138,   139,   140,   141,   141,   142,   142,
     142,   143,   143,   144,   145,   146,   146,   147,   147,   148,
     148,   148,   148,   148,   148,   149,   149,   149,   149,   150,
     150,   150,   150,   150,   151,   151,   152,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   156,   157,   158,   158,   159,   159,   160,   161,   161,
     162,   162,   163,   164,   164,   165,   165,   165,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   171,   172,
     172,   173,   173,   174,   174,   174,   174,   174,   174,   175,
     175,   176,   177,   177,   177,   178,   179,   179,   179,   179,
     180,   180,   181,   181,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   184,   183,   183,   183,   183,   183,
     183,   183,   183,   185,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   190,   190,   191,   191,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   201,
     201,   201,   201,   202,   203,   204,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   207,   208,   209,   209,   210,   211,   211,   212,   212,
     213,   213,   214,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     0,     3,     0,     3,     2,
       5,     3,     3,     2,     1,     3,     1,     2,     2,     4,
       0,     1,     0,     4,     0,     1,     1,     1,     1,     2,
       5,     3,     2,     5,     7,     3,     2,     5,     3,     1,
       2,     4,     3,     4,     3,     1,     2,     1,     1,     2,
       1,     3,     3,     3,     2,     2,     3,     5,     5,     2,
       0,     4,     0,     3,     0,     2,     0,     4,     4,     4,
       2,     5,     1,     1,     2,     0,     3,     1,     3,     0,
       0,     0,     8,     0,     5,     0,     2,     0,     2,     0,
       0,     7,     0,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     5,     6,     1,     1,     3,
       5,     5,     4,     6,     8,     1,     5,     5,     5,     7,
       1,     0,     3,     1,     4,     1,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     4,     4,     1,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     2,     3,     5,     1,
       1,     2,     3,     5,     3,     5,     3,     3,     5,     8,
       5,     8,     5,     0,     3,     0,     1,     3,     1,     4,
       2,     0,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     2,     4,     3,     5,     5,     1,
       3,     1,     2,     1,     3,     4,     1,     2,     2,     1,
       1,     3,     0,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     2,     2,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     3,     0,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     4,     4,     5,
       6,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     5,     4,     4,     2,     2,     4,
       3,     3,     5,     3,     4,     3,     5,     1,     0,     1,
       3,     1,     1,     2,     1,     1,     5,     0,     2,     1,
       3,     1,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
int yychar, yystate;

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 131 "go.y" /* yacc.c:1646  */
    {
		xtop = concat(xtop, (yyvsp[0].list));
	}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 137 "go.y" /* yacc.c:1646  */
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 143 "go.y" /* yacc.c:1646  */
    {
		mkpackage((yyvsp[-1].sym)->name);
	}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 153 "go.y" /* yacc.c:1646  */
    {
		importpkg = runtimepkg;

		if(debug['A'])
			cannedimports("runtime.builtin", "package runtime\n\n$$\n\n");
		else
			cannedimports("runtime.builtin", runtimeimport);
		curio.importsafe = 1;
	}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 164 "go.y" /* yacc.c:1646  */
    {
		importpkg = nil;
	}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 178 "go.y" /* yacc.c:1646  */
    {
		Pkg *ipkg;
		Sym *my;
		Node *pack;
		
		ipkg = importpkg;
		my = importmyname;
		importpkg = nil;
		importmyname = S;

		if(my == nil)
			my = lookup(ipkg->name);

		pack = nod(OPACK, N, N);
		pack->sym = my;
		pack->pkg = ipkg;
		pack->lineno = (yyvsp[-2].i);

		if(my->name[0] == '.') {
			importdot(ipkg, pack);
			break;
		}
		if(strcmp(my->name, "init") == 0) {
			yyerror("cannot import package as init - init must be a func");
			break;
		}
		if(my->name[0] == '_' && my->name[1] == '\0')
			break;
		if(my->def) {
			lineno = (yyvsp[-2].i);
			redeclare(my, "as imported package name");
		}
		my->def = pack;
		my->lastlineno = (yyvsp[-2].i);
		my->block = 1;	// at top level
	}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 215 "go.y" /* yacc.c:1646  */
    {
		// When an invalid import path is passed to importfile,
		// it calls yyerror and then sets up a fake import with
		// no package statement. This allows us to test more
		// than one invalid import statement in a single file.
		if(nerrors == 0)
			fatal("phase error in import");
	}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 230 "go.y" /* yacc.c:1646  */
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 237 "go.y" /* yacc.c:1646  */
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[-1].sym);
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 244 "go.y" /* yacc.c:1646  */
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 253 "go.y" /* yacc.c:1646  */
    {
		if(importpkg->name == nil) {
			importpkg->name = (yyvsp[-2].sym)->name;
			pkglookup((yyvsp[-2].sym)->name, nil)->npkg++;
		} else if(strcmp(importpkg->name, (yyvsp[-2].sym)->name) != 0)
			yyerror("conflicting names %s and %s for package \"%Z\"", importpkg->name, (yyvsp[-2].sym)->name, importpkg->path);
		importpkg->direct = 1;
		importpkg->safe = curio.importsafe;

		if(safemode && !curio.importsafe)
			yyerror("cannot import unsafe package \"%Z\"", importpkg->path);
	}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 268 "go.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[0].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 274 "go.y" /* yacc.c:1646  */
    {
		defercheckwidth();
	}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 278 "go.y" /* yacc.c:1646  */
    {
		resumecheckwidth();
		unimportfile();
	}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 287 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 293 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 297 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 302 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 308 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
	}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 312 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 316 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 320 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 326 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 332 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-4].list), (yyvsp[-2].list));
		iota = -100000;
		lastconst = nil;
	}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 338 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		iota = -100000;
	}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 343 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 347 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 351 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 357 "go.y" /* yacc.c:1646  */
    {
		iota = 0;
	}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 363 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 367 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 371 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-2].list), nil, (yyvsp[0].list));
	}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 377 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 381 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-2].list), N, (yyvsp[0].list));
	}
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 388 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 392 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[0].list), N, nil);
	}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 398 "go.y" /* yacc.c:1646  */
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[0].sym));
	}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 407 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = typedcl1((yyvsp[-1].node), (yyvsp[0].node), 1);
	}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 413 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);

		// These nodes do not carry line numbers.
		// Since a bare name used as an expression is an error,
		// introduce a wrapper node to give the correct line.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
			break;
		}
	}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 431 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-2].node), (yyvsp[0].node));
		(yyval.node)->etype = (yyvsp[-1].i);			// rathole to pass opcode
	}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 436 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].list)->next == nil && (yyvsp[0].list)->next == nil) {
			// simple
			(yyval.node) = nod(OAS, (yyvsp[-2].list)->n, (yyvsp[0].list)->n);
			break;
		}
		// multiple
		(yyval.node) = nod(OAS2, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 448 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].list)->n->op == OTYPESW) {
			(yyval.node) = nod(OTYPESW, N, (yyvsp[0].list)->n->right);
			if((yyvsp[0].list)->next != nil)
				yyerror("expr.(type) must be alone in list");
			if((yyvsp[-2].list)->next != nil)
				yyerror("argument count mismatch: %d = %d", count((yyvsp[-2].list)), 1);
			else if(((yyvsp[-2].list)->n->op != ONAME && (yyvsp[-2].list)->n->op != OTYPE && (yyvsp[-2].list)->n->op != ONONAME) || isblank((yyvsp[-2].list)->n))
				yyerror("invalid variable name %N in type switch", (yyvsp[-2].list)->n);
			else
				(yyval.node)->left = dclname((yyvsp[-2].list)->n->sym);  // it's a colas, so must not re-use an oldname.
			break;
		}
		(yyval.node) = colas((yyvsp[-2].list), (yyvsp[0].list), (yyvsp[-1].i));
	}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 464 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 470 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 478 "go.y" /* yacc.c:1646  */
    {
		Node *n, *nn;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = (yyvsp[-1].list);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 498 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if((yyvsp[-3].list)->next == nil)
			n = nod(OAS, (yyvsp[-3].list)->n, (yyvsp[-1].node));
		else {
			n = nod(OAS2, N, N);
			n->list = (yyvsp[-3].list);
			n->rlist = list1((yyvsp[-1].node));
		}
		(yyval.node)->list = list1(n);
	}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 516 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[-3].list), list1((yyvsp[-1].node)), (yyvsp[-2].i)));
	}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 525 "go.y" /* yacc.c:1646  */
    {
		Node *n, *nn;

		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		if(typesw != N && typesw->right != N && (n=typesw->right->left) != N) {
			// type switch - declare variable
			nn = newname(n->sym);
			declare(nn, dclcontext);
			(yyval.node)->nname = nn;

			// keep track of the instances for reporting unused
			nn->defn = typesw->right;
		}
	}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 543 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 547 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[-1].list));
		popdcl();
	}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 557 "go.y" /* yacc.c:1646  */
    {
		// If the last token read by the lexer was consumed
		// as part of the case, clear it (parser has cleared yychar).
		// If the last token read by the lexer was the lookahead
		// leave it alone (parser has it cached in yychar).
		// This is so that the stmt_list action doesn't look at
		// the case tokens if the stmt_list is empty.
		yylast = yychar;
		(yyvsp[0].node)->xoffset = block;
	}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 568 "go.y" /* yacc.c:1646  */
    {
		int last;

		// This is the only place in the language where a statement
		// list is not allowed to drop the final semicolon, because
		// it's the only place where a statement list is not followed 
		// by a closing brace.  Handle the error for pedantry.

		// Find the final token of the statement list.
		// yylast is lookahead; yyprev is last of stmt_list
		last = yyprev;

		if(last > 0 && last != ';' && yychar != '}')
			yyerror("missing statement after label");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->nbody = (yyvsp[0].list);
		popdcl();
	}
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 588 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 592 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-1].list), (yyvsp[0].node));
	}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 598 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 602 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		popdcl();
	}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 609 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->etype = 0;	// := flag
	}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 615 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[-3].list), (yyval.node));
	}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 622 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->etype = 0; // := flag
	}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 629 "go.y" /* yacc.c:1646  */
    {
		// init ; test ; incr
		if((yyvsp[0].node) != N && (yyvsp[0].node)->colas != 0)
			yyerror("cannot declare in the for-increment");
		(yyval.node) = nod(OFOR, N, N);
		if((yyvsp[-4].node) != N)
			(yyval.node)->ninit = list1((yyvsp[-4].node));
		(yyval.node)->ntest = (yyvsp[-2].node);
		(yyval.node)->nincr = (yyvsp[0].node);
	}
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 640 "go.y" /* yacc.c:1646  */
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 649 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[0].list));
	}
#line 2821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 656 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 660 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		popdcl();
	}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 667 "go.y" /* yacc.c:1646  */
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 673 "go.y" /* yacc.c:1646  */
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[-2].node) != N)
			(yyval.node)->ninit = list1((yyvsp[-2].node));
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 684 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 688 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 693 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->nbody = (yyvsp[0].list);
	}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 697 "go.y" /* yacc.c:1646  */
    {
		Node *n;
		NodeList *nn;

		(yyval.node) = (yyvsp[-5].node);
		n = (yyvsp[-5].node);
		popdcl();
		for(nn = concat((yyvsp[-1].list), (yyvsp[0].list)); nn; nn = nn->next) {
			if(nn->n->op == OIF)
				popdcl();
			n->nelse = list1(nn->n);
			n = nn->n;
		}
	}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 714 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 718 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[-1].node)->nbody = (yyvsp[0].list);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 2923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 726 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 730 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-1].list), (yyvsp[0].list));
	}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 735 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 739 "go.y" /* yacc.c:1646  */
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[0].node);
		node->end = node;
		(yyval.list) = node;
	}
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 750 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 754 "go.y" /* yacc.c:1646  */
    {
		Node *n;
		n = (yyvsp[0].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 762 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-4].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
		popdcl();
	}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 772 "go.y" /* yacc.c:1646  */
    {
		typesw = nod(OXXX, typesw, N);
	}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 776 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
	}
#line 3011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 789 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOROR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 793 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 797 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OEQ, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 801 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 805 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 809 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 813 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 817 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 821 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OADD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 825 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSUB, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 829 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 833 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OXOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 837 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMUL, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 841 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODIV, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 845 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMOD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 849 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 853 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 857 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 861 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 866 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSEND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 873 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 877 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->op == OCOMPLIT) {
			// Special case for &T{...}: turn into (*T){...}.
			(yyval.node) = (yyvsp[0].node);
			(yyval.node)->right = nod(OIND, (yyval.node)->right, N);
			(yyval.node)->right->implicit = 1;
		} else {
			(yyval.node) = nod(OADDR, (yyvsp[0].node), N);
		}
	}
#line 3194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 888 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPLUS, (yyvsp[0].node), N);
	}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 892 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMINUS, (yyvsp[0].node), N);
	}
#line 3210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 896 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONOT, (yyvsp[0].node), N);
	}
#line 3218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 900 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 905 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 909 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORECV, (yyvsp[0].node), N);
	}
#line 3243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 919 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-2].node), N);
	}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 923 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = (yyvsp[-2].list);
	}
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 928 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-5].node), N);
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->isddd = 1;
	}
#line 3270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 936 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 941 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[0].sym)->name, (yyvsp[-2].node)->pkg);
			(yyvsp[-2].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[-2].node), newname((yyvsp[0].sym)));
	}
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 952 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[-4].node), (yyvsp[-1].node));
	}
#line 3301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 956 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[-4].node));
	}
#line 3309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 960 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OINDEX, (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 964 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSLICE, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node)));
	}
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 968 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[-1].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[-7].node), nod(OKEY, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node))));
	}
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 977 "go.y" /* yacc.c:1646  */
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = list1((yyvsp[-2].node));
	}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 983 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 990 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 996 "go.y" /* yacc.c:1646  */
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-5].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1005 "go.y" /* yacc.c:1646  */
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1013 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OKEY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1019 "go.y" /* yacc.c:1646  */
    {
		// These nodes do not carry line numbers.
		// Since a composite literal commonly spans several lines,
		// the line number on errors may be misleading.
		// Introduce a wrapper node to give the correct line.
		(yyval.node) = (yyvsp[0].node);
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OTYPE:
		case OPACK:
		case OLITERAL:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
			(yyval.node)->implicit = 1;
		}
	}
#line 3418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1036 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1044 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1052 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		
		// Need to know on lhs of := whether there are ( ).
		// Don't bother with the OPAREN in other cases:
		// it's just a waste of memory and time.
		switch((yyval.node)->op) {
		case ONAME:
		case ONONAME:
		case OPACK:
		case OTYPE:
		case OLITERAL:
		case OTYPESW:
			(yyval.node) = nod(OPAREN, (yyval.node), N);
		}
	}
#line 3457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1078 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = LBODY;
	}
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1082 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = '{';
	}
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1093 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[0].sym));
	}
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1102 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = dclname((yyvsp[0].sym));
	}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1107 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1114 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[0].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
	}
#line 3511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1122 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = S;
	}
#line 3519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1128 "go.y" /* yacc.c:1646  */
    {
		Pkg *p;

		if((yyvsp[-2].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[-2].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[-2].val).u.sval);
		}
		(yyval.sym) = pkglookup((yyvsp[0].sym)->name, p);
	}
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1141 "go.y" /* yacc.c:1646  */
    {
		Pkg *p;

		if((yyvsp[-2].val).u.sval->len == 0)
			p = importpkg;
		else {
			if(isbadimport((yyvsp[-2].val).u.sval))
				errorexit();
			p = mkpkg((yyvsp[-2].val).u.sval);
		}
		(yyval.sym) = pkglookup("?", p);
	}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1156 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname((yyvsp[0].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
#line 3563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1176 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1181 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODDD, (yyvsp[0].node), N);
	}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1187 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 3588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1199 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1208 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1218 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1239 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node)->op == OPACK) {
			Sym *s;
			s = restrictlookup((yyvsp[0].sym)->name, (yyvsp[-2].node)->pkg);
			(yyvsp[-2].node)->used = 1;
			(yyval.node) = oldname(s);
			break;
		}
		(yyval.node) = nod(OXDOT, (yyvsp[-2].node), newname((yyvsp[0].sym)));
	}
#line 3627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1252 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1256 "go.y" /* yacc.c:1646  */
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[0].node));
	}
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1261 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Cboth;
	}
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1266 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Csend;
	}
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1271 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTMAP, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1279 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1285 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Crecv;
	}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1292 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1298 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1305 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1311 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1322 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		if((yyval.node) == N)
			break;
		if(noescape && (yyvsp[0].list) != nil)
			yyerror("can only use //go:noescape with external func implementations");
		(yyval.node)->nbody = (yyvsp[0].list);
		(yyval.node)->endlineno = lineno;
		(yyval.node)->noescape = noescape;
		(yyval.node)->nosplit = nosplit;
		(yyval.node)->nowritebarrier = nowritebarrier;
		funcbody((yyval.node));
	}
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1338 "go.y" /* yacc.c:1646  */
    {
		Node *t;

		(yyval.node) = N;
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);

		if(strcmp((yyvsp[-4].sym)->name, "init") == 0) {
			(yyvsp[-4].sym) = renameinit();
			if((yyvsp[-2].list) != nil || (yyvsp[0].list) != nil)
				yyerror("func init must have no arguments and no return values");
		}
		if(strcmp(localpkg->name, "main") == 0 && strcmp((yyvsp[-4].sym)->name, "main") == 0) {
			if((yyvsp[-2].list) != nil || (yyvsp[0].list) != nil)
				yyerror("func main must have no arguments and no return values");
		}

		t = nod(OTFUNC, N, N);
		t->list = (yyvsp[-2].list);
		t->rlist = (yyvsp[0].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->nname = newname((yyvsp[-4].sym));
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;		// TODO: check if nname already has an ntype
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
#line 3776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1367 "go.y" /* yacc.c:1646  */
    {
		Node *rcvr, *t;

		(yyval.node) = N;
		(yyvsp[-6].list) = checkarglist((yyvsp[-6].list), 0);
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);

		if((yyvsp[-6].list) == nil) {
			yyerror("method has no receiver");
			break;
		}
		if((yyvsp[-6].list)->next != nil) {
			yyerror("method has multiple receivers");
			break;
		}
		rcvr = (yyvsp[-6].list)->n;
		if(rcvr->op != ODCLFIELD) {
			yyerror("bad receiver in method");
			break;
		}

		t = nod(OTFUNC, rcvr, N);
		t->list = (yyvsp[-2].list);
		t->rlist = (yyvsp[0].list);

		(yyval.node) = nod(ODCLFUNC, N, N);
		(yyval.node)->shortname = newname((yyvsp[-4].sym));
		(yyval.node)->nname = methodname1((yyval.node)->shortname, rcvr->right);
		(yyval.node)->nname->defn = (yyval.node);
		(yyval.node)->nname->ntype = t;
		(yyval.node)->nname->nointerface = nointerface;
		declare((yyval.node)->nname, PFUNC);

		funchdr((yyval.node));
	}
#line 3816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1405 "go.y" /* yacc.c:1646  */
    {
		Sym *s;
		Type *t;

		(yyval.node) = N;

		s = (yyvsp[-4].sym);
		t = functype(N, (yyvsp[-2].list), (yyvsp[0].list));

		importsym(s, ONAME);
		if(s->def != N && s->def->op == ONAME) {
			if(eqtype(t, s->def->type)) {
				dclcontext = PDISCARD;  // since we skip funchdr below
				break;
			}
			yyerror("inconsistent definition for func %S during import\n\t%T\n\t%T", s, s->def->type, t);
		}

		(yyval.node) = newname(s);
		(yyval.node)->type = t;
		declare((yyval.node), PFUNC);

		funchdr((yyval.node));
	}
#line 3845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1430 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = methodname1(newname((yyvsp[-4].sym)), (yyvsp[-6].list)->n->right); 
		(yyval.node)->type = functype((yyvsp[-6].list)->n, (yyvsp[-2].list), (yyvsp[0].list));

		checkwidth((yyval.node)->type);
		addmethod((yyvsp[-4].sym), (yyval.node)->type, 0, nointerface);
		nointerface = 0;
		funchdr((yyval.node));
		
		// inl.c's inlnode in on a dotmeth node expects to find the inlineable body as
		// (dotmeth's type)->nname->inl, and dotmeth's type has been pulled
		// out by typecheck's lookdot as this $$->ttype.  So by providing
		// this back link here we avoid special casing there.
		(yyval.node)->type->nname = (yyval.node);
	}
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1448 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 3876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1456 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1460 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
#line 3894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1468 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1472 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[0].node)));
	}
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1476 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].list) = checkarglist((yyvsp[-1].list), 0);
		(yyval.list) = (yyvsp[-1].list);
	}
#line 3919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1483 "go.y" /* yacc.c:1646  */
    {
		closurehdr((yyvsp[0].node));
	}
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1489 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody((yyvsp[-1].list));
		fixlbrace((yyvsp[-2].i));
	}
#line 3936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1494 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody(nil);
	}
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1505 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1509 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[-1].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
		nowritebarrier = 0;
	}
#line 3966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1522 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1529 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1535 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 3990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1539 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 3998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1546 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1552 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1556 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1562 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		Node *n;
		l = (yyvsp[-2].list);
		if(l == nil) {
			// ? symbol, during import (list1(N) == nil)
			n = (yyvsp[-1].node);
			if(n->op == OIND)
				n = n->left;
			n = embedded(n->sym, importpkg);
			n->right = (yyvsp[-1].node);
			n->val = (yyvsp[0].val);
			(yyval.list) = list1(n);
			break;
		}

		for(l=(yyvsp[-2].list); l; l=l->next) {
			l->n = nod(ODCLFIELD, l->n, (yyvsp[-1].node));
			l->n->val = (yyvsp[0].val);
		}
	}
#line 4049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1585 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1590 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1596 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->right = nod(OIND, (yyvsp[-1].node)->right, N);
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1602 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1609 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1618 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		(yyval.sym) = (yyvsp[0].sym);
		n = oldname((yyvsp[0].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
#line 4113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1627 "go.y" /* yacc.c:1646  */
    {
		Pkg *pkg;

		if((yyvsp[-2].sym)->def == N || (yyvsp[-2].sym)->def->op != OPACK) {
			yyerror("%S is not a package", (yyvsp[-2].sym));
			pkg = localpkg;
		} else {
			(yyvsp[-2].sym)->def->used = 1;
			pkg = (yyvsp[-2].sym)->def->pkg;
		}
		(yyval.sym) = restrictlookup((yyvsp[0].sym)->name, pkg);
	}
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1642 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = embedded((yyvsp[0].sym), localpkg);
	}
#line 4138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1648 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[-1].node), (yyvsp[0].node));
		ifacedcl((yyval.node));
	}
#line 4147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1653 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[0].sym)));
	}
#line 4155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1657 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[-1].sym)));
		yyerror("cannot parenthesize embedded type");
	}
#line 4164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1664 "go.y" /* yacc.c:1646  */
    {
		// without func keyword
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 4176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1678 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1684 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1693 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1697 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1702 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1706 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1714 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1719 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = liststmt((yyvsp[0].list));
	}
#line 4244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1724 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1735 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node) = nod(OLABEL, (yyvsp[-1].node), N);
		(yyvsp[-1].node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1740 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		(yyvsp[-3].node)->defn = (yyvsp[0].node);
		l = list1((yyvsp[-3].node));
		if((yyvsp[0].node))
			l = list(l, (yyvsp[0].node));
		(yyval.node) = liststmt(l);
	}
#line 4275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1750 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
#line 4285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1756 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OBREAK, (yyvsp[0].node), N);
	}
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1760 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[0].node), N);
	}
#line 4301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1764 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPROC, (yyvsp[0].node), N);
	}
#line 4309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1768 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODEFER, (yyvsp[0].node), N);
	}
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1772 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGOTO, (yyvsp[0].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1777 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORETURN, N, N);
		(yyval.node)->list = (yyvsp[0].list);
		if((yyval.node)->list == nil && curfn != N) {
			NodeList *l;

			for(l=curfn->dcl; l; l=l->next) {
				if(l->n->class == PPARAM)
					continue;
				if(l->n->class != PPARAMOUT)
					break;
				if(l->n->sym->def != l->n)
					yyerror("%s is shadowed during return", l->n->sym->name);
			}
		}
	}
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1796 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		if((yyvsp[0].node) != N)
			(yyval.list) = list1((yyvsp[0].node));
	}
#line 4357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1802 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		if((yyvsp[0].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[0].node));
	}
#line 4367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1810 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1814 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1820 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1824 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1830 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1834 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1840 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1844 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1853 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1857 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1861 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1865 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1870 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1874 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1888 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1894 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1900 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1906 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1912 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1918 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1924 "go.y" /* yacc.c:1646  */
    {
		(yyval.val).ctype = CTxxx;
	}
#line 4535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1934 "go.y" /* yacc.c:1646  */
    {
		importimport((yyvsp[-2].sym), (yyvsp[-1].val).u.sval);
	}
#line 4543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1938 "go.y" /* yacc.c:1646  */
    {
		importvar((yyvsp[-2].sym), (yyvsp[-1].type));
	}
#line 4551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1942 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-3].sym), types[TIDEAL], (yyvsp[-1].node));
	}
#line 4559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1946 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-4].sym), (yyvsp[-3].type), (yyvsp[-1].node));
	}
#line 4567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1950 "go.y" /* yacc.c:1646  */
    {
		importtype((yyvsp[-2].type), (yyvsp[-1].type));
	}
#line 4575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1954 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node) == N) {
			dclcontext = PEXTERN;  // since we skip the funcbody below
			break;
		}

		(yyvsp[-2].node)->inl = (yyvsp[-1].list);

		funcbody((yyvsp[-2].node));
		importlist = list(importlist, (yyvsp[-2].node));

		if(debug['E']) {
			print("import [%Z] func %lN \n", importpkg->path, (yyvsp[-2].node));
			if(debug['m'] > 2 && (yyvsp[-2].node)->inl)
				print("inl body:%+H\n", (yyvsp[-2].node)->inl);
		}
	}
#line 4597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1974 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		structpkg = (yyval.sym)->pkg;
	}
#line 4606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1981 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
		importsym((yyvsp[0].sym), OTYPE);
	}
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2001 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
	}
#line 4623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2005 "go.y" /* yacc.c:1646  */
    {
		// predefined name like uint8
		(yyvsp[0].sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
		if((yyvsp[0].sym)->def == N || (yyvsp[0].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[0].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[0].sym)->def->type;
	}
#line 4637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2015 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(N, (yyvsp[0].type));
	}
#line 4645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2019 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(nodlit((yyvsp[-2].val)), (yyvsp[0].type));
	}
#line 4653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2023 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = maptype((yyvsp[-2].type), (yyvsp[0].type));
	}
#line 4661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2027 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tostruct((yyvsp[-1].list));
	}
#line 4669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2031 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tointerface((yyvsp[-1].list));
	}
#line 4677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2035 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = ptrto((yyvsp[0].type));
	}
#line 4685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2039 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Cboth;
	}
#line 4695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2045 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[-1].type);
		(yyval.type)->chan = Cboth;
	}
#line 4705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2051 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Csend;
	}
#line 4715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2059 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Crecv;
	}
#line 4725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2067 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = functype(nil, (yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2073 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[-1].type)));
		if((yyvsp[-2].sym))
			(yyval.node)->left = newname((yyvsp[-2].sym));
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2080 "go.y" /* yacc.c:1646  */
    {
		Type *t;
	
		t = typ(TARRAY);
		t->bound = -1;
		t->type = (yyvsp[-1].type);

		(yyval.node) = nod(ODCLFIELD, N, typenod(t));
		if((yyvsp[-3].sym))
			(yyval.node)->left = newname((yyvsp[-3].sym));
		(yyval.node)->isddd = 1;
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2096 "go.y" /* yacc.c:1646  */
    {
		Sym *s;
		Pkg *p;

		if((yyvsp[-2].sym) != S && strcmp((yyvsp[-2].sym)->name, "?") != 0) {
			(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-2].sym)), typenod((yyvsp[-1].type)));
			(yyval.node)->val = (yyvsp[0].val);
		} else {
			s = (yyvsp[-1].type)->sym;
			if(s == S && isptr[(yyvsp[-1].type)->etype])
				s = (yyvsp[-1].type)->type->sym;
			p = importpkg;
			if((yyvsp[-2].sym) != S)
				p = (yyvsp[-2].sym)->pkg;
			(yyval.node) = embedded(s, p);
			(yyval.node)->right = typenod((yyvsp[-1].type));
			(yyval.node)->val = (yyvsp[0].val);
		}
	}
#line 4786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2118 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-4].sym)), typenod(functype(fakethis(), (yyvsp[-2].list), (yyvsp[0].list))));
	}
#line 4794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2122 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[0].type)));
	}
#line 4802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2127 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2134 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2138 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[0].type))));
	}
#line 4826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2148 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 4834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2152 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
		switch((yyval.node)->val.ctype){
		case CTINT:
		case CTRUNE:
			mpnegfix((yyval.node)->val.u.xval);
			break;
		case CTFLT:
			mpnegflt((yyval.node)->val.u.fval);
			break;
		case CTCPLX:
			mpnegflt(&(yyval.node)->val.u.cval->real);
			mpnegflt(&(yyval.node)->val.u.cval->imag);
			break;
		default:
			yyerror("bad negated constant");
		}
	}
#line 4857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2171 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname(pkglookup((yyvsp[0].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
#line 4867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2180 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].node)->val.ctype == CTRUNE && (yyvsp[-1].node)->val.ctype == CTINT) {
			(yyval.node) = (yyvsp[-3].node);
			mpaddfixfix((yyvsp[-3].node)->val.u.xval, (yyvsp[-1].node)->val.u.xval, 0);
			break;
		}
		(yyvsp[-1].node)->val.u.cval->real = (yyvsp[-1].node)->val.u.cval->imag;
		mpmovecflt(&(yyvsp[-1].node)->val.u.cval->imag, 0.0);
		(yyval.node) = nodcplxlit((yyvsp[-3].node)->val, (yyvsp[-1].node)->val);
	}
#line 4882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2196 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2200 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2206 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2210 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2216 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2220 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4930 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4934 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
        char *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 2224 "go.y" /* yacc.c:1906  */


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}

