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
void nueveExp(char *nombre);
void diezExp(char *nombre);
int direccionVariable(char *nombre);
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
int cuentaInt =0;
int cuentaFloat=0;
int cuentaStr=0;
int cuentaBool=0;
int globalesInt=0;
int globalesFloat=0;
int globalesStr=0;
int globalesBool=0;
int mainInt=0;
int mainFloat=0;
int mainStr=0;
int mainBool=0;
char *nombreDeVariable;
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
#line 83 "sintactico.y"
{
  float real;
  int numero;
  char* texto;
}
/* Line 193 of yacc.c.  */
#line 264 "sintactico.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 277 "sintactico.tab.c"

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
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
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
       0,     0,     3,     4,     5,     6,     7,     8,    21,    24,
      26,    29,    31,    37,    40,    42,    46,    48,    51,    55,
      57,    59,    61,    63,    65,    67,    69,    72,    76,    78,
      83,    85,    87,    90,    92,    94,    96,    98,   100,   102,
     104,   106,   107,   117,   118,   129,   133,   134,   136,   137,
     140,   141,   142,   143,   151,   153,   155,   157,   158,   159,
     170,   173,   175,   176,   182,   184,   190,   193,   198,   201,
     203,   209,   210,   219,   222,   225,   227,   233,   236,   238,
     241,   243,   247,   249,   251,   253,   254,   259,   261,   265,
     267,   269,   271,   272,   277,   279,   281,   282,   287,   288,
     291,   293,   295,   297,   301,   304,   306,   308,   310,   312,
     314,   316,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    -1,    -1,    -1,    -1,    -1,     9,     3,
      28,    44,    45,    49,    46,    47,    63,    48,    50,    29,
      -1,    51,    49,    -1,   107,    -1,    65,    50,    -1,   107,
      -1,    55,     4,    53,    52,    30,    -1,    27,    54,    -1,
     107,    -1,    26,     4,    53,    -1,   107,    -1,    11,    56,
      -1,    41,     7,    41,    -1,     5,    -1,     6,    -1,    16,
      -1,    17,    -1,    18,    -1,    19,    -1,    57,    -1,    20,
      59,    -1,    26,   106,    58,    -1,   107,    -1,    24,   106,
      58,    25,    -1,   107,    -1,    61,    -1,    62,    61,    -1,
     107,    -1,    75,    -1,    85,    -1,    84,    -1,    81,    -1,
      70,    -1,    89,    -1,    51,    -1,    -1,    13,    14,    64,
      24,    67,    25,    28,    68,    29,    -1,    -1,    13,    55,
       3,    66,    24,    67,    25,    28,    68,    29,    -1,    55,
       3,    69,    -1,    -1,    60,    -1,    -1,    26,    67,    -1,
      -1,    -1,    -1,     4,    71,    72,    27,    73,    74,    30,
      -1,    87,    -1,     4,    -1,   106,    -1,    -1,    -1,    76,
      21,    24,    78,    25,    77,    28,    60,    29,    79,    -1,
      87,    78,    -1,   107,    -1,    -1,    22,    80,    28,    60,
      29,    -1,   107,    -1,    12,    24,    82,    25,    30,    -1,
      87,    83,    -1,    41,     7,    41,    83,    -1,    26,    82,
      -1,   107,    -1,    15,    24,    55,    25,    30,    -1,    -1,
      86,    23,    24,    87,    25,    28,    60,    29,    -1,    92,
      88,    -1,   105,    92,    -1,   107,    -1,     3,    24,    90,
      25,    30,    -1,    92,    91,    -1,   107,    -1,    26,    90,
      -1,   107,    -1,    96,    93,    94,    -1,    35,    -1,    36,
      -1,   107,    -1,    -1,    96,    95,    93,    94,    -1,   107,
      -1,   100,    97,    98,    -1,    37,    -1,    38,    -1,   107,
      -1,    -1,   100,    99,    97,    98,    -1,   107,    -1,   101,
      -1,    -1,    24,   102,    92,    25,    -1,    -1,   103,   104,
      -1,     4,    -1,     5,    -1,     6,    -1,    41,     7,    41,
      -1,    27,    27,    -1,    32,    -1,    33,    -1,    34,    -1,
       3,    -1,     5,    -1,     6,    -1,    41,     7,    41,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   137,   138,   148,   149,   137,   160,   161,
     162,   163,   166,   188,   189,   190,   208,   210,   211,   212,
     213,   216,   217,   218,   219,   222,   225,   226,   227,   228,
     229,   232,   233,   234,   237,   238,   239,   240,   241,   242,
     243,   246,   246,   249,   249,   250,   251,   252,   253,   254,
     257,   257,   257,   257,   259,   260,   261,   264,   264,   264,
     265,   266,   267,   267,   268,   273,   274,   275,   276,   277,
     280,   283,   283,   286,   287,   288,   291,   292,   293,   294,
     295,   298,   300,   301,   302,   303,   303,   304,   306,   307,
     308,   309,   310,   310,   311,   313,   314,   314,   315,   315,
     316,   317,   318,   319,   323,   324,   325,   326,   337,   338,
     339,   340,   343
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
  "$accept", "programa", "@1", "@2", "@3", "@4", "@5", "a", "b", "vars",
  "c", "cc", "d", "tipo", "estr", "list", "e", "ee", "bloque", "f",
  "estatuto", "main", "@6", "funcion", "@7", "h", "i", "j", "asignacion",
  "@8", "@9", "@10", "m", "condicion", "@11", "@12", "k", "l", "@13",
  "escritura", "n", "o", "lectura", "ciclo", "@14", "expresion", "p",
  "llamada", "q", "r", "exp", "s", "t", "@15", "T", "u", "v", "@16", "F",
  "w", "@17", "@18", "z", "easignacion", "cons", "vacio", 0
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
       0,    42,    44,    45,    46,    47,    48,    43,    49,    49,
      50,    50,    51,    52,    52,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    56,    57,    58,    58,    59,
      59,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    64,    63,    66,    65,    67,    67,    68,    68,    69,
      71,    72,    73,    70,    74,    74,    74,    76,    77,    75,
      78,    78,    80,    79,    79,    81,    82,    82,    83,    83,
      84,    86,    85,    87,    88,    88,    89,    90,    90,    91,
      91,    92,    93,    93,    93,    95,    94,    94,    96,    97,
      97,    97,    99,    98,    98,   100,   102,   101,   103,   101,
     104,   104,   104,   104,   105,   105,   105,   105,   106,   106,
     106,   106,   107
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,    12,     2,     1,
       2,     1,     5,     2,     1,     3,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     4,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     9,     0,    10,     3,     0,     1,     0,     2,
       0,     0,     0,     7,     1,     1,     1,     0,     0,    10,
       2,     1,     0,     5,     1,     5,     2,     4,     2,     1,
       5,     0,     8,     2,     2,     1,     5,     2,     1,     2,
       1,     3,     1,     1,     1,     0,     4,     1,     3,     1,
       1,     1,     0,     4,     1,     1,     0,     4,     0,     2,
       1,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     2,     3,   112,    21,    22,
      23,    24,     4,   112,     0,     9,     5,     8,   112,     0,
       0,   112,    16,     0,     6,   112,     0,     0,    14,    41,
     112,    15,    19,    20,     0,     0,    13,    12,     0,     0,
       0,   112,    11,   112,    17,    25,     0,    46,     0,     7,
      10,     0,    26,    30,    18,     0,     0,    43,   108,   109,
     110,     0,   112,     0,     0,     0,     0,     0,     0,    28,
      46,    45,    48,    46,   111,   112,    29,    49,     0,    50,
       0,     0,    40,    47,    31,    57,     0,    38,    34,     0,
      37,    36,    35,     0,    39,    33,     0,    27,    98,    51,
      98,     0,    32,    42,     0,     0,     0,    96,     0,   112,
     112,   112,    95,     0,    78,     0,     0,     0,   112,   112,
       0,    98,    98,    48,    98,     0,    98,    77,    80,    82,
      83,   112,    84,    89,    90,   112,    91,   100,   101,   102,
       0,    99,    52,     0,     0,    98,    66,    69,     0,   105,
     106,   107,    73,    98,    75,     0,     0,    98,    61,     0,
       0,     0,    76,    79,    81,    85,    87,    88,    92,    94,
       0,     0,   112,    65,    68,   104,    74,    70,    58,    60,
       0,    44,    97,   112,   112,   103,    55,     0,    54,    56,
      67,     0,    57,   112,   112,    53,    57,     0,    86,    93,
       0,    72,   112,    62,    59,    64,     0,    57,     0,    63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     7,    16,    19,    30,    12,    40,    82,
      27,    21,    36,    14,    44,    45,    68,    52,    83,    84,
      85,    24,    38,    41,    65,    56,    86,    71,    87,    99,
     115,   171,   187,    88,    89,   191,   156,   204,   206,    90,
     117,   146,    91,    92,    93,   118,   152,    94,   108,   127,
     119,   131,   164,   183,   110,   135,   167,   184,   111,   112,
     124,   113,   141,   153,    62,    95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -133
static const yytype_int16 yypact[] =
{
       8,    19,    24,     9,  -133,  -133,  -133,    69,  -133,  -133,
    -133,  -133,  -133,    69,    45,  -133,  -133,  -133,    43,    62,
      75,    56,  -133,    84,  -133,    43,    39,    59,  -133,  -133,
      79,  -133,  -133,  -133,    80,    99,  -133,  -133,    85,    69,
      89,    79,  -133,    96,  -133,  -133,    72,    69,   118,  -133,
    -133,    10,  -133,  -133,  -133,   119,    98,  -133,  -133,  -133,
    -133,   120,   100,   103,    97,   106,    90,    10,   107,  -133,
      69,  -133,    78,    69,  -133,   100,  -133,  -133,   109,  -133,
     110,   111,  -133,  -133,  -133,    55,   108,  -133,  -133,   115,
    -133,  -133,  -133,   116,  -133,  -133,   113,  -133,   -15,  -133,
       6,    69,  -133,  -133,   117,   121,   112,  -133,   122,   123,
      17,    70,  -133,    36,  -133,   124,   135,   127,   128,    83,
     130,   -15,   129,    78,   129,   114,   -15,  -133,  -133,  -133,
    -133,    15,  -133,  -133,  -133,    15,  -133,  -133,  -133,  -133,
     136,  -133,  -133,   105,   126,     6,  -133,  -133,   131,  -133,
    -133,  -133,  -133,   129,  -133,   132,   134,   -15,  -133,   138,
     137,   139,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
     133,    22,   128,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
     140,  -133,  -133,    17,    70,  -133,  -133,   141,  -133,  -133,
    -133,   142,    55,    15,    15,  -133,    55,   143,  -133,  -133,
     144,  -133,   145,  -133,  -133,  -133,   147,    55,   149,  -133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -133,  -133,  -133,  -133,   148,   150,    41,
    -133,   154,  -133,   -35,  -133,  -133,    73,  -133,  -131,    95,
    -133,  -133,  -133,  -133,  -133,   -41,    34,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,     3,  -133,  -133,  -133,
      37,    -3,  -133,  -133,  -133,  -114,  -133,  -133,    57,  -133,
     -93,    -2,    -9,  -133,  -129,     1,    -6,  -133,  -132,  -133,
    -133,  -133,  -133,  -133,   -66,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -113
static const yytype_int16 yytable[] =
{
      15,    75,   165,   168,    48,   109,    15,   157,   159,   107,
    -112,    22,    55,    58,    28,    59,    60,     1,    22,   -98,
     -98,   -98,     3,    42,     4,    58,   186,    59,    60,    77,
     107,   161,    96,   109,    42,    55,    53,     5,    55,   107,
     137,   138,   139,   157,    32,    33,   107,   116,    13,    18,
      34,    61,   129,   130,    13,    69,   -98,   188,    78,    79,
     176,   197,   168,    61,   165,   200,   120,    80,    69,    20,
      81,     8,     9,    10,    11,    23,   208,   140,   -71,    25,
      35,    78,    79,    26,  -112,     8,     9,    10,    11,    37,
      80,   114,    39,    81,     8,     9,    10,    11,    29,   -57,
      43,   -71,   128,   132,   136,   189,    46,   133,   134,    47,
     148,   147,   154,    54,   158,   149,   150,   151,    49,   114,
      51,    57,    63,    64,   166,    72,    67,    66,   169,    70,
      73,    74,    76,    98,   100,   101,   104,   103,   106,   105,
     123,   121,   143,   170,   162,   122,   172,   125,    97,   126,
     158,   142,   144,   107,   145,   155,   173,   160,   175,   178,
     179,    17,   177,   180,   182,   147,   181,   203,   192,   190,
     196,   195,   201,   202,   185,   207,   132,   136,   209,    31,
     102,   193,   174,   163,   198,   194,   166,   169,   199,     0,
       0,    50,     0,     0,     0,   205
};

static const yytype_int16 yycheck[] =
{
       7,    67,   131,   135,    39,    98,    13,   121,   122,    24,
      25,    18,    47,     3,    21,     5,     6,     9,    25,     4,
       5,     6,     3,    30,     0,     3,     4,     5,     6,    70,
      24,   124,    73,   126,    41,    70,    43,    28,    73,    24,
       4,     5,     6,   157,     5,     6,    24,    41,     7,     4,
      11,    41,    35,    36,    13,    62,    41,   171,     3,     4,
     153,   192,   194,    41,   193,   196,   101,    12,    75,    26,
      15,    16,    17,    18,    19,    13,   207,    41,    23,     4,
      41,     3,     4,    27,    29,    16,    17,    18,    19,    30,
      12,    98,    13,    15,    16,    17,    18,    19,    14,    21,
      20,    23,   109,   110,   111,   171,     7,    37,    38,    24,
      27,   118,   119,    41,   121,    32,    33,    34,    29,   126,
      24,     3,     3,    25,   131,    28,    26,     7,   135,    26,
      24,    41,    25,    24,    24,    24,    21,    29,    25,    23,
      28,    24,     7,     7,    30,    24,    41,    25,    75,    26,
     157,    27,    25,    24,    26,    25,    30,   123,    27,    25,
     157,    13,    30,    25,    25,   172,    29,    22,    28,   172,
      28,    30,    29,    29,    41,    28,   183,   184,    29,    25,
      85,   183,   145,   126,   193,   184,   193,   194,   194,    -1,
      -1,    41,    -1,    -1,    -1,   202
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    43,     3,     0,    28,    44,    45,    16,    17,
      18,    19,    49,    51,    55,   107,    46,    49,     4,    47,
      26,    53,   107,    13,    63,     4,    27,    52,   107,    14,
      48,    53,     5,     6,    11,    41,    54,    30,    64,    13,
      50,    65,   107,    20,    56,    57,     7,    24,    55,    29,
      50,    24,    59,   107,    41,    55,    67,     3,     3,     5,
       6,    41,   106,     3,    25,    66,     7,    26,    58,   107,
      26,    69,    28,    24,    41,   106,    25,    67,     3,     4,
      12,    15,    51,    60,    61,    62,    68,    70,    75,    76,
      81,    84,    85,    86,    89,   107,    67,    58,    24,    71,
      24,    24,    61,    29,    21,    23,    25,    24,    90,    92,
      96,   100,   101,   103,   107,    72,    41,    82,    87,    92,
      55,    24,    24,    28,   102,    25,    26,    91,   107,    35,
      36,    93,   107,    37,    38,    97,   107,     4,     5,     6,
      41,   104,    27,     7,    25,    26,    83,   107,    27,    32,
      33,    34,    88,   105,   107,    25,    78,    87,   107,    87,
      68,    92,    30,    90,    94,    96,   107,    98,   100,   107,
       7,    73,    41,    30,    82,    27,    92,    30,    25,    78,
      25,    29,    25,    95,    99,    41,     4,    74,    87,   106,
      83,    77,    28,    93,    97,    30,    28,    60,    94,    98,
      60,    29,    29,    22,    79,   107,    80,    28,    60,    29
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
#line 137 "sintactico.y"
    {gltc=1;;}
    break;

  case 3:
#line 137 "sintactico.y"
    {insertPro(&startProList,"Global",5,1);;}
    break;

  case 4:
#line 138 "sintactico.y"
    {
  globalesInt=cuentaInt;
  cuentaInt=0;
  globalesFloat=cuentaFloat;
  cuentaFloat=0;
  globalesStr=cuentaStr;
  cuentaStr=0;
  globalesBool=cuentaBool;
  cuentaBool =0;
;}
    break;

  case 5:
#line 148 "sintactico.y"
    {gltc=2;;}
    break;

  case 6:
#line 149 "sintactico.y"
    {
    mainInt=cuentaInt;
    cuentaInt=0;
    mainFloat=cuentaFloat;
    cuentaFloat=0;
    mainStr=cuentaStr;
    cuentaStr=0;
    mainBool=cuentaBool;
    cuentaBool =0;
 ;}
    break;

  case 7:
#line 159 "sintactico.y"
    {printf("Programa hecho \n");;}
    break;

  case 12:
#line 166 "sintactico.y"
    {
  if (estipo==1){
    cuentaInt++;
    unoExpInt((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==2){
    cuentaFloat++;
    unoExpFloat((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==3){
    cuentaStr++;
    unoExpStr((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
  if (estipo==4){
    cuentaBool++;
    unoExpBool((yyvsp[(2) - (5)].texto));
    //printf("%s\n",$2 );
  }
;}
    break;

  case 15:
#line 190 "sintactico.y"
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

  case 21:
#line 216 "sintactico.y"
    {estipo=1;;}
    break;

  case 22:
#line 217 "sintactico.y"
    {estipo=2;;}
    break;

  case 23:
#line 218 "sintactico.y"
    {estipo=3;;}
    break;

  case 24:
#line 219 "sintactico.y"
    {estipo=4;;}
    break;

  case 41:
#line 246 "sintactico.y"
    {insertPro(&startProList,"main",estipo,1);;}
    break;

  case 42:
#line 246 "sintactico.y"
    {/*printf("funcion \n");*/;}
    break;

  case 43:
#line 249 "sintactico.y"
    {insertPro(&startProList,(yyvsp[(3) - (3)].texto),estipo,1);;}
    break;

  case 44:
#line 249 "sintactico.y"
    {/*printf("funcion \n");*/;}
    break;

  case 50:
#line 257 "sintactico.y"
    {existeVarAsignar(startProList->headTvarPtr,startProList->headTvarPtr->nextPtr,(yyvsp[(1) - (1)].texto));;}
    break;

  case 51:
#line 257 "sintactico.y"
    {nombreDeVariable=(yyvsp[(1) - (2)].texto);;}
    break;

  case 52:
#line 257 "sintactico.y"
    {ochoExp(8);;}
    break;

  case 54:
#line 259 "sintactico.y"
    {nueveExp(nombreDeVariable);;}
    break;

  case 57:
#line 264 "sintactico.y"
    {eragltc=gltc; gltc=3;;}
    break;

  case 58:
#line 264 "sintactico.y"
    {unoEstIf();;}
    break;

  case 59:
#line 264 "sintactico.y"
    {gltc=eragltc;}
    break;

  case 62:
#line 267 "sintactico.y"
    {dosEstIf();;}
    break;

  case 71:
#line 283 "sintactico.y"
    {eragltc=gltc; gltc=3;;}
    break;

  case 72:
#line 283 "sintactico.y"
    {gltc=eragltc;}
    break;

  case 82:
#line 300 "sintactico.y"
    {dosExp(1);;}
    break;

  case 83:
#line 301 "sintactico.y"
    {dosExp(2);;}
    break;

  case 85:
#line 303 "sintactico.y"
    {cuatroExp();;}
    break;

  case 89:
#line 307 "sintactico.y"
    {tresExp(3);;}
    break;

  case 90:
#line 308 "sintactico.y"
    {tresExp(4);;}
    break;

  case 92:
#line 310 "sintactico.y"
    {cincoExp();;}
    break;

  case 96:
#line 314 "sintactico.y"
    {seisExp();;}
    break;

  case 97:
#line 314 "sintactico.y"
    {sieteExp();;}
    break;

  case 98:
#line 315 "sintactico.y"
    {eragltc=gltc; gltc=4;;}
    break;

  case 99:
#line 315 "sintactico.y"
    {gltc=eragltc;;}
    break;

  case 100:
#line 316 "sintactico.y"
    {diezExp((yyvsp[(1) - (1)].texto));;}
    break;

  case 101:
#line 317 "sintactico.y"
    {unoExpIntCons((yyvsp[(1) - (1)].numero));;}
    break;

  case 102:
#line 318 "sintactico.y"
    {unoExpFloatCons((yyvsp[(1) - (1)].real));;}
    break;

  case 103:
#line 319 "sintactico.y"
    {/*unoExpStrCons($2);*/;}
    break;

  case 104:
#line 323 "sintactico.y"
    {cuadruplosComparaciones(11);;}
    break;

  case 105:
#line 324 "sintactico.y"
    {cuadruplosComparaciones(12);;}
    break;

  case 106:
#line 325 "sintactico.y"
    {cuadruplosComparaciones(13);;}
    break;

  case 107:
#line 326 "sintactico.y"
    {cuadruplosComparaciones(14);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1936 "sintactico.tab.c"
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


#line 345 "sintactico.y"

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
void nueveExp(char *nombre){
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
      int resultado = direccionVariable(nombreDeVariable);
      pop(&PilaO);
      int operando2=0;
      insertCuadruplos( &startCuadruplos, operacion, operando1, operando2,resultado);
    }
  }
}
int direccionVariable(char *nombre){
  //revisa que los nombres de las variables y funciones no existan 
    TvarNodoPtr existePtr;
    existePtr = startProList->headTvarPtr;
    int esta = 0;
    int i;
    int direccion;

    while ( existePtr != NULL ) {
      i = strcmp (nombre, existePtr->nombreVariable);
       //printf("%s-%s",nombre,existePtr->nombreVariable);
      if (i == 0){
        direccion = existePtr->direccion;
        printf ("%d\n",direccion);
      }
      existePtr = existePtr->nextPtr;   
      } // end while
      return direccion;
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
  push (&PilaO, contBoolTmp);
  contBoolTmp++;
  insertCuadruplos( &startCuadruplos, operacion, operando1, operando2, resultado);
}
void unoEstIf(){
  //21 gotof
  int guarda;
  insertCuadruplos(&startCuadruplos, 21,PilaO->nextPtr->data,0,0);
  guarda = PilaO->data;
  pop(&PilaO);
  pop(&PilaO);
  push(&PilaO,guarda);
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
  FILE *archivo;/*El manejador de archivo*/
     archivo=fopen("codigointermedio.txt", "a");
     if(archivo==NULL)/*So no lo logramos abrir, salimos*/
         exit(EXIT_FAILURE);
      fprintf(archivo, "-\n");
      fprintf(archivo, "%d-%d-%d-%d\n",globalesInt,globalesFloat,globalesStr,globalesBool);
      fprintf(archivo,"Main-0-%d-%d-%d-%d-%d-%d-%d-%d",mainInt,mainFloat,mainStr,mainBool,contEntTmp-10000,contFlotTmp-11000,contStrTmp-12000,contBoolTmp-13000);
      fclose(archivo);
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

