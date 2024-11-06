/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEMICOLON = 258,
     COMMA = 259,
     BLANKID = 260,
     ASSIGN = 261,
     STAR = 262,
     DIV = 263,
     MINUS = 264,
     PLUS = 265,
     EQ = 266,
     GE = 267,
     GT = 268,
     LBRACE = 269,
     LE = 270,
     LPAR = 271,
     LSQ = 272,
     LT = 273,
     MOD = 274,
     NE = 275,
     NOT = 276,
     AND = 277,
     OR = 278,
     RBRACE = 279,
     RPAR = 280,
     RSQ = 281,
     PACKAGE = 282,
     RETURN = 283,
     ELSE = 284,
     FOR = 285,
     IF = 286,
     VAR = 287,
     INT = 288,
     FLOAT32 = 289,
     BOOL = 290,
     STRING = 291,
     PRINT = 292,
     PARSEINT = 293,
     FUNC = 294,
     CMDARGS = 295,
     RESERVED = 296,
     IDENTIFIER = 297,
     NATURAL = 298,
     DECIMAL = 299,
     STRLIT = 300,
     UPLUS = 301,
     UMINUS = 302,
     IFELSE = 303
   };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define COMMA 259
#define BLANKID 260
#define ASSIGN 261
#define STAR 262
#define DIV 263
#define MINUS 264
#define PLUS 265
#define EQ 266
#define GE 267
#define GT 268
#define LBRACE 269
#define LE 270
#define LPAR 271
#define LSQ 272
#define LT 273
#define MOD 274
#define NE 275
#define NOT 276
#define AND 277
#define OR 278
#define RBRACE 279
#define RPAR 280
#define RSQ 281
#define PACKAGE 282
#define RETURN 283
#define ELSE 284
#define FOR 285
#define IF 286
#define VAR 287
#define INT 288
#define FLOAT32 289
#define BOOL 290
#define STRING 291
#define PRINT 292
#define PARSEINT 293
#define FUNC 294
#define CMDARGS 295
#define RESERVED 296
#define IDENTIFIER 297
#define NATURAL 298
#define DECIMAL 299
#define STRLIT 300
#define UPLUS 301
#define UMINUS 302
#define IFELSE 303




/* Copy the first part of user declarations.  */
#line 3 "gocompiler.y"

#include "ast.h"

int yylex(void);
void yyerror(char *);


struct node *program;




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 35 "gocompiler.y"
{
    char *lexeme;
    struct node *node;
}
/* Line 193 of yacc.c.  */
#line 209 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 222 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   388

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    16,    17,    20,    26,    30,
      34,    35,    37,    39,    41,    43,    51,    58,    65,    71,
      75,    80,    81,    85,    88,    92,    96,    97,   101,   105,
     115,   121,   127,   132,   135,   137,   139,   141,   146,   151,
     153,   157,   158,   170,   179,   185,   189,   194,   198,   199,
     203,   207,   211,   215,   219,   223,   227,   231,   235,   239,
     243,   247,   251,   254,   257,   260,   262,   264,   266,   268,
     272
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    27,    42,     3,    51,    -1,    52,     3,
      51,    -1,    56,     3,    51,    -1,    -1,    32,    53,    -1,
      32,    16,    53,     3,    25,    -1,    42,    54,    55,    -1,
       4,    42,    54,    -1,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,    39,    42,    16,    57,    25,    55,    59,
      -1,    39,    42,    16,    25,    55,    59,    -1,    39,    42,
      16,    57,    25,    59,    -1,    39,    42,    16,    25,    59,
      -1,    42,    55,    58,    -1,     4,    42,    55,    58,    -1,
      -1,    14,    60,    24,    -1,    60,     3,    -1,    60,    52,
       3,    -1,    60,    61,     3,    -1,    -1,    42,     6,    66,
      -1,    14,    62,    24,    -1,    31,    66,    14,    62,    24,
      29,    14,    62,    24,    -1,    31,    66,    14,    62,    24,
      -1,    30,    66,    14,    62,    24,    -1,    30,    14,    62,
      24,    -1,    28,    66,    -1,    28,    -1,    64,    -1,    63,
      -1,    37,    16,    66,    25,    -1,    37,    16,    45,    25,
      -1,     1,    -1,    62,    61,     3,    -1,    -1,    42,     4,
       5,     6,    38,    16,    40,    17,    66,    26,    25,    -1,
      42,     4,     5,     6,    38,    16,     1,    25,    -1,    42,
      16,    66,    65,    25,    -1,    42,    16,    25,    -1,    42,
      16,     1,    25,    -1,     4,    66,    65,    -1,    -1,    66,
      23,    66,    -1,    66,    22,    66,    -1,    66,    18,    66,
      -1,    66,    13,    66,    -1,    66,    11,    66,    -1,    66,
      20,    66,    -1,    66,    15,    66,    -1,    66,    12,    66,
      -1,    66,    10,    66,    -1,    66,     9,    66,    -1,    66,
       7,    66,    -1,    66,     8,    66,    -1,    66,    19,    66,
      -1,    21,    66,    -1,     9,    66,    -1,    10,    66,    -1,
      43,    -1,    44,    -1,    42,    -1,    64,    -1,    16,    66,
      25,    -1,    16,     1,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    49,    51,    53,    57,    58,    61,    67,
      70,    73,    74,    75,    76,    79,    89,    96,   105,   114,
     120,   124,   127,   132,   133,   141,   152,   156,   159,   171,
     179,   185,   191,   195,   198,   200,   201,   202,   205,   208,
     210,   212,   219,   222,   225,   229,   231,   234,   236,   239,
     242,   245,   248,   251,   254,   257,   260,   263,   266,   269,
     272,   275,   278,   280,   282,   284,   285,   286,   287,   288,
     289
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "COMMA", "BLANKID",
  "ASSIGN", "STAR", "DIV", "MINUS", "PLUS", "EQ", "GE", "GT", "LBRACE",
  "LE", "LPAR", "LSQ", "LT", "MOD", "NE", "NOT", "AND", "OR", "RBRACE",
  "RPAR", "RSQ", "PACKAGE", "RETURN", "ELSE", "FOR", "IF", "VAR", "INT",
  "FLOAT32", "BOOL", "STRING", "PRINT", "PARSEINT", "FUNC", "CMDARGS",
  "RESERVED", "IDENTIFIER", "NATURAL", "DECIMAL", "STRLIT", "UPLUS",
  "UMINUS", "IFELSE", "$accept", "program", "declarations",
  "vardeclaration", "varspec", "varspec2", "type", "funcdeclaration",
  "parameters", "parameters2", "funcbody", "varsandstatements",
  "statement", "statement2", "parseargs", "funcinvocation",
  "funcinvocation2", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    52,    52,    53,    54,
      54,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      58,    58,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     5,     3,     3,
       0,     1,     1,     1,     1,     7,     6,     6,     5,     3,
       4,     0,     3,     2,     3,     3,     0,     3,     3,     9,
       5,     5,     4,     2,     1,     1,     1,     4,     4,     1,
       3,     0,    11,     8,     5,     3,     4,     3,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     1,     1,     1,     1,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     5,     0,     0,     2,     0,
       0,     0,    10,     6,     0,     5,     5,     0,     0,     0,
       0,     3,     4,     0,    10,    11,    12,    13,    14,     8,
       0,     0,     0,     7,     9,    26,     0,    18,    21,     0,
       0,    16,     0,    19,     0,    17,    39,    23,    41,    22,
      34,     0,     0,     0,     0,     0,     0,    36,    35,     0,
      15,     0,     0,     0,     0,     0,    67,    65,    66,    68,
      33,    41,     0,     0,     0,     0,     0,     0,    24,    25,
      21,    28,     0,    63,    64,     0,     0,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    41,     0,     0,     0,    27,     0,    45,
      48,    20,    40,    70,    69,    59,    60,    58,    57,    53,
      56,    52,    55,    51,    61,    54,    50,    49,    32,     0,
       0,    38,    37,     0,    46,     0,     0,    31,    30,     0,
      48,    44,     0,     0,    47,    41,     0,     0,     0,    43,
       0,    29,     0,     0,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    13,    19,    29,    10,    32,    43,
      37,    40,    82,    61,    57,    69,   136,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
      -8,   -13,    31,    30,   -69,    -7,   -12,    -6,   -69,    49,
      54,    11,    60,   -69,    51,    -7,    -7,    62,    28,    47,
     -20,   -69,   -69,    66,    60,   -69,   -69,   -69,   -69,   -69,
     152,    47,    73,   -69,   -69,   -69,    64,   -69,    72,   152,
      85,   -69,    45,   -69,    64,   -69,   -69,   -69,   -69,   -69,
      63,   192,    63,    86,    52,   101,   107,   -69,   -69,    47,
     -69,   100,    63,    63,    53,    63,    87,   -69,   -69,   -69,
     322,   -69,   288,   305,   130,   106,    63,    50,   -69,   -69,
      72,   -69,   109,    -1,    -1,    93,   250,   355,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,   119,   -69,   -69,    94,   269,   115,   322,    98,   -69,
     207,   -69,   -69,   -69,   -69,   -69,   -69,    -1,    -1,   369,
     369,   369,   369,   369,   -69,   369,   355,   339,   -69,   134,
     153,   -69,   -69,    88,   -69,    63,   104,   -69,    96,   116,
     207,   -69,   120,    15,   -69,   -69,   111,   121,   168,   -69,
      63,   -69,   230,   127,   -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,    -5,   105,   133,   117,   -22,   -69,   -69,    75,
     -16,   -69,   113,   -68,   -69,   -40,    17,   -50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      58,    72,    73,   101,    11,    30,    88,    89,    36,    38,
      21,    22,    83,    84,    86,    87,   146,    44,    97,     1,
      41,    58,    31,    45,   105,     6,   107,   110,    60,     3,
      12,     4,     7,     5,   129,   130,    14,    80,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   108,    15,    12,    85,   147,    75,    16,    76,    62,
      63,    58,    62,    63,    18,    23,    64,    20,    77,    64,
      24,    65,    62,    63,    65,   109,    42,   148,    35,    64,
      25,    26,    27,    28,    65,   140,    46,    59,    47,    58,
      58,    33,    66,    67,    68,    66,    67,    68,    39,    48,
     152,    46,    74,    77,    78,    66,    67,    68,    58,    49,
      79,   106,   112,    50,    48,    51,    52,     6,   113,   131,
      46,   133,    53,   134,    81,   142,   139,    54,    50,   141,
      51,    52,   143,    48,   145,    46,   149,    53,   150,    62,
      63,    34,    54,   128,    17,    55,    64,    50,    48,    51,
      52,    65,   154,    56,    46,   111,    53,   144,   137,     0,
       0,    54,    50,     0,    51,    52,    35,    48,     0,    46,
       0,    53,    66,    67,    68,   104,    54,   138,     0,     0,
       0,    50,    48,    51,    52,    25,    26,    27,    28,     0,
      53,     0,   151,     0,     0,    54,    50,     0,    51,    52,
       0,    62,    63,     0,     0,    53,    71,     0,    64,     0,
      54,   135,     0,    65,    88,    89,    90,    91,    92,    93,
      94,     0,    95,     0,     0,    96,    97,    98,     0,    99,
     100,     0,     0,     0,    66,    67,    68,    88,    89,    90,
      91,    92,    93,    94,     0,    95,     0,     0,    96,    97,
      98,     0,    99,   100,     0,     0,   153,    88,    89,    90,
      91,    92,    93,    94,     0,    95,     0,     0,    96,    97,
      98,     0,    99,   100,     0,   114,    88,    89,    90,    91,
      92,    93,    94,     0,    95,     0,     0,    96,    97,    98,
       0,    99,   100,     0,   132,    88,    89,    90,    91,    92,
      93,    94,   102,    95,     0,     0,    96,    97,    98,     0,
      99,   100,    88,    89,    90,    91,    92,    93,    94,   103,
      95,     0,     0,    96,    97,    98,     0,    99,   100,    88,
      89,    90,    91,    92,    93,    94,     0,    95,     0,     0,
      96,    97,    98,     0,    99,   100,    88,    89,    90,    91,
      92,    93,    94,     0,    95,     0,     0,    96,    97,    98,
       0,    99,    88,    89,    90,    91,    92,    93,    94,     0,
      95,     0,     0,    96,    97,    98,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,    97
};

static const yytype_int16 yycheck[] =
{
      40,    51,    52,    71,    16,    25,     7,     8,    30,    31,
      15,    16,    62,    63,    64,    65,     1,    39,    19,    27,
      36,    61,    42,    39,    74,    32,    76,    77,    44,    42,
      42,     0,    39,     3,   102,   103,    42,    59,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     1,     3,    42,     1,    40,     4,     3,     6,     9,
      10,   101,     9,    10,     4,     3,    16,    16,    16,    16,
      42,    21,     9,    10,    21,    25,     4,   145,    14,    16,
      33,    34,    35,    36,    21,   135,     1,    42,     3,   129,
     130,    25,    42,    43,    44,    42,    43,    44,    25,    14,
     150,     1,    16,    16,     3,    42,    43,    44,   148,    24,
       3,     5,     3,    28,    14,    30,    31,    32,    25,    25,
       1,     6,    37,    25,    24,    29,    38,    42,    28,    25,
      30,    31,    16,    14,    14,     1,    25,    37,    17,     9,
      10,    24,    42,    24,    11,    40,    16,    28,    14,    30,
      31,    21,    25,    40,     1,    80,    37,   140,    24,    -1,
      -1,    42,    28,    -1,    30,    31,    14,    14,    -1,     1,
      -1,    37,    42,    43,    44,    45,    42,    24,    -1,    -1,
      -1,    28,    14,    30,    31,    33,    34,    35,    36,    -1,
      37,    -1,    24,    -1,    -1,    42,    28,    -1,    30,    31,
      -1,     9,    10,    -1,    -1,    37,    14,    -1,    16,    -1,
      42,     4,    -1,    21,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    -1,    22,
      23,    -1,    -1,    -1,    42,    43,    44,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    -1,    -1,    26,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      20,    -1,    22,    23,    -1,    25,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    -1,    18,    19,    20,
      -1,    22,    23,    -1,    25,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    18,    19,    20,    -1,
      22,    23,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    -1,    22,    23,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    -1,    22,    23,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    -1,    18,    19,    20,
      -1,    22,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    -1,    -1,    18,    19,    20,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    50,    42,     0,     3,    32,    39,    51,    52,
      56,    16,    42,    53,    42,     3,     3,    53,     4,    54,
      16,    51,    51,     3,    42,    33,    34,    35,    36,    55,
      25,    42,    57,    25,    54,    14,    55,    59,    55,    25,
      60,    59,     4,    58,    55,    59,     1,     3,    14,    24,
      28,    30,    31,    37,    42,    52,    61,    63,    64,    42,
      59,    62,     9,    10,    16,    21,    42,    43,    44,    64,
      66,    14,    66,    66,    16,     4,     6,    16,     3,     3,
      55,    24,    61,    66,    66,     1,    66,    66,     7,     8,
       9,    10,    11,    12,    13,    15,    18,    19,    20,    22,
      23,    62,    14,    14,    45,    66,     5,    66,     1,    25,
      66,    58,     3,    25,    25,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    24,    62,
      62,    25,    25,     6,    25,     4,    65,    24,    24,    38,
      66,    25,    29,    16,    65,    14,     1,    40,    62,    25,
      17,    24,    66,    26,    25
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 44 "gocompiler.y"
    {(yyval.node)=program=newnode(Program,NULL);
                                                                    addchild((yyval.node),(yyvsp[(4) - (4)].node));}
    break;

  case 3:
#line 49 "gocompiler.y"
    {(yyval.node) = (yyvsp[(1) - (3)].node);
                                                                    if((yyvsp[(3) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(3) - (3)].node));}}
    break;

  case 4:
#line 51 "gocompiler.y"
    {(yyval.node) = (yyvsp[(1) - (3)].node);
                                                                    if((yyvsp[(3) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(3) - (3)].node));}}
    break;

  case 5:
#line 53 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 6:
#line 57 "gocompiler.y"
    {(yyval.node)=(yyvsp[(2) - (2)].node);}
    break;

  case 7:
#line 58 "gocompiler.y"
    {(yyval.node)=(yyvsp[(3) - (5)].node);}
    break;

  case 8:
#line 61 "gocompiler.y"
    {(yyval.node)=newnode(VarDecl,NULL);
                                                                    addchild((yyval.node),(yyvsp[(3) - (3)].node));
                                                                    addchild((yyval.node),newnode(Identifier,(yyvsp[(1) - (3)].lexeme)));
                                                                    if((yyvsp[(2) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(2) - (3)].node));}}
    break;

  case 9:
#line 67 "gocompiler.y"
    {(yyval.node)=newnode(VarDecl,NULL);
                                                                    addchild((yyval.node),newnode(Identifier,(yyvsp[(2) - (3)].lexeme)));
                                                                    if((yyvsp[(3) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(3) - (3)].node));}}
    break;

  case 10:
#line 70 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 11:
#line 73 "gocompiler.y"
    {(yyval.node)=newnode(Int,NULL);}
    break;

  case 12:
#line 74 "gocompiler.y"
    {(yyval.node)=newnode(Float32,NULL);}
    break;

  case 13:
#line 75 "gocompiler.y"
    {(yyval.node)=newnode(Bool,NULL);}
    break;

  case 14:
#line 76 "gocompiler.y"
    {(yyval.node)=newnode(String,NULL);}
    break;

  case 15:
#line 79 "gocompiler.y"
    {(yyval.node)=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, (yyvsp[(2) - (7)].lexeme)));
                                                                                                                    addchild(funcHeader,(yyvsp[(6) - (7)].node));
                                                                                                                struct node *funcParams = newnode(FuncParams, NULL);
                                                                                                                    if ((yyvsp[(4) - (7)].node)!=NULL){addchild(funcParams,(yyvsp[(4) - (7)].node));}
                                                                                                                addchild(funcHeader,funcParams);
                                                                                                                addchild((yyval.node),funcHeader);
                                                                                                                addchild((yyval.node),(yyvsp[(7) - (7)].node));
                                                                                                            }
    break;

  case 16:
#line 89 "gocompiler.y"
    {(yyval.node)=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, (yyvsp[(2) - (6)].lexeme)));
                                                                                                                    addchild(funcHeader,(yyvsp[(5) - (6)].node));
                                                                                                                addchild((yyval.node),funcHeader);
                                                                                                                addchild((yyval.node),(yyvsp[(6) - (6)].node));
                                                                                                            }
    break;

  case 17:
#line 96 "gocompiler.y"
    {(yyval.node)=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, (yyvsp[(2) - (6)].lexeme)));
                                                                                                                struct node *funcParams = newnode(FuncParams, NULL);
                                                                                                                    if ((yyvsp[(4) - (6)].node)!=NULL){addchild(funcParams,(yyvsp[(4) - (6)].node));}
                                                                                                                addchild(funcHeader,funcParams);
                                                                                                                addchild((yyval.node),funcHeader);
                                                                                                                addchild((yyval.node),(yyvsp[(6) - (6)].node));
                                                                                                            }
    break;

  case 18:
#line 105 "gocompiler.y"
    {(yyval.node)=newnode(FuncDecl,NULL);
                                                                                                                struct node *funcHeader = newnode (FuncHeader,NULL);
                                                                                                                    addchild(funcHeader,newnode(Identifier, (yyvsp[(2) - (5)].lexeme)));
                                                                                                                addchild((yyval.node),funcHeader);
                                                                                                                addchild((yyval.node),(yyvsp[(5) - (5)].node));
                                                                                                            }
    break;

  case 19:
#line 114 "gocompiler.y"
    {(yyval.node)=newnode(ParamDecl,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(2) - (3)].node));
                                                                                    addchild((yyval.node),newnode(Identifier,(yyvsp[(1) - (3)].lexeme)));
                                                                                    if((yyvsp[(3) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(3) - (3)].node));}}
    break;

  case 20:
#line 120 "gocompiler.y"
    {(yyval.node)=newnode(ParamDecl,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(3) - (4)].node));
                                                                                    addchild((yyval.node),newnode(Identifier,(yyvsp[(2) - (4)].lexeme)));
                                                                                    if((yyvsp[(4) - (4)].node)!=NULL){addchild((yyval.node),(yyvsp[(4) - (4)].node));}}
    break;

  case 21:
#line 124 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 22:
#line 127 "gocompiler.y"
    {(yyval.node)=newnode(FuncBody,NULL);
                                                                                    if((yyvsp[(2) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(2) - (3)].node));}}
    break;

  case 23:
#line 132 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);}
    break;

  case 24:
#line 133 "gocompiler.y"
    {
                                                                                    if((yyvsp[(1) - (3)].node)!=NULL){
                                                                                        addchild((yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].node));
                                                                                        (yyval.node)=(yyvsp[(1) - (3)].node);
                                                                                    }else{
                                                                                        (yyval.node)=(yyvsp[(2) - (3)].node);
                                                                                    }
                                                                                }
    break;

  case 25:
#line 141 "gocompiler.y"
    {
                                                                                    if((yyvsp[(1) - (3)].node)!=NULL){
                                                                                        struct node_list *atual = (yyvsp[(1) - (3)].node)->children;
                                                                                        while (atual->next != NULL) {
                                                                                            atual = atual->next;
                                                                                        }
                                                                                        addchild(atual->node, (yyvsp[(2) - (3)].node));
                                                                                    }else{
                                                                                        (yyval.node)=(yyvsp[(2) - (3)].node);
                                                                                    }
                                                                                }
    break;

  case 26:
#line 152 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 27:
#line 156 "gocompiler.y"
    {(yyval.node)=newnode(Assign,NULL);
                                                                                    addchild((yyval.node),newnode(Identifier,(yyvsp[(1) - (3)].lexeme)));
                                                                                    addchild((yyval.node),(yyvsp[(3) - (3)].node));}
    break;

  case 28:
#line 159 "gocompiler.y"
    {
                                                                                    if((yyvsp[(2) - (3)].node)!=NULL){
                                                                                        if (countchildren((yyvsp[(2) - (3)].node)) > 1){
                                                                                            (yyval.node)=newnode(Block,NULL);
                                                                                            addchild((yyval.node),(yyvsp[(2) - (3)].node));
                                                                                        }else{
                                                                                            (yyval.node)=(yyvsp[(2) - (3)].node);
                                                                                        }
                                                                                    }else{
                                                                                        (yyval.node)=NULL;
                                                                                    }
                                                                                }
    break;

  case 29:
#line 171 "gocompiler.y"
    {
                                                                                    (yyval.node)=newnode(If,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(2) - (9)].node));
                                                                                    addchild((yyval.node), newnode(Block, NULL));
                                                                                    if((yyvsp[(4) - (9)].node)!=NULL){addchild((yyval.node)->children->next->node,(yyvsp[(4) - (9)].node));} //$$->children->next->node --> filho de block
                                                                                    addchild((yyval.node), newnode(Block, NULL));
                                                                                    if((yyvsp[(8) - (9)].node)!=NULL){addchild((yyval.node)->children->next->next->node,(yyvsp[(8) - (9)].node));}//$$->children->next->next->node --> filho do segundo block
                                                                                }
    break;

  case 30:
#line 179 "gocompiler.y"
    {
                                                                                    (yyval.node)=newnode(If,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(2) - (5)].node));
                                                                                    addchild((yyval.node),newnode(Block,NULL));
                                                                                    if((yyvsp[(4) - (5)].node)!=NULL){addchild((yyval.node)->children->next->node,(yyvsp[(4) - (5)].node));}
                                                                                }
    break;

  case 31:
#line 185 "gocompiler.y"
    {(yyval.node)=newnode(For,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(2) - (5)].node));
                                                                                    addchild((yyval.node),newnode(Block,NULL));
                                                                                    if((yyvsp[(4) - (5)].node)!=NULL){addchild((yyval.node)->children->next->node,(yyvsp[(4) - (5)].node));}
                                                                                }
    break;

  case 32:
#line 191 "gocompiler.y"
    {(yyval.node)=newnode(For,NULL);
                                                                                    addchild((yyval.node),newnode(Block,NULL));
                                                                                    if((yyvsp[(3) - (4)].node)!=NULL){addchild((yyval.node)->children->node,(yyvsp[(3) - (4)].node));}
                                                                                }
    break;

  case 33:
#line 195 "gocompiler.y"
    {(yyval.node)=newnode(Return,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(2) - (2)].node));}
    break;

  case 34:
#line 198 "gocompiler.y"
    {(yyval.node)=newnode(Return,NULL);}
    break;

  case 35:
#line 200 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 36:
#line 201 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 37:
#line 202 "gocompiler.y"
    {(yyval.node)=newnode(Print,NULL);
                                                                                    addchild((yyval.node),(yyvsp[(3) - (4)].node));
                                                                                }
    break;

  case 38:
#line 205 "gocompiler.y"
    {(yyval.node)=newnode(Print,NULL);
                                                                                    addchild((yyval.node),newnode(StrLit,(yyvsp[(3) - (4)].lexeme)));
                                                                                }
    break;

  case 39:
#line 208 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 40:
#line 210 "gocompiler.y"
    {(yyval.node)=(yyvsp[(1) - (3)].node);
                                                                                    addchild((yyval.node),(yyvsp[(2) - (3)].node));}
    break;

  case 41:
#line 212 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 42:
#line 219 "gocompiler.y"
    {(yyval.node)=newnode(ParseArgs,NULL);
                                                                                            addchild((yyval.node),newnode(Identifier,(yyvsp[(1) - (11)].lexeme)));
                                                                                            addchild((yyval.node),(yyvsp[(9) - (11)].node));}
    break;

  case 43:
#line 222 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 44:
#line 225 "gocompiler.y"
    {(yyval.node)=newnode(Call,NULL);
                                                                                            addchild((yyval.node),newnode(Identifier,(yyvsp[(1) - (5)].lexeme)));
                                                                                            addchild((yyval.node),(yyvsp[(3) - (5)].node));
                                                                                            if((yyvsp[(4) - (5)].node)!=NULL){addchild((yyval.node),(yyvsp[(4) - (5)].node));}}
    break;

  case 45:
#line 229 "gocompiler.y"
    {(yyval.node)=newnode(Call,NULL);
                                                                                            addchild((yyval.node),newnode(Identifier,(yyvsp[(1) - (3)].lexeme)));}
    break;

  case 46:
#line 231 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 47:
#line 234 "gocompiler.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);
                                                                                            if((yyvsp[(3) - (3)].node)!=NULL){addchild((yyval.node),(yyvsp[(3) - (3)].node));}}
    break;

  case 48:
#line 236 "gocompiler.y"
    {(yyval.node)=NULL;}
    break;

  case 49:
#line 239 "gocompiler.y"
    {(yyval.node)=newnode(Or,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 50:
#line 242 "gocompiler.y"
    {(yyval.node)=newnode(And,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 51:
#line 245 "gocompiler.y"
    {(yyval.node)=newnode(Lt,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 52:
#line 248 "gocompiler.y"
    {(yyval.node)=newnode(Gt,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 53:
#line 251 "gocompiler.y"
    {(yyval.node)=newnode(Eq,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 54:
#line 254 "gocompiler.y"
    {(yyval.node)=newnode(Ne,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 55:
#line 257 "gocompiler.y"
    {(yyval.node)=newnode(Le,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 56:
#line 260 "gocompiler.y"
    {(yyval.node)=newnode(Ge,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 57:
#line 263 "gocompiler.y"
    {(yyval.node)=newnode(Add,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 58:
#line 266 "gocompiler.y"
    {(yyval.node)=newnode(Sub,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 59:
#line 269 "gocompiler.y"
    {(yyval.node)=newnode(Mul,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 60:
#line 272 "gocompiler.y"
    {(yyval.node)=newnode(Div,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 61:
#line 275 "gocompiler.y"
    {(yyval.node)=newnode(Mod,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(1) - (3)].node));
                                                                                            addchild((yyval.node), (yyvsp[(3) - (3)].node));}
    break;

  case 62:
#line 278 "gocompiler.y"
    {(yyval.node)=newnode(Not,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(2) - (2)].node));}
    break;

  case 63:
#line 280 "gocompiler.y"
    {(yyval.node)=newnode(Minus,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(2) - (2)].node));}
    break;

  case 64:
#line 282 "gocompiler.y"
    {(yyval.node)=newnode(Plus,NULL);
                                                                                            addchild((yyval.node), (yyvsp[(2) - (2)].node));}
    break;

  case 65:
#line 284 "gocompiler.y"
    {(yyval.node) = newnode(Natural, (yyvsp[(1) - (1)].lexeme));}
    break;

  case 66:
#line 285 "gocompiler.y"
    {(yyval.node) = newnode(Decimal, (yyvsp[(1) - (1)].lexeme));}
    break;

  case 67:
#line 286 "gocompiler.y"
    {(yyval.node) = newnode(Identifier, (yyvsp[(1) - (1)].lexeme));}
    break;

  case 68:
#line 287 "gocompiler.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 69:
#line 288 "gocompiler.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node);}
    break;

  case 70:
#line 289 "gocompiler.y"
    {(yyval.node) = NULL;}
    break;


/* Line 1267 of yacc.c.  */
#line 2076 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 295 "gocompiler.y"


/* START subroutines section */

// all needed functions are collected in the .l and ast.* files

