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
     ID = 258,
     NVAR = 259,
     CINT = 260,
     CFLOAT = 261,
     CSTR = 262,
     CBOOL = 263,
     PROG = 264,
     VAR = 265,
     NEW = 266,
     PRINT = 267,
     FUNC = 268,
     MAIN = 269,
     READ = 270,
     INT = 271,
     FLOAT = 272,
     STR = 273,
     BOOL = 274,
     LIST = 275,
     IF = 276,
     ELSE = 277,
     FOR = 278,
     PARA = 279,
     PARC = 280,
     COMA = 281,
     IGUAL = 282,
     LLAVEA = 283,
     LLAVEC = 284,
     PTCM = 285,
     DOSP = 286,
     MAYOR = 287,
     MENOR = 288,
     DIFE = 289,
     MAS = 290,
     MENOS = 291,
     ASTE = 292,
     SLASH = 293,
     AND = 294,
     OR = 295,
     COMILLA = 296
   };
#endif
/* Tokens.  */
#define ID 258
#define NVAR 259
#define CINT 260
#define CFLOAT 261
#define CSTR 262
#define CBOOL 263
#define PROG 264
#define VAR 265
#define NEW 266
#define PRINT 267
#define FUNC 268
#define MAIN 269
#define READ 270
#define INT 271
#define FLOAT 272
#define STR 273
#define BOOL 274
#define LIST 275
#define IF 276
#define ELSE 277
#define FOR 278
#define PARA 279
#define PARC 280
#define COMA 281
#define IGUAL 282
#define LLAVEA 283
#define LLAVEC 284
#define PTCM 285
#define DOSP 286
#define MAYOR 287
#define MENOR 288
#define DIFE 289
#define MAS 290
#define MENOS 291
#define ASTE 292
#define SLASH 293
#define AND 294
#define OR 295
#define COMILLA 296




/* Copy the first part of user declarations.  */
#line 1 "sintactico.y"


/**************************************************************** 
                     * Declaraciones en C *
 ****************************************************************/
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
  #include "stack.c"
  #include "tvariables.c"

	extern int yylex(void);
	extern char *yytext;
	extern int linea;
  extern FILE *yyin;
  void yyerror(char *s);

  void unoExpInt(char *nombre);
  void unoExpFloat(char *nombre);
  void unoExpStr(char *nombre);
  void unoExpBool(char *nombre);
  void dosExp(int operando);
  void tresExp(int operando);
  void cuatroExp();

  void ochoExp();
	int memoriaInt();
  int operando;
  int gltc;
  int eragltc;
  int estipo;
  char *nomConsInt;
  char *nomConsFloat;



  int esSumaResta;

  char *nombrefuncion;
  TproNodoPtr startProList = NULL;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 47 "sintactico.y"
{
  float real;
  int numero;
  char* texto;
}
/* Line 193 of yacc.c.  */
#line 227 "sintactico.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "sintactico.tab.c"

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
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     6,    17,    20,    22,    25,
      27,    33,    36,    38,    42,    44,    47,    51,    53,    55,
      57,    59,    61,    63,    65,    68,    72,    74,    79,    81,
      83,    86,    88,    90,    92,    94,    96,    98,   100,   102,
     103,   114,   115,   126,   130,   131,   133,   134,   137,   138,
     148,   151,   153,   158,   160,   165,   167,   169,   171,   173,
     179,   182,   187,   190,   192,   198,   199,   208,   211,   214,
     216,   222,   225,   227,   230,   232,   233,   238,   240,   242,
     244,   248,   250,   254,   256,   258,   260,   264,   266,   268,
     272,   273,   276,   278,   280,   282,   286,   288,   290,   292,
     294,   299,   303,   305,   307,   309,   311,   315
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    -1,    -1,     9,     3,    28,    44,
      45,    47,    46,    61,    48,    29,    -1,    49,    47,    -1,
     100,    -1,    63,    48,    -1,   100,    -1,    53,     4,    51,
      50,    30,    -1,    27,    52,    -1,   100,    -1,    26,     4,
      51,    -1,   100,    -1,    11,    54,    -1,    41,     7,    41,
      -1,     5,    -1,     6,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    55,    -1,    20,    57,    -1,    26,    99,
      56,    -1,   100,    -1,    24,    99,    56,    25,    -1,   100,
      -1,    59,    -1,    60,    59,    -1,   100,    -1,    68,    -1,
      78,    -1,    77,    -1,    74,    -1,    72,    -1,    82,    -1,
      49,    -1,    -1,    13,    53,    14,    62,    24,    65,    25,
      28,    66,    29,    -1,    -1,    13,    53,     3,    64,    24,
      65,    25,    28,    66,    29,    -1,    53,     3,    67,    -1,
      -1,    58,    -1,    -1,    26,    65,    -1,    -1,    69,    21,
      24,    70,    25,    28,    58,    29,    71,    -1,    80,    70,
      -1,   100,    -1,    22,    28,    58,    29,    -1,   100,    -1,
       4,    27,    73,    30,    -1,    97,    -1,    80,    -1,     4,
      -1,    99,    -1,    12,    24,    75,    25,    30,    -1,    80,
      76,    -1,    41,     7,    41,    76,    -1,    26,    75,    -1,
     100,    -1,    15,    24,    53,    25,    30,    -1,    -1,    79,
      23,    24,    80,    25,    28,    58,    29,    -1,    85,    81,
      -1,    96,    85,    -1,   100,    -1,     3,    24,    83,    25,
      30,    -1,    85,    84,    -1,   100,    -1,    26,    83,    -1,
     100,    -1,    -1,    89,    86,    87,    88,    -1,    35,    -1,
      36,    -1,   100,    -1,    89,    87,    88,    -1,   100,    -1,
      92,    90,    91,    -1,    37,    -1,    38,    -1,   100,    -1,
      92,    90,    91,    -1,   100,    -1,    93,    -1,    24,    85,
      25,    -1,    -1,    94,    95,    -1,     4,    -1,     5,    -1,
       6,    -1,    41,     7,    41,    -1,    32,    -1,    33,    -1,
      34,    -1,    27,    -1,    24,    99,    98,    25,    -1,    26,
      99,    98,    -1,   100,    -1,     3,    -1,     5,    -1,     6,
      -1,    41,     7,    41,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   103,   103,   103,   104,   105,   106,   107,
     110,   128,   129,   130,   148,   150,   151,   152,   153,   156,
     157,   158,   159,   162,   165,   166,   167,   168,   169,   172,
     173,   174,   177,   178,   179,   180,   181,   182,   183,   186,
     186,   189,   189,   190,   191,   192,   193,   194,   197,   197,
     198,   199,   200,   201,   204,   205,   206,   207,   208,   211,
     212,   213,   214,   215,   218,   221,   221,   224,   225,   226,
     229,   230,   231,   232,   233,   236,   236,   238,   239,   240,
     241,   242,   244,   245,   246,   247,   248,   249,   251,   252,
     253,   253,   254,   255,   256,   257,   261,   262,   263,   264,
     271,   272,   273,   276,   277,   278,   279,   282
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NVAR", "CINT", "CFLOAT", "CSTR",
  "CBOOL", "PROG", "VAR", "NEW", "PRINT", "FUNC", "MAIN", "READ", "INT",
  "FLOAT", "STR", "BOOL", "LIST", "IF", "ELSE", "FOR", "PARA", "PARC",
  "COMA", "IGUAL", "LLAVEA", "LLAVEC", "PTCM", "DOSP", "MAYOR", "MENOR",
  "DIFE", "MAS", "MENOS", "ASTE", "SLASH", "AND", "OR", "COMILLA",
  "$accept", "programa", "@1", "@2", "@3", "a", "b", "vars", "c", "cc",
  "d", "tipo", "estr", "list", "e", "ee", "bloque", "f", "estatuto",
  "main", "@4", "funcion", "@5", "h", "i", "j", "condicion", "@6", "k",
  "l", "asignacion", "m", "escritura", "n", "o", "lectura", "ciclo", "@7",
  "expresion", "p", "llamada", "q", "r", "exp", "@8", "s", "t", "T", "u",
  "v", "F", "w", "@9", "z", "easignacion", "clist", "aa", "cons", "vacio", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    44,    45,    46,    43,    47,    47,    48,    48,
      49,    50,    50,    51,    51,    52,    52,    52,    52,    53,
      53,    53,    53,    54,    55,    56,    56,    57,    57,    58,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    62,
      61,    64,    63,    65,    65,    66,    66,    67,    69,    68,
      70,    70,    71,    71,    72,    73,    73,    73,    73,    74,
      75,    75,    76,    76,    77,    79,    78,    80,    81,    81,
      82,    83,    83,    84,    84,    86,    85,    87,    87,    87,
      88,    88,    89,    90,    90,    90,    91,    91,    92,    93,
      94,    93,    95,    95,    95,    95,    96,    96,    96,    96,
      97,    98,    98,    99,    99,    99,    99,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,    10,     2,     1,     2,     1,
       5,     2,     1,     3,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     4,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
      10,     0,    10,     3,     0,     1,     0,     2,     0,     9,
       2,     1,     4,     1,     4,     1,     1,     1,     1,     5,
       2,     4,     2,     1,     5,     0,     8,     2,     2,     1,
       5,     2,     1,     2,     1,     0,     4,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     3,
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     3,     1,     1,     1,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     3,   107,    19,    20,
      21,    22,     4,   107,     0,     7,     0,     6,   107,     0,
     107,     0,   107,    14,     0,     0,     0,   107,     9,   107,
       0,     0,    12,    39,     0,     5,     8,    13,    17,    18,
       0,     0,    11,    10,     0,    41,   107,    15,    23,     0,
      44,     0,     0,    24,    28,    16,     0,     0,    44,   103,
     104,   105,     0,   107,     0,     0,     0,     0,     0,     0,
      26,    44,    43,    46,     0,   106,   107,    27,    47,     0,
       0,     0,     0,    38,    45,    29,    48,     0,    32,     0,
      36,    35,    34,    33,     0,    37,    31,    46,    25,    90,
       0,    90,     0,    30,    40,     0,     0,     0,    90,     0,
     107,    75,   107,    88,     0,    72,    57,    90,     0,    56,
     107,    55,    58,     0,     0,   107,     0,    90,    90,    42,
       0,     0,    90,    71,    74,   107,    83,    84,   107,    85,
      92,    93,    94,     0,    91,   107,    54,    99,    96,    97,
      98,    67,    90,    69,     0,     0,    90,    60,    63,     0,
       0,    90,    51,     0,    89,    70,    73,    77,    78,   107,
      79,    82,   107,    87,     0,     0,     0,   102,    68,   107,
      59,    62,    64,     0,    50,     0,    76,   107,    81,   107,
      95,   107,   100,    61,    48,    48,   107,    86,   101,     0,
       0,    80,   107,    66,     0,    49,    53,    48,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,    16,    12,    26,    83,    31,    22,
      42,    14,    47,    48,    69,    53,    84,    85,    86,    20,
      44,    27,    51,    57,    87,    72,    88,    89,   160,   205,
      90,   118,    91,   124,   157,    92,    93,    94,   125,   151,
      95,   109,   133,   120,   135,   169,   186,   111,   138,   171,
     112,   113,   114,   144,   152,   121,   176,    63,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
      -2,     7,    28,    12,  -166,  -166,  -166,    93,  -166,  -166,
    -166,  -166,  -166,    93,    17,  -166,    54,  -166,    31,    93,
      62,    68,    53,  -166,    73,    93,    60,    62,  -166,    31,
      59,    69,  -166,  -166,    88,  -166,  -166,  -166,  -166,  -166,
      82,    91,  -166,  -166,    80,  -166,    92,  -166,  -166,    65,
      93,    95,    38,  -166,  -166,  -166,   114,    98,    93,  -166,
    -166,  -166,   117,   100,   101,   104,   115,   102,    38,   119,
    -166,    93,  -166,   118,   120,  -166,   100,  -166,  -166,   105,
     122,   121,   123,  -166,  -166,  -166,    78,   113,  -166,   125,
    -166,  -166,  -166,  -166,   127,  -166,  -166,   118,  -166,    11,
      13,     8,    93,  -166,  -166,   128,   129,   126,   132,   133,
     131,  -166,    77,  -166,    47,  -166,  -166,    21,   130,  -166,
      44,  -166,  -166,   144,   134,   135,   138,    11,   132,  -166,
     139,   136,    11,  -166,  -166,    49,  -166,  -166,    42,  -166,
    -166,  -166,  -166,   160,  -166,   142,  -166,  -166,  -166,  -166,
    -166,  -166,   132,  -166,   137,   140,     8,  -166,  -166,   141,
     148,    11,  -166,   149,  -166,  -166,  -166,  -166,  -166,    42,
    -166,  -166,    77,  -166,   145,    38,   150,  -166,  -166,   135,
    -166,  -166,  -166,   151,  -166,   153,  -166,    49,  -166,    42,
    -166,   142,  -166,  -166,    78,    78,    42,  -166,  -166,   147,
     154,  -166,   155,  -166,   157,  -166,  -166,    78,   158,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,  -166,   156,   161,    61,  -166,   162,
    -166,   -16,  -166,  -166,   116,  -166,  -134,   107,  -166,  -166,
    -166,  -166,  -166,   -46,    97,  -166,  -166,  -166,    29,  -166,
    -166,  -166,  -166,    40,    18,  -166,  -166,  -166,   -98,  -166,
    -166,    66,  -166,   -94,  -166,    14,     3,  -165,    30,    15,
    -130,  -166,  -166,  -166,  -166,  -166,     9,   -67,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      15,    76,   119,    24,   187,   110,    15,     1,   172,    34,
       3,    23,    66,    28,   130,    32,    59,   116,    60,    61,
      28,    18,    23,   130,    59,    78,    60,    61,     4,   161,
     163,   187,   108,   122,    56,   108,  -107,   117,   110,    54,
       5,    59,    56,    60,    61,   108,   -90,   -90,   -90,   123,
     145,   140,   141,   142,    62,    56,    70,    21,   178,   172,
     199,   200,    62,   161,    38,    39,   108,    19,    13,    70,
      40,   147,    29,   208,    13,    25,   148,   149,   150,    62,
      30,    79,    80,   -90,   167,   168,   126,    33,   143,    35,
      81,    45,   115,    82,     8,     9,    10,    11,    49,    43,
      41,   -65,    46,   134,    50,   139,    55,  -107,   191,     8,
       9,    10,    11,   153,   136,   137,    52,    64,   158,    58,
     162,    79,    80,    65,    67,   115,    68,    71,   170,    99,
      81,   173,    73,    82,     8,     9,    10,    11,   177,   -48,
      74,   -65,   104,    75,    77,   101,   105,   102,    97,   100,
     106,   154,   127,   128,   162,   129,   108,   132,   131,   155,
     146,   156,   188,   159,   164,   139,   165,   174,   175,    17,
     180,   182,   158,   183,   185,   192,   202,   204,   179,   194,
     170,   195,   173,   203,   177,   207,   190,   209,    36,   188,
     184,    37,    98,   103,   107,   206,   181,   193,   166,   201,
     198,   196,   189,     0,   197
};

static const yytype_int16 yycheck[] =
{
       7,    68,   100,    19,   169,    99,    13,     9,   138,    25,
       3,    18,    58,    20,   108,    22,     3,     4,     5,     6,
      27,     4,    29,   117,     3,    71,     5,     6,     0,   127,
     128,   196,    24,   100,    50,    24,    25,    24,   132,    46,
      28,     3,    58,     5,     6,    24,     4,     5,     6,    41,
     117,     4,     5,     6,    41,    71,    63,    26,   152,   189,
     194,   195,    41,   161,     5,     6,    24,    13,     7,    76,
      11,    27,     4,   207,    13,    13,    32,    33,    34,    41,
      27,     3,     4,    41,    35,    36,   102,    14,    41,    29,
      12,     3,    99,    15,    16,    17,    18,    19,     7,    30,
      41,    23,    20,   110,    24,   112,    41,    29,   175,    16,
      17,    18,    19,   120,    37,    38,    24,     3,   125,    24,
     127,     3,     4,    25,     7,   132,    26,    26,   135,    24,
      12,   138,    28,    15,    16,    17,    18,    19,   145,    21,
      25,    23,    29,    41,    25,    24,    21,    24,    28,    27,
      23,     7,    24,    24,   161,    29,    24,    26,    25,    25,
      30,    26,   169,    25,    25,   172,    30,     7,    26,    13,
      30,    30,   179,    25,    25,    25,    29,    22,    41,    28,
     187,    28,   189,    29,   191,    28,    41,    29,    27,   196,
     161,    29,    76,    86,    97,   202,   156,   179,   132,   196,
     191,   187,   172,    -1,   189
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    43,     3,     0,    28,    44,    45,    16,    17,
      18,    19,    47,    49,    53,   100,    46,    47,     4,    13,
      61,    26,    51,   100,    53,    13,    48,    63,   100,     4,
      27,    50,   100,    14,    53,    29,    48,    51,     5,     6,
      11,    41,    52,    30,    62,     3,    20,    54,    55,     7,
      24,    64,    24,    57,   100,    41,    53,    65,    24,     3,
       5,     6,    41,    99,     3,    25,    65,     7,    26,    56,
     100,    26,    67,    28,    25,    41,    99,    25,    65,     3,
       4,    12,    15,    49,    58,    59,    60,    66,    68,    69,
      72,    74,    77,    78,    79,    82,   100,    28,    56,    24,
      27,    24,    24,    59,    29,    21,    23,    66,    24,    83,
      85,    89,    92,    93,    94,   100,     4,    24,    73,    80,
      85,    97,    99,    41,    75,    80,    53,    24,    24,    29,
      85,    25,    26,    84,   100,    86,    37,    38,    90,   100,
       4,     5,     6,    41,    95,    99,    30,    27,    32,    33,
      34,    81,    96,   100,     7,    25,    26,    76,   100,    25,
      70,    80,   100,    80,    25,    30,    83,    35,    36,    87,
     100,    91,    92,   100,     7,    26,    98,   100,    85,    41,
      30,    75,    30,    25,    70,    25,    88,    89,   100,    90,
      41,    99,    25,    76,    28,    28,    87,    91,    98,    58,
      58,    88,    29,    29,    22,    71,   100,    28,    58,    29
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
#line 103 "sintactico.y"
    {gltc=1;;}
    break;

  case 3:
#line 103 "sintactico.y"
    {insertPro(&startProList,"Global",5,1);;}
    break;

  case 4:
#line 103 "sintactico.y"
    {gltc=2;;}
    break;

  case 5:
#line 103 "sintactico.y"
    {printf("Programa hecho \n");;}
    break;

  case 10:
#line 110 "sintactico.y"
    {
  if (estipo==1){
    unoExpInt((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==2){
    unoExpFloat((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==3){
    unoExpStr((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==4){
    unoExpBool((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
;}
    break;

  case 13:
#line 130 "sintactico.y"
    {
  if (estipo==1){
    unoExpInt((yyvsp[(2) - (3)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==2){
    unoExpFloat((yyvsp[(2) - (3)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==3){
    unoExpStr((yyvsp[(2) - (3)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==4){
    unoExpBool((yyvsp[(2) - (3)].texto));
    //printf("%s\n",$2 );
  }
;}
    break;

  case 19:
#line 156 "sintactico.y"
    {estipo=1;;}
    break;

  case 20:
#line 157 "sintactico.y"
    {estipo=2;;}
    break;

  case 21:
#line 158 "sintactico.y"
    {estipo=3;;}
    break;

  case 22:
#line 159 "sintactico.y"
    {estipo=4;;}
    break;

  case 39:
#line 186 "sintactico.y"
    {insertPro(&startProList,"main",estipo,1);;}
    break;

  case 40:
#line 186 "sintactico.y"
    {/*printf("funcion \n");*/;}
    break;

  case 41:
#line 189 "sintactico.y"
    {insertPro(&startProList,(yyvsp[(3) - (3)].texto),estipo,1);;}
    break;

  case 42:
#line 189 "sintactico.y"
    {/*printf("funcion \n");*/;}
    break;

  case 48:
#line 197 "sintactico.y"
    {eragltc=gltc; gltc=3;;}
    break;

  case 49:
#line 197 "sintactico.y"
    {gltc=eragltc;}
    break;

  case 65:
#line 221 "sintactico.y"
    {eragltc=gltc; gltc=3;;}
    break;

  case 66:
#line 221 "sintactico.y"
    {gltc=eragltc;}
    break;

  case 75:
#line 236 "sintactico.y"
    {cuatroExp();;}
    break;

  case 77:
#line 238 "sintactico.y"
    {dosExp(1);;}
    break;

  case 78:
#line 239 "sintactico.y"
    {dosExp(2);;}
    break;

  case 83:
#line 245 "sintactico.y"
    {tresExp(3);;}
    break;

  case 84:
#line 246 "sintactico.y"
    {tresExp(4);;}
    break;

  case 90:
#line 253 "sintactico.y"
    {eragltc=gltc; gltc=4;;}
    break;

  case 91:
#line 253 "sintactico.y"
    {gltc=eragltc;;}
    break;

  case 93:
#line 255 "sintactico.y"
    {unoExpInt(" ");;}
    break;

  case 94:
#line 256 "sintactico.y"
    {unoExpFloat(" ");;}
    break;

  case 95:
#line 257 "sintactico.y"
    {unoExpStr(" ");;}
    break;

  case 96:
#line 261 "sintactico.y"
    {ochoExp(5);;}
    break;

  case 97:
#line 262 "sintactico.y"
    {ochoExp(6);;}
    break;

  case 98:
#line 263 "sintactico.y"
    {ochoExp(7);;}
    break;

  case 99:
#line 264 "sintactico.y"
    {ochoExp(8);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1811 "sintactico.tab.c"
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


#line 284 "sintactico.y"

/**************************************************************************
                      * Codigo C Adicional *
 **************************************************************************/
/**************************************************************************
                   *Generacion de codigo intermedio*
***************************************************************************/
/*******************globales********************/
int contEntGlo=0;
int contFlotGlo=1000;
int contStrGlo=2000;
int contBoolGlo=3000;
int contSaltosGlo=4000;
/*******************Locales********************/
int contEntLoc=5000;
int contFlotLoc=6000;
int contStrLoc=7000;
int contBoolLoc=8000;
int contSaltosLoc=9000;
/*******************Temporales*****************/
int contEntTmp=10000;
int contFlotTmp=11000;
int contStrTmp=12000;
int contBoolTmp=13000;
int contSaltosTmp=14000;
/*******************Constantes*****************/
int contEntCons=15000;
int contFlotCons=16000;
int contStrCons=17000;
int contBoolCons=18000;
int contSaltosCons=19000; 

void unoExpInt(char *nombre){
  //printf("%d\n",vEntera );
  if (gltc==1){
    push (&PilaO,contEntGlo);
    push(&PTipos,1);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contEntGlo);
    contEntGlo++;
  }
  if (gltc==2){
    push (&PilaO,contEntLoc);
    push(&PTipos,1);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contEntLoc);
    contEntLoc++;
  }
  if (gltc==3){
    push (&PilaO,contEntTmp);
    push(&PTipos,1);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contEntTmp);
    contEntTmp++;
  }
  if (gltc==4){
    push (&PilaO,contEntCons);
    push(&PTipos,1);
    contEntCons++;
  }
}
void unoExpFloat(char *nombre){
  //printf("%f\n",vFlotante );
  if (gltc==1){
    push(&PilaO,contFlotGlo);
    push(&PTipos,2);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contFlotGlo);
    contFlotGlo++;
  }
  if (gltc==2){
    push(&PilaO,contFlotLoc);
    push(&PTipos,2);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contFlotLoc);
    contFlotLoc++;
  }
  if (gltc==3){
    push(&PilaO,contFlotTmp);
    push(&PTipos,2);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contFlotTmp);
    contFlotTmp++;
  }
  if (gltc==4){
    push(&PilaO,contFlotCons);
    push(&PTipos,2);
    contFlotCons++;
  }
}
void unoExpStr(char *nombre){
  if (gltc==1){
    push (&PilaO, contStrGlo);
    push(&PTipos,3);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contStrGlo);
    contStrGlo++;
  }
  if (gltc==2){
    push (&PilaO, contStrLoc);
    push(&PTipos,3);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contStrLoc);
    contStrLoc++;
  }
  if (gltc==3){
    push (&PilaO, contStrTmp);
    push(&PTipos,3);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contStrTmp);
    contStrTmp++;
  }
  if (gltc==4){
    push (&PilaO, contStrCons);
    push(&PTipos,3);
    contStrCons++;
  }
}
void unoExpBool(char *nombre){
  if (gltc==1){
    push (&PilaO, contBoolGlo);
    push(&PTipos,4);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contBoolGlo);
    contBoolGlo++;
  }
    if (gltc==2){
    push (&PilaO, contBoolLoc);
    push(&PTipos,4);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contBoolLoc);
    contBoolLoc++;
  }
  if (gltc==3){
    push (&PilaO, contBoolTmp);
    push(&PTipos,4);
    insertVar(&startProList->headTvarPtr,nombre,estipo,contBoolTmp);
    contBoolTmp++;
  }
  if (gltc==4){
    push (&PilaO, contBoolCons);
    push(&PTipos,4);
    contBoolCons++;
  }
}
void dosExp(int operando){
  switch (operando){
    case 1:
      push(&POper, 1);
      break;
    case 2:
      push(&POper, 2);
      break;
  }
}
void tresExp(int operando){
  switch (operando){
    case 3:
      push(&POper, 3);
      break;
    case 4:
      push(&POper, 4);
      break;
  }
}

void cuatroExp(){
  StackNodePtr currentPtr;
  currentPtr = POper;
  if ( currentPtr == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumaResta = currentPtr->data;
    if ( esSumaResta == 1|| esSumaResta == 2){
      pop ( &PTipos );
      pop ( &PTipos );
      printf ("%d ", POper->data);
      pop(&POper);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      printf("%d ", PilaO->data);
      pop(&PilaO);
      push(&PTipos,1);
      push(&PilaO, contEntTmp);
      printf("%d\n", contEntTmp );
      contEntTmp++;
    }
  }
}

void ochoExp(eAsigna){
  switch (eAsigna){
    case 5:
      push(&POper, 5);
      break;
    case 6:
      push(&POper, 6);
      break;
    case 7:
      push(&POper, 7);
      break;
    case 8:
      push(&POper, 8);
      break;
  }
}
void yyerror(char *s)
{
  printf("Error sintactico %s \n",s);
}
/**************** main ****************/
int main(int argc,char **argv){
  PilaO = NULL;// points to stack top
  POper = NULL;
  PTipos = NULL;
  int value; // int input by user
  
  if (argc>1)
    yyin=fopen(argv[1],"rt");
  else
    //yyin=stdin;
    yyin=fopen("entrada.txt","rt");

  yyparse();
  
  printf("PilaO \n");
  printStack( PilaO );
  printf("POper \n");
  printStack( POper );
  printf("PTipos \n");
  printStack( PTipos );
  printf("Saltos \n");
  printStack( Saltos );
  



  
   /*insertPro(&startProList,"uno",1,1);
   insertVar(&startProList->headTvarPtr,"all",1,12);
   insertVar(&startProList->headTvarPtr,"ald",1,12);
   insertVar(&startProList->headTvarPtr,"alw",1,12);
   insertVar(&startProList->headTvarPtr,"allf",1,12);
   insertPro(&startProList,"dos",1,2);
   insertVar(&startProList->headTvarPtr,"alle",1,12);
   insertVar(&startProList->headTvarPtr,"all23",1,12);
   insertVar(&startProList->headTvarPtr,"all4",1,12);
   insertVar(&startProList->headTvarPtr,"all1",1,12);
   insertVar(&startProList->headTvarPtr,"all5",1,12);
   insertPro(&startProList,"tres",1,3);
   insertVar(&startProList->headTvarPtr,"all",1,12);
   */

   printTables( startProList );

  return 0;
}
/*****************************************************************/

