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
#line 1 "semantico.y" /* yacc.c:339  */



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

/* 
** La siguiente declaracion permite que ’yyerror’ se pueda invocar desde el
** fuente de lex (prueba.l)
*/
void yyerror(const char* msg);

/* 
** La siguiente variable se usará para conocer el numero de la línea
** que se esta leyendo en cada momento. También es posible usar la variable
** ’yylineno’ que también nos muestra la línea actual. Para ello es necesario
** invocar a flex con la opción ’-l’ (compatibilidad con lex).
*/
int yydebug=1;



#line 91 "semantico.tab.c" /* yacc.c:339  */

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
    OPOR = 258,
    OPAND = 259,
    OPRELACIONAL = 260,
    SUMRES = 261,
    OPBINARIO = 262,
    OPUNARIO = 263,
    ASIGNACION = 264,
    CORIZQ = 265,
    CORDER = 266,
    TIPOBASICO = 267,
    CONSTENTERA = 268,
    CONSTLOGICA = 269,
    CONSTREAL = 270,
    CONSTCARACTER = 271,
    CONSTCADENA = 272,
    COMA = 273,
    PARDER = 274,
    PARIZQ = 275,
    PUNTOYCOMA = 276,
    INICIOBLOQUE = 277,
    FINBLOQUE = 278,
    VAR = 279,
    FINVAR = 280,
    SI = 281,
    SINO = 282,
    MIENTRAS = 283,
    LEER = 284,
    ESCRIBIR = 285,
    DEVOLVER = 286,
    REPETIR = 287,
    HASTA = 288,
    PRINCIPAL = 289,
    IDENT = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 175 "semantico.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    69,    69,    69,    71,    71,    73,    73,
      75,    75,    75,    77,    78,    80,    80,    81,    83,    84,
      85,    87,   111,   116,   117,   119,   119,   121,   122,   124,
     125,   126,   128,   129,   131,   131,   133,   134,   135,   136,
     137,   138,   139,   140,   142,   146,   148,   151,   154,   156,
     158,   160,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   176,   177,   178,   180,   181,   183,
     183,   185,   186,   187,   188,   189,   191,   192,   194,   196,
     197,   198,   199,   201,   203,   208,   210,   211,   213,   215,
     220,   222,   223,   225,   227,   232,   234,   235,   237,   239,
     244,   246,   247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPOR", "OPAND", "OPRELACIONAL",
  "SUMRES", "OPBINARIO", "OPUNARIO", "ASIGNACION", "CORIZQ", "CORDER",
  "TIPOBASICO", "CONSTENTERA", "CONSTLOGICA", "CONSTREAL", "CONSTCARACTER",
  "CONSTCADENA", "COMA", "PARDER", "PARIZQ", "PUNTOYCOMA", "INICIOBLOQUE",
  "FINBLOQUE", "VAR", "FINVAR", "SI", "SINO", "MIENTRAS", "LEER",
  "ESCRIBIR", "DEVOLVER", "REPETIR", "HASTA", "PRINCIPAL", "IDENT",
  "$accept", "programa", "bloque", "$@1", "$@2", "declar_subprogs",
  "declar_subprog", "$@3", "declar_variables_locales", "$@4",
  "variables_locales", "cuerpo_declar_variables", "$@5", "lista_variables",
  "variable", "declar_matriz", "cabecera_subprograma", "$@6",
  "tipo_retorno", "lista_parametros", "parametro", "sentencias",
  "sentencia", "asignacion", "si", "mientras", "entrada", "salida",
  "devolver", "repetir_hasta", "expresion", "lista_expresiones",
  "lista_expresiones_cad", "exp_cad", "constante", "llamada_funcion",
  "constante_matriz", "auxiliar_matriz", "agregado_entero",
  "fila_agregado_entero", "lista_entera", "agregado_real",
  "fila_agregado_real", "lista_real", "agregado_logico",
  "fila_agregado_logico", "lista_logica", "agregado_caracter",
  "fila_agregado_caracter", "lista_caracter", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -67

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,    -7,    44,  -153,  -153,  -153,    11,  -153,  -153,     6,
      39,  -153,  -153,     9,  -153,    37,   153,  -153,  -153,    17,
      25,  -153,  -153,    52,  -153,    43,    55,    25,    23,   113,
     153,    37,  -153,    61,    53,   153,    60,  -153,  -153,    75,
      82,    84,    87,    -7,  -153,    92,     7,    -2,   113,   113,
    -153,  -153,   113,   113,  -153,  -153,  -153,  -153,  -153,   113,
      76,    10,  -153,   186,  -153,    64,  -153,  -153,  -153,   186,
      46,  -153,   113,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,   100,  -153,    25,    25,  -153,   112,    50,   135,  -153,
    -153,   152,  -153,  -153,  -153,  -153,   107,  -153,   115,   116,
    -153,   122,   126,  -153,   124,   128,  -153,   129,   133,    58,
     113,   113,   113,   113,   113,    23,   132,   186,   141,  -153,
    -153,   159,   153,   153,  -153,  -153,   160,   161,   163,   171,
     158,   173,   178,   179,  -153,   162,   177,    94,   117,    35,
     170,  -153,  -153,   113,   164,   181,    31,  -153,   174,  -153,
     116,  -153,   126,  -153,   128,  -153,   133,  -153,    96,  -153,
     157,    37,  -153,   180,   141,   153,  -153,  -153,  -153,   141,
    -153,  -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     2,     1,    12,    10,     7,     0,
       4,    17,    15,     0,    14,    28,    35,     6,     8,     0,
       0,    11,    13,     0,    27,     0,     0,     0,     0,     0,
       0,    22,    36,     0,     0,    35,     0,    38,    39,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      48,    63,     0,     0,    71,    73,    74,    75,    70,     0,
       0,    22,    60,    69,    49,    68,    61,    62,    72,    50,
       0,    21,     0,     5,    34,    37,    40,    41,    42,    43,
       9,     0,    16,     0,     0,    23,     0,     0,     0,    54,
      53,     0,    87,    97,    92,   102,     0,    79,    83,    85,
      80,    88,    90,    81,    93,    95,    82,    98,   100,     0,
       0,     0,     0,     0,     0,     0,     0,    44,     0,    19,
      18,     0,     0,     0,    52,    78,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    65,     0,    56,    59,    57,
      58,    55,    67,     0,     0,     0,     0,    24,    46,    47,
      84,    86,    89,    91,    94,    96,    99,   101,     0,    76,
       0,    33,    26,     0,     0,     0,    64,    51,    32,     0,
      29,    45,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,     5,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,   184,  -153,   -22,   -16,   -14,  -153,  -153,  -153,  -152,
    -153,   167,   -28,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
     -26,    45,    89,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
      79,  -153,  -153,    78,  -153,  -153,    77,  -153,  -153,    80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    32,     6,    16,    10,    17,    43,     8,     9,
      13,    14,    20,    45,    62,    71,    18,    81,    19,   145,
     146,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      63,   136,    64,    65,    66,    67,    68,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    24,    70,    69,    46,    50,     4,    11,    83,    85,
      11,    46,   170,     1,    33,     3,    86,   172,    12,    33,
      23,    12,    87,    88,    51,    84,    89,    90,   -20,    52,
     109,    53,   163,    91,    21,     7,    54,    55,    56,    57,
      58,   113,   114,    59,     5,    60,   117,    23,    80,   164,
     -31,    15,    44,   110,   111,   112,   113,   114,    61,    51,
      31,   119,   120,    48,    52,    47,    53,    46,    46,   122,
      72,    54,    55,    56,    57,    49,    73,   134,    59,   116,
      60,    75,   115,   135,   137,   138,   139,   140,   141,    92,
      93,    94,    95,    61,   148,   149,    76,    51,   111,   112,
     113,   114,    52,    77,    53,    78,    33,    33,    79,    54,
      55,    56,    57,    82,    51,   -66,    59,   160,    60,    52,
     118,    53,   112,   113,   114,   121,    54,    55,    56,    57,
     125,    61,   135,    59,   127,    60,   126,   171,   110,   111,
     112,   113,   114,   128,   129,   130,   131,   168,    61,    33,
     132,   133,   143,   144,   123,   110,   111,   112,   113,   114,
     110,   111,   112,   113,   114,   110,   111,   112,   113,   114,
     147,   124,    93,    92,   151,     3,   167,   114,    94,    25,
     158,    26,    27,    28,    29,    30,   153,   155,    31,   110,
     111,   112,   113,   114,    95,   157,   159,    22,   169,   161,
     162,   165,    74,   166,   142,   150,   152,   154,     0,     0,
       0,     0,   156
};

static const yytype_int16 yycheck[] =
{
      16,    15,    30,    29,    20,    27,     1,     1,     1,    11,
       1,    27,   164,    34,    30,    22,    18,   169,    12,    35,
      10,    12,    48,    49,     1,    18,    52,    53,    21,     6,
      20,     8,     1,    59,    25,    24,    13,    14,    15,    16,
      17,     6,     7,    20,     0,    22,    72,    10,    43,    18,
      19,    12,    35,     3,     4,     5,     6,     7,    35,     1,
      35,    83,    84,    20,     6,    13,     8,    83,    84,    19,
       9,    13,    14,    15,    16,    20,    23,    19,    20,    33,
      22,    21,    18,   109,   110,   111,   112,   113,   114,    13,
      14,    15,    16,    35,   122,   123,    21,     1,     4,     5,
       6,     7,     6,    21,     8,    21,   122,   123,    21,    13,
      14,    15,    16,    21,     1,    19,    20,   143,    22,     6,
      20,     8,     5,     6,     7,    13,    13,    14,    15,    16,
      23,    35,   158,    20,    18,    22,    21,   165,     3,     4,
       5,     6,     7,    21,    18,    21,    18,   161,    35,   165,
      21,    18,    20,    12,    19,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
      11,    19,    14,    13,    13,    22,    19,     7,    15,    26,
      18,    28,    29,    30,    31,    32,    15,    14,    35,     3,
       4,     5,     6,     7,    16,    16,    19,    13,    18,    35,
      19,    27,    35,   158,   115,   126,   128,   130,    -1,    -1,
      -1,    -1,   132
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    37,    22,    38,     0,    39,    24,    44,    45,
      41,     1,    12,    46,    47,    12,    40,    42,    52,    54,
      48,    25,    47,    10,    51,    26,    28,    29,    30,    31,
      32,    35,    38,    50,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    43,    35,    49,    50,    13,    20,    20,
      49,     1,     6,     8,    13,    14,    15,    16,    17,    20,
      22,    35,    50,    66,    68,    69,    70,    71,    72,    66,
      58,    51,     9,    23,    57,    21,    21,    21,    21,    21,
      38,    53,    21,     1,    18,    11,    18,    66,    66,    66,
      66,    66,    13,    14,    15,    16,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    20,
       3,     4,     5,     6,     7,    18,    33,    66,    20,    49,
      49,    13,    19,    19,    19,    23,    21,    18,    21,    18,
      21,    18,    21,    18,    19,    66,    67,    66,    66,    66,
      66,    66,    68,    20,    12,    55,    56,    11,    58,    58,
      76,    13,    79,    15,    82,    14,    85,    16,    18,    19,
      66,    35,    19,     1,    18,    27,    67,    19,    51,    18,
      55,    58,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    39,    40,    38,    41,    41,    43,    42,
      45,    44,    44,    46,    46,    48,    47,    47,    49,    49,
      49,    50,    50,    51,    51,    53,    52,    54,    54,    55,
      55,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    60,    60,    61,    62,    63,
      64,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    71,    71,    72,    73,
      73,    73,    73,    74,    75,    75,    76,    76,    77,    78,
      78,    79,    79,    80,    81,    81,    82,    82,    83,    84,
      84,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     7,     2,     0,     0,     3,
       0,     4,     0,     2,     1,     0,     4,     1,     3,     3,
       1,     2,     1,     3,     5,     0,     6,     2,     1,     3,
       4,     1,     3,     2,     2,     0,     1,     2,     1,     1,
       2,     2,     2,     2,     3,     7,     5,     5,     2,     2,
       2,     6,     3,     2,     2,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     3,     1,     3,     1,     1,     3,
       1,     3,     1
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
    int yystate;
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
        case 3:
#line 69 "semantico.y" /* yacc.c:1646  */
    { tsInsertaMarca(); }
#line 1395 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 69 "semantico.y" /* yacc.c:1646  */
    { declarVar = 2; }
#line 1401 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 69 "semantico.y" /* yacc.c:1646  */
    { tsVaciarEntradas(); }
#line 1407 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "semantico.y" /* yacc.c:1646  */
    { subProg = 1; }
#line 1413 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "semantico.y" /* yacc.c:1646  */
    { subProg = 0; }
#line 1419 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 75 "semantico.y" /* yacc.c:1646  */
    { declarVar = 1; }
#line 1425 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 75 "semantico.y" /* yacc.c:1646  */
    { declarVar = 0; }
#line 1431 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 80 "semantico.y" /* yacc.c:1646  */
    { asignaTipoGlobal((yyvsp[0])); }
#line 1437 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "semantico.y" /* yacc.c:1646  */
    { 
		if(declarVar == 1) { 
			(yyvsp[-1]).numDim=(yyvsp[0]).numDim; (yyvsp[-1]).tamDim1=(yyvsp[0]).tamDim1; (yyvsp[-1]).tamDim2=(yyvsp[0]).tamDim2; tsInsertaIdent((yyvsp[-1])); 
		} else { 
			if (declarVar == 2) { // Llamada desde expresion, en cuyo caso lo buscamos y despues vemos que esta pasando
				tsGetIdent((yyvsp[-1]), &(yyval));
				// Ahora comparamos los datos de la tabla de símbolos con lo que nos encontramos escrito
				if((yyval).numDim == (yyvsp[0]).numDim) { // Si coinciden los tamaños, significa que estamos accediendo a un elemento
					(yyval).numDim = 0; (yyval).tamDim1 = 0; (yyval).tamDim2 = 0; // Por lo tanto hemos reducido la dimensionalidad a 0
				} else { // Si no coinciden, el tamaño dimensional del elemento en la TS siempre debe ser mayor que el encontrado aquí
					if((yyval).numDim > (yyvsp[0]).numDim) { // Se está utilizando
						if((yyvsp[0]).numDim == 0) { // Debe ser 0, es lo único que nos sirve pq no vamos a acceder a interdimensionalidades
							(yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2; // Mantenemos la dimensionalidad
						} else { // Error
							printf("Error linea %d: Esta accediendose a una dimension intermedia: no permitido.\n",lineaActual); 
						}
					} else { // Error, no puede ocurrir, se está accediendo a más dimensiones de las declaradas
						printf("Error linea %d: Esta accediendose a mas dimensiones de las declaradas.\n",lineaActual); }
				}
			} else {
				tsGetIdent((yyvsp[-1]), &(yyval)); 
			}  
		}
	}
#line 1466 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 111 "semantico.y" /* yacc.c:1646  */
    { 
		if(declarVar == 1) { (yyvsp[0]).numDim=0; (yyvsp[0]).tamDim1 = 0; (yyvsp[0]).tamDim2 = 0; tsInsertaIdent((yyvsp[0])); }
		else { tsGetIdent((yyvsp[0]), &(yyval)); }  
	}
#line 1475 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "semantico.y" /* yacc.c:1646  */
    {(yyval).numDim = 1; (yyval).tamDim1=atoi((yyvsp[-1]).lexema); (yyval).tamDim2 = 0; }
#line 1481 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "semantico.y" /* yacc.c:1646  */
    {(yyval).numDim = 2; (yyval).tamDim1=atoi((yyvsp[-3]).lexema); (yyval).tamDim2=atoi((yyvsp[-1]).lexema); }
#line 1487 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "semantico.y" /* yacc.c:1646  */
    { declarPar = 1; tsInsertaSubprog((yyvsp[0])); }
#line 1493 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "semantico.y" /* yacc.c:1646  */
    { tsActualizaNparam((yyvsp[-5])); numParam = 0; declarPar = 0; }
#line 1499 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 121 "semantico.y" /* yacc.c:1646  */
    {(yyval).numDim=(yyvsp[0]).numDim; (yyval).tamDim1=(yyvsp[0]).tamDim1; (yyval).tamDim2=(yyvsp[0]).tamDim2; }
#line 1505 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 122 "semantico.y" /* yacc.c:1646  */
    {(yyvsp[0]).numDim=0;}
#line 1511 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "semantico.y" /* yacc.c:1646  */
    {(yyvsp[-1]).numDim=(yyvsp[0]).numDim; (yyvsp[-1]).tamDim1=(yyvsp[0]).tamDim1; (yyvsp[-1]).tamDim2=(yyvsp[0]).tamDim2; numParam++; asignaTipoGlobal((yyvsp[-2])); tsInsertaParamFormal((yyvsp[-1])); }
#line 1517 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "semantico.y" /* yacc.c:1646  */
    { (yyvsp[0]).numDim=0; numParam++; asignaTipoGlobal((yyvsp[-1])); tsInsertaParamFormal((yyvsp[0])); }
#line 1523 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "semantico.y" /* yacc.c:1646  */
    { if((yyvsp[-2]).tipo!=(yyvsp[0]).tipo) {  printf("Error asign linea %d: Los tipos de la parte izquierda %d y derecha %d no coinciden.\n",lineaActual, (yyvsp[-2]).tipo, (yyvsp[0]).tipo); }
		if(!igualTam((yyvsp[-2]),(yyvsp[0])))  { imprimeAtributo((yyvsp[-2]),"izq"); imprimeAtributo((yyvsp[0]), "der");printf("Error asign linea %d: La parte izquierda y la parte derecha deben tener el mismo tamanyo.\n",lineaActual); } }
#line 1530 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "semantico.y" /* yacc.c:1646  */
    { if((yyvsp[-4]).tipo != BOOLEANO) { printf("Error si linea %d: La expresion no es de tipo logico.\n", lineaActual);}}
#line 1536 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 149 "semantico.y" /* yacc.c:1646  */
    { if((yyvsp[-2]).tipo != BOOLEANO) { printf("Error si linea %d: La expresion no es de tipo logico.\n", lineaActual);}}
#line 1542 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "semantico.y" /* yacc.c:1646  */
    { if((yyvsp[-2]).tipo != BOOLEANO) { printf("Error mientras linea %d: La expresion no es de tipo logico.\n", lineaActual);}}
#line 1548 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 161 "semantico.y" /* yacc.c:1646  */
    { if((yyvsp[-1]).tipo != BOOLEANO) { printf("Error until linea %d: La expresion no es de tipo logico.\n", lineaActual);}}
#line 1554 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 163 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = (yyvsp[-1]).tipo; (yyval).numDim = (yyvsp[-1]).numDim; (yyval).tamDim1 = (yyvsp[-1]).tamDim1; (yyval).tamDim2 = (yyvsp[-1]).tamDim2; }
#line 1560 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 164 "semantico.y" /* yacc.c:1646  */
    {tsOpNot((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1566 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 165 "semantico.y" /* yacc.c:1646  */
    {tsOpSumResUnario((yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1572 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 166 "semantico.y" /* yacc.c:1646  */
    {tsOpMulDiv((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1578 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "semantico.y" /* yacc.c:1646  */
    {tsOpOrXor((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1584 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 168 "semantico.y" /* yacc.c:1646  */
    {tsOpRel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1590 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 169 "semantico.y" /* yacc.c:1646  */
    { tsOpSumRes((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1596 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "semantico.y" /* yacc.c:1646  */
    {tsOpAnd((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), &(yyval)); }
#line 1602 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "semantico.y" /* yacc.c:1646  */
    { declarVar = 0; }
#line 1608 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = (yyvsp[0]).tipo; (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2; }
#line 1614 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 173 "semantico.y" /* yacc.c:1646  */
    {(yyval).tipo = (yyvsp[0]).tipo; (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2; funcionActual = -1;}
#line 1620 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 176 "semantico.y" /* yacc.c:1646  */
    { numParam++; tsCompruebaParametro((yyvsp[0]), numParam); }
#line 1626 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 177 "semantico.y" /* yacc.c:1646  */
    { numParam = 1; tsCompruebaParametro((yyvsp[0]), 1); }
#line 1632 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "semantico.y" /* yacc.c:1646  */
    {numParam = 0;}
#line 1638 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 185 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = ENTERO; (yyval).numDim = 0; (yyval).tamDim1 = 0; (yyval).tamDim2 = 0; }
#line 1644 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 186 "semantico.y" /* yacc.c:1646  */
    { auxiliarAgregados = 1; (yyval).tipo = (yyvsp[0]).tipo; (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2; }
#line 1650 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 187 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = BOOLEANO; (yyval).numDim = 0; (yyval).tamDim1 = 0; (yyval).tamDim2 = 0; }
#line 1656 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = REAL; (yyval).numDim = 0; (yyval).tamDim1 = 0; (yyval).tamDim2 = 0; }
#line 1662 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 189 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = CARACTER; (yyval).numDim = 0; (yyval).tamDim1 = 0; (yyval).tamDim2 = 0; }
#line 1668 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 191 "semantico.y" /* yacc.c:1646  */
    { tsLlamadaFuncion((yyvsp[-3]), &(yyval)); }
#line 1674 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 192 "semantico.y" /* yacc.c:1646  */
    { tsLlamadaFuncion((yyvsp[-2]), &(yyval)); }
#line 1680 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 194 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = (yyvsp[-1]).tipo; (yyval).numDim = (yyvsp[-1]).numDim; (yyval).tamDim1 = (yyvsp[-1]).tamDim1; (yyval).tamDim2 = (yyvsp[-1]).tamDim2;}
#line 1686 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 196 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = ENTERO; }
#line 1692 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 197 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = REAL;}
#line 1698 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 198 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = BOOLEANO; }
#line 1704 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 199 "semantico.y" /* yacc.c:1646  */
    { (yyval).tipo = CARACTER; }
#line 1710 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 201 "semantico.y" /* yacc.c:1646  */
    { (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2;}
#line 1716 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 203 "semantico.y" /* yacc.c:1646  */
    { if ((yyval).tamDim2 != (yyvsp[0]).tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1++; (yyval).numDim = 2;
																			} }
#line 1726 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 208 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1 = 1; (yyval).numDim = 1;}
#line 1732 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 210 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1++; }
#line 1738 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 211 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1 = 1; auxiliarAgregados = 1; }
#line 1744 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 213 "semantico.y" /* yacc.c:1646  */
    { (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2;}
#line 1750 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 215 "semantico.y" /* yacc.c:1646  */
    { if ((yyval).tamDim2 != (yyvsp[0]).tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1++; (yyval).numDim = 2;
																			} }
#line 1760 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 220 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1 = 1; (yyval).numDim = 1;}
#line 1766 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 222 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1++; }
#line 1772 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 223 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1 = 1; auxiliarAgregados = 1; }
#line 1778 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 225 "semantico.y" /* yacc.c:1646  */
    { (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2;}
#line 1784 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 227 "semantico.y" /* yacc.c:1646  */
    { if ((yyval).tamDim2 != (yyvsp[0]).tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1++; (yyval).numDim = 2;
																			} }
#line 1794 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 232 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1 = 1; (yyval).numDim = 1;}
#line 1800 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 234 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1++; }
#line 1806 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 235 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1 = 1; auxiliarAgregados = 1; }
#line 1812 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 237 "semantico.y" /* yacc.c:1646  */
    { (yyval).numDim = (yyvsp[0]).numDim; (yyval).tamDim1 = (yyvsp[0]).tamDim1; (yyval).tamDim2 = (yyvsp[0]).tamDim2;}
#line 1818 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 239 "semantico.y" /* yacc.c:1646  */
    { if ((yyval).tamDim2 != (yyvsp[0]).tamDim1) {
																		printf("Error, numero de filas no equivalente\n");
																	} else {
																		 (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1++; (yyval).numDim = 2;
																			} }
#line 1828 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 244 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim2 = (yyvsp[0]).tamDim1; (yyval).tamDim1 = 1; (yyval).numDim = 1;}
#line 1834 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 246 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1++; }
#line 1840 "semantico.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 247 "semantico.y" /* yacc.c:1646  */
    { (yyval).tamDim1 = 1; auxiliarAgregados = 1; }
#line 1846 "semantico.tab.c" /* yacc.c:1646  */
    break;


#line 1850 "semantico.tab.c" /* yacc.c:1646  */
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
        char const *yymsgp = YY_("syntax error");
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
#line 249 "semantico.y" /* yacc.c:1906  */



/** Aqui incluimos el fichero generado por el ’lex’
*** que implementa la función ’yylex’
**/
#ifdef DOSWINDOWS /* Variable de entorno que indica la plataforma */
#include "lexyy.c"
#else
#include "lex.yy.c"
#endif
/** Se debe implementar la función yyerror. En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/
void yyerror(const char* msg)
{
	fprintf(stderr,"[Linea %d]:%s\n", lineaActual, msg);
}