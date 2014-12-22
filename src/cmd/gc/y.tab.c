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
# define YYERROR_VERBOSE 0
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
    PreferToRightParen = 305,
    NotParen = 306
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
#define PreferToRightParen 305
#define NotParen 306

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
#define YYLAST   2163

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
       2,     2,     2,    69,     2,     2,    64,    57,    58,     2,
      60,    62,    55,    51,    75,    52,    63,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    61,
       2,    65,     2,    73,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,    53,    68,    70,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   128,   134,   145,   145,   160,   161,   164,
     165,   166,   169,   206,   217,   218,   221,   228,   235,   244,
     258,   259,   266,   266,   279,   283,   284,   288,   293,   299,
     303,   307,   311,   317,   323,   329,   334,   338,   342,   348,
     354,   358,   362,   368,   372,   378,   379,   383,   389,   398,
     404,   422,   427,   439,   455,   461,   469,   489,   507,   516,
     535,   534,   549,   548,   580,   583,   590,   589,   600,   606,
     613,   620,   631,   637,   640,   648,   647,   658,   664,   676,
     680,   685,   675,   706,   705,   718,   721,   727,   730,   742,
     746,   741,   764,   763,   779,   780,   784,   788,   792,   796,
     800,   804,   808,   812,   816,   820,   824,   828,   832,   836,
     840,   844,   848,   852,   857,   863,   864,   868,   879,   883,
     887,   891,   896,   900,   910,   914,   919,   927,   931,   932,
     943,   947,   951,   955,   959,   967,   968,   974,   981,   987,
     994,   997,  1004,  1010,  1027,  1034,  1035,  1042,  1043,  1062,
    1063,  1066,  1069,  1073,  1084,  1093,  1099,  1102,  1105,  1112,
    1113,  1119,  1132,  1147,  1155,  1167,  1172,  1178,  1179,  1180,
    1181,  1182,  1183,  1189,  1190,  1191,  1192,  1198,  1199,  1200,
    1201,  1202,  1208,  1209,  1212,  1215,  1216,  1217,  1218,  1219,
    1222,  1223,  1236,  1240,  1245,  1250,  1255,  1259,  1260,  1263,
    1269,  1276,  1282,  1289,  1295,  1306,  1322,  1351,  1389,  1414,
    1432,  1441,  1444,  1452,  1456,  1460,  1467,  1473,  1478,  1490,
    1493,  1505,  1506,  1512,  1513,  1519,  1523,  1529,  1530,  1536,
    1540,  1546,  1569,  1574,  1580,  1586,  1593,  1602,  1611,  1626,
    1632,  1637,  1641,  1648,  1661,  1662,  1668,  1674,  1677,  1681,
    1687,  1690,  1699,  1702,  1703,  1707,  1708,  1714,  1715,  1716,
    1717,  1718,  1720,  1719,  1734,  1740,  1744,  1748,  1752,  1756,
    1761,  1780,  1786,  1794,  1798,  1804,  1808,  1814,  1818,  1824,
    1828,  1837,  1841,  1845,  1849,  1855,  1858,  1866,  1867,  1869,
    1870,  1873,  1876,  1879,  1882,  1885,  1888,  1891,  1894,  1897,
    1900,  1903,  1906,  1909,  1912,  1918,  1922,  1926,  1930,  1934,
    1938,  1958,  1965,  1976,  1977,  1978,  1981,  1982,  1985,  1989,
    1999,  2003,  2007,  2011,  2015,  2019,  2023,  2029,  2035,  2043,
    2051,  2057,  2064,  2080,  2102,  2106,  2112,  2115,  2118,  2122,
    2132,  2136,  2155,  2163,  2164,  2176,  2177,  2180,  2184,  2190,
    2194,  2200,  2204
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "LLSH", "LLT", "LNE", "LOROR", "LRSH", "NotPackage",
  "PreferToRightParen", "'+'", "'-'", "'|'", "'^'", "'*'", "'/'", "'%'",
  "'&'", "NotParen", "'('", "';'", "')'", "'.'", "'$'", "'='", "':'",
  "'{'", "'}'", "'!'", "'~'", "'['", "']'", "'?'", "'@'", "','", "$accept",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    43,    45,   124,    94,    42,    47,    37,    38,   306,
      40,    59,    41,    46,    36,    61,    58,   123,   125,    33,
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
    -473,    65,    22,    41,  -473,    71,  -473,    44,  -473,  -473,
    -473,    95,    40,  -473,   111,    90,  -473,  -473,   125,  -473,
      56,   103,  1044,  -473,   136,   305,    16,  -473,   215,   212,
    -473,    41,   220,  -473,  -473,  -473,    71,  1683,  -473,    71,
     294,  -473,  -473,   326,   294,    71,  -473,    89,   161,  1585,
    -473,    89,  -473,   411,   414,  1585,  1585,  1585,  1585,  1585,
    1585,  1624,  1585,  1585,   737,   176,  -473,   477,  -473,  -473,
    -473,  -473,  -473,   649,  -473,  -473,   180,   130,  -473,   195,
    -473,   202,   223,    89,   236,  -473,  -473,  -473,   247,    59,
    -473,  -473,    34,  -473,   201,    93,   256,   201,   201,   237,
    -473,  -473,  -473,  -473,  -473,   251,  -473,  -473,  -473,  -473,
    -473,  -473,  -473,   253,  1722,  1722,  1722,  -473,   252,  -473,
    -473,  -473,  -473,  -473,  -473,   174,   130,   882,  1210,   264,
     260,   231,  -473,  1585,  -473,  -473,   409,  1722,  2028,   259,
    -473,   312,   315,  1585,   514,  1722,  -473,  -473,   528,  -473,
    -473,  -473,   556,  -473,  -473,  -473,  -473,  -473,  -473,  1663,
    1624,  2028,   296,  -473,     9,  -473,    92,  -473,  -473,   289,
    2028,   290,  -473,   544,  -473,   949,  1585,  1585,  1585,  1585,
    -473,  1585,  1585,  1585,  -473,  1585,  1585,  1585,  1585,  1585,
    1585,  1585,  1585,  1585,  1585,  1585,  1585,  1585,  1585,  -473,
    1313,   562,  1585,  -473,  1585,  -473,  -473,  1244,  1585,  1585,
    1585,  -473,   713,    71,   260,   306,   371,  -473,  1846,  1846,
    -473,    68,   314,  -473,  1210,   377,  1722,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,   317,    71,  1585,  -473,  -473,   355,
    -473,    47,   330,  1722,  -473,  1210,  -473,  -473,  -473,   328,
     342,  1210,  1244,  -473,  -473,   345,   357,   388,  -473,   353,
     356,  -473,  -473,   347,  -473,    37,    63,  -473,  -473,   360,
    -473,  -473,   419,  1330,  -473,  -473,  -473,   365,  -473,  -473,
    -473,   366,  1585,    71,   363,  1742,  -473,   364,  1722,  1722,
    -473,   383,  1585,   380,  2028,  2105,  -473,  2054,  1072,  1072,
    1072,  1072,  -473,  1072,  1072,  2080,  -473,   526,   526,   526,
     526,  -473,  -473,  -473,  -473,  1371,  -473,  -473,    27,  1429,
    -473,  1911,   385,  1140,  1885,  1371,  -473,  -473,  -473,  -473,
    -473,  -473,    79,   259,   259,  2028,  1782,   394,   389,   390,
    -473,   393,   457,  1846,   152,    31,  -473,   403,  -473,  -473,
    -473,   972,  -473,    13,   412,    71,   415,   417,   418,  -473,
    -473,   413,  1722,   428,  -473,  -473,  2028,  -473,  -473,  1468,
    1507,  1585,  -473,  -473,  -473,  1210,  -473,  1752,   430,   101,
     355,  1585,    71,   426,   433,  1210,  -473,   595,   429,  1722,
      39,   388,   419,   388,   434,   474,   431,  -473,  -473,    71,
     419,   467,    71,   450,    71,   451,   259,  -473,  1585,  1762,
    1722,  -473,    14,   275,   284,   320,  -473,  -473,  -473,    71,
     452,   259,  1585,  -473,  1941,  -473,  -473,   441,   449,   443,
    1624,   458,   466,   468,  -473,  1585,  -473,  -473,   480,   478,
    1244,  1140,  -473,  1846,   483,  -473,  -473,  -473,    71,  1821,
    1846,    71,  1846,  -473,  -473,   546,   155,  -473,  -473,   492,
     484,  1846,   152,  1846,   419,    71,    71,  -473,   495,   486,
    -473,  -473,  -473,  1752,  -473,  1244,  1585,  1585,   497,  -473,
    1210,   499,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  1752,
    -473,  -473,  -473,  -473,  -473,   500,  -473,  -473,  -473,  1624,
     506,  -473,  -473,  -473,   503,  -473,   504,   419,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,   259,   529,  1371,
    -473,  -473,   534,   949,  -473,   259,  1371,  1546,  1371,  -473,
    -473,   536,  -473,  -473,  -473,  -473,   119,  -473,  -473,   137,
    -473,  -473,   537,   541,   545,   552,   553,   555,  -473,  -473,
     543,   548,  1846,   557,  -473,   565,  -473,  -473,   582,  -473,
    1846,  -473,   576,   419,  -473,   578,  -473,  1838,   194,  2028,
    2028,  1585,   577,  1210,  -473,  -473,  1752,   156,  -473,  1140,
     419,   419,  -473,    78,   379,   573,    71,   580,   380,   575,
    -473,  2028,  -473,  -473,  -473,  -473,  1585,  -473,  -473,  -473,
    1838,    71,  -473,  1821,  1846,   419,  -473,    71,   155,  -473,
    -473,  -473,    71,    71,  -473,  -473,  -473,  -473,  -473,  -473,
     583,   630,  -473,  1585,  1585,  -473,  1624,   585,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  1371,   586,  -473,   588,  -473,
    -473,  -473,  -473,   590,   597,   598,  1752,   163,  -473,  -473,
    1970,  1999,   579,  -473,  1838,  -473,  1838,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  1585,   355,  -473
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
     626,  -473,    -1,  -473,  -473,   639,  -473,  -137,   -48,    77,
    -473,  -130,  -112,  -473,    18,  -473,  -473,  -473,   158,  -372,
    -473,  -473,  -473,  -473,  -473,  -473,  -140,  -473,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,  -473,
     662,   448,   241,  -473,  -196,   139,   143,  -473,   254,   -59,
     432,   -16,    -3,   391,   633,   427,   313,    20,  -473,   435,
     -89,   513,  -473,  -473,  -473,  -473,   -36,   -37,   -31,   -49,
    -473,  -473,  -473,  -473,  -473,   -32,   470,  -472,  -473,  -473,
    -473,  -473,  -473,  -473,  -473,  -473,   286,  -108,  -211,   303,
    -473,   323,  -473,  -214,  -291,   677,  -473,  -230,  -473,   -63,
      -6,   209,  -473,  -302,  -219,  -254,  -195,  -473,  -107,  -435,
    -473,  -473,  -347,  -473,   234,  -473,    72,  -473,   373,   268,
     381,   249,   106,   113,  -350,  -473,  -438,   257,  -473,   505,
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
     101,   388,   132,   139,  -184,   505,   499,     5,   263,  -180,
     396,   500,   369,   511,   392,   394,   278,   118,   403,    27,
     206,   383,   405,   284,   431,     4,     7,   205,    15,  -183,
     438,    27,   420,   207,  -180,   465,  -184,   229,   229,   229,
       9,  -180,   232,   232,   232,   499,   293,   383,   466,   102,
     500,   229,     9,  -216,   134,     9,   232,   391,    18,   209,
     229,    19,   430,   461,   622,   232,   223,   501,   229,   210,
     175,   165,   370,   232,    23,   229,    28,   564,   393,    29,
     232,   241,   210,   164,   134,   291,   135,  -216,   166,    10,
      11,    29,    20,   259,   118,   118,   118,   363,   229,   268,
     441,    10,    11,   232,    10,    11,   630,   442,   118,   384,
     540,   165,  -182,   213,   372,   454,   135,   118,   454,  -216,
     582,   623,   441,   164,    33,   118,   638,    11,   166,   490,
     643,   495,   118,   529,   658,   531,     9,   644,   645,     9,
     504,  -268,   506,   659,   400,   596,  -268,   229,    26,   229,
     200,   597,   232,   201,   232,   118,   411,    93,   441,   417,
     418,   202,   333,   334,   455,   598,   229,   455,   229,   359,
     539,   232,   456,   232,   229,   106,   611,   585,    27,   232,
     519,   624,   625,   109,   589,    10,    11,   526,    10,    11,
     327,   626,   137,   628,   629,  -268,   229,   172,  -267,     9,
     536,   232,  -268,  -267,   118,   568,   118,   199,   413,   412,
     637,   229,   229,   415,   414,   441,   232,   232,   641,   237,
     433,  -154,   617,   118,   478,   118,   572,   515,   203,   237,
     165,   118,   513,   411,   492,    11,   406,   103,    29,   261,
     216,   125,   164,   204,   347,   131,   421,   166,    10,    11,
     357,   358,  -267,   118,   126,   668,  -183,    35,   126,  -267,
     498,   220,    37,   587,   664,   118,   665,  -182,   118,   118,
    -178,   113,   221,   224,    94,   235,    47,    48,     9,  -179,
     227,   518,    95,    51,   251,   229,    96,   252,   486,   215,
     232,   217,   219,   652,   210,  -178,    97,    98,   229,   256,
     484,   483,  -178,   232,  -179,   487,   485,   264,   229,   627,
       9,  -179,   229,   232,    61,  -177,   523,   232,   287,   620,
    -237,   288,   289,   333,   334,    64,   355,    10,    11,    99,
     265,   532,   229,   229,   356,   266,   360,   232,   232,   364,
    -177,   165,   118,   267,   259,   362,   128,  -177,    10,    11,
     367,   371,   268,   164,   635,   118,   510,   118,   166,    10,
      11,   636,   517,   375,   377,   118,   381,   211,   211,   118,
     211,   211,   383,   385,  -181,   453,   525,   387,  -237,   389,
     382,   395,   397,   464,   486,  -237,   402,   404,   408,   118,
     118,   416,    12,   256,   588,     9,   484,   483,     9,  -181,
     486,   487,   485,   229,   419,   422,  -181,    32,   232,    79,
     165,   435,   484,   483,   448,    32,   449,   487,   485,   237,
     451,   450,   164,   112,   618,   452,   112,   166,   462,   257,
     129,   144,   112,   467,   148,   473,   470,   258,   471,   472,
     147,   151,    10,    11,    10,    11,   229,    10,    11,   382,
     474,   232,   489,   118,   151,   494,   507,   497,   256,   509,
     118,     9,   512,   153,   154,   155,   156,   157,   158,   118,
     167,   168,   514,   516,   524,   541,   528,   530,   437,   342,
     533,   548,   551,   523,   556,   346,   667,   486,   534,   265,
     535,   346,   346,   561,   266,   563,   229,   173,     9,   484,
     483,   232,   537,   118,   487,   485,   538,    10,    11,   557,
      10,    11,     9,   559,   237,   245,   560,   567,   571,   573,
     178,   466,   576,   112,    37,   580,   581,   532,     9,   112,
     186,   147,   578,   113,   190,   151,   275,   165,    47,    48,
       9,   195,   196,   197,   198,    51,     9,    10,    11,   164,
     279,   584,   225,   118,   166,   586,   118,   486,   595,   599,
     151,    10,    11,   600,   603,  -158,   290,   153,   157,   484,
     483,   115,   601,  -159,   487,   485,   226,    10,    11,   256,
     604,   282,   319,   602,   605,   606,   607,    64,   320,    10,
      11,   283,   609,   608,    79,    10,    11,   610,   612,   619,
     351,   631,   633,   634,   647,   646,   441,   663,    32,   346,
     654,   245,   655,   176,  -277,   257,   346,   107,   653,   656,
     657,    66,   365,   632,   346,   660,   118,   593,    10,    11,
     583,   594,   124,   286,   407,   548,   640,   373,   245,    79,
     374,   508,   177,   178,   354,   179,   180,   181,   182,   183,
     496,   184,   185,   186,   187,   188,   189,   190,   479,    91,
     191,   192,   193,   194,   195,   196,   197,   198,   577,   446,
     151,   138,   542,   642,  -277,   566,   639,   447,   353,   562,
       0,   336,     0,   161,  -277,     0,   170,     0,     0,     0,
     337,     0,     0,     0,     0,   338,   339,   340,     0,     0,
      35,     0,   341,     0,     0,    37,     0,     0,   169,   342,
      79,     0,     0,     0,   113,     0,   346,     0,     0,    47,
      48,     9,   546,   346,     0,   346,    51,     0,   343,     0,
       0,   457,     0,    55,   346,     0,   346,     0,   344,     0,
       0,     0,   351,     0,   345,     0,     0,    11,    56,    57,
       0,    58,    59,     0,     0,    60,     0,    61,     0,     0,
       0,     0,   245,     0,   481,     0,    62,    63,    64,   493,
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
       0,     0,     0,    56,    57,     0,    58,    59,     0,     0,
      60,     0,    61,     0,   138,     0,     0,     0,     0,     0,
       0,    62,    63,    64,   138,    10,    11,    37,     0,     0,
       0,     0,     0,     0,     0,     0,   113,   346,     0,   346,
       0,    47,    48,     9,     0,     0,     0,   424,    51,     0,
     336,   161,     0,   463,     0,   225,     0,   424,     0,   337,
       0,     0,     0,     0,   338,   339,   340,     0,     0,     0,
     245,   341,     0,     0,   115,     0,    79,     0,   342,   226,
       0,     0,     0,   151,   292,     0,     0,     0,     0,     0,
      64,     0,    10,    11,   283,     0,     0,   343,   351,     0,
     545,   138,   138,     0,   552,   457,     0,     0,     0,   351,
     351,     0,     0,   345,    -2,    34,    11,    35,     0,     0,
      36,     0,    37,    38,    39,     0,     0,    40,     0,    41,
      42,    43,    44,    45,    46,     0,    47,    48,     9,     0,
     138,    49,    50,    51,    52,    53,    54,     0,     0,     0,
      55,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,    56,    57,   170,    58,    59,
       0,     0,    60,     0,    61,   -24,   178,     0,     0,     0,
       0,     0,     0,    62,    63,    64,   186,    10,    11,     0,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,     0,     0,     0,     0,     0,     0,     0,   569,   570,
       0,   326,     0,    35,     0,     0,    36,  -252,    37,    38,
      39,     0,  -252,    40,     0,    41,    42,   113,    44,    45,
      46,   161,    47,    48,     9,     0,     0,    49,    50,    51,
      52,    53,    54,     0,     0,     0,    55,     0,     0,     0,
       0,   424,     0,     0,     0,     0,     0,     0,   424,   591,
     424,    56,    57,     0,    58,    59,     0,     0,    60,     0,
      61,  -252,     0,     0,     0,     0,     0,   327,  -252,    62,
      63,    64,     0,    10,    11,     0,     0,     0,    37,     0,
       0,   243,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,    47,    48,     9,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,   326,   225,    35,     0,     0,
      36,     0,    37,    38,    39,     0,     0,    40,   170,    41,
      42,   113,    44,    45,    46,   115,    47,    48,     9,     0,
     226,    49,    50,    51,    52,    53,    54,     0,     0,     0,
      55,    64,     0,    10,    11,   650,   651,     0,   161,     0,
       0,     0,     0,     0,     0,    56,    57,   424,    58,    59,
       0,     0,    60,     0,    61,  -252,     0,     0,     0,     0,
       0,   327,  -252,    62,    63,    64,    35,    10,    11,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,    47,    48,     9,    37,     0,
       0,     0,    51,     0,     0,     0,     0,   113,     0,   159,
       0,     0,    47,    48,     9,     0,     0,     0,     0,    51,
       0,     0,     0,     0,    56,    57,   225,    58,   160,     0,
       0,    60,     0,    61,    35,   316,     0,     0,     0,    37,
       0,     0,    62,    63,    64,   115,    10,    11,   113,     0,
     226,     0,     0,    47,    48,     9,     0,     0,     0,     0,
      51,    64,     0,    10,    11,   399,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,    58,    59,     0,     0,    60,
       0,    61,    35,     0,     0,     0,     0,    37,   423,     0,
      62,    63,    64,     0,    10,    11,   113,     0,     0,     0,
       0,    47,    48,     9,     0,     0,     0,     0,    51,     0,
     432,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,    37,     0,     0,     0,
      56,    57,     0,    58,   160,   113,     0,    60,     0,    61,
      47,    48,     9,     0,   476,     0,     0,    51,    62,    63,
      64,     0,    10,    11,    55,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    37,     0,     0,     0,    56,
      57,     0,    58,    59,   113,     0,    60,     0,    61,    47,
      48,     9,     0,   477,     0,     0,    51,    62,    63,    64,
       0,    10,    11,    55,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    37,     0,     0,     0,    56,    57,
       0,    58,    59,   113,     0,    60,     0,    61,    47,    48,
       9,     0,     0,     0,     0,    51,    62,    63,    64,     0,
      10,    11,    55,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,    37,     0,     0,     0,    56,    57,     0,
      58,    59,   113,     0,    60,     0,    61,    47,    48,     9,
       0,     0,     0,   590,    51,    62,    63,    64,     0,    10,
      11,    55,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,    37,     0,     0,     0,    56,    57,     0,    58,
      59,   113,     0,    60,     0,    61,    47,    48,     9,     0,
       0,     0,     0,    51,    62,    63,    64,     0,    10,    11,
     159,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,   285,     0,     0,     0,    56,    57,     0,    58,   160,
     113,     0,    60,     0,    61,    47,    48,     9,     0,     0,
       0,    37,    51,    62,    63,    64,     0,    10,    11,    55,
     113,     0,     0,     0,     0,    47,    48,     9,     0,     0,
       0,     0,    51,     0,    56,    57,     0,    58,    59,   114,
       0,    60,     0,    61,     0,     0,     0,     0,     0,     0,
      37,     0,    62,    63,    64,     0,    10,    11,   115,   113,
       0,     0,     0,   116,    47,    48,     9,     0,     0,     0,
      37,    51,     0,     0,    64,     0,    10,    11,   225,   113,
      37,     0,     0,     0,    47,    48,     9,     0,     0,   113,
     285,    51,     0,     0,    47,    48,     9,   115,   409,   113,
       0,    51,   226,     0,    47,    48,     9,     0,   225,     0,
     336,    51,     0,    64,     0,    10,    11,   115,   225,   337,
       0,     0,   410,     0,   338,   339,   340,   115,     0,     0,
       0,   341,   480,    64,     0,    10,    11,   115,   443,     0,
       0,     0,   226,    64,     0,    10,    11,     0,     0,   336,
       0,     0,     0,    64,     0,    10,    11,   343,   337,     0,
       0,     0,   444,   338,   339,   544,   336,     0,     0,     0,
     341,     0,     0,   345,   336,   337,    11,   342,     0,     0,
     338,   339,   340,   337,     0,     0,     0,   341,   338,   339,
     340,     0,     0,     0,   342,   341,   343,     0,     0,     0,
       0,     0,   342,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   343,    10,    11,     0,     0,   613,     0,
       0,   343,     0,     0,     0,     0,     0,     0,     0,   345,
       0,     0,    11,     0,     0,     0,     0,   345,   177,   178,
      11,   179,     0,   181,   182,   183,     0,     0,   185,   186,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   177,   178,     0,   179,     0,   181,
     182,   183,     0,     0,   185,   186,   187,   188,   189,   190,
     437,     0,   191,   192,   193,   194,   195,   196,   197,   198,
       0,     0,     0,     0,   177,   178,     0,   179,     0,   181,
     182,   183,     0,   434,   185,   186,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
       0,     0,     0,   177,   178,     0,   179,   527,   181,   182,
     183,     0,     0,   185,   186,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,     0,
       0,     0,   177,   178,     0,   179,   661,   181,   182,   183,
       0,     0,   185,   186,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,     0,     0,
       0,   177,   178,     0,   179,   662,   181,   182,   183,     0,
       0,   185,   186,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   177,   178,     0,
       0,     0,   181,   182,   183,     0,     0,   185,   186,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   177,   178,     0,     0,     0,   181,   182,
     183,     0,     0,   185,   186,   187,   188,     0,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   178,
       0,     0,     0,   181,   182,   183,     0,     0,   185,   186,
     187,   188,     0,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198
};

static const yytype_int16 yycheck[] =
{
      37,    37,    61,   143,    67,    37,    37,   202,   380,   205,
     224,   148,    61,   448,   144,   127,    28,   489,   456,    67,
     127,   133,   252,   325,    61,   114,   115,   116,   136,    61,
      31,   143,   323,    36,     3,    51,    39,   251,    11,     5,
      24,   260,    45,    49,    35,   392,     7,    25,   137,    35,
     269,    12,     5,   400,   265,   266,   145,    37,   277,     3,
       1,    24,   281,   152,   318,     0,    25,    83,    24,    60,
     324,     3,   291,    89,    60,    62,    67,   114,   115,   116,
      24,    67,   114,   115,   116,     7,   175,    24,    75,    73,
      12,   128,    24,     1,    35,    24,   128,    60,     3,    65,
     137,    61,    75,    72,   576,   137,   107,    68,   145,    75,
     173,   160,    65,   145,    24,   152,    60,   464,    55,    63,
     152,   127,    75,   160,    35,   173,    67,    35,   160,    73,
      74,    63,    21,   136,   114,   115,   116,   226,   175,   142,
      61,    73,    74,   175,    73,    74,    68,    68,   128,   257,
     441,   200,    60,    60,   243,     3,    67,   137,     3,    67,
     507,     5,    61,   200,    61,   145,   601,    74,   200,    68,
     608,   385,   152,   427,   646,   429,    24,   612,   613,    24,
     391,     7,   393,    20,   273,    66,    12,   224,    63,   226,
      60,    72,   224,    63,   226,   175,   285,    61,    61,   288,
     289,    71,   208,   209,    52,    68,   243,    52,   245,   221,
     440,   243,    60,   245,   251,     3,   563,   519,     3,   251,
     416,    65,    66,     3,   526,    73,    74,   423,    73,    74,
      67,    75,    71,   580,   581,    61,   273,    61,     7,    24,
     435,   273,    68,    12,   224,   475,   226,    67,   285,   285,
     600,   288,   289,   285,   285,    61,   288,   289,   605,   371,
     319,    66,    68,   243,   371,   245,   480,   404,    66,   381,
     319,   251,   402,   362,   381,    74,   282,    62,    63,   387,
      24,    40,   319,    60,   212,    44,   292,   319,    73,    74,
     218,   219,    61,   273,    40,   667,    60,     3,    44,    68,
     389,    64,     8,   522,   654,   285,   656,    60,   288,   289,
      35,    17,    61,    60,     9,    63,    22,    23,    24,    35,
     409,   410,    17,    29,    60,   362,    21,    67,   377,    95,
     362,    97,    98,   635,    75,    60,    31,    32,   375,    24,
     377,   377,    67,   375,    60,   377,   377,    35,   385,   579,
      24,    67,   389,   385,    60,    35,   419,   389,    62,   573,
       3,    72,    72,   369,   370,    71,    60,    73,    74,    64,
      55,   430,   409,   410,     3,    60,    62,   409,   410,    62,
      60,   430,   362,    68,   387,     8,    60,    67,    73,    74,
      35,    61,   395,   430,   590,   375,   399,   377,   430,    73,
      74,   596,   408,    75,    62,   385,    61,    94,    95,   389,
      97,    98,    24,    60,    35,   343,   422,    61,    61,    72,
      63,    61,     3,   351,   473,    68,    61,    61,    65,   409,
     410,    67,     5,    24,   523,    24,   473,   473,    24,    60,
     489,   473,   473,   480,    61,    65,    67,    20,   480,    22,
     499,    66,   489,   489,    60,    28,    67,   489,   489,   571,
      67,    71,   499,    36,   571,     8,    39,   499,    65,    60,
      43,    60,    45,    61,    60,    62,    61,    68,    61,    61,
      53,    54,    73,    74,    73,    74,   523,    73,    74,    63,
      62,   523,    62,   473,    67,    62,    62,    68,    24,    68,
     480,    24,    35,    55,    56,    57,    58,    59,    60,   489,
      62,    63,    62,    62,    62,   443,    75,    68,    75,    36,
      62,   449,   450,   586,   452,   212,   666,   576,    62,    55,
      62,   218,   219,   461,    60,   463,   573,    60,    24,   576,
     576,   573,    62,   523,   576,   576,    68,    73,    74,     3,
      73,    74,    24,    61,   666,   128,    72,    62,    61,    60,
      34,    75,    62,   136,     8,    62,    62,   626,    24,   142,
      44,   144,    66,    17,    48,   148,    62,   626,    22,    23,
      24,    55,    56,    57,    58,    29,    24,    73,    74,   626,
      62,    62,    36,   573,   626,    61,   576,   646,    62,    62,
     173,    73,    74,    62,    61,    60,    62,   159,   160,   646,
     646,    55,    60,    60,   646,   646,    60,    73,    74,    24,
      72,    65,    60,    68,   552,    68,    61,    71,   201,    73,
      74,    75,   560,    51,   207,    73,    74,    61,    60,    62,
     213,    68,    62,    68,    14,    62,    61,    68,   221,   336,
      62,   224,    62,     4,     5,    60,   343,    31,    72,    62,
      62,    22,   235,   586,   351,   647,   646,   528,    73,    74,
     512,   528,    39,   160,   283,   603,   604,   245,   251,   252,
     245,   395,    33,    34,   214,    36,    37,    38,    39,    40,
     387,    42,    43,    44,    45,    46,    47,    48,   375,    22,
      51,    52,    53,    54,    55,    56,    57,    58,   499,   336,
     283,    49,   444,   607,    65,   466,   603,   336,   213,   462,
      -1,     8,    -1,    61,    75,    -1,    64,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
       3,    -1,    29,    -1,    -1,     8,    -1,    -1,    11,    36,
     323,    -1,    -1,    -1,    17,    -1,   443,    -1,    -1,    22,
      23,    24,   449,   450,    -1,   452,    29,    -1,    55,    -1,
      -1,   344,    -1,    36,   461,    -1,   463,    -1,    65,    -1,
      -1,    -1,   355,    -1,    71,    -1,    -1,    74,    51,    52,
      -1,    54,    55,    -1,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,   375,    -1,   377,    -1,    69,    70,    71,   382,
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
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    -1,
      58,    -1,    60,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,   292,    73,    74,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,   654,    -1,   656,
      -1,    22,    23,    24,    -1,    -1,    -1,   315,    29,    -1,
       8,   319,    -1,    11,    -1,    36,    -1,   325,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
     573,    29,    -1,    -1,    55,    -1,   579,    -1,    36,    60,
      -1,    -1,    -1,   586,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,    75,    -1,    -1,    55,   601,    -1,
     603,   369,   370,    -1,   607,   608,    -1,    -1,    -1,   612,
     613,    -1,    -1,    71,     0,     1,    74,     3,    -1,    -1,
       6,    -1,     8,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    -1,
     408,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   430,    -1,    -1,    51,    52,   435,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    44,    73,    74,    -1,
      48,    -1,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   476,   477,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,   499,    22,    23,    24,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,   519,    -1,    -1,    -1,    -1,    -1,    -1,   526,   527,
     528,    51,    52,    -1,    54,    55,    -1,    -1,    58,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    -1,    73,    74,    -1,    -1,    -1,     8,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,     1,    36,     3,    -1,    -1,
       6,    -1,     8,     9,    10,    -1,    -1,    13,   596,    15,
      16,    17,    18,    19,    20,    55,    22,    23,    24,    -1,
      60,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    71,    -1,    73,    74,   623,   624,    -1,   626,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,   635,    54,    55,
      -1,    -1,    58,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,     3,    73,    74,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,     8,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    17,    -1,    36,
      -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    51,    52,    36,    54,    55,    -1,
      -1,    58,    -1,    60,     3,    62,    -1,    -1,    -1,     8,
      -1,    -1,    69,    70,    71,    55,    73,    74,    17,    -1,
      60,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    71,    -1,    73,    74,    75,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    -1,    -1,    58,
      -1,    60,     3,    -1,    -1,    -1,    -1,     8,    67,    -1,
      69,    70,    71,    -1,    73,    74,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    17,    -1,    58,    -1,    60,
      22,    23,    24,    -1,    26,    -1,    -1,    29,    69,    70,
      71,    -1,    73,    74,    36,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    17,    -1,    58,    -1,    60,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    69,    70,    71,
      -1,    73,    74,    36,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    17,    -1,    58,    -1,    60,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    69,    70,    71,    -1,
      73,    74,    36,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    17,    -1,    58,    -1,    60,    22,    23,    24,
      -1,    -1,    -1,    67,    29,    69,    70,    71,    -1,    73,
      74,    36,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    51,    52,    -1,    54,
      55,    17,    -1,    58,    -1,    60,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    69,    70,    71,    -1,    73,    74,
      36,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      17,    -1,    58,    -1,    60,    22,    23,    24,    -1,    -1,
      -1,     8,    29,    69,    70,    71,    -1,    73,    74,    36,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    51,    52,    -1,    54,    55,    36,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    69,    70,    71,    -1,    73,    74,    55,    17,
      -1,    -1,    -1,    60,    22,    23,    24,    -1,    -1,    -1,
       8,    29,    -1,    -1,    71,    -1,    73,    74,    36,    17,
       8,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    17,
       8,    29,    -1,    -1,    22,    23,    24,    55,    36,    17,
      -1,    29,    60,    -1,    22,    23,    24,    -1,    36,    -1,
       8,    29,    -1,    71,    -1,    73,    74,    55,    36,    17,
      -1,    -1,    60,    -1,    22,    23,    24,    55,    -1,    -1,
      -1,    29,    60,    71,    -1,    73,    74,    55,    36,    -1,
      -1,    -1,    60,    71,    -1,    73,    74,    -1,    -1,     8,
      -1,    -1,    -1,    71,    -1,    73,    74,    55,    17,    -1,
      -1,    -1,    60,    22,    23,    24,     8,    -1,    -1,    -1,
      29,    -1,    -1,    71,     8,    17,    74,    36,    -1,    -1,
      22,    23,    24,    17,    -1,    -1,    -1,    29,    22,    23,
      24,    -1,    -1,    -1,    36,    29,    55,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    55,    73,    74,    -1,    -1,    60,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    71,    33,    34,
      74,    36,    -1,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    -1,    43,    44,    45,    46,    47,    48,
      75,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    -1,    72,    43,    44,    45,    46,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    33,    34,    -1,    36,    66,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    33,    34,    -1,    36,    66,    38,    39,    40,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    33,    34,    -1,    36,    66,    38,    39,    40,    -1,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    33,    34,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,    45,
      46,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    33,    34,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    34,
      -1,    -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,
      45,    46,    -1,    48,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    79,    80,     0,    25,    78,    25,    86,    24,
      73,    74,   141,   142,    81,    24,    88,    89,     3,    61,
      21,    82,   166,    24,    87,   214,    63,     3,    60,    63,
      83,    85,   141,    61,     1,     3,     6,     8,     9,    10,
      13,    15,    16,    17,    18,    19,    20,    22,    23,    27,
      28,    29,    30,    31,    32,    36,    51,    52,    54,    55,
      58,    60,    69,    70,    71,    90,    91,    92,    98,   110,
     113,   121,   124,   126,   127,   128,   129,   134,   138,   141,
     143,   144,   149,   150,   153,   156,   157,   158,   161,   164,
     165,   181,   186,    61,     9,    17,    21,    31,    32,    64,
     199,    24,    73,    62,    83,    84,     3,    86,    88,     3,
     138,   140,   141,    17,    36,    55,    60,   141,   143,   148,
     152,   153,   154,   161,   140,   128,   134,   111,    60,   141,
     159,   128,   138,   114,    35,    67,   137,    71,   126,   186,
     193,   125,   137,   122,    60,    96,    97,   141,    60,    93,
     139,   141,   185,   127,   127,   127,   127,   127,   127,    36,
      55,   126,   135,   147,   153,   155,   161,   127,   127,    11,
     126,   192,    61,    60,    94,   185,     4,    33,    34,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,    47,
      48,    51,    52,    53,    54,    55,    56,    57,    58,    67,
      60,    63,    71,    66,    60,   137,     1,   137,     5,    65,
      75,   142,   200,    60,   160,   200,    24,   200,   201,   200,
      64,    61,   190,    88,    60,    36,    60,   146,   152,   153,
     154,   155,   161,   146,   146,    63,    26,    98,   107,   108,
     109,   186,   194,    11,   136,   141,   145,   146,   177,   178,
     179,    60,    67,   162,   112,   194,    24,    60,    68,   138,
     171,   173,   175,   146,    35,    55,    60,    68,   138,   170,
     172,   173,   174,   184,   112,    62,    97,   169,   146,    62,
      93,   167,    65,    75,   146,     8,   147,    62,    72,    72,
      62,    94,    65,   146,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   130,    62,   135,   187,    60,
     141,   126,   192,   182,   126,   130,     1,    67,    91,   100,
     180,   181,   183,   186,   186,   126,     8,    17,    22,    23,
      24,    29,    36,    55,    65,    71,   142,   202,   204,   205,
     206,   141,   207,   215,   162,    60,     3,   202,   202,    83,
      62,   179,     8,   146,    62,   141,   126,    35,   105,     5,
      65,    61,   146,   136,   145,    75,   191,    62,   179,   183,
     115,    61,    63,    24,   173,    60,   176,    61,   190,    72,
     104,    60,   174,    55,   174,    61,   190,     3,   198,    75,
     146,   123,    61,   190,    61,   190,   186,   139,    65,    36,
      60,   146,   152,   153,   154,   161,    67,   146,   146,    61,
     190,   186,    65,    67,   126,   131,   132,   188,   189,    11,
      75,   191,    31,   135,    72,    66,   180,    75,   191,   189,
     101,    61,    68,    36,    60,   203,   204,   206,    60,    67,
      71,    67,     8,   202,     3,    52,    60,   141,   212,   213,
       3,    72,    65,    11,   202,    62,    75,    61,   195,   215,
      61,    61,    61,    62,    62,   106,    26,    26,   194,   177,
      60,   141,   151,   152,   153,   154,   155,   161,   163,    62,
      68,   105,   194,   141,    62,   179,   175,    68,   146,     7,
      12,    68,    99,   102,   174,   198,   174,    62,   172,    68,
     138,   198,    35,    97,    62,    93,    62,   186,   146,   130,
      94,    95,   168,   185,    62,   186,   130,    66,    75,   191,
      68,   191,   135,    62,    62,    62,   192,    62,    68,   183,
     180,   202,   205,   195,    24,   141,   142,   197,   202,   209,
     217,   202,   141,   196,   208,   216,   202,     3,   212,    61,
      72,   202,   213,   202,   198,   141,   207,    62,   183,   126,
     126,    61,   179,    60,   163,   116,    62,   187,    66,   103,
      62,    62,   198,   104,    62,   189,    61,   190,   146,   189,
      67,   126,   133,   131,   132,    62,    66,    72,    68,    62,
      62,    60,    68,    61,    72,   202,    68,    61,    51,   202,
      61,   198,    60,    60,   202,   210,   211,    68,   194,    62,
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
#line 123 "go.y" /* yacc.c:1646  */
    {
		xtop = concat(xtop, (yyvsp[0].list));
	}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 129 "go.y" /* yacc.c:1646  */
    {
		prevlineno = lineno;
		yyerror("package statement must be first");
		errorexit();
	}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 135 "go.y" /* yacc.c:1646  */
    {
		mkpackage((yyvsp[-1].sym)->name);
	}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 145 "go.y" /* yacc.c:1646  */
    {
		importpkg = runtimepkg;

		if(debug['A'])
			cannedimports("runtime.builtin", "package runtime\n\n$$\n\n");
		else
			cannedimports("runtime.builtin", runtimeimport);
		curio.importsafe = 1;
	}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 156 "go.y" /* yacc.c:1646  */
    {
		importpkg = nil;
	}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 170 "go.y" /* yacc.c:1646  */
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
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 207 "go.y" /* yacc.c:1646  */
    {
		// When an invalid import path is passed to importfile,
		// it calls yyerror and then sets up a fake import with
		// no package statement. This allows us to test more
		// than one invalid import statement in a single file.
		if(nerrors == 0)
			fatal("phase error in import");
	}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 222 "go.y" /* yacc.c:1646  */
    {
		// import with original name
		(yyval.i) = parserline();
		importmyname = S;
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 229 "go.y" /* yacc.c:1646  */
    {
		// import with given name
		(yyval.i) = parserline();
		importmyname = (yyvsp[-1].sym);
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 236 "go.y" /* yacc.c:1646  */
    {
		// import into my name space
		(yyval.i) = parserline();
		importmyname = lookup(".");
		importfile(&(yyvsp[0].val), (yyval.i));
	}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 245 "go.y" /* yacc.c:1646  */
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
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 260 "go.y" /* yacc.c:1646  */
    {
		if(strcmp((yyvsp[0].sym)->name, "safe") == 0)
			curio.importsafe = 1;
	}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 266 "go.y" /* yacc.c:1646  */
    {
		defercheckwidth();
	}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 270 "go.y" /* yacc.c:1646  */
    {
		resumecheckwidth();
		unimportfile();
	}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 279 "go.y" /* yacc.c:1646  */
    {
		yyerror("empty top-level declaration");
		(yyval.list) = nil;
	}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 285 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 289 "go.y" /* yacc.c:1646  */
    {
		yyerror("non-declaration statement outside function body");
		(yyval.list) = nil;
	}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 294 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 300 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
	}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 304 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 308 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 312 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[0].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 318 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		iota = -100000;
		lastconst = nil;
	}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 324 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-4].list), (yyvsp[-2].list));
		iota = -100000;
		lastconst = nil;
	}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 330 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		iota = -100000;
	}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 335 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 339 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
	}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 343 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 349 "go.y" /* yacc.c:1646  */
    {
		iota = 0;
	}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 355 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 359 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 363 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = variter((yyvsp[-2].list), nil, (yyvsp[0].list));
	}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 369 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-3].list), (yyvsp[-2].node), (yyvsp[0].list));
	}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 373 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-2].list), N, (yyvsp[0].list));
	}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 380 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[-1].list), (yyvsp[0].node), nil);
	}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 384 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = constiter((yyvsp[0].list), N, nil);
	}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 390 "go.y" /* yacc.c:1646  */
    {
		// different from dclname because the name
		// becomes visible right here, not at the end
		// of the declaration.
		(yyval.node) = typedcl0((yyvsp[0].sym));
	}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 399 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = typedcl1((yyvsp[-1].node), (yyvsp[0].node), 1);
	}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 405 "go.y" /* yacc.c:1646  */
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
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 423 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-2].node), (yyvsp[0].node));
		(yyval.node)->etype = (yyvsp[-1].i);			// rathole to pass opcode
	}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 428 "go.y" /* yacc.c:1646  */
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
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 440 "go.y" /* yacc.c:1646  */
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
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 456 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OADD;
	}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 462 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OASOP, (yyvsp[-1].node), nodintconst(1));
		(yyval.node)->implicit = 1;
		(yyval.node)->etype = OSUB;
	}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 470 "go.y" /* yacc.c:1646  */
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
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 490 "go.y" /* yacc.c:1646  */
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
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 508 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OCASE
		// right will point to next case
		// done in casebody()
		markdcl();
		(yyval.node) = nod(OXCASE, N, N);
		(yyval.node)->list = list1(colas((yyvsp[-3].list), list1((yyvsp[-1].node)), (yyvsp[-2].i)));
	}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 517 "go.y" /* yacc.c:1646  */
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
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 535 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 539 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].list) == nil)
			(yyval.node) = nod(OEMPTY, N, N);
		else
			(yyval.node) = liststmt((yyvsp[-1].list));
		popdcl();
	}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 549 "go.y" /* yacc.c:1646  */
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
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 560 "go.y" /* yacc.c:1646  */
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
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 580 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 584 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-1].list), (yyvsp[0].node));
	}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 590 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 594 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		popdcl();
	}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 601 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->etype = 0;	// := flag
	}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 607 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->colas = 1;
		colasdefn((yyvsp[-3].list), (yyval.node));
	}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 614 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORANGE, N, (yyvsp[0].node));
		(yyval.node)->etype = 0; // := flag
	}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 621 "go.y" /* yacc.c:1646  */
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
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 632 "go.y" /* yacc.c:1646  */
    {
		// normal test
		(yyval.node) = nod(OFOR, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 641 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		(yyval.node)->nbody = concat((yyval.node)->nbody, (yyvsp[0].list));
	}
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 648 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 652 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		popdcl();
	}
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 659 "go.y" /* yacc.c:1646  */
    {
		// test
		(yyval.node) = nod(OIF, N, N);
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 665 "go.y" /* yacc.c:1646  */
    {
		// init ; test
		(yyval.node) = nod(OIF, N, N);
		if((yyvsp[-2].node) != N)
			(yyval.node)->ninit = list1((yyvsp[-2].node));
		(yyval.node)->ntest = (yyvsp[0].node);
	}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 676 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 680 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].node)->ntest == N)
			yyerror("missing condition in if statement");
	}
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 685 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->nbody = (yyvsp[0].list);
	}
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 689 "go.y" /* yacc.c:1646  */
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
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 706 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 710 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].node)->ntest == N)
			yyerror("missing condition in if statement");
		(yyvsp[-1].node)->nbody = (yyvsp[0].list);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 718 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 722 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-1].list), (yyvsp[0].list));
	}
#line 2935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 727 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 731 "go.y" /* yacc.c:1646  */
    {
		NodeList *node;
		
		node = mal(sizeof *node);
		node->n = (yyvsp[0].node);
		node->end = node;
		(yyval.list) = node;
	}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 742 "go.y" /* yacc.c:1646  */
    {
		markdcl();
	}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 746 "go.y" /* yacc.c:1646  */
    {
		Node *n;
		n = (yyvsp[0].node)->ntest;
		if(n != N && n->op != OTYPESW)
			n = N;
		typesw = nod(OXXX, typesw, n);
	}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 754 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-4].node);
		(yyval.node)->op = OSWITCH;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
		popdcl();
	}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 764 "go.y" /* yacc.c:1646  */
    {
		typesw = nod(OXXX, typesw, N);
	}
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 768 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSELECT, N, N);
		(yyval.node)->lineno = typesw->lineno;
		(yyval.node)->list = (yyvsp[-1].list);
		typesw = typesw->left;
	}
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 781 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOROR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 785 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 789 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OEQ, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 793 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 797 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 801 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 805 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGE, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 809 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 813 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OADD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 817 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSUB, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 821 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 825 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OXOR, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 829 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMUL, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 833 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODIV, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 837 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMOD, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 841 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OAND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 845 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OANDNOT, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 849 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OLSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 853 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORSH, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 858 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSEND, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 865 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 869 "go.y" /* yacc.c:1646  */
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
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 880 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPLUS, (yyvsp[0].node), N);
	}
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 884 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OMINUS, (yyvsp[0].node), N);
	}
#line 3206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 888 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONOT, (yyvsp[0].node), N);
	}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 892 "go.y" /* yacc.c:1646  */
    {
		yyerror("the bitwise complement operator is ^");
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 897 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCOM, (yyvsp[0].node), N);
	}
#line 3231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 901 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ORECV, (yyvsp[0].node), N);
	}
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 911 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-2].node), N);
	}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 915 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = (yyvsp[-2].list);
	}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 920 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCALL, (yyvsp[-5].node), N);
		(yyval.node)->list = (yyvsp[-3].list);
		(yyval.node)->isddd = 1;
	}
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 928 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 933 "go.y" /* yacc.c:1646  */
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
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 944 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODOTTYPE, (yyvsp[-4].node), (yyvsp[-1].node));
	}
#line 3297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 948 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTYPESW, N, (yyvsp[-4].node));
	}
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 952 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OINDEX, (yyvsp[-3].node), (yyvsp[-1].node));
	}
#line 3313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 956 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OSLICE, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node)));
	}
#line 3321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 960 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[-3].node) == N)
			yyerror("middle index required in 3-index slice");
		if((yyvsp[-1].node) == N)
			yyerror("final index required in 3-index slice");
		(yyval.node) = nod(OSLICE3, (yyvsp[-7].node), nod(OKEY, (yyvsp[-5].node), nod(OKEY, (yyvsp[-3].node), (yyvsp[-1].node))));
	}
#line 3333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 969 "go.y" /* yacc.c:1646  */
    {
		// conversion
		(yyval.node) = nod(OCALL, (yyvsp[-4].node), N);
		(yyval.node)->list = list1((yyvsp[-2].node));
	}
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 975 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 982 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-4].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 988 "go.y" /* yacc.c:1646  */
    {
		yyerror("cannot parenthesize type in composite literal");
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->right = (yyvsp[-5].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 997 "go.y" /* yacc.c:1646  */
    {
		// composite expression.
		// make node early so we get the right line number.
		(yyval.node) = nod(OCOMPLIT, N, N);
	}
#line 3385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1005 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OKEY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1011 "go.y" /* yacc.c:1646  */
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
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1028 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1036 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
		(yyval.node)->list = (yyvsp[-1].list);
	}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1044 "go.y" /* yacc.c:1646  */
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
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1070 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = LBODY;
	}
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1074 "go.y" /* yacc.c:1646  */
    {
		(yyval.i) = '{';
	}
#line 3469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1085 "go.y" /* yacc.c:1646  */
    {
		if((yyvsp[0].sym) == S)
			(yyval.node) = N;
		else
			(yyval.node) = newname((yyvsp[0].sym));
	}
#line 3480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1094 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = dclname((yyvsp[0].sym));
	}
#line 3488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1099 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1106 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		// during imports, unqualified non-exported identifiers are from builtinpkg
		if(importpkg != nil && !exportname((yyvsp[0].sym)->name))
			(yyval.sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
	}
#line 3507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1114 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = S;
	}
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1120 "go.y" /* yacc.c:1646  */
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
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1133 "go.y" /* yacc.c:1646  */
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
#line 3549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1148 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname((yyvsp[0].sym));
		if((yyval.node)->pack != N)
			(yyval.node)->pack->used = 1;
	}
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1168 "go.y" /* yacc.c:1646  */
    {
		yyerror("final argument in variadic function missing type");
		(yyval.node) = nod(ODDD, typenod(typ(TINTER)), N);
	}
#line 3568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1173 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODDD, (yyvsp[0].node), N);
	}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1184 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1193 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1203 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1224 "go.y" /* yacc.c:1646  */
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
#line 3615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1237 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTARRAY, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1241 "go.y" /* yacc.c:1646  */
    {
		// array literal of nelem
		(yyval.node) = nod(OTARRAY, nod(ODDD, N, N), (yyvsp[0].node));
	}
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1246 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Cboth;
	}
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1251 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Csend;
	}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1256 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTMAP, (yyvsp[-2].node), (yyvsp[0].node));
	}
#line 3658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1264 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OIND, (yyvsp[0].node), N);
	}
#line 3666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1270 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTCHAN, (yyvsp[0].node), N);
		(yyval.node)->etype = Crecv;
	}
#line 3675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1277 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1283 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTSTRUCT, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1290 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		fixlbrace((yyvsp[-3].i));
	}
#line 3704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1296 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OTINTER, N, N);
		fixlbrace((yyvsp[-1].i));
	}
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1307 "go.y" /* yacc.c:1646  */
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
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1323 "go.y" /* yacc.c:1646  */
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
#line 3764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1352 "go.y" /* yacc.c:1646  */
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
#line 3804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1390 "go.y" /* yacc.c:1646  */
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
#line 3833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1415 "go.y" /* yacc.c:1646  */
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
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1433 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, N, N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 3864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1441 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1445 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
		if((yyval.list) == nil)
			(yyval.list) = list1(nod(OEMPTY, N, N));
	}
#line 3882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1453 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1457 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, (yyvsp[0].node)));
	}
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1461 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].list) = checkarglist((yyvsp[-1].list), 0);
		(yyval.list) = (yyvsp[-1].list);
	}
#line 3907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1468 "go.y" /* yacc.c:1646  */
    {
		closurehdr((yyvsp[0].node));
	}
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1474 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody((yyvsp[-1].list));
		fixlbrace((yyvsp[-2].i));
	}
#line 3924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1479 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = closurebody(nil);
	}
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1490 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 3940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1494 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[-1].list));
		if(nsyntaxerrors == 0)
			testdclstack();
		nointerface = 0;
		noescape = 0;
		nosplit = 0;
		nowritebarrier = 0;
	}
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1507 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1514 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1520 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 3978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1524 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1531 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = concat((yyvsp[-2].list), (yyvsp[0].list));
	}
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1537 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1541 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1547 "go.y" /* yacc.c:1646  */
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
#line 4037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1570 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1575 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1581 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node)->right = nod(OIND, (yyvsp[-1].node)->right, N);
		(yyvsp[-1].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-1].node));
	}
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1587 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1594 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-2].node)->right = nod(OIND, (yyvsp[-2].node)->right, N);
		(yyvsp[-2].node)->val = (yyvsp[0].val);
		(yyval.list) = list1((yyvsp[-2].node));
		yyerror("cannot parenthesize embedded type");
	}
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1603 "go.y" /* yacc.c:1646  */
    {
		Node *n;

		(yyval.sym) = (yyvsp[0].sym);
		n = oldname((yyvsp[0].sym));
		if(n->pack != N)
			n->pack->used = 1;
	}
#line 4101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1612 "go.y" /* yacc.c:1646  */
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
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1627 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = embedded((yyvsp[0].sym), localpkg);
	}
#line 4126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1633 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, (yyvsp[-1].node), (yyvsp[0].node));
		ifacedcl((yyval.node));
	}
#line 4135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1638 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[0].sym)));
	}
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1642 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, oldname((yyvsp[-1].sym)));
		yyerror("cannot parenthesize embedded type");
	}
#line 4152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1649 "go.y" /* yacc.c:1646  */
    {
		// without func keyword
		(yyvsp[-2].list) = checkarglist((yyvsp[-2].list), 1);
		(yyval.node) = nod(OTFUNC, fakethis(), N);
		(yyval.node)->list = (yyvsp[-2].list);
		(yyval.node)->rlist = (yyvsp[0].list);
	}
#line 4164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1663 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1669 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ONONAME, N, N);
		(yyval.node)->sym = (yyvsp[-1].sym);
		(yyval.node) = nod(OKEY, (yyval.node), (yyvsp[0].node));
	}
#line 4184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1678 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1682 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1687 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1691 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1699 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1704 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = liststmt((yyvsp[0].list));
	}
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1709 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1720 "go.y" /* yacc.c:1646  */
    {
		(yyvsp[-1].node) = nod(OLABEL, (yyvsp[-1].node), N);
		(yyvsp[-1].node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1725 "go.y" /* yacc.c:1646  */
    {
		NodeList *l;

		(yyvsp[-3].node)->defn = (yyvsp[0].node);
		l = list1((yyvsp[-3].node));
		if((yyvsp[0].node))
			l = list(l, (yyvsp[0].node));
		(yyval.node) = liststmt(l);
	}
#line 4263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1735 "go.y" /* yacc.c:1646  */
    {
		// will be converted to OFALL
		(yyval.node) = nod(OXFALL, N, N);
		(yyval.node)->xoffset = block;
	}
#line 4273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1741 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OBREAK, (yyvsp[0].node), N);
	}
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1745 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OCONTINUE, (yyvsp[0].node), N);
	}
#line 4289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1749 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OPROC, (yyvsp[0].node), N);
	}
#line 4297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1753 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODEFER, (yyvsp[0].node), N);
	}
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1757 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(OGOTO, (yyvsp[0].node), N);
		(yyval.node)->sym = dclstack;  // context, for goto restrictions
	}
#line 4314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1762 "go.y" /* yacc.c:1646  */
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
#line 4335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1781 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
		if((yyvsp[0].node) != N)
			(yyval.list) = list1((yyvsp[0].node));
	}
#line 4345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1787 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-2].list);
		if((yyvsp[0].node) != N)
			(yyval.list) = list((yyval.list), (yyvsp[0].node));
	}
#line 4355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1795 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1799 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1805 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1809 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1815 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1819 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1825 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1829 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1838 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1842 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1846 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1850 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1855 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1859 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1873 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1879 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1885 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = N;
	}
#line 4491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1891 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1897 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1903 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1909 "go.y" /* yacc.c:1646  */
    {
		(yyval.val).ctype = CTxxx;
	}
#line 4523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1919 "go.y" /* yacc.c:1646  */
    {
		importimport((yyvsp[-2].sym), (yyvsp[-1].val).u.sval);
	}
#line 4531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1923 "go.y" /* yacc.c:1646  */
    {
		importvar((yyvsp[-2].sym), (yyvsp[-1].type));
	}
#line 4539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1927 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-3].sym), types[TIDEAL], (yyvsp[-1].node));
	}
#line 4547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1931 "go.y" /* yacc.c:1646  */
    {
		importconst((yyvsp[-4].sym), (yyvsp[-3].type), (yyvsp[-1].node));
	}
#line 4555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1935 "go.y" /* yacc.c:1646  */
    {
		importtype((yyvsp[-2].type), (yyvsp[-1].type));
	}
#line 4563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1939 "go.y" /* yacc.c:1646  */
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
#line 4585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1959 "go.y" /* yacc.c:1646  */
    {
		(yyval.sym) = (yyvsp[0].sym);
		structpkg = (yyval.sym)->pkg;
	}
#line 4594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1966 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
		importsym((yyvsp[0].sym), OTYPE);
	}
#line 4603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1986 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = pkgtype((yyvsp[0].sym));
	}
#line 4611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1990 "go.y" /* yacc.c:1646  */
    {
		// predefined name like uint8
		(yyvsp[0].sym) = pkglookup((yyvsp[0].sym)->name, builtinpkg);
		if((yyvsp[0].sym)->def == N || (yyvsp[0].sym)->def->op != OTYPE) {
			yyerror("%s is not a type", (yyvsp[0].sym)->name);
			(yyval.type) = T;
		} else
			(yyval.type) = (yyvsp[0].sym)->def->type;
	}
#line 4625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 2000 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(N, (yyvsp[0].type));
	}
#line 4633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 2004 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = aindex(nodlit((yyvsp[-2].val)), (yyvsp[0].type));
	}
#line 4641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 2008 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = maptype((yyvsp[-2].type), (yyvsp[0].type));
	}
#line 4649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 2012 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tostruct((yyvsp[-1].list));
	}
#line 4657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 2016 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = tointerface((yyvsp[-1].list));
	}
#line 4665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 2020 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = ptrto((yyvsp[0].type));
	}
#line 4673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 2024 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Cboth;
	}
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 2030 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[-1].type);
		(yyval.type)->chan = Cboth;
	}
#line 4693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 2036 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Csend;
	}
#line 4703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 2044 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = typ(TCHAN);
		(yyval.type)->type = (yyvsp[0].type);
		(yyval.type)->chan = Crecv;
	}
#line 4713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 2052 "go.y" /* yacc.c:1646  */
    {
		(yyval.type) = functype(nil, (yyvsp[-2].list), (yyvsp[0].list));
	}
#line 4721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 2058 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[-1].type)));
		if((yyvsp[-2].sym))
			(yyval.node)->left = newname((yyvsp[-2].sym));
		(yyval.node)->val = (yyvsp[0].val);
	}
#line 4732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 2065 "go.y" /* yacc.c:1646  */
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
#line 4750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 2081 "go.y" /* yacc.c:1646  */
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
#line 4774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 2103 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, newname((yyvsp[-4].sym)), typenod(functype(fakethis(), (yyvsp[-2].list), (yyvsp[0].list))));
	}
#line 4782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 2107 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nod(ODCLFIELD, N, typenod((yyvsp[0].type)));
	}
#line 4790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 2112 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = nil;
	}
#line 4798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 2119 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = (yyvsp[-1].list);
	}
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 2123 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1(nod(ODCLFIELD, N, typenod((yyvsp[0].type))));
	}
#line 4814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 2133 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = nodlit((yyvsp[0].val));
	}
#line 4822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 2137 "go.y" /* yacc.c:1646  */
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
#line 4845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 2156 "go.y" /* yacc.c:1646  */
    {
		(yyval.node) = oldname(pkglookup((yyvsp[0].sym)->name, builtinpkg));
		if((yyval.node)->op != OLITERAL)
			yyerror("bad constant %S", (yyval.node)->sym);
	}
#line 4855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 2165 "go.y" /* yacc.c:1646  */
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
#line 4870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 2181 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 2185 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 2191 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 2195 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 2201 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list1((yyvsp[0].node));
	}
#line 4910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 2205 "go.y" /* yacc.c:1646  */
    {
		(yyval.list) = list((yyvsp[-2].list), (yyvsp[0].node));
	}
#line 4918 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4922 "y.tab.c" /* yacc.c:1646  */
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
#line 2209 "go.y" /* yacc.c:1906  */


static void
fixlbrace(int lbr)
{
	// If the opening brace was an LBODY,
	// set up for another one now that we're done.
	// See comment in lex.c about loophack.
	if(lbr == LBODY)
		loophack = 1;
}

