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
     WHILE = 278,
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
#define WHILE 278
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
//includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stack.c"
#include "tvariables.c"
#include "cuadruplos.c"
#include "semantica.c"
#include "tabcons.c"

//cosas de flex y bison
extern int yylex(void);
extern char *yytext;
extern int linea;
extern FILE *yyin;
void yyerror(char *s);
//prototipos
//Expreciones
void unoExpInt(char *nombre);
void unoExpIntCons(int valor);
void unoExpFloat(char *nombre);
void unoExpFloatCons(int valor);
void unoExpStr(char *nombre);
void unoExpStrCons(int valor);
void unoExpBool(char *nombre);
void unoExpBoolCons(int valor);
void dosExp(int operando);
void tresExp(int operando);
void cuatroExp();
void cincoExp();
void seisExp();
void sieteExp();
void ochoExp();
void nueveExp();
void diezExp(char *nombre);
//Estatuto IF ELSE
void cuadruplosComparaciones(int tipoComp);
void unoEstIf();
void dosEstIf();


//Estatuto WHILE
//
//globales
int memoriaInt();
int operando;
int gltc;
int eragltc;
int estipo;
char *nomConsInt;
char *nomConsFloat;
int esSumResMulDiv;
char *nombrefuncion;
//apuntadores estructuras
StackNodePtr apuntadorApOper;
TproNodoPtr startProList = NULL;
CuadruplosPtr  startCuadruplos =  NULL;
TabConsPtr startTabCons = NULL;


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
#line 69 "sintactico.y"
{
  float real;
  int numero;
  char* texto;
}
/* Line 193 of yacc.c.  */
#line 250 "sintactico.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 263 "sintactico.tab.c"

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
#define YYLAST   193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

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
     139,   146,   148,   150,   152,   153,   154,   165,   168,   170,
     171,   177,   179,   185,   188,   193,   196,   198,   204,   205,
     214,   217,   220,   222,   228,   231,   233,   236,   238,   242,
     244,   246,   248,   249,   254,   256,   260,   262,   264,   266,
     267,   272,   274,   276,   277,   282,   283,   286,   288,   290,
     292,   296,   299,   301,   303,   305,   307,   309,   311,   315
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    -1,    -1,     9,     3,    28,    44,
      45,    47,    46,    61,    48,    29,    -1,    49,    47,    -1,
     104,    -1,    63,    48,    -1,   104,    -1,    53,     4,    51,
      50,    30,    -1,    27,    52,    -1,   104,    -1,    26,     4,
      51,    -1,   104,    -1,    11,    54,    -1,    41,     7,    41,
      -1,     5,    -1,     6,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    55,    -1,    20,    57,    -1,    26,   103,
      56,    -1,   104,    -1,    24,   103,    56,    25,    -1,   104,
      -1,    59,    -1,    60,    59,    -1,   104,    -1,    72,    -1,
      82,    -1,    81,    -1,    78,    -1,    68,    -1,    86,    -1,
      49,    -1,    -1,    13,    53,    14,    62,    24,    65,    25,
      28,    66,    29,    -1,    -1,    13,    53,     3,    64,    24,
      65,    25,    28,    66,    29,    -1,    53,     3,    67,    -1,
      -1,    58,    -1,    -1,    26,    65,    -1,    -1,    -1,     4,
      69,    27,    70,    71,    30,    -1,    84,    -1,     4,    -1,
     103,    -1,    -1,    -1,    73,    21,    24,    75,    25,    74,
      28,    58,    29,    76,    -1,    84,    75,    -1,   104,    -1,
      -1,    22,    77,    28,    58,    29,    -1,   104,    -1,    12,
      24,    79,    25,    30,    -1,    84,    80,    -1,    41,     7,
      41,    80,    -1,    26,    79,    -1,   104,    -1,    15,    24,
      53,    25,    30,    -1,    -1,    83,    23,    24,    84,    25,
      28,    58,    29,    -1,    89,    85,    -1,   102,    89,    -1,
     104,    -1,     3,    24,    87,    25,    30,    -1,    89,    88,
      -1,   104,    -1,    26,    87,    -1,   104,    -1,    93,    90,
      91,    -1,    35,    -1,    36,    -1,   104,    -1,    -1,    93,
      92,    90,    91,    -1,   104,    -1,    97,    94,    95,    -1,
      37,    -1,    38,    -1,   104,    -1,    -1,    97,    96,    94,
      95,    -1,   104,    -1,    98,    -1,    -1,    24,    99,    89,
      25,    -1,    -1,   100,   101,    -1,     4,    -1,     5,    -1,
       6,    -1,    41,     7,    41,    -1,    27,    27,    -1,    32,
      -1,    33,    -1,    34,    -1,     3,    -1,     5,    -1,     6,
      -1,    41,     7,    41,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   123,   123,   123,   123,   123,   124,   125,   126,   127,
     130,   148,   149,   150,   168,   170,   171,   172,   173,   176,
     177,   178,   179,   182,   185,   186,   187,   188,   189,   192,
     193,   194,   197,   198,   199,   200,   201,   202,   203,   206,
     206,   209,   209,   210,   211,   212,   213,   214,   217,   217,
     217,   219,   220,   221,   224,   224,   224,   225,   226,   227,
     227,   228,   233,   234,   235,   236,   237,   240,   243,   243,
     246,   247,   248,   251,   252,   253,   254,   255,   258,   260,
     261,   262,   263,   263,   264,   266,   267,   268,   269,   270,
     270,   271,   273,   274,   274,   275,   275,   276,   277,   278,
     279,   283,   284,   285,   286,   297,   298,   299,   300,   303
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NVAR", "CINT", "CFLOAT", "CSTR",
  "CBOOL", "PROG", "VAR", "NEW", "PRINT", "FUNC", "MAIN", "READ", "INT",
  "FLOAT", "STR", "BOOL", "LIST", "IF", "ELSE", "WHILE", "PARA", "PARC",
  "COMA", "IGUAL", "LLAVEA", "LLAVEC", "PTCM", "DOSP", "MAYOR", "MENOR",
  "DIFE", "MAS", "MENOS", "ASTE", "SLASH", "AND", "OR", "COMILLA",
  "$accept", "programa", "@1", "@2", "@3", "a", "b", "vars", "c", "cc",
  "d", "tipo", "estr", "list", "e", "ee", "bloque", "f", "estatuto",
  "main", "@4", "funcion", "@5", "h", "i", "j", "asignacion", "@6", "@7",
  "m", "condicion", "@8", "@9", "k", "l", "@10", "escritura", "n", "o",
  "lectura", "ciclo", "@11", "expresion", "p", "llamada", "q", "r", "exp",
  "s", "t", "@12", "T", "u", "v", "@13", "F", "w", "@14", "@15", "z",
  "easignacion", "cons", "vacio", 0
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
      61,    64,    63,    65,    65,    66,    66,    67,    69,    70,
      68,    71,    71,    71,    73,    74,    72,    75,    75,    77,
      76,    76,    78,    79,    79,    80,    80,    81,    83,    82,
      84,    85,    85,    86,    87,    87,    88,    88,    89,    90,
      90,    90,    92,    91,    91,    93,    94,    94,    94,    96,
      95,    95,    97,    99,    98,   100,    98,   101,   101,   101,
     101,   102,   102,   102,   102,   103,   103,   103,   103,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,    10,     2,     1,     2,     1,
       5,     2,     1,     3,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     4,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
      10,     0,    10,     3,     0,     1,     0,     2,     0,     0,
       6,     1,     1,     1,     0,     0,    10,     2,     1,     0,
       5,     1,     5,     2,     4,     2,     1,     5,     0,     8,
       2,     2,     1,     5,     2,     1,     2,     1,     3,     1,
       1,     1,     0,     4,     1,     3,     1,     1,     1,     0,
       4,     1,     1,     0,     4,     0,     2,     1,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     3,   109,    19,    20,
      21,    22,     4,   109,     0,     7,     0,     6,   109,     0,
     109,     0,   109,    14,     0,     0,     0,   109,     9,   109,
       0,     0,    12,    39,     0,     5,     8,    13,    17,    18,
       0,     0,    11,    10,     0,    41,   109,    15,    23,     0,
      44,     0,     0,    24,    28,    16,     0,     0,    44,   105,
     106,   107,     0,   109,     0,     0,     0,     0,     0,     0,
      26,    44,    43,    46,     0,   108,   109,    27,    47,     0,
      48,     0,     0,    38,    45,    29,    54,     0,    36,    32,
       0,    35,    34,    33,     0,    37,    31,    46,    25,    95,
       0,    95,     0,    30,    40,     0,     0,     0,    93,     0,
     109,   109,   109,    92,     0,    75,    49,     0,     0,   109,
     109,     0,    95,    95,    42,    95,     0,    95,    74,    77,
      79,    80,   109,    81,    86,    87,   109,    88,    97,    98,
      99,     0,    96,     0,     0,     0,    95,    63,    66,     0,
     102,   103,   104,    70,    95,    72,     0,     0,    95,    58,
       0,     0,    73,    76,    78,    82,    84,    85,    89,    91,
       0,    52,     0,    51,    53,   109,    62,    65,   101,    71,
      67,    55,    57,     0,    94,   109,   109,   100,    50,    64,
       0,    54,   109,   109,    54,     0,    83,    90,     0,    69,
     109,    59,    56,    61,     0,    54,     0,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,    16,    12,    26,    83,    31,    22,
      42,    14,    47,    48,    69,    53,    84,    85,    86,    20,
      44,    27,    51,    57,    87,    72,    88,   100,   143,   172,
      89,    90,   190,   157,   202,   204,    91,   118,   147,    92,
      93,    94,   119,   153,    95,   109,   128,   120,   132,   164,
     185,   111,   136,   167,   186,   112,   113,   125,   114,   142,
     154,    63,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -154
static const yytype_int16 yypact[] =
{
       3,    11,    50,    27,  -154,  -154,  -154,    90,  -154,  -154,
    -154,  -154,  -154,    90,    64,  -154,    57,  -154,    45,    90,
      59,    71,    49,  -154,    66,    90,    52,    59,  -154,    45,
      24,    48,  -154,  -154,    80,  -154,  -154,  -154,  -154,  -154,
      74,    84,  -154,  -154,    76,  -154,    77,  -154,  -154,    61,
      90,    86,    18,  -154,  -154,  -154,    95,    89,    90,  -154,
    -154,  -154,   104,    91,    96,    88,    98,    83,    18,   101,
    -154,    90,  -154,   115,    93,  -154,    91,  -154,  -154,   111,
    -154,   113,   116,  -154,  -154,  -154,    70,    99,  -154,  -154,
     118,  -154,  -154,  -154,   119,  -154,  -154,   115,  -154,    22,
     114,    10,    90,  -154,  -154,   120,   121,   117,  -154,   122,
     123,    31,    20,  -154,    21,  -154,  -154,   136,   125,   126,
      63,   128,    22,   124,  -154,   124,   127,    22,  -154,  -154,
    -154,  -154,     4,  -154,  -154,  -154,     4,  -154,  -154,  -154,
    -154,   147,  -154,    13,   129,   130,    10,  -154,  -154,   131,
    -154,  -154,  -154,  -154,   124,  -154,   132,   134,    22,  -154,
     138,   139,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
     133,  -154,   135,  -154,  -154,   126,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   141,  -154,    31,    20,  -154,  -154,  -154,
     143,    70,     4,     4,    70,   137,  -154,  -154,   144,  -154,
     145,  -154,  -154,  -154,   148,    70,   146,  -154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,  -154,   142,   150,    35,  -154,   151,
    -154,   -18,  -154,  -154,    85,  -154,  -153,    97,  -154,  -154,
    -154,  -154,  -154,   -22,    75,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,    -2,  -154,  -154,  -154,    36,     6,  -154,
    -154,  -154,   -79,  -154,  -154,    60,  -154,   -94,    -1,    -4,
    -154,  -129,     5,    -3,  -154,  -132,  -154,  -154,  -154,  -154,
    -154,   -66,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -110
static const yytype_int16 yytable[] =
{
      15,    24,    76,   165,   168,   110,    15,    34,   -95,   -95,
     -95,    23,     1,    28,     3,    32,    59,   171,    60,    61,
      28,    59,    23,    60,    61,   138,   139,   140,   108,    38,
      39,   161,    56,   110,   108,    40,    66,   108,   195,    54,
      56,   198,    13,   158,   160,   -95,   108,  -109,    13,    78,
       4,   117,   206,    56,    62,     5,    70,   134,   135,    62,
     179,   168,   141,   165,   173,    41,   130,   131,    18,    70,
      19,    21,    25,    79,    80,    29,    30,   174,    43,   158,
      33,    35,    81,    45,   121,    82,     8,     9,    10,    11,
     149,    49,   115,   -68,    46,   150,   151,   152,    64,  -109,
      50,    52,    55,   129,   133,   137,     8,     9,    10,    11,
      58,    67,   148,   155,    65,   159,    73,    68,    79,    80,
     115,    97,    71,    74,    75,   166,    77,    81,   104,   169,
      82,     8,     9,    10,    11,    99,   -54,   101,   -68,   105,
     102,   116,   106,   144,   122,   123,   124,   126,   108,   127,
     145,   159,   146,   156,   170,    17,   182,   162,   178,   181,
     176,    98,   180,   183,   184,   188,   199,   201,   148,   191,
     175,   194,   107,   200,   187,   207,   205,    36,   133,   137,
      37,   189,   177,   103,   192,   166,   169,   163,   196,     0,
     197,   193,     0,   203
};

static const yytype_int16 yycheck[] =
{
       7,    19,    68,   132,   136,    99,    13,    25,     4,     5,
       6,    18,     9,    20,     3,    22,     3,     4,     5,     6,
      27,     3,    29,     5,     6,     4,     5,     6,    24,     5,
       6,   125,    50,   127,    24,    11,    58,    24,   191,    46,
      58,   194,     7,   122,   123,    41,    24,    25,    13,    71,
       0,    41,   205,    71,    41,    28,    63,    37,    38,    41,
     154,   193,    41,   192,   143,    41,    35,    36,     4,    76,
      13,    26,    13,     3,     4,     4,    27,   143,    30,   158,
      14,    29,    12,     3,   102,    15,    16,    17,    18,    19,
      27,     7,    99,    23,    20,    32,    33,    34,     3,    29,
      24,    24,    41,   110,   111,   112,    16,    17,    18,    19,
      24,     7,   119,   120,    25,   122,    28,    26,     3,     4,
     127,    28,    26,    25,    41,   132,    25,    12,    29,   136,
      15,    16,    17,    18,    19,    24,    21,    24,    23,    21,
      24,    27,    23,     7,    24,    24,    29,    25,    24,    26,
      25,   158,    26,    25,     7,    13,   158,    30,    27,    25,
      30,    76,    30,    25,    25,    30,    29,    22,   175,    28,
      41,    28,    97,    29,    41,    29,    28,    27,   185,   186,
      29,   175,   146,    86,   185,   192,   193,   127,   192,    -1,
     193,   186,    -1,   200
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    43,     3,     0,    28,    44,    45,    16,    17,
      18,    19,    47,    49,    53,   104,    46,    47,     4,    13,
      61,    26,    51,   104,    53,    13,    48,    63,   104,     4,
      27,    50,   104,    14,    53,    29,    48,    51,     5,     6,
      11,    41,    52,    30,    62,     3,    20,    54,    55,     7,
      24,    64,    24,    57,   104,    41,    53,    65,    24,     3,
       5,     6,    41,   103,     3,    25,    65,     7,    26,    56,
     104,    26,    67,    28,    25,    41,   103,    25,    65,     3,
       4,    12,    15,    49,    58,    59,    60,    66,    68,    72,
      73,    78,    81,    82,    83,    86,   104,    28,    56,    24,
      69,    24,    24,    59,    29,    21,    23,    66,    24,    87,
      89,    93,    97,    98,   100,   104,    27,    41,    79,    84,
      89,    53,    24,    24,    29,    99,    25,    26,    88,   104,
      35,    36,    90,   104,    37,    38,    94,   104,     4,     5,
       6,    41,   101,    70,     7,    25,    26,    80,   104,    27,
      32,    33,    34,    85,   102,   104,    25,    75,    84,   104,
      84,    89,    30,    87,    91,    93,   104,    95,    97,   104,
       7,     4,    71,    84,   103,    41,    30,    79,    27,    89,
      30,    25,    75,    25,    25,    92,    96,    41,    30,    80,
      74,    28,    90,    94,    28,    58,    91,    95,    58,    29,
      29,    22,    76,   104,    77,    28,    58,    29
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
#line 123 "sintactico.y"
    {gltc=1;;}
    break;

  case 3:
#line 123 "sintactico.y"
    {insertPro(&startProList,"Global",5,1);;}
    break;

  case 4:
#line 123 "sintactico.y"
    {gltc=2;;}
    break;

  case 5:
#line 123 "sintactico.y"
    {printf("Programa hecho \n");;}
    break;

  case 10:
#line 130 "sintactico.y"
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
#line 150 "sintactico.y"
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
#line 176 "sintactico.y"
    {estipo=1;;}
    break;

  case 20:
#line 177 "sintactico.y"
    {estipo=2;;}
    break;

  case 21:
#line 178 "sintactico.y"
    {estipo=3;;}
    break;

  case 22:
#line 179 "sintactico.y"
    {estipo=4;;}
    break;

  case 39:
#line 206 "sintactico.y"
    {insertPro(&startProList,"main",estipo,1);;}
    break;

  case 40:
#line 206 "sintactico.y"
    {/*printf("funcion \n");*/;}
    break;

  case 41:
#line 209 "sintactico.y"
    {insertPro(&startProList,(yyvsp[(3) - (3)].texto),estipo,1);;}
    break;

  case 42:
#line 209 "sintactico.y"
    {/*printf("funcion \n");*/;}
    break;

  case 48:
#line 217 "sintactico.y"
    {existeVarAsignar(startProList->headTvarPtr,startProList->headTvarPtr->nextPtr,(yyvsp[(1) - (1)].texto));;}
    break;

  case 49:
#line 217 "sintactico.y"
    {ochoExp(8);;}
    break;

  case 51:
#line 219 "sintactico.y"
    {nueveExp();;}
    break;

  case 54:
#line 224 "sintactico.y"
    {eragltc=gltc; gltc=3;;}
    break;

  case 55:
#line 224 "sintactico.y"
    {unoEstIf();;}
    break;

  case 56:
#line 224 "sintactico.y"
    {gltc=eragltc;}
    break;

  case 59:
#line 227 "sintactico.y"
    {dosEstIf();;}
    break;

  case 68:
#line 243 "sintactico.y"
    {eragltc=gltc; gltc=3;;}
    break;

  case 69:
#line 243 "sintactico.y"
    {gltc=eragltc;}
    break;

  case 79:
#line 260 "sintactico.y"
    {dosExp(1);;}
    break;

  case 80:
#line 261 "sintactico.y"
    {dosExp(2);;}
    break;

  case 82:
#line 263 "sintactico.y"
    {cuatroExp();;}
    break;

  case 86:
#line 267 "sintactico.y"
    {tresExp(3);;}
    break;

  case 87:
#line 268 "sintactico.y"
    {tresExp(4);;}
    break;

  case 89:
#line 270 "sintactico.y"
    {cincoExp();;}
    break;

  case 93:
#line 274 "sintactico.y"
    {seisExp();;}
    break;

  case 94:
#line 274 "sintactico.y"
    {sieteExp();;}
    break;

  case 95:
#line 275 "sintactico.y"
    {eragltc=gltc; gltc=4;;}
    break;

  case 96:
#line 275 "sintactico.y"
    {gltc=eragltc;;}
    break;

  case 97:
#line 276 "sintactico.y"
    {diezExp((yyvsp[(1) - (1)].texto));;}
    break;

  case 98:
#line 277 "sintactico.y"
    {unoExpIntCons((yyvsp[(1) - (1)].numero));;}
    break;

  case 99:
#line 278 "sintactico.y"
    {unoExpFloatCons((yyvsp[(1) - (1)].real));;}
    break;

  case 100:
#line 279 "sintactico.y"
    {/*unoExpStrCons($2);*/;}
    break;

  case 101:
#line 283 "sintactico.y"
    {cuadruplosComparaciones(11);;}
    break;

  case 102:
#line 284 "sintactico.y"
    {cuadruplosComparaciones(12);;}
    break;

  case 103:
#line 285 "sintactico.y"
    {cuadruplosComparaciones(13);;}
    break;

  case 104:
#line 286 "sintactico.y"
    {cuadruplosComparaciones(14);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1880 "sintactico.tab.c"
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


#line 305 "sintactico.y"

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
//int contSaltosGlo=4000;
/*******************Locales********************/
int contEntLoc=5000;
int contFlotLoc=6000;
int contStrLoc=7000;
int contBoolLoc=8000;
//int contSaltosLoc=9000;
/*******************Temporales*****************/
int contEntTmp=10000;
int contFlotTmp=11000;
int contStrTmp=12000;
int contBoolTmp=13000;
//int contSaltosTmp=14000;
/*******************Constantes*****************/
int contEntCons=15000;
int contFlotCons=16000;
int contStrCons=17000;
int contBoolCons=18000;
//int contSaltosCons=19000;

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
}
void unoExpIntCons(int valor){
  char buffer [50];
  if (gltc==4){
    push (&PilaO,contEntCons);
    push(&PTipos,1);
    insertTabCons (&startTabCons,valor,contEntCons);
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
}
void unoExpFloatCons(int valor){
  char buffer [50];
  if (gltc==4){
    push(&PilaO,contFlotCons);
    push(&PTipos,2);
    insertTabCons (&startTabCons,valor,contEntCons);
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
}
void unoExpStrCons(int valor){
  if (gltc==4){
    push (&PilaO, contStrCons);
    push(&PTipos,3);
    //insertTabCons (&startTabCons,valor,contStrCons);
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
}
void unoExpBoolCons(int valor){
  if (gltc==4){
    push (&PilaO, contBoolCons);
    push(&PTipos,4);
    //insertTabCons (&startTabCons,valor,contBoolCons);
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
  int tipoRes;
  int resultado;
  if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 1|| esSumResMulDiv == 2){
      int tipo1=PTipos->data;
      pop ( &PTipos );
      int tipo2=PTipos->data;
      pop ( &PTipos );
      if(tipo1==1){
        tipo1=0;
      }else if(tipo1==2){
        tipo1=2;
      }else if(tipo1==3){
        tipo1=5;
      }else if(tipo1==4){
        tipo1=4;
      }
      if(tipo2==1){
        tipo2=0;
      }else if(tipo2==2){
        tipo2=2;
      }else if(tipo2==3){
        tipo2=5;
      }else if(tipo2==4){
        tipo2=4;
      }
      
      if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"x")==0){
        printf("%s\n","operacion no valida" );
      }else{
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"i")==0){
          tipoRes=1;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"f")==0){
          tipoRes=2;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"s")==0){
          tipoRes=3;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"b")==0){
          tipoRes=4;
         }
      }
      //printf ("%d ", POper->data);
      int operacion=POper->data;
      pop(&POper);
      //printf("%d ", PilaO->data);
      int operando2 = PilaO->data;
      pop(&PilaO);
      //printf("%d ", PilaO->data);
      int operando1 = PilaO->data;
      pop(&PilaO);
      push(&PTipos,tipoRes);

      if(tipoRes == 1){
        push(&PilaO, contEntTmp);
        //printf("%d\n", contEntTmp );
        resultado = contEntTmp;
        contEntTmp++;
      }
      if(tipoRes == 2){
        push(&PilaO, contFlotTmp);
        //printf("%d\n", contFlotTmp );
        resultado = contFlotTmp;
        contFlotTmp++;
      }
      if(tipoRes == 3){
        push(&PilaO, contStrTmp);
        //printf("%d\n", contStrTmp );
        resultado = contStrTmp;
        contStrTmp++;
      }
      if(tipoRes == 4){
        push(&PilaO, contBoolTmp);
        //printf("%d\n", contBoolTmp );
        resultado = contBoolTmp;
        contBoolTmp++;
      }
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2, resultado);
    }
  }
}
void cincoExp(){
  int tipoRes;
  int resultado;
  if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
   } // end if
  else { 
    esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 3 || esSumResMulDiv == 4){
      int tipo1 = PTipos->data;
      pop ( &PTipos );
      int tipo2 = PTipos->data;
      pop ( &PTipos );

      if(tipo1==1){
        tipo1=0;
      }else if(tipo1==2){
        tipo1=2;
      }else if(tipo1==3){
        tipo1=5;
      }else if(tipo1==4){
        tipo1=4;
      }
      if(tipo2==1){
        tipo2=0;
      }else if(tipo2==2){
        tipo2=2;
      }else if(tipo2==3){
        tipo2=5;
      }else if(tipo2==4){
        tipo2=4;
      }
      if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"x")==0){
        printf("%s\n","operacion no valida" );
      }else{
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"i")==0){
          tipoRes=1;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"f")==0){
          tipoRes=2;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"s")==0){
          tipoRes=3;
         }
         if(strcmp(cubo[tipo1][tipo2][esSumResMulDiv],"b")==0){
          tipoRes=4;
         }
      }

      printf ("%d ", POper->data);
      int operacion=POper->data;
      pop(&POper);
      printf("%d ", PilaO->data);
      int operando2 = PilaO->data;
      pop(&PilaO);
      printf("%d ", PilaO->data);
      int operando1 = PilaO->data;
      pop(&PilaO);
      push(&PTipos,tipoRes);

      if(tipoRes == 1){
        push(&PilaO, contEntTmp);
        printf("%d\n", contEntTmp );
        resultado = contEntTmp;
        contEntTmp++;
      }
      if(tipoRes == 2){
        push(&PilaO, contFlotTmp);
        printf("%d\n", contFlotTmp );
        resultado = contFlotTmp;
        contFlotTmp++;
      }
      if(tipoRes == 3){
        push(&PilaO, contStrTmp);
        printf("%d\n", contStrTmp );
        resultado = contStrTmp;
        contStrTmp++;
      }
      if(tipoRes == 4){
        push(&PilaO, contBoolTmp);
        printf("%d\n", contBoolTmp );
        resultado = contBoolTmp;
        contBoolTmp++;
      }
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2, resultado);
    }
  }
}
void seisExp(){
  push(&POper, 9);
}
void sieteExp(){
  pop(&POper);
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
void nueveExp(){
 if ( POper == NULL ) {
      //puts( "The stack is empty.\n" );
 }else { 
  esSumResMulDiv = POper->data;
    if ( esSumResMulDiv == 5 || esSumResMulDiv == 6 || esSumResMulDiv == 7|| esSumResMulDiv == 8 ){
      pop ( &PTipos );
      //printf ("%d ", POper->data);
      int operacion=POper->data;
      pop(&POper);
      //printf("%d ", PilaO->data);
      int operando1 = PilaO->data;
      pop(&PilaO);
      //printf("%d \n", PilaO->data);
      int resultado = PilaO->data;
      pop(&PilaO);
      int operando2=0;
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2,resultado);
    }
  }
}
void diezExp(char *nombre){
  //revisa que los nombres de las variables y funciones no existan 
    TvarNodoPtr existePtr;
    existePtr = startProList->headTvarPtr;
    int esta = 0;
    int i;

    while ( existePtr != NULL ) {
      i = strcmp (nombre, existePtr->nombreVariable);
       //printf("%s-%s",nombre,existePtr->nombreVariable);
      if (i == 0){
         push ( &PilaO, existePtr->direccion);
         esta = 1;
      }
      existePtr = existePtr->nextPtr;   
      } // end while
    if(esta != 1){
      printf("la variable '%s' no existe  %s\n",nombre,existePtr->nombreVariable);
      exit(EXIT_FAILURE);
    }
}
void cuadruplosComparaciones(int tipoComp){
  int operacion;
  int operando1;
  int operando2;
  int resultado;
  operacion=tipoComp;
  operando2=PilaO->data;
  pop(&PilaO);
  operando1=PilaO->data;
  pop(&PilaO);
  resultado = contBoolTmp;
  contBoolTmp++;
  insertCuadruplos( &startCuadruplos, operacion, operando1, operando2, resultado);
}
void unoEstIf(){
  //21 gotof
  insertCuadruplos(&startCuadruplos, 21,PilaO->data,0,0);
  pop(&PilaO);
  push (&Saltos,contSaltos-1);
}
void dosEstIf(){
  insertCuadruplos(&startCuadruplos,20,0,0,0);
}

void yyerror(char *s){
  printf("Error sintactico %s \n",s);
}
/**************** main ****************/
int main(int argc,char **argv){
  PilaO = NULL;// points to stack top
  POper = NULL;
  PTipos = NULL;
  Saltos = NULL;

  int value; // int input by user
  
  if (argc>1)
    yyin=fopen(argv[1],"rt");
  else
    //yyin=stdin;
    yyin=fopen("entrada.txt","rt");

  yyparse();
  escribeCuadruplos( startCuadruplos );
  escribeTabCons(startTabCons);
  //impreciones de prueba
  printf("PilaO \n");
  printStack( PilaO );
  printf("POper \n");
  printStack( POper );
  printf("PTipos \n");
  printStack( PTipos );
  printf("Saltos \n");
  printStack( Saltos );
  printTables( startProList );
  printCuadruplos ( startCuadruplos );
  printTabCons( startTabCons);
  return 0;
  
}

