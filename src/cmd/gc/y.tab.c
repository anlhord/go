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
    NotPackage = 304,
    NotParen = 305,
    PreferToRightParen = 306
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
#define NotPackage 304
#define NotParen 305
#define PreferToRightParen 306

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

#line 226 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 241 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   2280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  354
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  670

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,    64,    55,    56,     2,
      59,    60,    53,    49,    75,    50,    63,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    62,
       2,    65,     2,    73,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    51,    68,    70,     2,     2,     2,
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
      45,    46,    47,    48,    57,    58,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   124,   124,   133,   139,   150,   150,   165,   166,   169,
     170,   171,   174,   211,   222,   223,   226,   233,   240,   249,
     263,   264,   271,   271,   284,   288,   289,   293,   298,   304,
     308,   312,   316,   322,   328,   334,   339,   343,   347,   353,
     359,   363,   367,   373,   377,   383,   384,   388,   394,   403,
     409,   427,   432,   444,   460,   466,   474,   494,   512,   521,
     540,   539,   554,   553,   585,   588,   595,   594,   605,   611,
     618,   625,   636,   642,   645,   653,   652,   663,   669,   681,
     685,   690,   680,   711,   710,   723,   726,   732,   735,   747,
     751,   746,   769,   768,   784,   785,   789,   793,   797,   801,
     805,   809,   813,   817,   821,   825,   829,   833,   837,   841,
     845,   849,   853,   857,   862,   868,   869,   873,   884,   888,
     892,   896,   901,   905,   915,   919,   924,   932,   936,   937,
     948,   952,   956,   960,   964,   972,   973,   979,   986,   992,
     999,  1002,  1009,  1015,  1032,  1039,  1040,  1047,  1048,  1067,
    1068,  1071,  1074,  1078,  1089,  1098,  1104,  1107,  1110,  1117,
    1118,  1124,  1137,  1152,  1160,  1172,  1177,  1183,  1184,  1189,
    1190,  1191,  1192,  1193,  1194,  1200,  1201,  1202,  1203,  1209,
    1210,  1211,  1212,  1213,  1219,  1220,  1223,  1226,  1227,  1228,
    1229,  1230,  1233,  1234,  1247,  1251,  1256,  1261,  1266,  1270,
    1271,  1274,  1280,  1287,  1293,  1300,  1306,  1317,  1333,  1362,
    1400,  1425,  1443,  1452,  1455,  1463,  1467,  1471,  1478,  1484,
    1489,  1501,  1504,  1516,  1517,  1523,  1524,  1530,  1534,  1540,
    1541,  1547,  1551,  1557,  1580,  1585,  1591,  1597,  1604,  1613,
    1622,  1637,  1643,  1648,  1652,  1659,  1672,  1673,  1679,  1685,
    1688,  1692,  1698,  1701,  1710,  1713,  1714,  1718,  1719,  1725,
    1726,  1727,  1728,  1729,  1731,  1730,  1745,  1751,  1755,  1759,
    1763,  1767,  1772,  1791,  1797,  1805,  1809,  1815,  1819,  1825,
    1829,  1835,  1839,  1848,  1852,  1856,  1860,  1866,  1869,  1877,
    1878,  1880,  1881,  1884,  1887,  1890,  1893,  1896,  1899,  1902,
    1905,  1908,  1911,  1914,  1917,  1920,  1923,  1929,  1933,  1937,
    1941,  1945,  1949,  1969,  1976,  1987,  1988,  1989,  1992,  1993,
    1996,  2000,  2010,  2014,  2018,  2022,  2026,  2030,  2034,  2040,
    2046,  2054,  2062,  2068,  2075,  2091,  2113,  2117,  2123,  2126,
    2129,  2133,  2143,  2147,  2166,  2174,  2175,  2187,  2188,  2191,
    2195,  2201,  2205,  2211,  2215
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
  "'/'", "'%'", "'&'", "NotPackage", "NotParen", "'('", "')'",
  "PreferToRightParen", "';'", "'.'", "'$'", "'='", "':'", "'{'", "'}'",
  "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept", "file",
  "package", "loadsys", "$@1", "imports", "import", "import_stmt",
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
      45,   124,    94,    42,    47,    37,    38,   304,   305,    40,
      41,   306,    59,    46,    36,    61,    58,   123,   125,    33,
     126,    91,    93,    63,    64,    44
};
# endif

#define YYPACT_NINF -566

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-566)))

#define YYTABLE_NINF -280

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -566,    51,    37,    46,  -566,   153,  -566,    30,  -566,  -566,
    -566,    71,    75,  -566,   121,   137,  -566,  -566,   117,  -566,
     157,   129,  1011,  -566,   134,   338,    26,  -566,    56,   190,
    -566,    46,   204,  -566,  -566,  -566,   153,  1763,  -566,   153,
     462,  -566,  -566,    29,   462,   153,  -566,     8,   146,  1600,
    -566,     8,  -566,    80,   151,  1600,  1600,  1600,  1600,  1600,
    1600,  1643,  1600,  1600,   647,   166,  -566,   259,  -566,  -566,
    -566,  -566,  -566,   865,  -566,  -566,   168,   243,  -566,   167,
    -566,   179,   196,     8,   202,  -566,  -566,  -566,   208,    59,
    -566,  -566,    76,  -566,   201,   112,   249,   201,   201,   216,
    -566,  -566,  -566,  -566,  -566,   239,  -566,  -566,  -566,  -566,
    -566,  -566,  -566,   244,  1788,  1788,  1788,  -566,   247,  -566,
    -566,  -566,  -566,  -566,  -566,   288,   243,  1294,  1755,   256,
     250,   300,  -566,  1600,  -566,  -566,   351,  1788,  2153,   251,
    -566,   284,   312,  1600,   404,  1788,  -566,  -566,   409,  -566,
    -566,  -566,   615,  -566,  -566,  -566,  -566,  -566,  -566,  1686,
    1643,  2153,   264,  -566,   237,  -566,   199,  -566,  -566,   257,
    2153,   265,  -566,   415,  -566,  1729,  1600,  1600,  1600,  1600,
    -566,  1600,  1600,  1600,  -566,  1600,  1600,  1600,  1600,  1600,
    1600,  1600,  1600,  1600,  1600,  1600,  1600,  1600,  1600,  -566,
    1066,   422,  1600,  -566,  1600,  -566,  -566,  1239,  1600,  1600,
    1600,  -566,  1880,   153,   250,   262,   328,  -566,  1979,  1979,
    -566,   215,   289,  -566,  1755,   336,  1788,  -566,  -566,  -566,
    -566,  -566,  -566,  -566,   291,   153,  1600,  -566,  -566,   319,
    -566,    81,   296,  1788,  -566,  1755,  -566,  -566,  -566,   285,
     303,  1755,  1239,  -566,  -566,   302,   229,   367,  -566,   333,
     339,  -566,  -566,   335,  -566,   131,    23,  -566,  -566,   346,
    -566,  -566,   410,   926,  -566,  -566,  -566,   350,  -566,  -566,
    -566,   353,  1600,   153,   355,  1822,  -566,   349,  1788,  1788,
    -566,   356,  1600,   361,  2153,  2224,  -566,  2177,   812,   812,
     812,   812,  -566,   812,   812,  2201,  -566,   519,   519,   519,
     519,  -566,  -566,  -566,  -566,  1337,  -566,  -566,    34,  1392,
    -566,  2051,   368,  1145,  2018,  1337,  -566,  -566,  -566,  -566,
    -566,  -566,    -4,   251,   251,  2153,  1914,   376,   360,   370,
    -566,   381,   442,  1979,   261,    52,  -566,   391,  -566,  -566,
    -566,  1924,  -566,   219,   405,   153,   412,   414,   441,  -566,
    -566,   440,  1788,   444,  -566,  -566,  2153,  -566,  -566,  1447,
    1502,  1600,  -566,  -566,  -566,  1755,  -566,  1847,   447,    25,
     319,  1600,   153,   448,   452,  1755,  -566,   456,   445,  1788,
      49,   367,   410,   367,   459,   398,   450,  -566,  -566,   153,
     410,   481,   153,   472,   153,   474,   251,  -566,  1600,  1855,
    1788,  -566,   344,   431,   438,   458,  -566,  -566,  -566,  -566,
     153,   478,   251,  1600,  -566,  2081,  -566,  -566,   449,   475,
     477,  1643,   487,   489,   490,  -566,  1600,  -566,  -566,   498,
     491,  1239,  1145,  -566,  1979,   524,  -566,  -566,  -566,   153,
    1947,  1979,   153,  1979,  -566,  -566,   558,   109,  -566,  -566,
     500,   492,  1979,   261,  1979,   410,   153,   153,  -566,   505,
     494,  -566,  -566,  -566,  1847,  -566,  1239,  1600,  1600,   509,
    -566,  1755,   517,  -566,  -566,  -566,  -566,  -566,  -566,  -566,
    1847,  -566,  -566,  -566,  -566,  -566,   518,  -566,  -566,  -566,
    1643,   511,  -566,  -566,  -566,   520,  -566,   521,   410,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,   251,   522,
    1337,  -566,  -566,   525,  1729,  -566,   251,  1337,  1545,  1337,
    -566,  -566,   523,  -566,  -566,  -566,  -566,    92,  -566,  -566,
      33,  -566,  -566,   526,   528,   533,   534,   537,   516,  -566,
    -566,   536,   529,  1979,   532,  -566,   541,  -566,  -566,   555,
    -566,  1979,  -566,   543,   410,  -566,   547,  -566,  1957,   147,
    2153,  2153,  1600,   548,  1755,  -566,  -566,  1847,    32,  -566,
    1145,   410,   410,  -566,   230,   464,   539,   153,   552,   361,
     546,  -566,  2153,  -566,  -566,  -566,  -566,  1600,  -566,  -566,
    -566,  1957,   153,  -566,  1947,  1979,   410,  -566,   153,   109,
    -566,  -566,  -566,   153,   153,  -566,  -566,  -566,  -566,  -566,
    -566,   557,   604,  -566,  1600,  1600,  -566,  1643,   559,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  1337,   550,  -566,   560,
    -566,  -566,  -566,  -566,   564,   565,   566,  1847,    43,  -566,
    -566,  2105,  2129,   551,  -566,  1957,  -566,  1957,  -566,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,  1600,   319,  -566
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
     223,   289,     0,     0,    40,     0,   178,   148,   168,   168,
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
       0,   202,   173,   171,   172,   170,   141,   195,   167,   194,
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
    -566,  -566,  -566,  -566,  -566,  -566,  -566,    -9,  -566,  -566,
     596,  -566,     4,  -566,  -566,   606,  -566,  -136,   -28,    44,
    -566,  -126,  -111,  -566,   -14,  -566,  -566,  -566,   122,  -369,
    -566,  -566,  -566,  -566,  -566,  -566,  -140,  -566,  -566,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,  -566,
     614,    10,   100,  -566,  -195,   107,   111,  -566,   246,   -57,
     397,    38,   -11,   362,   607,   378,   104,    20,  -566,   402,
     354,   599,   488,  -566,  -566,  -566,  -566,   -36,   -37,   -31,
     -38,  -566,  -566,  -566,  -566,  -566,   -32,   435,  -459,  -566,
    -566,  -566,  -566,  -566,  -566,  -566,  -566,   258,  -110,  -217,
     267,  -566,   277,  -566,  -207,  -310,   634,  -566,  -238,  -566,
     -59,   -42,   159,  -566,  -323,  -239,  -278,  -193,  -566,  -112,
    -429,  -566,  -566,  -359,  -566,   292,  -566,   290,  -566,   324,
     217,   330,   206,    69,    77,  -565,  -566,  -430,   221,  -566,
     466,  -566,  -566
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
     417,   247,   163,   119,    82,    83,   483,   228,    84,   230,
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
     396,   575,   237,   506,   132,   108,   638,   624,   403,   174,
     432,   512,   405,   134,   378,   430,   439,   383,   392,   394,
     101,     4,   421,     9,    15,   461,   500,   118,   442,    27,
     206,   501,     5,   660,   443,   153,   154,   155,   156,   157,
     158,     7,   167,   168,    18,   135,   393,   229,   229,   229,
       9,   208,   232,   232,   232,   241,   369,   442,   128,   142,
     665,   229,   666,   491,   134,   442,   232,   625,   626,   102,
     229,   599,    10,    11,     9,   232,   565,   627,   229,   431,
     327,   223,   455,   232,   175,   229,   103,   502,   623,    29,
     232,   205,   165,   164,   462,   259,   135,   207,   166,    10,
      11,   268,   541,     9,   118,   118,   118,    19,   229,   144,
     125,   209,    20,   232,   131,   291,   370,   384,   118,   583,
     530,   210,   532,    10,    11,   383,   210,   118,   597,   456,
      27,    23,   165,   164,   598,   118,   333,   334,   166,   153,
     157,   213,   118,   639,   505,     9,   507,     9,   496,   644,
      26,     9,    10,    11,   645,   646,    11,   229,   659,   229,
     391,    33,   232,   106,   232,   118,    93,   586,   211,   211,
    -218,   211,   211,   540,   590,   612,   229,   109,   229,   442,
     148,   232,   359,   232,   229,   618,    28,   137,    27,   232,
      29,   520,   629,   630,    10,    11,    10,    11,   172,   527,
      10,    11,  -239,  -154,  -218,   199,   229,   500,   569,     9,
     406,   232,   501,   537,   118,   203,   118,   642,   413,   412,
     422,   229,   229,   415,   414,   204,   232,   232,  -184,   479,
     237,  -185,   434,   118,   455,   118,  -218,  -184,   516,   493,
     237,   118,  -186,   216,   573,    11,   514,   261,    29,   466,
     220,   165,   164,     9,   588,     9,   126,   166,    10,    11,
     126,  -239,   382,   118,   467,  -270,  -185,  -239,   631,   669,
    -270,   221,   200,   224,  -186,   118,   201,  -269,   118,   118,
     235,   456,  -269,   653,   202,   251,   346,   252,   173,   264,
     457,   355,   346,   346,   287,   229,   210,   333,   334,   288,
     232,   356,    10,    11,    10,    11,   256,   289,   229,   487,
     485,   484,   628,   232,   362,   488,   486,    94,   229,   360,
    -270,   364,   229,   232,   367,    95,  -270,   232,   371,    96,
     375,   524,  -269,   377,   381,   265,   518,   621,  -269,    97,
      98,   266,   229,   229,   533,   256,   259,   232,   232,  -182,
     267,   526,   118,    12,   268,    10,    11,   215,   511,   217,
     219,   383,   385,   165,   164,   118,   636,   118,    32,   166,
      79,   387,    99,  -182,   637,   118,    32,   389,   395,   118,
     257,  -182,   402,   397,   112,   404,   416,   112,   420,   258,
     408,   129,   256,   112,    10,    11,   423,   450,     9,   118,
     118,   147,   151,     9,   436,   449,   487,   485,   484,     9,
     346,   451,   488,   486,   229,   151,     9,   346,   452,   232,
     453,   265,   487,   485,   484,   346,   463,   266,   488,   486,
     619,   237,   165,   164,   275,    35,  -180,   468,   166,   279,
      37,    10,    11,  -181,   471,   290,   472,    10,    11,   113,
     256,   319,    10,    11,    47,    48,     9,   229,    10,    11,
    -180,    51,   232,  -179,   118,    10,    11,  -181,  -180,  -183,
     474,   118,   347,   473,   475,  -181,   245,   490,   357,   358,
     118,   382,   495,   498,   112,   257,   513,  -179,   510,   508,
     112,    61,   147,  -183,   529,  -179,   151,   668,   524,    10,
      11,  -183,   515,    64,   517,    10,    11,   229,   525,   487,
     485,   484,   232,   531,   118,   488,   486,   534,   346,   535,
     536,   151,   438,   178,   547,   346,   237,   346,   538,   539,
     342,   558,   560,   186,   561,   568,   346,   190,   346,   467,
     533,   572,   195,   196,   197,   198,   574,   579,   577,   320,
     581,   582,   585,   596,   603,    79,   600,   587,   601,   165,
     164,   351,  -158,   602,   118,   166,  -159,   118,   604,    32,
     607,   605,   245,   608,   609,   611,   613,   632,   620,   487,
     485,   484,   634,   365,   635,   488,   486,   647,   648,   664,
     655,   442,   654,    37,   656,   657,   658,   107,    66,   245,
      79,   633,   113,   454,   661,   584,   594,    47,    48,     9,
     595,   465,   373,   419,    51,   407,   124,   374,   286,   354,
      35,   225,   480,   509,   497,    37,    91,   346,   169,   578,
     447,   151,   543,   138,   113,   346,   448,   118,   115,    47,
      48,     9,   346,   567,   226,   161,    51,   643,   170,   353,
     282,   640,     0,    55,   563,     0,    64,     0,    10,    11,
     283,     0,     0,     0,     0,     0,    56,    57,     0,    58,
      59,    79,     0,    60,     0,   346,    61,     0,   547,   346,
       0,     0,     0,   227,   233,   234,    62,    63,    64,     0,
      10,    11,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,   542,     0,   263,     0,     0,     0,
     549,   552,     0,   557,   278,     0,     0,     0,     0,     0,
       0,   284,   562,   245,   564,   482,     0,     0,     0,   346,
     494,   346,     0,   245,     0,   112,     0,     0,     0,     0,
       0,     0,     0,   112,   293,     0,     0,   112,     0,     0,
     147,     0,   151,     0,     0,     0,     0,     0,     0,     0,
     294,   295,   296,   297,     0,   298,   299,   300,   151,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,     0,   161,     0,   321,     0,   324,    79,
      79,     0,   138,   138,   335,   363,     0,   351,   546,     0,
     553,     0,     0,     0,     0,   458,     0,     0,     0,     0,
       0,   458,   372,   606,   566,   351,   178,     0,     0,     0,
     366,   610,     0,     0,    79,     0,   186,     0,     0,   245,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   176,
    -279,     0,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   411,     0,     0,   418,   418,     0,
       0,     0,     0,     0,   549,   641,   138,     0,   177,   178,
       0,   179,   180,   181,   182,   183,   138,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,     0,     0,     0,     0,     0,     0,     0,   425,
    -279,     0,     0,   161,    37,     0,     0,     0,     0,   425,
    -279,     0,     0,   113,     0,     0,     0,     0,    47,    48,
       9,     0,   245,     0,     0,    51,     0,     0,    79,     0,
       0,   411,   225,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
     351,     0,   546,   138,   138,   226,   553,   458,   499,     0,
       0,   351,   351,     0,     0,     0,     0,    64,     0,    10,
      11,   399,     0,     0,     0,     0,     0,     0,   227,   519,
       0,    -2,    34,     0,    35,     0,     0,    36,     0,    37,
      38,    39,   138,     0,    40,     0,    41,    42,    43,    44,
      45,    46,     0,    47,    48,     9,     0,   138,    49,    50,
      51,    52,    53,    54,     0,   161,     0,    55,     0,     0,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,    57,     0,    58,    59,     0,     0,    60,     0,    35,
      61,     0,     0,   -24,    37,     0,     0,     0,     0,     0,
      62,    63,    64,   113,    10,    11,     0,     0,    47,    48,
       9,   570,   571,     0,     0,    51,     0,     0,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,    56,    57,     0,    58,   160,
       0,     0,    60,   589,     0,    61,   316,     0,     0,     0,
       0,     0,     0,     0,   425,    62,    63,    64,     0,    10,
      11,   425,   592,   425,     0,     0,   326,     0,    35,     0,
       0,    36,  -254,    37,    38,    39,     0,  -254,    40,     0,
      41,    42,   113,    44,    45,    46,     0,    47,    48,     9,
       0,     0,    49,    50,    51,    52,    53,    54,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     0,    58,    59,     0,
       0,    60,     0,     0,    61,     0,     0,  -254,     0,     0,
       0,   170,   327,  -254,    62,    63,    64,     0,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,   652,
     326,   161,    35,     0,     0,    36,     0,    37,    38,    39,
     425,     0,    40,     0,    41,    42,   113,    44,    45,    46,
       0,    47,    48,     9,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,    58,    59,     0,     0,    60,     0,    35,    61,     0,
       0,  -254,    37,     0,     0,     0,   327,  -254,    62,    63,
      64,   113,    10,    11,     0,     0,    47,    48,     9,     0,
     236,     0,     0,    51,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,    56,    57,    37,    58,    59,     0,     0,
      60,     0,     0,    61,   113,     0,     0,     0,     0,    47,
      48,     9,     0,    62,    63,    64,    51,    10,    11,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,    58,
      59,     0,     0,    60,     0,    35,    61,     0,     0,     0,
      37,     0,     0,     0,   424,     0,    62,    63,    64,   113,
      10,    11,     0,     0,    47,    48,     9,     0,     0,     0,
       0,    51,     0,   433,     0,     0,     0,     0,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,    58,   160,     0,     0,    60,     0,
      35,    61,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    62,    63,    64,   113,    10,    11,     0,     0,    47,
      48,     9,     0,   477,     0,     0,    51,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     0,    58,
      59,     0,     0,    60,     0,    35,    61,     0,     0,     0,
      37,     0,     0,     0,     0,     0,    62,    63,    64,   113,
      10,    11,     0,     0,    47,    48,     9,     0,   478,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,    56,    57,    37,    58,    59,     0,     0,    60,     0,
       0,    61,   113,     0,     0,     0,     0,    47,    48,     9,
       0,    62,    63,    64,    51,    10,    11,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,    57,     0,    58,    59,     0,
       0,    60,     0,    35,    61,     0,     0,     0,    37,     0,
       0,     0,   591,     0,    62,    63,    64,   113,    10,    11,
       0,     0,    47,    48,     9,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,    56,
      57,    37,    58,    59,     0,     0,    60,     0,     0,    61,
     113,     0,     0,     0,     0,    47,    48,     9,     0,    62,
      63,    64,    51,    10,    11,     0,     0,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,    56,    57,   285,    58,   160,     0,     0,    60,
       0,     0,    61,   113,     0,     0,     0,     0,    47,    48,
       9,     0,    62,    63,    64,    51,    10,    11,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    37,    58,    59,
       0,     0,    60,     0,     0,    61,   113,     0,     0,     0,
       0,    47,    48,     9,     0,    62,    63,    64,    51,    10,
      11,     0,     0,    37,     0,   225,   243,     0,     0,     0,
       0,    37,   113,     0,     0,     0,     0,    47,    48,     9,
     113,     0,   115,     0,    51,    47,    48,     9,   226,     0,
       0,   225,    51,     0,   292,     0,    37,     0,     0,   114,
      64,     0,    10,    11,   283,   113,     0,     0,   115,     0,
      47,    48,     9,     0,   226,     0,   115,    51,     0,     0,
       0,     0,   116,     0,   225,     0,    64,     0,    10,    11,
      37,     0,     0,     0,    64,     0,    10,    11,     0,   113,
       0,   115,     0,     0,    47,    48,     9,   226,     0,     0,
       0,    51,     0,     0,     0,    37,     0,     0,   409,    64,
       0,    10,    11,   285,   113,     0,     0,     0,     0,    47,
      48,     9,   113,     0,     0,   115,    51,    47,    48,     9,
       0,   410,     0,   225,    51,     0,     0,     0,   336,     0,
       0,   225,     0,    64,     0,    10,    11,   337,     0,     0,
     115,     0,   338,   339,   340,     0,   481,     0,   115,   341,
       0,     0,     0,     0,   226,     0,   342,     0,    64,     0,
      10,    11,   336,     0,     0,     0,    64,     0,    10,    11,
       0,   337,   336,   343,     0,   464,   338,   339,   340,     0,
       0,   337,     0,   341,     0,   344,   338,   339,   340,     0,
     444,   345,     0,   341,    11,   336,     0,     0,     0,     0,
     342,     0,     0,     0,   337,   336,     0,   343,     0,   338,
     339,   545,     0,   445,   337,     0,   341,   343,     0,   338,
     339,   340,     0,   342,     0,   345,   341,   336,    11,     0,
       0,     0,     0,   342,     0,   345,   337,     0,    11,     0,
     343,   338,   339,   340,     0,     0,     0,     0,   341,     0,
     343,     0,     0,     0,     0,   342,   614,     0,   345,     0,
      10,    11,     0,     0,     0,     0,     0,     0,   345,     0,
       0,    11,   343,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,   177,   178,    11,   179,     0,   181,   182,   183,     0,
       0,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   177,   178,     0,   179,     0,   181,
     182,   183,     0,   438,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,     0,     0,
       0,     0,     0,     0,   177,   178,     0,   179,     0,   181,
     182,   183,     0,   435,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   177,   178,
       0,   179,     0,   181,   182,   183,     0,   528,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   177,   178,     0,   179,     0,   181,   182,   183,
       0,   662,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   177,   178,     0,   179,
       0,   181,   182,   183,     0,   663,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     177,   178,     0,     0,     0,   181,   182,   183,     0,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   177,   178,     0,     0,     0,   181,
     182,   183,     0,     0,   185,   186,   187,   188,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   178,     0,
       0,     0,   181,   182,   183,     0,     0,   185,   186,   187,
     188,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198
};

static const yytype_int16 yycheck[] =
{
      37,    37,   325,   143,    61,    37,    37,    49,    67,   202,
     205,   380,   148,   323,   252,   127,   127,   224,   144,    28,
     449,   260,   133,    61,    61,    36,   136,   457,    39,    61,
     269,   490,   143,   392,    45,    31,   601,     5,   277,    67,
     318,   400,   281,    35,   251,    11,   324,    24,   265,   266,
      24,     0,   291,    24,    24,     3,     7,    37,    62,     3,
       1,    12,    25,    20,    68,    55,    56,    57,    58,    59,
      60,    25,    62,    63,     3,    67,    53,   114,   115,   116,
      24,     5,   114,   115,   116,   127,     5,    62,    59,    51,
     655,   128,   657,    68,    35,    62,   128,    65,    66,    73,
     137,    68,    73,    74,    24,   137,   465,    75,   145,    75,
      67,   107,     3,   145,   173,   152,    60,    68,   577,    63,
     152,    83,   160,   160,    72,   136,    67,    89,   160,    73,
      74,   142,   442,    24,   114,   115,   116,    62,   175,    59,
      40,    65,    21,   175,    44,   173,    65,   257,   128,   508,
     428,    75,   430,    73,    74,    24,    75,   137,    66,    50,
       3,    24,   200,   200,    72,   145,   208,   209,   200,   159,
     160,    59,   152,   602,   391,    24,   393,    24,   385,   609,
      63,    24,    73,    74,   613,   614,    74,   224,   647,   226,
      59,    62,   224,     3,   226,   175,    62,   520,    94,    95,
       1,    97,    98,   441,   527,   564,   243,     3,   245,    62,
      59,   243,   221,   245,   251,    68,    59,    71,     3,   251,
      63,   416,   581,   582,    73,    74,    73,    74,    62,   424,
      73,    74,     3,    66,    35,    67,   273,     7,   476,    24,
     282,   273,    12,   436,   224,    66,   226,   606,   285,   285,
     292,   288,   289,   285,   285,    59,   288,   289,    59,   371,
     371,    59,   319,   243,     3,   245,    67,    59,   404,   381,
     381,   251,    35,    24,   481,    74,   402,   387,    63,    60,
      64,   319,   319,    24,   523,    24,    40,   319,    73,    74,
      44,    62,    63,   273,    75,     7,    59,    68,    68,   668,
      12,    62,    59,    59,    67,   285,    63,     7,   288,   289,
      63,    50,    12,   636,    71,    59,   212,    67,    59,    35,
      59,    59,   218,   219,    60,   362,    75,   369,   370,    72,
     362,     3,    73,    74,    73,    74,    24,    72,   375,   377,
     377,   377,   580,   375,     8,   377,   377,     9,   385,    60,
      62,    60,   389,   385,    35,    17,    68,   389,    62,    21,
      75,   420,    62,    60,    62,    53,   408,   574,    68,    31,
      32,    59,   409,   410,   431,    24,   387,   409,   410,    35,
      68,   423,   362,     5,   395,    73,    74,    95,   399,    97,
      98,    24,    59,   431,   431,   375,   591,   377,    20,   431,
      22,    62,    64,    59,   597,   385,    28,    72,    62,   389,
      59,    67,    62,     3,    36,    62,    67,    39,    62,    68,
      65,    43,    24,    45,    73,    74,    65,    67,    24,   409,
     410,    53,    54,    24,    66,    59,   474,   474,   474,    24,
     336,    71,   474,   474,   481,    67,    24,   343,    67,   481,
       8,    53,   490,   490,   490,   351,    65,    59,   490,   490,
     572,   572,   500,   500,    60,     3,    35,    62,   500,    60,
       8,    73,    74,    35,    62,    60,    62,    73,    74,    17,
      24,    59,    73,    74,    22,    23,    24,   524,    73,    74,
      59,    29,   524,    35,   474,    73,    74,    59,    67,    35,
      60,   481,   212,    62,    60,    67,   128,    60,   218,   219,
     490,    63,    60,    68,   136,    59,    35,    59,    68,    60,
     142,    59,   144,    59,    75,    67,   148,   667,   587,    73,
      74,    67,    60,    71,    60,    73,    74,   574,    60,   577,
     577,   577,   574,    68,   524,   577,   577,    60,   444,    60,
      60,   173,    75,    34,   450,   451,   667,   453,    60,    68,
      36,     3,    62,    44,    72,    60,   462,    48,   464,    75,
     627,    62,    53,    54,    55,    56,    59,    66,    60,   201,
      60,    60,    60,    60,    68,   207,    60,    62,    60,   627,
     627,   213,    59,    59,   574,   627,    59,   577,    62,   221,
      68,    72,   224,    62,    49,    62,    59,    68,    60,   647,
     647,   647,    60,   235,    68,   647,   647,    60,    14,    68,
      60,    62,    72,     8,    60,    60,    60,    31,    22,   251,
     252,   587,    17,   343,   648,   513,   529,    22,    23,    24,
     529,   351,   245,   289,    29,   283,    39,   245,   160,   214,
       3,    36,   375,   395,   387,     8,    22,   553,    11,   500,
     336,   283,   445,    49,    17,   561,   336,   647,    53,    22,
      23,    24,   568,   467,    59,    61,    29,   608,    64,   213,
      65,   604,    -1,    36,   463,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,   323,    -1,    56,    -1,   601,    59,    -1,   604,   605,
      -1,    -1,    -1,   114,   115,   116,    69,    70,    71,    -1,
      73,    74,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   355,   444,    -1,   137,    -1,    -1,    -1,
     450,   451,    -1,   453,   145,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   462,   375,   464,   377,    -1,    -1,    -1,   655,
     382,   657,    -1,   385,    -1,   387,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   395,   175,    -1,    -1,   399,    -1,    -1,
     402,    -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,   177,   178,   179,    -1,   181,   182,   183,   420,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,    -1,   200,    -1,   202,    -1,   204,   441,
     442,    -1,   208,   209,   210,   226,    -1,   449,   450,    -1,
     452,    -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,    -1,
      -1,   463,   243,   553,   466,   467,    34,    -1,    -1,    -1,
     236,   561,    -1,    -1,   476,    -1,    44,    -1,    -1,   481,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     4,
       5,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,    -1,    -1,   288,   289,    -1,
      -1,    -1,    -1,    -1,   604,   605,   282,    -1,    33,    34,
      -1,    36,    37,    38,    39,    40,   292,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      65,    -1,    -1,   319,     8,    -1,    -1,    -1,    -1,   325,
      75,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,   574,    -1,    -1,    29,    -1,    -1,   580,    -1,
      -1,   362,    36,    -1,    -1,   587,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
     602,    -1,   604,   369,   370,    59,   608,   609,   389,    -1,
      -1,   613,   614,    -1,    -1,    -1,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,   409,   410,
      -1,     0,     1,    -1,     3,    -1,    -1,     6,    -1,     8,
       9,    10,   408,    -1,    13,    -1,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    24,    -1,   423,    27,    28,
      29,    30,    31,    32,    -1,   431,    -1,    36,    -1,    -1,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,     3,
      59,    -1,    -1,    62,     8,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    17,    73,    74,    -1,    -1,    22,    23,
      24,   477,   478,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   500,    49,    50,    -1,    52,    53,
      -1,    -1,    56,   524,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   520,    69,    70,    71,    -1,    73,
      74,   527,   528,   529,    -1,    -1,     1,    -1,     3,    -1,
      -1,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      -1,   597,    67,    68,    69,    70,    71,    -1,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   624,   625,
       1,   627,     3,    -1,    -1,     6,    -1,     8,     9,    10,
     636,    -1,    13,    -1,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    -1,     3,    59,    -1,
      -1,    62,     8,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    17,    73,    74,    -1,    -1,    22,    23,    24,    -1,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    49,    50,     8,    52,    53,    -1,    -1,
      56,    -1,    -1,    59,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    69,    70,    71,    29,    73,    74,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,     3,    59,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    67,    -1,    69,    70,    71,    17,
      73,    74,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,
       3,    59,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    17,    73,    74,    -1,    -1,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,     3,    59,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    17,
      73,    74,    -1,    -1,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    49,    50,     8,    52,    53,    -1,    -1,    56,    -1,
      -1,    59,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    69,    70,    71,    29,    73,    74,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,
      -1,    56,    -1,     3,    59,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    67,    -1,    69,    70,    71,    17,    73,    74,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    49,
      50,     8,    52,    53,    -1,    -1,    56,    -1,    -1,    59,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    69,
      70,    71,    29,    73,    74,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    49,    50,     8,    52,    53,    -1,    -1,    56,
      -1,    -1,    59,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    69,    70,    71,    29,    73,    74,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,     8,    52,    53,
      -1,    -1,    56,    -1,    -1,    59,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    69,    70,    71,    29,    73,
      74,    -1,    -1,     8,    -1,    36,    11,    -1,    -1,    -1,
      -1,     8,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      17,    -1,    53,    -1,    29,    22,    23,    24,    59,    -1,
      -1,    36,    29,    -1,    65,    -1,     8,    -1,    -1,    36,
      71,    -1,    73,    74,    75,    17,    -1,    -1,    53,    -1,
      22,    23,    24,    -1,    59,    -1,    53,    29,    -1,    -1,
      -1,    -1,    59,    -1,    36,    -1,    71,    -1,    73,    74,
       8,    -1,    -1,    -1,    71,    -1,    73,    74,    -1,    17,
      -1,    53,    -1,    -1,    22,    23,    24,    59,    -1,    -1,
      -1,    29,    -1,    -1,    -1,     8,    -1,    -1,    36,    71,
      -1,    73,    74,     8,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    17,    -1,    -1,    53,    29,    22,    23,    24,
      -1,    59,    -1,    36,    29,    -1,    -1,    -1,     8,    -1,
      -1,    36,    -1,    71,    -1,    73,    74,    17,    -1,    -1,
      53,    -1,    22,    23,    24,    -1,    59,    -1,    53,    29,
      -1,    -1,    -1,    -1,    59,    -1,    36,    -1,    71,    -1,
      73,    74,     8,    -1,    -1,    -1,    71,    -1,    73,    74,
      -1,    17,     8,    53,    -1,    11,    22,    23,    24,    -1,
      -1,    17,    -1,    29,    -1,    65,    22,    23,    24,    -1,
      36,    71,    -1,    29,    74,     8,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    17,     8,    -1,    53,    -1,    22,
      23,    24,    -1,    59,    17,    -1,    29,    53,    -1,    22,
      23,    24,    -1,    36,    -1,    71,    29,     8,    74,    -1,
      -1,    -1,    -1,    36,    -1,    71,    17,    -1,    74,    -1,
      53,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      53,    -1,    -1,    -1,    -1,    36,    59,    -1,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    33,    34,    74,    36,    -1,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    75,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    72,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    33,    34,
      -1,    36,    -1,    38,    39,    40,    -1,    66,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    33,    34,    -1,    36,    -1,    38,    39,    40,
      -1,    66,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    33,    34,    -1,    36,
      -1,    38,    39,    40,    -1,    66,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      33,    34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    33,    34,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    79,    80,     0,    25,    78,    25,    86,    24,
      73,    74,   141,   142,    81,    24,    88,    89,     3,    62,
      21,    82,   167,    24,    87,   215,    63,     3,    59,    63,
      83,    85,   141,    62,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    36,    49,    50,    52,    53,
      56,    59,    69,    70,    71,    90,    91,    92,    98,   110,
     113,   121,   124,   126,   127,   128,   129,   134,   138,   141,
     143,   144,   150,   151,   154,   157,   158,   159,   162,   165,
     166,   182,   187,    62,     9,    17,    21,    31,    32,    64,
     200,    24,    73,    60,    83,    84,     3,    86,    88,     3,
     138,   140,   141,    17,    36,    53,    59,   141,   143,   149,
     153,   154,   155,   162,   140,   128,   134,   111,    59,   141,
     160,   128,   138,   114,    35,    67,   137,    71,   126,   187,
     194,   125,   137,   122,    59,    96,    97,   141,    59,    93,
     139,   141,   186,   127,   127,   127,   127,   127,   127,    36,
      53,   126,   135,   148,   154,   156,   162,   127,   127,    11,
     126,   193,    62,    59,    94,   186,     4,    33,    34,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    67,
      59,    63,    71,    66,    59,   137,     1,   137,     5,    65,
      75,   142,   201,    59,   161,   201,    24,   201,   202,   201,
      64,    62,   191,    88,    59,    36,    59,   147,   153,   154,
     155,   156,   162,   147,   147,    63,    26,    98,   107,   108,
     109,   187,   195,    11,   136,   141,   145,   147,   178,   179,
     180,    59,    67,   163,   112,   195,    24,    59,    68,   138,
     172,   174,   176,   147,    35,    53,    59,    68,   138,   171,
     173,   174,   175,   185,   112,    60,    97,   170,   147,    60,
      93,   168,    65,    75,   147,     8,   148,    60,    72,    72,
      60,    94,    65,   147,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   130,    60,   135,   188,    59,
     141,   126,   193,   183,   126,   130,     1,    67,    91,   100,
     181,   182,   184,   187,   187,   126,     8,    17,    22,    23,
      24,    29,    36,    53,    65,    71,   142,   203,   205,   206,
     207,   141,   208,   216,   163,    59,     3,   203,   203,    83,
      60,   180,     8,   147,    60,   141,   126,    35,   105,     5,
      65,    62,   147,   136,   145,    75,   192,    60,   180,   184,
     115,    62,    63,    24,   174,    59,   177,    62,   191,    72,
     104,    59,   175,    53,   175,    62,   191,     3,   199,    75,
     147,   123,    62,   191,    62,   191,   187,   139,    65,    36,
      59,   147,   153,   154,   155,   162,    67,   146,   147,   146,
      62,   191,   187,    65,    67,   126,   131,   132,   189,   190,
      11,    75,   192,    31,   135,    72,    66,   181,    75,   192,
     190,   101,    62,    68,    36,    59,   204,   205,   207,    59,
      67,    71,    67,     8,   203,     3,    50,    59,   141,   213,
     214,     3,    72,    65,    11,   203,    60,    75,    62,   196,
     216,    62,    62,    62,    60,    60,   106,    26,    26,   195,
     178,    59,   141,   152,   153,   154,   155,   156,   162,   164,
      60,    68,   105,   195,   141,    60,   180,   176,    68,   147,
       7,    12,    68,    99,   102,   175,   199,   175,    60,   173,
      68,   138,   199,    35,    97,    60,    93,    60,   187,   147,
     130,    94,    95,   169,   186,    60,   187,   130,    66,    75,
     192,    68,   192,   135,    60,    60,    60,   193,    60,    68,
     184,   181,   203,   206,   196,    24,   141,   142,   198,   203,
     210,   218,   203,   141,   197,   209,   217,   203,     3,   213,
      62,    72,   203,   214,   203,   199,   141,   208,    60,   184,
     126,   126,    62,   180,    59,   164,   116,    60,   188,    66,
     103,    60,    60,   199,   104,    60,   190,    62,   191,   147,
     190,    67,   126,   133,   131,   132,    60,    66,    72,    68,
      60,    60,    59,    68,    62,    72,   203,    68,    62,    49,
     203,    62,   199,    59,    59,   203,   211,   212,    68,   195,
      60,   180,   119,   164,     5,    65,    66,    75,   184,   199,
     199,    68,    68,    95,    60,    68,   130,   193,   211,   196,
     210,   203,   199,   209,   213,   196,   196,    60,    14,   117,
     120,   126,   126,   190,    72,    60,    60,    60,    60,   164,
      20,   100,    66,    66,    68,   211,   211,   118,   112,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    80,    79,    81,    81,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    86,
      87,    87,    89,    88,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      93,    93,    93,    94,    94,    95,    95,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     101,   100,   103,   102,   104,   104,   106,   105,   107,   107,
     107,   108,   108,   108,   109,   111,   110,   112,   112,   114,
     115,   116,   113,   118,   117,   119,   119,   120,   120,   122,
     123,   121,   125,   124,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   128,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   139,   140,   140,   141,   141,
     141,   142,   142,   143,   144,   145,   145,   146,   146,   147,
     147,   147,   147,   147,   147,   148,   148,   148,   148,   149,
     149,   149,   149,   149,   150,   150,   151,   152,   152,   152,
     152,   152,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   155,   156,   157,   157,   158,   158,   159,   160,   160,
     161,   161,   162,   163,   163,   164,   164,   164,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   173,   173,   173,   173,   174,
     174,   175,   176,   176,   176,   177,   178,   178,   178,   178,
     179,   179,   180,   180,   181,   181,   181,   181,   181,   182,
     182,   182,   182,   182,   183,   182,   182,   182,   182,   182,
     182,   182,   182,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   200,   200,   200,
     200,   200,   200,   201,   202,   203,   203,   203,   204,   204,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   206,   207,   208,   208,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   218
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
       1,     4,     4,     1,     1,     1,     2,     1,     0,     1,
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
#line 128 "go.y" /* yacc.c:1646  */
    {
		xtop = concat(xtop, (yyvsp[0].list));
	}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 134 "go.y" /* yacc.c:1646  */
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 140 "go.y" /* yacc.c:1646  */
    {
		mkpackage((yyvsp[-1].sym)->name);
	}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 150 "go.y" /* yacc.c:1646  */
    {
		importpkg = runtimepkg;

		if(debug['A'])
			cannedimports("runtime.builtin", "package runtime\n\n$$\n\n");
		else
			cannedimports("runtime.builtin", runtimeimport);
		curio.importsafe = 1;
	}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "go.y" /* yacc.c:1646  */
    {
		importpkg = nil;
	}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 175 "go.y" /* yacc.c:1646  */
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
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 212 "go.y" /* yacc.c:1646  */
    {
		// When an invalid import path is passed to importfile,
		// it calls yyerror and then sets up a fake import with
		// no package statement. This allows us to test more
		// than one invalid import statement in a single file.
		if(nerrors == 0)
			fatal("phase error in import");
	}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 227 "go.y" /* yacc.c:1646  */
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 234 "go.y" /* yacc.c:1646  */
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[-1].sym);
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 241 "go.y" /* yacc.c:1646  */
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 250 "go.y" /* yacc.c:1646  */
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
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 265 "go.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[0].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 271 "go.y" /* yacc.c:1646  */
    {
		defercheckwidth();
	}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 275 "go.y" /* yacc.c:1646  */
    {
		resumecheckwidth();
		unimportfile();
	}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 284 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 290 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 294 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 299 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 305 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
	}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 309 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 313 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 317 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 323 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 329 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-4].list), (yyvsp[-2].list));
		iota = -100000;
		lastconst = nil;
	}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 335 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		iota = -100000;
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 340 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 344 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 348 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 354 "go.y" /* yacc.c:1646  */
    {
		iota = 0;
	}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 360 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 364 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 368 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-2].list), nil, (yyvsp[0].list));
	}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 374 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 378 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-2].list), N, (yyvsp[0].list));
	}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 385 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 389 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[0].list), N, nil);
	}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 395 "go.y" /* yacc.c:1646  */
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[0].sym));
	}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 404 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = typedcl1((yyvsp[-1].node), (yyvsp[0].node), 1);
	}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 410 "go.y" /* yacc.c:1646  */
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
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 428 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-2].node), (yyvsp[0].node));
		(yyval.node)->etype = (yyvsp[-1].i);			// rathole to pass opcode
	}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 433 "go.y" /* yacc.c:1646  */
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
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 445 "go.y" /* yacc.c:1646  */
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
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 461 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 467 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 475 "go.y" /* yacc.c:1646  */
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
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 495 "go.y" /* yacc.c:1646  */
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
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 513 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[-3].list), list1((yyvsp[-1].node)), (yyvsp[-2].i)));
	}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 522 "go.y" /* yacc.c:1646  */
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
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 540 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 544 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[-1].list));
		popdcl();
	}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 554 "go.y" /* yacc.c:1646  */
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
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 565 "go.y" /* yacc.c:1646  */
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
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 585 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 589 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-1].list), (yyvsp[0].node));
	}
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 595 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 599 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		popdcl();
	}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 606 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->etype = 0;	// := flag
	}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 612 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[-3].list), (yyval.node));
	}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 619 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->etype = 0; // := flag
	}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 626 "go.y" /* yacc.c:1646  */
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
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 637 "go.y" /* yacc.c:1646  */
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 646 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[0].list));
	}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 653 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 657 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		popdcl();
	}
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 664 "go.y" /* yacc.c:1646  */
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 670 "go.y" /* yacc.c:1646  */
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[-2].node) != N)
			(yyval.node)->ninit = list1((yyvsp[-2].node));
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 681 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 685 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 690 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->nbody = (yyvsp[0].list);
	}
#line 2905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 694 "go.y" /* yacc.c:1646  */
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
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 711 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 715 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[-1].node)->nbody = (yyvsp[0].list);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 723 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 727 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-1].list), (yyvsp[0].list));
	}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 732 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 736 "go.y" /* yacc.c:1646  */
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[0].node);
		node->end = node;
		(yyval.list) = node;
	}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 747 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 751 "go.y" /* yacc.c:1646  */
    {
		Node *n;
		n = (yyvsp[0].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 759 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-4].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
		popdcl();
	}
#line 3012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 769 "go.y" /* yacc.c:1646  */
    {
		typesw = nod(OXXX, typesw, N);
	}
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 773 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
	}
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 786 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOROR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 790 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 794 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OEQ, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 798 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 802 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 806 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 810 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 814 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 818 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OADD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 822 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSUB, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 826 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 830 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OXOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 834 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMUL, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 838 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODIV, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 842 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMOD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 846 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 850 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 854 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 858 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 863 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSEND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 870 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 874 "go.y" /* yacc.c:1646  */
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
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 885 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPLUS, (yyvsp[0].node), N);
	}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 889 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMINUS, (yyvsp[0].node), N);
	}
#line 3230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 893 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONOT, (yyvsp[0].node), N);
	}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 897 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 902 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 906 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORECV, (yyvsp[0].node), N);
	}
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 916 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-2].node), N);
	}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 920 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = (yyvsp[-2].list);
	}
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 925 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-5].node), N);
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->isddd = 1;
	}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 933 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 938 "go.y" /* yacc.c:1646  */
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
#line 3313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 949 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[-4].node), (yyvsp[-1].node));
	}
#line 3321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 953 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[-4].node));
	}
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 957 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OINDEX, (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 961 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSLICE, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node)));
	}
#line 3345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 965 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[-1].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[-7].node), nod(OKEY, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node))));
	}
#line 3357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 974 "go.y" /* yacc.c:1646  */
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = list1((yyvsp[-2].node));
	}
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 980 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 987 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 993 "go.y" /* yacc.c:1646  */
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-5].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1002 "go.y" /* yacc.c:1646  */
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
#line 3409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1010 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OKEY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1016 "go.y" /* yacc.c:1646  */
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
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1033 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1041 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1049 "go.y" /* yacc.c:1646  */
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
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1075 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = LBODY;
	}
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1079 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = '{';
	}
#line 3493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1090 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[0].sym));
	}
#line 3504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1099 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = dclname((yyvsp[0].sym));
	}
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1104 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 3520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1111 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[0].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
	}
#line 3531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1119 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = S;
	}
#line 3539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1125 "go.y" /* yacc.c:1646  */
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
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1138 "go.y" /* yacc.c:1646  */
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
#line 3573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1153 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname((yyvsp[0].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
#line 3583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1173 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
#line 3592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1178 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODDD, (yyvsp[0].node), N);
	}
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1184 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nil;
	}
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1195 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1204 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1214 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1235 "go.y" /* yacc.c:1646  */
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
#line 3647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1248 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1252 "go.y" /* yacc.c:1646  */
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[0].node));
	}
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1257 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Cboth;
	}
#line 3673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1262 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Csend;
	}
#line 3682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1267 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTMAP, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1275 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1281 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Crecv;
	}
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1288 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1294 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1301 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1307 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1318 "go.y" /* yacc.c:1646  */
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
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1334 "go.y" /* yacc.c:1646  */
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
#line 3796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1363 "go.y" /* yacc.c:1646  */
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
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1401 "go.y" /* yacc.c:1646  */
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
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1426 "go.y" /* yacc.c:1646  */
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
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1444 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1452 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1456 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1464 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1468 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[0].node)));
	}
#line 3930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1472 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].list) = checkarglist((yyvsp[-1].list), 0);
		(yyval.list) = (yyvsp[-1].list);
	}
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1479 "go.y" /* yacc.c:1646  */
    {
		closurehdr((yyvsp[0].node));
	}
#line 3947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1485 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody((yyvsp[-1].list));
		fixlbrace((yyvsp[-2].i));
	}
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1490 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody(nil);
	}
#line 3964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1501 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1505 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[-1].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
		nowritebarrier = 0;
	}
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1518 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1525 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1531 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1535 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1542 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1548 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1552 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1558 "go.y" /* yacc.c:1646  */
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
#line 4069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1581 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1586 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1592 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->right = nod(OIND, (yyvsp[-1].node)->right, N);
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1598 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1605 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1614 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		(yyval.sym) = (yyvsp[0].sym);
		n = oldname((yyvsp[0].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
#line 4133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1623 "go.y" /* yacc.c:1646  */
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
#line 4150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1638 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = embedded((yyvsp[0].sym), localpkg);
	}
#line 4158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1644 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[-1].node), (yyvsp[0].node));
		ifacedcl((yyval.node));
	}
#line 4167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1649 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[0].sym)));
	}
#line 4175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1653 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[-1].sym)));
		yyerror("cannot parenthesize embedded type");
	}
#line 4184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1660 "go.y" /* yacc.c:1646  */
    {
		// without func keyword
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1674 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1680 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1689 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1693 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1698 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1702 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1710 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1715 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = liststmt((yyvsp[0].list));
	}
#line 4264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1720 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1731 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node) = nod(OLABEL, (yyvsp[-1].node), N);
		(yyvsp[-1].node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1736 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		(yyvsp[-3].node)->defn = (yyvsp[0].node);
		l = list1((yyvsp[-3].node));
		if((yyvsp[0].node))
			l = list(l, (yyvsp[0].node));
		(yyval.node) = liststmt(l);
	}
#line 4295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1746 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1752 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OBREAK, (yyvsp[0].node), N);
	}
#line 4313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1756 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[0].node), N);
	}
#line 4321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1760 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPROC, (yyvsp[0].node), N);
	}
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1764 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODEFER, (yyvsp[0].node), N);
	}
#line 4337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1768 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGOTO, (yyvsp[0].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1773 "go.y" /* yacc.c:1646  */
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
#line 4367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1792 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		if((yyvsp[0].node) != N)
			(yyval.list) = list1((yyvsp[0].node));
	}
#line 4377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1798 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		if((yyvsp[0].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[0].node));
	}
#line 4387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1806 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1810 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1816 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1820 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1826 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1830 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1836 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1840 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1849 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1853 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1857 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1861 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1866 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1870 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1884 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1890 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1896 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1902 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1908 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1914 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1920 "go.y" /* yacc.c:1646  */
    {
		(yyval.val).ctype = CTxxx;
	}
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1930 "go.y" /* yacc.c:1646  */
    {
		importimport((yyvsp[-2].sym), (yyvsp[-1].val).u.sval);
	}
#line 4563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1934 "go.y" /* yacc.c:1646  */
    {
		importvar((yyvsp[-2].sym), (yyvsp[-1].type));
	}
#line 4571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1938 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-3].sym), types[TIDEAL], (yyvsp[-1].node));
	}
#line 4579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1942 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-4].sym), (yyvsp[-3].type), (yyvsp[-1].node));
	}
#line 4587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1946 "go.y" /* yacc.c:1646  */
    {
		importtype((yyvsp[-2].type), (yyvsp[-1].type));
	}
#line 4595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1950 "go.y" /* yacc.c:1646  */
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
#line 4617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1970 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		structpkg = (yyval.sym)->pkg;
	}
#line 4626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1977 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
		importsym((yyvsp[0].sym), OTYPE);
	}
#line 4635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1997 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
	}
#line 4643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2001 "go.y" /* yacc.c:1646  */
    {
		// predefined name like uint8
		(yyvsp[0].sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
		if((yyvsp[0].sym)->def == N || (yyvsp[0].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[0].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[0].sym)->def->type;
	}
#line 4657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2011 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(N, (yyvsp[0].type));
	}
#line 4665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2015 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(nodlit((yyvsp[-2].val)), (yyvsp[0].type));
	}
#line 4673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2019 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = maptype((yyvsp[-2].type), (yyvsp[0].type));
	}
#line 4681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2023 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tostruct((yyvsp[-1].list));
	}
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2027 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tointerface((yyvsp[-1].list));
	}
#line 4697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2031 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = ptrto((yyvsp[0].type));
	}
#line 4705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2035 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Cboth;
	}
#line 4715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2041 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[-1].type);
		(yyval.type)->chan = Cboth;
	}
#line 4725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2047 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Csend;
	}
#line 4735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2055 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Crecv;
	}
#line 4745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2063 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = functype(nil, (yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2069 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[-1].type)));
		if((yyvsp[-2].sym))
			(yyval.node)->left = newname((yyvsp[-2].sym));
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2076 "go.y" /* yacc.c:1646  */
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
#line 4782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2092 "go.y" /* yacc.c:1646  */
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
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2114 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-4].sym)), typenod(functype(fakethis(), (yyvsp[-2].list), (yyvsp[0].list))));
	}
#line 4814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 2118 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[0].type)));
	}
#line 4822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2123 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2130 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2134 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[0].type))));
	}
#line 4846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2144 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 4854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 2148 "go.y" /* yacc.c:1646  */
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
#line 4877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2167 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname(pkglookup((yyvsp[0].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
#line 4887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 2176 "go.y" /* yacc.c:1646  */
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
#line 4902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2192 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2196 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2202 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2206 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 2212 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 2216 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4950 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4954 "y.tab.c" /* yacc.c:1646  */
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
#line 2220 "go.y" /* yacc.c:1906  */


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}

