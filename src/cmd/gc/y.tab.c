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
#define YYLAST   2192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  352
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  669

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
      59,    62,    53,    49,    75,    50,    63,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    61,
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
      45,    46,    47,    48,    57,    58,    60
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
    1118,  1124,  1137,  1152,  1160,  1172,  1177,  1183,  1184,  1185,
    1186,  1187,  1188,  1194,  1195,  1196,  1197,  1203,  1204,  1205,
    1206,  1207,  1213,  1214,  1217,  1220,  1221,  1222,  1223,  1224,
    1227,  1228,  1241,  1245,  1250,  1255,  1260,  1264,  1265,  1268,
    1274,  1281,  1287,  1294,  1300,  1311,  1327,  1356,  1394,  1419,
    1437,  1446,  1449,  1457,  1461,  1465,  1472,  1478,  1483,  1495,
    1498,  1510,  1511,  1517,  1518,  1524,  1528,  1534,  1535,  1541,
    1545,  1551,  1574,  1579,  1585,  1591,  1598,  1607,  1616,  1631,
    1637,  1642,  1646,  1653,  1666,  1667,  1673,  1679,  1682,  1686,
    1692,  1695,  1704,  1707,  1708,  1712,  1713,  1719,  1720,  1721,
    1722,  1723,  1725,  1724,  1739,  1745,  1749,  1753,  1757,  1761,
    1766,  1785,  1791,  1799,  1803,  1809,  1813,  1819,  1823,  1829,
    1833,  1842,  1846,  1850,  1854,  1860,  1863,  1871,  1872,  1874,
    1875,  1878,  1881,  1884,  1887,  1890,  1893,  1896,  1899,  1902,
    1905,  1908,  1911,  1914,  1917,  1923,  1927,  1931,  1935,  1939,
    1943,  1963,  1970,  1981,  1982,  1983,  1986,  1987,  1990,  1994,
    2004,  2008,  2012,  2016,  2020,  2024,  2028,  2034,  2040,  2048,
    2056,  2062,  2069,  2085,  2107,  2111,  2117,  2120,  2123,  2127,
    2137,  2141,  2160,  2168,  2169,  2181,  2182,  2185,  2189,  2195,
    2199,  2205,  2209
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
  "'/'", "'%'", "'&'", "NotPackage", "NotParen", "'('",
  "PreferToRightParen", "';'", "')'", "'.'", "'$'", "'='", "':'", "'{'",
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
  "hidden_importsym", "name", "labelname", "dotdotdot", "ntype",
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
     306,    59,    41,    46,    36,    61,    58,   123,   125,    33,
     126,    91,    93,    63,    64,    44
};
# endif

#define YYPACT_NINF -473

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-473)))

#define YYTABLE_NINF -278

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -473,    74,    22,    89,  -473,   330,  -473,   116,  -473,  -473,
    -473,   150,   101,  -473,   146,   161,  -473,  -473,   125,  -473,
      68,   157,  1049,  -473,   171,   305,    16,  -473,    56,   204,
    -473,    89,   275,  -473,  -473,  -473,   330,   974,  -473,   330,
     562,  -473,  -473,   288,   562,   330,  -473,    14,   172,  1607,
    -473,    14,  -473,   395,   401,  1607,  1607,  1607,  1607,  1607,
    1607,  1650,  1607,  1607,   737,   219,  -473,   414,  -473,  -473,
    -473,  -473,  -473,   649,  -473,  -473,   216,   218,  -473,   222,
    -473,   226,   237,    14,   238,  -473,  -473,  -473,   239,    59,
    -473,  -473,    34,  -473,   228,    85,   286,   228,   228,   249,
    -473,  -473,  -473,  -473,  -473,   254,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,   260,  1795,  1795,  1795,  -473,   264,  -473,
    -473,  -473,  -473,  -473,  -473,   174,   218,   882,  1769,   270,
     265,   243,  -473,  1607,  -473,  -473,   292,  1795,  1189,   267,
    -473,   309,   315,  1607,   244,  1795,  -473,  -473,   261,  -473,
    -473,  -473,   949,  -473,  -473,  -473,  -473,  -473,  -473,  1693,
    1650,  1189,   293,  -473,     9,  -473,    97,  -473,  -473,   295,
    1189,   298,  -473,   403,  -473,  1736,  1607,  1607,  1607,  1607,
    -473,  1607,  1607,  1607,  -473,  1607,  1607,  1607,  1607,  1607,
    1607,  1607,  1607,  1607,  1607,  1607,  1607,  1607,  1607,  -473,
    1301,   455,  1607,  -473,  1607,  -473,  -473,  1246,  1607,  1607,
    1607,  -473,   594,   330,   265,   299,   372,  -473,  1942,  1942,
    -473,   152,   314,  -473,  1769,   378,  1795,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,   318,   330,  1607,  -473,  -473,   352,
    -473,    47,   345,  1795,  -473,  1769,  -473,  -473,  -473,   316,
     350,  1769,  1246,  -473,  -473,   356,    84,   389,  -473,   367,
     370,  -473,  -473,   361,  -473,    42,    71,  -473,  -473,   374,
    -473,  -473,   425,  1761,  -473,  -473,  -473,   383,  -473,  -473,
    -473,   384,  1607,   330,   381,  1822,  -473,   394,  1795,  1795,
    -473,   390,  1607,   391,  1189,  2136,  -473,  2089,  1077,  1077,
    1077,  1077,  -473,  1077,  1077,  2113,  -473,   744,   744,   744,
     744,  -473,  -473,  -473,  -473,  1344,  -473,  -473,    27,  1399,
    -473,  1987,   373,  1147,  1954,  1344,  -473,  -473,  -473,  -473,
    -473,  -473,   129,   267,   267,  1189,   698,   412,   411,   413,
    -473,   415,   477,  1942,   188,    31,  -473,   418,  -473,  -473,
    -473,  1889,  -473,    13,   428,   330,   429,   431,   434,  -473,
    -473,   435,  1795,   436,  -473,  -473,  1189,  -473,  -473,  1454,
    1509,  1607,  -473,  -473,  -473,  1769,  -473,  1848,   439,   162,
     352,  1607,   330,   433,   440,  1769,  -473,   475,   444,  1795,
      39,   389,   425,   389,   451,   326,   449,  -473,  -473,   330,
     425,   481,   330,   457,   330,   458,   267,  -473,  1607,  1856,
    1795,  -473,   134,   240,   355,   483,  -473,  -473,  -473,   330,
     468,   267,  1607,  -473,  2017,  -473,  -473,   462,   470,   471,
    1650,   485,   489,   490,  -473,  1607,  -473,  -473,   491,   492,
    1246,  1147,  -473,  1942,   522,  -473,  -473,  -473,   330,  1881,
    1942,   330,  1942,  -473,  -473,   554,   155,  -473,  -473,   498,
     494,  1942,   188,  1942,   425,   330,   330,  -473,   499,   487,
    -473,  -473,  -473,  1848,  -473,  1246,  1607,  1607,   503,  -473,
    1769,   509,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  1848,
    -473,  -473,  -473,  -473,  -473,   510,  -473,  -473,  -473,  1650,
     507,  -473,  -473,  -473,   512,  -473,   514,   425,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   267,   516,  1344,
    -473,  -473,   520,  1736,  -473,   267,  1344,  1552,  1344,  -473,
    -473,   525,  -473,  -473,  -473,  -473,   132,  -473,  -473,   233,
    -473,  -473,   528,   530,   523,   524,   536,   531,  -473,  -473,
     537,   529,  1942,   535,  -473,   543,  -473,  -473,   556,  -473,
    1942,  -473,   545,   425,  -473,   553,  -473,  1915,   263,  1189,
    1189,  1607,   551,  1769,  -473,  -473,  1848,   156,  -473,  1147,
     425,   425,  -473,    78,   521,   552,   330,   557,   391,   558,
    -473,  1189,  -473,  -473,  -473,  -473,  1607,  -473,  -473,  -473,
    1915,   330,  -473,  1881,  1942,   425,  -473,   330,   155,  -473,
    -473,  -473,   330,   330,  -473,  -473,  -473,  -473,  -473,  -473,
     560,   611,  -473,  1607,  1607,  -473,  1650,   566,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  1344,   559,  -473,   567,  -473,
    -473,  -473,  -473,   575,   576,   577,  1848,    49,  -473,  -473,
    2041,  2065,   573,  -473,  1915,  -473,  1915,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  1607,   352,  -473
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     0,     1,     0,     7,     0,    22,   158,
     160,     0,     0,   159,   219,    20,     6,   345,     0,     4,
       0,     0,     0,    21,     0,     0,     0,    16,     0,     0,
       9,    22,     0,     8,    28,   127,   156,     0,    39,   156,
       0,   264,    75,     0,     0,     0,    79,     0,     0,   293,
      92,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,     0,    25,     0,   257,   258,
     261,   259,   260,    50,    94,   135,   147,   115,   164,   163,
     128,     0,     0,     0,   184,   197,   198,    26,   216,     0,
     140,    27,     0,    19,     0,     0,     0,     0,     0,     0,
     346,   161,   162,    11,    14,   287,    18,    22,    13,    17,
     157,   265,   154,     0,     0,     0,     0,   163,   190,   194,
     180,   178,   179,   177,   266,   135,     0,   295,   250,     0,
     211,   135,   269,   295,   152,   153,     0,     0,   277,   294,
     270,     0,     0,   295,     0,     0,    36,    48,     0,    29,
     275,   155,     0,   123,   118,   119,   122,   116,   117,     0,
       0,   149,     0,   150,   175,   173,   174,   120,   121,     0,
     292,     0,   220,     0,    32,     0,     0,     0,     0,     0,
      55,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   291,   262,     0,   141,   218,     0,     0,     0,
       0,   311,     0,     0,   211,     0,     0,   312,     0,     0,
      23,   288,     0,    12,   250,     0,     0,   195,   171,   169,
     170,   167,   168,   199,     0,     0,     0,   296,    73,     0,
      76,     0,    72,   165,   244,   163,   247,   151,   248,   289,
       0,   250,     0,   205,    80,    77,   158,     0,   204,     0,
     287,   241,   229,     0,    64,     0,     0,   202,   273,   287,
     227,   239,   303,     0,    90,    38,   225,   287,    49,    31,
     221,   287,     0,     0,    40,     0,   176,   148,     0,     0,
      35,   287,     0,     0,    51,    96,   111,   114,    97,   101,
     102,   100,   112,    99,    98,    95,   113,   103,   104,   105,
     106,   107,   108,   109,   110,   285,   124,   279,   289,     0,
     129,   292,     0,     0,   289,   285,   256,    60,   254,   253,
     271,   255,     0,    53,    52,   278,     0,     0,     0,     0,
     319,     0,     0,     0,     0,     0,   318,     0,   313,   314,
     315,     0,   347,     0,     0,   297,     0,     0,     0,    15,
      10,     0,     0,     0,   181,   191,    70,    66,    74,     0,
       0,   295,   166,   245,   246,   290,   251,   213,     0,     0,
       0,   295,     0,   237,     0,   250,   240,   288,     0,     0,
       0,     0,   303,     0,     0,   288,     0,   304,   232,     0,
     303,     0,   288,     0,   288,     0,    42,   276,     0,     0,
       0,   200,   171,   169,   170,   168,   141,   193,   192,   288,
       0,    44,     0,   141,   143,   281,   282,   289,     0,   289,
     290,     0,     0,     0,   132,   291,   263,   290,     0,     0,
       0,     0,   217,     0,     0,   326,   316,   317,   297,   301,
       0,   299,     0,   325,   340,     0,     0,   342,   343,     0,
       0,     0,     0,     0,   303,     0,     0,   310,     0,   298,
     305,   309,   306,   213,   172,     0,     0,     0,     0,   249,
     250,   163,   214,   189,   187,   188,   185,   186,   210,   213,
     212,    81,    78,   238,   242,     0,   230,   203,   196,     0,
       0,    93,    62,    65,     0,   234,     0,   303,   228,   201,
     274,   231,    64,   226,    37,   222,    30,    41,     0,   285,
      45,   223,   287,    47,    33,    43,   285,     0,   290,   286,
     138,     0,   280,   125,   131,   130,     0,   136,   137,     0,
     272,   328,     0,     0,   319,     0,   318,     0,   335,   351,
     302,     0,     0,     0,   349,   300,   329,   341,     0,   307,
       0,   320,     0,   303,   331,     0,   348,   336,     0,    69,
      68,   295,     0,   250,   206,    85,   213,     0,    59,     0,
     303,   303,   233,     0,   172,     0,   288,     0,    46,     0,
     141,   145,   142,   283,   284,   126,   291,   133,    61,   327,
     336,   297,   324,     0,     0,   303,   323,     0,     0,   321,
     308,   332,   297,   297,   339,   208,   337,    67,    71,   215,
       0,    87,   243,     0,     0,    56,     0,    63,   236,   235,
      91,   139,   224,    34,   144,   285,     0,   330,     0,   352,
     322,   333,   350,     0,     0,     0,   213,     0,    86,    82,
       0,     0,     0,   134,   336,   344,   336,   338,   207,    83,
      88,    58,    57,   146,   334,   209,   295,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   -12,  -473,  -473,
     612,  -473,    -1,  -473,  -473,   620,  -473,  -137,   -48,    58,
    -473,  -130,  -112,  -473,    -2,  -473,  -473,  -473,   138,  -372,
    -473,  -473,  -473,  -473,  -473,  -473,  -140,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
     662,   448,    21,  -473,  -196,   118,   124,  -473,    53,   -59,
     410,   -16,    -3,   375,   618,   427,   313,    20,  -473,   416,
     -89,   500,  -473,  -473,  -473,  -473,   -36,   -37,   -31,   -49,
    -473,  -473,  -473,  -473,  -473,   -32,   453,  -472,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,   268,  -108,  -211,   282,
    -473,   296,  -473,  -214,  -291,   648,  -473,  -230,  -473,   -63,
      -6,   173,  -473,  -302,  -219,  -254,  -195,  -473,  -107,  -435,
    -473,  -473,  -347,  -473,   323,  -473,    72,  -473,   337,   230,
     341,   214,    77,    87,  -417,  -473,  -438,   245,  -473,   495,
    -473,  -473
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     3,    14,    21,    30,   105,    31,
       8,    24,    16,    17,    65,   328,    67,   149,   520,   521,
     145,   146,    68,   502,   329,   440,   503,   579,   390,   368,
     475,   238,   239,   240,    69,   127,   254,    70,   133,   380,
     575,   648,   666,   621,   649,    71,   143,   401,    72,   141,
      73,    74,    75,    76,   315,   425,   426,   592,    77,   317,
     244,   136,    78,   150,   111,   117,    13,    80,    81,   246,
     247,   163,   119,    82,    83,   482,   228,    84,   230,   231,
      85,    86,    87,   130,   214,    88,   253,   488,    89,    90,
      22,   281,   522,   277,   269,   260,   270,   271,   272,   262,
     386,   248,   249,   250,   330,   331,   323,   332,   273,   152,
      92,   318,   427,   428,   222,   376,   171,   140,   255,   468,
     553,   547,   398,   100,   212,   218,   614,   445,   348,   349,
     350,   352,   554,   549,   615,   616,   458,   459,    25,   469,
     555,   550
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     121,   120,   162,   274,   175,   123,   122,   322,   491,   325,
     361,   280,   165,   543,   276,   237,   104,   574,   558,   174,
     242,   237,   379,   439,   164,   227,   233,   234,   261,   166,
     108,   237,   436,   110,   460,   142,   110,   378,   429,   208,
     101,   388,   132,   139,  -184,   505,   499,     5,   263,   134,
     396,   500,   369,   511,   392,   394,   278,   118,   403,    27,
     206,   125,   405,   284,   431,   131,   383,   205,  -183,   659,
     438,    27,   420,   207,     4,   465,  -184,   229,   229,   229,
       9,   135,   232,   232,   232,   499,   293,  -237,   466,   102,
     500,   229,     9,   126,   134,   383,   232,   126,  -216,   209,
     229,   391,   430,   461,   622,   232,   223,   501,   229,   210,
     175,   165,   370,   232,     7,   229,   327,   564,   103,    29,
     232,   241,   210,   164,   393,   291,   135,    28,   166,    10,
      11,    29,  -216,   259,   118,   118,   118,   363,   229,   268,
      15,    10,    11,   232,   213,  -237,   630,   382,   118,   384,
     540,   165,  -237,    18,   372,    27,  -182,   118,   454,    11,
     582,   623,    19,   164,  -216,   118,   638,    20,   166,  -180,
     643,   495,   118,   529,   658,   531,     9,   644,   645,     9,
     504,  -268,   506,   637,   400,    23,  -268,   229,    26,   229,
     441,   454,   232,  -180,   232,   118,   411,   442,   596,   417,
     418,  -180,   333,   334,   597,   455,   229,   106,   229,   359,
     539,   232,     9,   232,   229,    29,   611,   585,    33,   232,
     519,   624,   625,   441,   589,    10,    11,   526,    10,    11,
     490,   626,    93,   628,   629,  -268,   229,   664,   455,   665,
     536,   232,  -268,   137,   118,   568,   118,   456,   413,   412,
    -267,   229,   229,   415,   414,  -267,   232,   232,   641,   237,
     433,    10,    11,   118,   478,   118,   572,   515,     9,   237,
     165,   118,   513,   411,   492,  -178,   406,   200,   109,   261,
     172,   201,   164,   199,   347,     9,   421,   166,  -154,   202,
     357,   358,   203,   118,   441,   668,   204,  -183,  -182,  -178,
     498,   598,    11,   587,  -267,   118,   275,  -178,   118,   118,
     216,  -267,     9,   220,    94,   221,   256,    10,    11,   224,
     227,   518,    95,   279,   441,   229,    96,   235,   486,   251,
     232,   617,   252,   652,    10,    11,    97,    98,   229,   256,
     484,   483,   210,   232,   264,   487,   485,   128,   229,   627,
     256,   257,   229,   232,     9,   287,   523,   232,   355,   620,
     258,    10,    11,   333,   334,    10,    11,   288,   265,    99,
     289,   532,   229,   229,   266,   356,   360,   232,   232,   265,
     364,   165,   118,   267,   259,   266,   362,   367,    10,    11,
    -179,   375,   268,   164,   635,   118,   510,   118,   166,    10,
      11,   636,   517,    10,    11,   118,   371,   211,   211,   118,
     211,   211,   377,   383,  -179,   453,   525,   381,   215,     9,
     217,   219,  -179,   464,   486,     9,   385,     9,   397,   118,
     118,   387,    12,   389,   588,   395,   484,   483,     9,   435,
     486,   487,   485,   229,   402,   404,   408,    32,   232,    79,
     165,   419,   484,   483,   144,    32,   422,   487,   485,   237,
     148,   416,   164,   112,   618,   290,   112,   166,    10,    11,
     129,   448,   112,   173,    10,    11,    10,    11,   449,     9,
     147,   151,   451,   462,   450,   452,   229,    10,    11,   467,
     470,   232,   471,   118,   151,   472,   382,   473,   474,   256,
     118,   489,   494,   153,   154,   155,   156,   157,   158,   118,
     167,   168,   497,   507,   319,   541,   512,   509,  -177,   514,
     516,   548,   551,   523,   556,   346,   667,   486,    10,    11,
     524,   346,   346,   561,   257,   563,   229,   528,   530,   484,
     483,   232,  -177,   118,   487,   485,   437,   533,    10,    11,
    -177,   534,   535,   537,   237,   245,  -181,   557,   342,   559,
     538,   567,   466,   112,   571,    35,   560,   532,   573,   112,
      37,   147,   576,   578,   580,   151,   581,   165,   584,   113,
    -181,   586,  -158,   601,    47,    48,     9,   595,  -181,   164,
     599,    51,   600,   118,   166,  -159,   118,   486,   603,   602,
     151,   604,   336,   606,   607,   608,   610,   153,   157,   484,
     483,   337,   612,   619,   487,   485,   338,   339,   340,   633,
     631,    61,   646,   341,   605,   647,   634,   441,   320,   654,
     342,   653,   609,    64,    79,    10,    11,   655,   656,   657,
     351,   663,    66,   107,   632,   660,   593,   343,    32,   346,
     583,   245,   594,   176,  -277,   373,   346,   124,   407,   344,
     286,   374,   365,   508,   346,   345,   118,   354,    11,   496,
      91,   479,   577,   446,   542,   548,   640,   447,   245,    79,
     566,     0,   177,   178,   642,   179,   180,   181,   182,   183,
     639,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   336,   562,   353,     0,
     151,   138,     0,     0,  -277,   337,     0,     0,     0,     0,
     338,   339,   340,   161,  -277,     0,   170,   341,     0,     0,
       0,     0,     0,     0,   443,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    37,     0,     0,   169,     0,
      79,   343,     0,     0,   113,     0,   346,   444,     0,    47,
      48,     9,   546,   346,     0,   346,    51,     0,     0,   345,
       0,   457,    11,    55,   346,     0,   346,     0,   178,     0,
       0,     0,   351,     0,     0,     0,    56,    57,   186,    58,
      59,     0,   190,    60,     0,     0,    61,   195,   196,   197,
     198,     0,   245,     0,   481,     0,    62,    63,    64,   493,
      10,    11,   245,     0,   112,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   112,     0,     0,   147,
       0,   151,     0,     0,     0,     0,     0,     0,   294,   295,
     296,   297,     0,   298,   299,   300,   151,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,     0,   161,     0,   321,   346,   324,    79,    79,     0,
     138,   138,   335,   346,     0,   351,   545,     0,   552,     0,
     346,     0,     0,   457,     0,    35,     0,     0,     0,   457,
      37,     0,   565,   351,     0,     0,     0,     0,   366,   113,
       0,     0,    79,     0,    47,    48,     9,   245,   236,     0,
       0,    51,     0,   346,     0,     0,   546,   346,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,    58,    59,     0,     0,    60,     0,
       0,    61,     0,     0,   138,     0,     0,     0,     0,     0,
       0,    62,    63,    64,   138,    10,    11,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   346,     0,   346,
       0,    47,    48,     9,     0,     0,     0,   424,    51,     0,
       0,   161,    37,     0,     0,   225,     0,   424,     0,     0,
       0,   113,     0,     0,     0,     0,    47,    48,     9,     0,
     245,     0,   115,    51,     0,     0,    79,     0,   226,     0,
     114,     0,     0,   151,   282,     0,     0,     0,     0,     0,
      64,     0,    10,    11,   283,     0,     0,   115,   351,     0,
     545,   138,   138,   116,   552,   457,     0,     0,     0,   351,
     351,     0,     0,     0,     0,    64,     0,    10,    11,    -2,
      34,     0,    35,     0,     0,    36,     0,    37,    38,    39,
       0,     0,    40,     0,    41,    42,    43,    44,    45,    46,
     138,    47,    48,     9,     0,     0,    49,    50,    51,    52,
      53,    54,     0,     0,   138,    55,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,   170,    56,    57,
       0,    58,    59,     0,     0,    60,     0,     0,    61,     0,
     -24,   178,     0,     0,     0,     0,     0,     0,    62,    63,
      64,   186,    10,    11,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,     0,     0,     0,     0,   569,   570,
       0,     0,     0,     0,     0,     0,     0,     0,   326,     0,
      35,     0,     0,    36,  -252,    37,    38,    39,     0,  -252,
      40,   161,    41,    42,   113,    44,    45,    46,     0,    47,
      48,     9,     0,     0,    49,    50,    51,    52,    53,    54,
       0,   424,     0,    55,     0,     0,     0,     0,   424,   591,
     424,     0,     0,     0,     0,     0,    56,    57,     0,    58,
      59,     0,     0,    60,     0,     0,    61,     0,  -252,     0,
       0,     0,     0,     0,   327,  -252,    62,    63,    64,     0,
      10,    11,   177,   178,     0,   179,     0,   181,   182,   183,
       0,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,     0,   326,     0,    35,
       0,     0,    36,     0,    37,    38,    39,     0,   170,    40,
       0,    41,    42,   113,    44,    45,    46,     0,    47,    48,
       9,     0,     0,    49,    50,    51,    52,    53,    54,     0,
       0,     0,    55,     0,     0,   650,   651,     0,   161,     0,
       0,     0,     0,     0,     0,    56,    57,   424,    58,    59,
       0,     0,    60,     0,    35,    61,     0,  -252,     0,    37,
       0,     0,     0,   327,  -252,    62,    63,    64,   113,    10,
      11,     0,     0,    47,    48,     9,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
      56,    57,    37,    58,   160,     0,     0,    60,     0,     0,
      61,   113,     0,   316,     0,     0,    47,    48,     9,     0,
      62,    63,    64,    51,    10,    11,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,    58,    59,     0,     0,
      60,     0,    35,    61,     0,     0,     0,    37,     0,     0,
       0,   423,     0,    62,    63,    64,   113,    10,    11,     0,
       0,    47,    48,     9,     0,     0,     0,     0,    51,     0,
     432,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,    58,   160,     0,     0,    60,     0,    35,    61,     0,
       0,     0,    37,     0,     0,     0,     0,     0,    62,    63,
      64,   113,    10,    11,     0,     0,    47,    48,     9,     0,
     476,     0,     0,    51,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,     0,    58,    59,     0,     0,
      60,     0,    35,    61,     0,     0,     0,    37,     0,     0,
       0,     0,     0,    62,    63,    64,   113,    10,    11,     0,
       0,    47,    48,     9,     0,   477,     0,     0,    51,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,    56,    57,
      37,    58,    59,     0,     0,    60,     0,     0,    61,   113,
       0,     0,     0,     0,    47,    48,     9,     0,    62,    63,
      64,    51,    10,    11,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    57,     0,    58,    59,     0,     0,    60,     0,
      35,    61,     0,     0,     0,    37,     0,     0,     0,   590,
       0,    62,    63,    64,   113,    10,    11,     0,     0,    47,
      48,     9,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,    56,    57,    37,    58,
      59,     0,     0,    60,     0,     0,    61,   113,     0,     0,
       0,     0,    47,    48,     9,     0,    62,    63,    64,    51,
      10,    11,     0,     0,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,    56,
      57,   285,    58,   160,     0,     0,    60,     0,     0,    61,
     113,     0,     0,     0,     0,    47,    48,     9,     0,    62,
      63,    64,    51,    10,    11,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    37,    58,    59,     0,     0,    60,
       0,     0,    61,   113,     0,     0,     0,     0,    47,    48,
       9,     0,    62,    63,    64,    51,    10,    11,     0,    37,
       0,     0,   225,     0,     0,     0,     0,    37,   113,     0,
     243,     0,     0,    47,    48,     9,   113,     0,     0,   115,
      51,    47,    48,     9,     0,   226,     0,   225,    51,     0,
       0,   292,     0,    37,     0,   225,     0,    64,     0,    10,
      11,   283,   113,     0,   115,     0,     0,    47,    48,     9,
     226,     0,   115,     0,    51,     0,     0,     0,   226,     0,
      37,   225,    64,     0,    10,    11,   399,     0,     0,   113,
      64,     0,    10,    11,    47,    48,     9,     0,   115,     0,
       0,    51,     0,     0,   226,     0,    37,     0,   409,     0,
       0,     0,     0,     0,   285,   113,    64,     0,    10,    11,
      47,    48,     9,   113,     0,   115,     0,    51,    47,    48,
       9,   410,     0,     0,   225,    51,     0,     0,     0,   336,
       0,     0,   225,    64,     0,    10,    11,   336,   337,     0,
     463,   115,     0,   338,   339,   544,   337,   480,     0,   115,
     341,   338,   339,   340,     0,   226,     0,   342,   341,    64,
       0,    10,    11,   336,     0,   342,     0,    64,     0,    10,
      11,     0,   337,     0,   343,     0,     0,   338,   339,   340,
       0,     0,   343,     0,   341,     0,     0,     0,     0,     0,
     336,   342,   345,     0,    10,    11,     0,     0,     0,   337,
     345,     0,     0,    11,   338,   339,   340,     0,   343,     0,
       0,   341,     0,     0,   613,     0,     0,     0,   342,     0,
       0,     0,     0,     0,     0,     0,   345,   177,   178,    11,
     179,     0,   181,   182,   183,   343,     0,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,     0,     0,   345,     0,     0,    11,     0,     0,     0,
     177,   178,     0,   179,     0,   181,   182,   183,     0,   437,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,     0,     0,     0,     0,     0,     0,
     177,   178,     0,   179,     0,   181,   182,   183,     0,   434,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   177,   178,     0,   179,     0,   181,
     182,   183,     0,   527,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   177,   178,
       0,   179,     0,   181,   182,   183,     0,   661,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   177,   178,     0,     0,     0,   181,   182,   183,
       0,   662,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   177,   178,     0,     0,
       0,   181,   182,   183,     0,     0,   185,   186,   187,   188,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     178,     0,     0,     0,   181,   182,   183,     0,     0,   185,
     186,   187,   188,     0,   190,   191,   192,   193,   194,   195,
     196,   197,   198
};

static const yytype_int16 yycheck[] =
{
      37,    37,    61,   143,    67,    37,    37,   202,   380,   205,
     224,   148,    61,   448,   144,   127,    28,   489,   456,    67,
     127,   133,   252,   325,    61,   114,   115,   116,   136,    61,
      31,   143,   323,    36,     3,    51,    39,   251,    11,     5,
      24,   260,    45,    49,    35,   392,     7,    25,   137,    35,
     269,    12,     5,   400,   265,   266,   145,    37,   277,     3,
       1,    40,   281,   152,   318,    44,    24,    83,    59,    20,
     324,     3,   291,    89,     0,    62,    67,   114,   115,   116,
      24,    67,   114,   115,   116,     7,   175,     3,    75,    73,
      12,   128,    24,    40,    35,    24,   128,    44,     1,    65,
     137,    59,    75,    72,   576,   137,   107,    68,   145,    75,
     173,   160,    65,   145,    25,   152,    67,   464,    62,    63,
     152,   127,    75,   160,    53,   173,    67,    59,   160,    73,
      74,    63,    35,   136,   114,   115,   116,   226,   175,   142,
      24,    73,    74,   175,    59,    61,    68,    63,   128,   257,
     441,   200,    68,     3,   243,     3,    59,   137,     3,    74,
     507,     5,    61,   200,    67,   145,   601,    21,   200,    35,
     608,   385,   152,   427,   646,   429,    24,   612,   613,    24,
     391,     7,   393,   600,   273,    24,    12,   224,    63,   226,
      61,     3,   224,    59,   226,   175,   285,    68,    66,   288,
     289,    67,   208,   209,    72,    50,   243,     3,   245,   221,
     440,   243,    24,   245,   251,    63,   563,   519,    61,   251,
     416,    65,    66,    61,   526,    73,    74,   423,    73,    74,
      68,    75,    61,   580,   581,    61,   273,   654,    50,   656,
     435,   273,    68,    71,   224,   475,   226,    59,   285,   285,
       7,   288,   289,   285,   285,    12,   288,   289,   605,   371,
     319,    73,    74,   243,   371,   245,   480,   404,    24,   381,
     319,   251,   402,   362,   381,    35,   282,    59,     3,   387,
      61,    63,   319,    67,   212,    24,   292,   319,    66,    71,
     218,   219,    66,   273,    61,   667,    59,    59,    59,    59,
     389,    68,    74,   522,    61,   285,    62,    67,   288,   289,
      24,    68,    24,    64,     9,    61,    24,    73,    74,    59,
     409,   410,    17,    62,    61,   362,    21,    63,   377,    59,
     362,    68,    67,   635,    73,    74,    31,    32,   375,    24,
     377,   377,    75,   375,    35,   377,   377,    59,   385,   579,
      24,    59,   389,   385,    24,    62,   419,   389,    59,   573,
      68,    73,    74,   369,   370,    73,    74,    72,    53,    64,
      72,   430,   409,   410,    59,     3,    62,   409,   410,    53,
      62,   430,   362,    68,   387,    59,     8,    35,    73,    74,
      35,    75,   395,   430,   590,   375,   399,   377,   430,    73,
      74,   596,   408,    73,    74,   385,    61,    94,    95,   389,
      97,    98,    62,    24,    59,   343,   422,    61,    95,    24,
      97,    98,    67,   351,   473,    24,    59,    24,     3,   409,
     410,    61,     5,    72,   523,    61,   473,   473,    24,    66,
     489,   473,   473,   480,    61,    61,    65,    20,   480,    22,
     499,    61,   489,   489,    59,    28,    65,   489,   489,   571,
      59,    67,   499,    36,   571,    62,    39,   499,    73,    74,
      43,    59,    45,    59,    73,    74,    73,    74,    67,    24,
      53,    54,    67,    65,    71,     8,   523,    73,    74,    61,
      61,   523,    61,   473,    67,    61,    63,    62,    62,    24,
     480,    62,    62,    55,    56,    57,    58,    59,    60,   489,
      62,    63,    68,    62,    59,   443,    35,    68,    35,    62,
      62,   449,   450,   586,   452,   212,   666,   576,    73,    74,
      62,   218,   219,   461,    59,   463,   573,    75,    68,   576,
     576,   573,    59,   523,   576,   576,    75,    62,    73,    74,
      67,    62,    62,    62,   666,   128,    35,     3,    36,    61,
      68,    62,    75,   136,    61,     3,    72,   626,    59,   142,
       8,   144,    62,    66,    62,   148,    62,   626,    62,    17,
      59,    61,    59,    59,    22,    23,    24,    62,    67,   626,
      62,    29,    62,   573,   626,    59,   576,   646,    61,    68,
     173,    72,     8,    68,    61,    49,    61,   159,   160,   646,
     646,    17,    59,    62,   646,   646,    22,    23,    24,    62,
      68,    59,    62,    29,   552,    14,    68,    61,   201,    62,
      36,    72,   560,    71,   207,    73,    74,    62,    62,    62,
     213,    68,    22,    31,   586,   647,   528,    53,   221,   336,
     512,   224,   528,     4,     5,   245,   343,    39,   283,    65,
     160,   245,   235,   395,   351,    71,   646,   214,    74,   387,
      22,   375,   499,   336,   444,   603,   604,   336,   251,   252,
     466,    -1,    33,    34,   607,    36,    37,    38,    39,    40,
     603,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     8,   462,   213,    -1,
     283,    49,    -1,    -1,    65,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    61,    75,    -1,    64,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    11,    -1,
     323,    53,    -1,    -1,    17,    -1,   443,    59,    -1,    22,
      23,    24,   449,   450,    -1,   452,    29,    -1,    -1,    71,
      -1,   344,    74,    36,   461,    -1,   463,    -1,    34,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    49,    50,    44,    52,
      53,    -1,    48,    56,    -1,    -1,    59,    53,    54,    55,
      56,    -1,   375,    -1,   377,    -1,    69,    70,    71,   382,
      73,    74,   385,    -1,   387,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    -1,    -1,   399,    -1,    -1,   402,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
     178,   179,    -1,   181,   182,   183,   419,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,    -1,   200,    -1,   202,   552,   204,   440,   441,    -1,
     208,   209,   210,   560,    -1,   448,   449,    -1,   451,    -1,
     567,    -1,    -1,   456,    -1,     3,    -1,    -1,    -1,   462,
       8,    -1,   465,   466,    -1,    -1,    -1,    -1,   236,    17,
      -1,    -1,   475,    -1,    22,    23,    24,   480,    26,    -1,
      -1,    29,    -1,   600,    -1,    -1,   603,   604,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,
      -1,    59,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,   292,    73,    74,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,   654,    -1,   656,
      -1,    22,    23,    24,    -1,    -1,    -1,   315,    29,    -1,
      -1,   319,     8,    -1,    -1,    36,    -1,   325,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
     573,    -1,    53,    29,    -1,    -1,   579,    -1,    59,    -1,
      36,    -1,    -1,   586,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    53,   601,    -1,
     603,   369,   370,    59,   607,   608,    -1,    -1,    -1,   612,
     613,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,     0,
       1,    -1,     3,    -1,    -1,     6,    -1,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    16,    17,    18,    19,    20,
     408,    22,    23,    24,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,   422,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   430,    -1,    -1,    -1,    -1,   435,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,
      61,    34,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    44,    73,    74,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,   476,   477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,     6,     7,     8,     9,    10,    -1,    12,
      13,   499,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,   519,    -1,    36,    -1,    -1,    -1,    -1,   526,   527,
     528,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    -1,
      73,    74,    33,    34,    -1,    36,    -1,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,     1,    -1,     3,
      -1,    -1,     6,    -1,     8,     9,    10,    -1,   596,    13,
      -1,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,   623,   624,    -1,   626,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,   635,    52,    53,
      -1,    -1,    56,    -1,     3,    59,    -1,    61,    -1,     8,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    17,    73,
      74,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      49,    50,     8,    52,    53,    -1,    -1,    56,    -1,    -1,
      59,    17,    -1,    62,    -1,    -1,    22,    23,    24,    -1,
      69,    70,    71,    29,    73,    74,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,    -1,
      56,    -1,     3,    59,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    67,    -1,    69,    70,    71,    17,    73,    74,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    -1,     3,    59,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    17,    73,    74,    -1,    -1,    22,    23,    24,    -1,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    52,    53,    -1,    -1,
      56,    -1,     3,    59,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    17,    73,    74,    -1,
      -1,    22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    49,    50,
       8,    52,    53,    -1,    -1,    56,    -1,    -1,    59,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    69,    70,
      71,    29,    73,    74,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    52,    53,    -1,    -1,    56,    -1,
       3,    59,    -1,    -1,    -1,     8,    -1,    -1,    -1,    67,
      -1,    69,    70,    71,    17,    73,    74,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    49,    50,     8,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    69,    70,    71,    29,
      73,    74,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    49,
      50,     8,    52,    53,    -1,    -1,    56,    -1,    -1,    59,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    69,
      70,    71,    29,    73,    74,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,     8,    52,    53,    -1,    -1,    56,
      -1,    -1,    59,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    69,    70,    71,    29,    73,    74,    -1,     8,
      -1,    -1,    36,    -1,    -1,    -1,    -1,     8,    17,    -1,
      11,    -1,    -1,    22,    23,    24,    17,    -1,    -1,    53,
      29,    22,    23,    24,    -1,    59,    -1,    36,    29,    -1,
      -1,    65,    -1,     8,    -1,    36,    -1,    71,    -1,    73,
      74,    75,    17,    -1,    53,    -1,    -1,    22,    23,    24,
      59,    -1,    53,    -1,    29,    -1,    -1,    -1,    59,    -1,
       8,    36,    71,    -1,    73,    74,    75,    -1,    -1,    17,
      71,    -1,    73,    74,    22,    23,    24,    -1,    53,    -1,
      -1,    29,    -1,    -1,    59,    -1,     8,    -1,    36,    -1,
      -1,    -1,    -1,    -1,     8,    17,    71,    -1,    73,    74,
      22,    23,    24,    17,    -1,    53,    -1,    29,    22,    23,
      24,    59,    -1,    -1,    36,    29,    -1,    -1,    -1,     8,
      -1,    -1,    36,    71,    -1,    73,    74,     8,    17,    -1,
      11,    53,    -1,    22,    23,    24,    17,    59,    -1,    53,
      29,    22,    23,    24,    -1,    59,    -1,    36,    29,    71,
      -1,    73,    74,     8,    -1,    36,    -1,    71,    -1,    73,
      74,    -1,    17,    -1,    53,    -1,    -1,    22,    23,    24,
      -1,    -1,    53,    -1,    29,    -1,    -1,    -1,    -1,    -1,
       8,    36,    71,    -1,    73,    74,    -1,    -1,    -1,    17,
      71,    -1,    -1,    74,    22,    23,    24,    -1,    53,    -1,
      -1,    29,    -1,    -1,    59,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    33,    34,    74,
      36,    -1,    38,    39,    40,    53,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      33,    34,    -1,    36,    -1,    38,    39,    40,    -1,    75,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    36,    -1,    38,    39,    40,    -1,    72,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    66,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    33,    34,
      -1,    36,    -1,    38,    39,    40,    -1,    66,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    33,    34,    -1,    -1,    -1,    38,    39,    40,
      -1,    66,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    33,    34,    -1,    -1,
      -1,    38,    39,    40,    -1,    -1,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      34,    -1,    -1,    -1,    38,    39,    40,    -1,    -1,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    79,    80,     0,    25,    78,    25,    86,    24,
      73,    74,   141,   142,    81,    24,    88,    89,     3,    61,
      21,    82,   166,    24,    87,   214,    63,     3,    59,    63,
      83,    85,   141,    61,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    36,    49,    50,    52,    53,
      56,    59,    69,    70,    71,    90,    91,    92,    98,   110,
     113,   121,   124,   126,   127,   128,   129,   134,   138,   141,
     143,   144,   149,   150,   153,   156,   157,   158,   161,   164,
     165,   181,   186,    61,     9,    17,    21,    31,    32,    64,
     199,    24,    73,    62,    83,    84,     3,    86,    88,     3,
     138,   140,   141,    17,    36,    53,    59,   141,   143,   148,
     152,   153,   154,   161,   140,   128,   134,   111,    59,   141,
     159,   128,   138,   114,    35,    67,   137,    71,   126,   186,
     193,   125,   137,   122,    59,    96,    97,   141,    59,    93,
     139,   141,   185,   127,   127,   127,   127,   127,   127,    36,
      53,   126,   135,   147,   153,   155,   161,   127,   127,    11,
     126,   192,    61,    59,    94,   185,     4,    33,    34,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    67,
      59,    63,    71,    66,    59,   137,     1,   137,     5,    65,
      75,   142,   200,    59,   160,   200,    24,   200,   201,   200,
      64,    61,   190,    88,    59,    36,    59,   146,   152,   153,
     154,   155,   161,   146,   146,    63,    26,    98,   107,   108,
     109,   186,   194,    11,   136,   141,   145,   146,   177,   178,
     179,    59,    67,   162,   112,   194,    24,    59,    68,   138,
     171,   173,   175,   146,    35,    53,    59,    68,   138,   170,
     172,   173,   174,   184,   112,    62,    97,   169,   146,    62,
      93,   167,    65,    75,   146,     8,   147,    62,    72,    72,
      62,    94,    65,   146,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   130,    62,   135,   187,    59,
     141,   126,   192,   182,   126,   130,     1,    67,    91,   100,
     180,   181,   183,   186,   186,   126,     8,    17,    22,    23,
      24,    29,    36,    53,    65,    71,   142,   202,   204,   205,
     206,   141,   207,   215,   162,    59,     3,   202,   202,    83,
      62,   179,     8,   146,    62,   141,   126,    35,   105,     5,
      65,    61,   146,   136,   145,    75,   191,    62,   179,   183,
     115,    61,    63,    24,   173,    59,   176,    61,   190,    72,
     104,    59,   174,    53,   174,    61,   190,     3,   198,    75,
     146,   123,    61,   190,    61,   190,   186,   139,    65,    36,
      59,   146,   152,   153,   154,   161,    67,   146,   146,    61,
     190,   186,    65,    67,   126,   131,   132,   188,   189,    11,
      75,   191,    31,   135,    72,    66,   180,    75,   191,   189,
     101,    61,    68,    36,    59,   203,   204,   206,    59,    67,
      71,    67,     8,   202,     3,    50,    59,   141,   212,   213,
       3,    72,    65,    11,   202,    62,    75,    61,   195,   215,
      61,    61,    61,    62,    62,   106,    26,    26,   194,   177,
      59,   141,   151,   152,   153,   154,   155,   161,   163,    62,
      68,   105,   194,   141,    62,   179,   175,    68,   146,     7,
      12,    68,    99,   102,   174,   198,   174,    62,   172,    68,
     138,   198,    35,    97,    62,    93,    62,   186,   146,   130,
      94,    95,   168,   185,    62,   186,   130,    66,    75,   191,
      68,   191,   135,    62,    62,    62,   192,    62,    68,   183,
     180,   202,   205,   195,    24,   141,   142,   197,   202,   209,
     217,   202,   141,   196,   208,   216,   202,     3,   212,    61,
      72,   202,   213,   202,   198,   141,   207,    62,   183,   126,
     126,    61,   179,    59,   163,   116,    62,   187,    66,   103,
      62,    62,   198,   104,    62,   189,    61,   190,   146,   189,
      67,   126,   133,   131,   132,    62,    66,    72,    68,    62,
      62,    59,    68,    61,    72,   202,    68,    61,    49,   202,
      61,   198,    59,    59,   202,   210,   211,    68,   194,    62,
     179,   119,   163,     5,    65,    66,    75,   183,   198,   198,
      68,    68,    95,    62,    68,   130,   192,   210,   195,   209,
     202,   198,   208,   212,   195,   195,    62,    14,   117,   120,
     126,   126,   189,    72,    62,    62,    62,    62,   163,    20,
     100,    66,    66,    68,   210,   210,   118,   112,   105
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
     141,   142,   142,   143,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   147,   147,   147,   147,   148,   148,   148,
     148,   148,   149,   149,   150,   151,   151,   151,   151,   151,
     152,   152,   153,   153,   153,   153,   153,   153,   153,   154,
     155,   156,   156,   157,   157,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   163,   163,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   172,   172,   173,   173,   174,
     175,   175,   175,   176,   177,   177,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   180,   180,   181,   181,   181,
     181,   181,   182,   181,   181,   181,   181,   181,   181,   181,
     181,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   199,   199,   199,   199,   199,
     199,   200,   201,   202,   202,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   205,
     206,   207,   207,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217
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
       1,     4,     4,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     2,     3,     5,     1,     1,     2,
       3,     5,     3,     5,     3,     3,     5,     8,     5,     8,
       5,     0,     3,     0,     1,     3,     1,     4,     2,     0,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     2,     4,     3,     5,     5,     1,     3,     1,
       2,     1,     3,     4,     1,     2,     2,     1,     1,     3,
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     3,     3,     0,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     4,     4,     5,     6,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     5,     4,     4,     2,     2,     4,     3,     3,
       5,     3,     4,     3,     5,     1,     0,     1,     3,     1,
       1,     2,     1,     1,     5,     0,     2,     1,     3,     1,
       3,     1,     3
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
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 134 "go.y" /* yacc.c:1646  */
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 140 "go.y" /* yacc.c:1646  */
    {
		mkpackage((yyvsp[-1].sym)->name);
	}
#line 2146 "y.tab.c" /* yacc.c:1646  */
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
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "go.y" /* yacc.c:1646  */
    {
		importpkg = nil;
	}
#line 2168 "y.tab.c" /* yacc.c:1646  */
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
#line 2209 "y.tab.c" /* yacc.c:1646  */
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
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 227 "go.y" /* yacc.c:1646  */
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 234 "go.y" /* yacc.c:1646  */
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[-1].sym);
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 241 "go.y" /* yacc.c:1646  */
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2255 "y.tab.c" /* yacc.c:1646  */
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
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 265 "go.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[0].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 271 "go.y" /* yacc.c:1646  */
    {
		defercheckwidth();
	}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 275 "go.y" /* yacc.c:1646  */
    {
		resumecheckwidth();
		unimportfile();
	}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 284 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 290 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 294 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 299 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 305 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
	}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 309 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 313 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 317 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 323 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 329 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-4].list), (yyvsp[-2].list));
		iota = -100000;
		lastconst = nil;
	}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 335 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		iota = -100000;
	}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 340 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 344 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 348 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 354 "go.y" /* yacc.c:1646  */
    {
		iota = 0;
	}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 360 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 364 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 368 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-2].list), nil, (yyvsp[0].list));
	}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 374 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 378 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-2].list), N, (yyvsp[0].list));
	}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 385 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 389 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[0].list), N, nil);
	}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 395 "go.y" /* yacc.c:1646  */
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[0].sym));
	}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 404 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = typedcl1((yyvsp[-1].node), (yyvsp[0].node), 1);
	}
#line 2502 "y.tab.c" /* yacc.c:1646  */
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
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 428 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-2].node), (yyvsp[0].node));
		(yyval.node)->etype = (yyvsp[-1].i);			// rathole to pass opcode
	}
#line 2533 "y.tab.c" /* yacc.c:1646  */
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
#line 2549 "y.tab.c" /* yacc.c:1646  */
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
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 461 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 467 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
#line 2589 "y.tab.c" /* yacc.c:1646  */
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
#line 2613 "y.tab.c" /* yacc.c:1646  */
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
#line 2635 "y.tab.c" /* yacc.c:1646  */
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
#line 2648 "y.tab.c" /* yacc.c:1646  */
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
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 540 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2676 "y.tab.c" /* yacc.c:1646  */
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
#line 2688 "y.tab.c" /* yacc.c:1646  */
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
#line 2703 "y.tab.c" /* yacc.c:1646  */
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
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 585 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 589 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-1].list), (yyvsp[0].node));
	}
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 595 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 599 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		popdcl();
	}
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 606 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->etype = 0;	// := flag
	}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 612 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[-3].list), (yyval.node));
	}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 619 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->etype = 0; // := flag
	}
#line 2789 "y.tab.c" /* yacc.c:1646  */
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
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 637 "go.y" /* yacc.c:1646  */
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 646 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[0].list));
	}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 653 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 657 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		popdcl();
	}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 664 "go.y" /* yacc.c:1646  */
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2850 "y.tab.c" /* yacc.c:1646  */
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
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 681 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 685 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 690 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->nbody = (yyvsp[0].list);
	}
#line 2887 "y.tab.c" /* yacc.c:1646  */
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
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 711 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 715 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[-1].node)->nbody = (yyvsp[0].list);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 723 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 727 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-1].list), (yyvsp[0].list));
	}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 732 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2949 "y.tab.c" /* yacc.c:1646  */
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
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 747 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2970 "y.tab.c" /* yacc.c:1646  */
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
#line 2982 "y.tab.c" /* yacc.c:1646  */
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
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 769 "go.y" /* yacc.c:1646  */
    {
		typesw = nod(OXXX, typesw, N);
	}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 773 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
	}
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 786 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOROR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 790 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 794 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OEQ, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 798 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 802 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 806 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 810 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 814 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 818 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OADD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 822 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSUB, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 826 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 830 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OXOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 834 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMUL, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 838 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODIV, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 842 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMOD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 846 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 850 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 854 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 858 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 863 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSEND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 870 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3181 "y.tab.c" /* yacc.c:1646  */
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
#line 3196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 885 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPLUS, (yyvsp[0].node), N);
	}
#line 3204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 889 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMINUS, (yyvsp[0].node), N);
	}
#line 3212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 893 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONOT, (yyvsp[0].node), N);
	}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 897 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 902 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 906 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORECV, (yyvsp[0].node), N);
	}
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 916 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-2].node), N);
	}
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 920 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = (yyvsp[-2].list);
	}
#line 3262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 925 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-5].node), N);
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->isddd = 1;
	}
#line 3272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 933 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 3280 "y.tab.c" /* yacc.c:1646  */
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
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 949 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[-4].node), (yyvsp[-1].node));
	}
#line 3303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 953 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[-4].node));
	}
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 957 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OINDEX, (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 961 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSLICE, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node)));
	}
#line 3327 "y.tab.c" /* yacc.c:1646  */
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
#line 3339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 974 "go.y" /* yacc.c:1646  */
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = list1((yyvsp[-2].node));
	}
#line 3349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 980 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 987 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 993 "go.y" /* yacc.c:1646  */
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-5].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1002 "go.y" /* yacc.c:1646  */
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1010 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OKEY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3399 "y.tab.c" /* yacc.c:1646  */
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
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1033 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1041 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3438 "y.tab.c" /* yacc.c:1646  */
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
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1075 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = LBODY;
	}
#line 3467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1079 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = '{';
	}
#line 3475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1090 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[0].sym));
	}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1099 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = dclname((yyvsp[0].sym));
	}
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1104 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1111 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[0].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
	}
#line 3513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1119 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = S;
	}
#line 3521 "y.tab.c" /* yacc.c:1646  */
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
#line 3538 "y.tab.c" /* yacc.c:1646  */
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
#line 3555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1153 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname((yyvsp[0].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
#line 3565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1173 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1178 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODDD, (yyvsp[0].node), N);
	}
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1189 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1198 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1208 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1229 "go.y" /* yacc.c:1646  */
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
#line 3621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1242 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1246 "go.y" /* yacc.c:1646  */
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[0].node));
	}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1251 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Cboth;
	}
#line 3647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1256 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Csend;
	}
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1261 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTMAP, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1269 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1275 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Crecv;
	}
#line 3681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1282 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1288 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1295 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1301 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1312 "go.y" /* yacc.c:1646  */
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
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1328 "go.y" /* yacc.c:1646  */
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
#line 3770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1357 "go.y" /* yacc.c:1646  */
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
#line 3810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1395 "go.y" /* yacc.c:1646  */
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
#line 3839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1420 "go.y" /* yacc.c:1646  */
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
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1438 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 3870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1446 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1450 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
#line 3888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1458 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1462 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[0].node)));
	}
#line 3904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1466 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].list) = checkarglist((yyvsp[-1].list), 0);
		(yyval.list) = (yyvsp[-1].list);
	}
#line 3913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1473 "go.y" /* yacc.c:1646  */
    {
		closurehdr((yyvsp[0].node));
	}
#line 3921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1479 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody((yyvsp[-1].list));
		fixlbrace((yyvsp[-2].i));
	}
#line 3930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1484 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody(nil);
	}
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1495 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1499 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[-1].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
		nowritebarrier = 0;
	}
#line 3960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1512 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1519 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1525 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 3984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1529 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1536 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1542 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1546 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1552 "go.y" /* yacc.c:1646  */
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
#line 4043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1575 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1580 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1586 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->right = nod(OIND, (yyvsp[-1].node)->right, N);
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1592 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1599 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1608 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		(yyval.sym) = (yyvsp[0].sym);
		n = oldname((yyvsp[0].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
#line 4107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1617 "go.y" /* yacc.c:1646  */
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
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1632 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = embedded((yyvsp[0].sym), localpkg);
	}
#line 4132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1638 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[-1].node), (yyvsp[0].node));
		ifacedcl((yyval.node));
	}
#line 4141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1643 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[0].sym)));
	}
#line 4149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1647 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[-1].sym)));
		yyerror("cannot parenthesize embedded type");
	}
#line 4158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1654 "go.y" /* yacc.c:1646  */
    {
		// without func keyword
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 4170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1668 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1674 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1683 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1687 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1692 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1696 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1704 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1709 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = liststmt((yyvsp[0].list));
	}
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1714 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1725 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node) = nod(OLABEL, (yyvsp[-1].node), N);
		(yyvsp[-1].node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1730 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		(yyvsp[-3].node)->defn = (yyvsp[0].node);
		l = list1((yyvsp[-3].node));
		if((yyvsp[0].node))
			l = list(l, (yyvsp[0].node));
		(yyval.node) = liststmt(l);
	}
#line 4269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1740 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
#line 4279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1746 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OBREAK, (yyvsp[0].node), N);
	}
#line 4287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1750 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[0].node), N);
	}
#line 4295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1754 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPROC, (yyvsp[0].node), N);
	}
#line 4303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1758 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODEFER, (yyvsp[0].node), N);
	}
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1762 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGOTO, (yyvsp[0].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1767 "go.y" /* yacc.c:1646  */
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
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1786 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		if((yyvsp[0].node) != N)
			(yyval.list) = list1((yyvsp[0].node));
	}
#line 4351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1792 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		if((yyvsp[0].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[0].node));
	}
#line 4361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1800 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1804 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1810 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1814 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1820 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1824 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1830 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1834 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1843 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1847 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1851 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1855 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1860 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1864 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1878 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1884 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1890 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1896 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1902 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1908 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1914 "go.y" /* yacc.c:1646  */
    {
		(yyval.val).ctype = CTxxx;
	}
#line 4529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1924 "go.y" /* yacc.c:1646  */
    {
		importimport((yyvsp[-2].sym), (yyvsp[-1].val).u.sval);
	}
#line 4537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1928 "go.y" /* yacc.c:1646  */
    {
		importvar((yyvsp[-2].sym), (yyvsp[-1].type));
	}
#line 4545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1932 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-3].sym), types[TIDEAL], (yyvsp[-1].node));
	}
#line 4553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1936 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-4].sym), (yyvsp[-3].type), (yyvsp[-1].node));
	}
#line 4561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1940 "go.y" /* yacc.c:1646  */
    {
		importtype((yyvsp[-2].type), (yyvsp[-1].type));
	}
#line 4569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1944 "go.y" /* yacc.c:1646  */
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
#line 4591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1964 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		structpkg = (yyval.sym)->pkg;
	}
#line 4600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1971 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
		importsym((yyvsp[0].sym), OTYPE);
	}
#line 4609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1991 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
	}
#line 4617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1995 "go.y" /* yacc.c:1646  */
    {
		// predefined name like uint8
		(yyvsp[0].sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
		if((yyvsp[0].sym)->def == N || (yyvsp[0].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[0].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[0].sym)->def->type;
	}
#line 4631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2005 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(N, (yyvsp[0].type));
	}
#line 4639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2009 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(nodlit((yyvsp[-2].val)), (yyvsp[0].type));
	}
#line 4647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2013 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = maptype((yyvsp[-2].type), (yyvsp[0].type));
	}
#line 4655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2017 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tostruct((yyvsp[-1].list));
	}
#line 4663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2021 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tointerface((yyvsp[-1].list));
	}
#line 4671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2025 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = ptrto((yyvsp[0].type));
	}
#line 4679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2029 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Cboth;
	}
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2035 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[-1].type);
		(yyval.type)->chan = Cboth;
	}
#line 4699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2041 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Csend;
	}
#line 4709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2049 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Crecv;
	}
#line 4719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2057 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = functype(nil, (yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2063 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[-1].type)));
		if((yyvsp[-2].sym))
			(yyval.node)->left = newname((yyvsp[-2].sym));
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2070 "go.y" /* yacc.c:1646  */
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
#line 4756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2086 "go.y" /* yacc.c:1646  */
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
#line 4780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2108 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-4].sym)), typenod(functype(fakethis(), (yyvsp[-2].list), (yyvsp[0].list))));
	}
#line 4788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2112 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[0].type)));
	}
#line 4796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2117 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2124 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2128 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[0].type))));
	}
#line 4820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2138 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 4828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2142 "go.y" /* yacc.c:1646  */
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
#line 4851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2161 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname(pkglookup((yyvsp[0].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
#line 4861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2170 "go.y" /* yacc.c:1646  */
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
#line 4876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2186 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2190 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2196 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2200 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2206 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2210 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4924 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4928 "y.tab.c" /* yacc.c:1646  */
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
#line 2214 "go.y" /* yacc.c:1906  */


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}

