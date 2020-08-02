/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 9 "parser.y"

    #include<stdio.h>
    #include<unistd.h>

    #include"GrammarTree.h"
    #include"Nonterminals.h"
    #include"ScopeStack.h"
    #include"ArrayInfo.h"
    #include"SymbolTable.h"
    
    int yylex();
    void yyerror(const char* fmt, ...);
    
    extern int tuple_trigger;
    extern int semantic_check;
    extern int gmerror;
    extern int yylineno;

    ScopeStack stack;

#line 91 "parser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Void = 258,
    T_Int = 259,
    T_Const = 260,
    T_While = 261,
    T_If = 262,
    T_Else = 263,
    T_Return = 264,
    T_Break = 265,
    T_Continue = 266,
    T_LessEqual = 267,
    T_GreaterEqual = 268,
    T_Equal = 269,
    T_NotEqual = 270,
    T_And = 271,
    T_Or = 272,
    T_Identifier = 273,
    T_StringConstant = 274,
    T_IntConstant = 275,
    T_NoElse = 276
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "parser.y"

    GrammarTree grammar_tree;

#line 169 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   588

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

#define YYUNDEFTOK  2
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,    25,     2,     2,
      31,    38,    23,    21,    33,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
      28,    26,    29,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,   111,   116,   121,   126,   134,   139,   147,
     155,   160,   168,   171,   177,   182,   193,   202,   215,   220,
     228,   237,   241,   249,   253,   261,   268,   272,   279,   283,
     287,   294,   301,   305,   311,   314,   320,   328,   337,   342,
     349,   354,   361,   366,   373,   377,   385,   389,   424,   427,
     430,   433,   436,   439,   442,   445,   448,   451,   454,   461,
     464,   467,   470,   473,   476,   479,   482,   485,   488,   491,
     494,   497,   500,   503,   506,   509,   512,   515,   518,   521,
     524,   530,   533,   540,   543
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Int", "T_Const", "T_While",
  "T_If", "T_Else", "T_Return", "T_Break", "T_Continue", "T_LessEqual",
  "T_GreaterEqual", "T_Equal", "T_NotEqual", "T_And", "T_Or",
  "T_Identifier", "T_StringConstant", "T_IntConstant", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'='", "'!'", "'<'", "'>'", "T_NoElse", "'('", "';'",
  "','", "'['", "']'", "'{'", "'}'", "')'", "$accept", "Program",
  "CompUnit", "Decl", "ConstDecl", "ConstDefSeq", "BType", "ConstDef",
  "ConstArraySubSeq", "ArraySubSeq", "ConstInitVal", "ConstInitValSeq",
  "VarDecl", "VarDefSeq", "VarDef", "InitVal", "InitValSeq", "FuncDef",
  "FuncFParams", "FuncFParam", "Block", "BlockItemSeq", "BlockItem",
  "Stmt", "Exp", "LVal", "FuncRParams", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,    37,    61,    33,    60,    62,
     276,    40,    59,    44,    91,    93,   123,   125,    41
};
# endif

#define YYPACT_NINF (-93)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      77,   -93,   -93,    59,     9,    77,   -93,   -93,   -13,   -93,
     -93,    -7,   -93,   -93,   -93,     3,    38,   -93,     5,    70,
     -93,   436,    19,   557,     6,   -93,    10,   455,    32,   -93,
      -7,     7,   -93,   -93,   557,   557,   557,   557,   436,   -93,
     480,   -93,    24,    56,    39,   -93,   263,   436,   557,    33,
     -93,   416,   -93,   480,   455,   -93,    67,   557,   -10,    83,
      83,   -93,   209,   -93,   -25,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   117,   -93,
       8,    59,    24,   -93,   -93,   287,   -93,   -93,   -12,   -93,
     -93,   480,    57,   311,   557,   -93,   436,   -93,   108,   108,
     530,   530,   516,   498,    83,    83,   -93,   -93,   -93,   108,
     108,    47,    53,   542,    61,    68,   -93,   -93,   -93,    10,
     -93,   152,   -93,   -93,   359,    65,    75,   -93,   -93,   -93,
     455,   -93,   557,   -93,   -93,   335,   -93,   557,   557,   -93,
     380,   -93,   -93,   -93,   -93,   -93,   557,    78,   -93,   480,
     -93,   227,   245,   -93,   401,   -10,   184,   184,   -93,   -93,
     105,   184,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,    13,     0,     0,     2,     3,     7,     0,     8,
       4,     0,     1,     5,     6,    28,     0,    26,     0,     0,
      10,     0,     0,     0,    29,    25,     0,     0,     0,     9,
       0,    82,    61,    62,     0,     0,     0,     0,     0,    30,
      32,    60,     0,     0,     0,    38,     0,     0,     0,    28,
      27,     0,    14,    20,     0,    11,     0,     0,    81,    65,
      66,    67,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      40,     0,     0,    16,    31,     0,    22,    23,     0,    15,
      64,    83,     0,     0,     0,    59,     0,    33,    75,    76,
      77,    78,    79,    80,    71,    72,    68,    69,    70,    74,
      73,     0,     0,     0,     0,     0,    50,    42,    46,     0,
      51,     0,    44,    47,     0,    60,     0,    39,    37,    17,
       0,    21,     0,    63,    18,     0,    35,     0,     0,    58,
       0,    55,    56,    43,    45,    49,     0,     0,    24,    84,
      19,     0,     0,    57,     0,    41,     0,     0,    48,    54,
      52,     0,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,   -93,    99,   -93,   -93,    -2,    84,    97,   -29,
     -47,   -93,   -93,   -93,   114,   -28,   -93,   129,   -93,    60,
     -39,   -93,    21,   -92,   -21,   -60,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,   118,     7,    19,     8,    20,    24,    58,
      52,    88,     9,    16,    17,    39,    64,    10,    44,    45,
     120,   121,   122,   123,   124,    41,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,    11,    46,    79,    87,    15,    53,    89,    96,    12,
      63,    18,    97,    59,    60,    61,    62,    40,   125,    84,
      43,   130,     1,     2,    94,   131,    40,    85,    49,    21,
      53,    27,    47,    53,    22,    91,    93,    23,    56,    23,
      48,    57,   126,   128,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    42,    54,    21,
      78,   125,     1,     2,   159,   160,    48,    23,   136,   162,
      25,    26,    81,   135,    80,    40,   119,    82,   137,    43,
       1,     2,     3,   148,   138,    31,    32,    33,    34,    35,
     132,   146,   140,   141,    36,   133,   125,   125,    37,     6,
     142,   125,    29,    30,    13,    90,    73,    74,    75,    53,
     147,   149,    57,   161,    55,    28,   151,   152,   155,   119,
       1,     2,     3,   111,   112,   154,   113,   114,   115,    71,
      72,    73,    74,    75,    14,    31,    32,    33,    34,    35,
      50,   127,   144,     0,    36,     0,     0,     0,    37,   116,
       0,     0,     0,    78,   117,     1,     2,     3,   111,   112,
       0,   113,   114,   115,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,     0,     0,     0,     0,    36,
       0,     0,     0,    37,   116,     0,     0,     0,    78,   143,
     111,   112,     0,   113,   114,   115,     0,     0,     0,     0,
       0,     0,    31,    32,    33,    34,    35,     0,     0,     0,
       0,    36,     0,     0,     0,    37,   116,     0,     0,     0,
      78,    65,    66,    67,    68,    69,    70,     0,     0,     0,
      71,    72,    73,    74,    75,     0,     0,    76,    77,    65,
      66,    67,    68,    69,    70,     0,     0,    95,    71,    72,
      73,    74,    75,     0,     0,    76,    77,    65,    66,    67,
      68,    69,    70,     0,     0,   156,    71,    72,    73,    74,
      75,     0,     0,    76,    77,    65,    66,    67,    68,    69,
      70,     0,     0,   157,    71,    72,    73,    74,    75,     0,
       0,    76,    77,     0,     0,     0,     0,     0,    83,    65,
      66,    67,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,     0,     0,    76,    77,     0,     0,     0,
       0,     0,   129,    65,    66,    67,    68,    69,    70,     0,
       0,     0,    71,    72,    73,    74,    75,     0,     0,    76,
      77,     0,     0,     0,     0,     0,   134,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    71,    72,    73,    74,
      75,     0,     0,    76,    77,     0,     0,     0,     0,     0,
     150,    65,    66,    67,    68,    69,    70,     0,     0,     0,
      71,    72,    73,    74,    75,     0,     0,    76,    77,     0,
       0,   145,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    76,    77,
       0,     0,   153,    65,    66,    67,    68,    69,    70,     0,
       0,     0,    71,    72,    73,    74,    75,     0,     0,    76,
      77,     0,     0,   158,    31,    32,    33,    34,    35,     0,
       0,     0,     0,    36,     0,     0,     0,    37,     0,     0,
       0,     0,    51,    86,    31,    32,    33,    34,    35,     0,
       0,     0,     0,    36,     0,     0,     0,    37,     0,     0,
       0,     0,    38,    31,    32,    33,    34,    35,     0,     0,
       0,     0,    36,     0,     0,     0,    37,     0,     0,     0,
       0,    51,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    76,    77,
      65,    66,    67,    68,    69,     0,     0,     0,     0,    71,
      72,    73,    74,    75,     0,     0,    76,    77,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    65,    66,    76,    77,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,     0,     0,    76,    77,
      31,    32,    33,    34,    35,     0,     0,     0,     0,    36,
       0,     0,     0,    37,   139,    31,    32,    33,    34,    35,
       0,     0,     0,     0,    36,     0,     0,     0,    37
};

static const yytype_int16 yycheck[] =
{
      21,     3,    23,    42,    51,    18,    27,    54,    33,     0,
      38,    18,    37,    34,    35,    36,    37,    38,    78,    47,
      22,    33,     3,     4,    34,    37,    47,    48,    18,    26,
      51,    26,    26,    54,    31,    56,    57,    34,    31,    34,
      34,    34,    34,    82,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    38,    26,    26,
      36,   121,     3,     4,   156,   157,    34,    34,    96,   161,
      32,    33,    33,    94,    18,    96,    78,    38,    31,    81,
       3,     4,     5,   130,    31,    18,    19,    20,    21,    22,
      33,    26,   113,    32,    27,    38,   156,   157,    31,     0,
      32,   161,    32,    33,     5,    38,    23,    24,    25,   130,
      35,   132,    34,     8,    30,    18,   137,   138,   147,   121,
       3,     4,     5,     6,     7,   146,     9,    10,    11,    21,
      22,    23,    24,    25,     5,    18,    19,    20,    21,    22,
      26,    81,   121,    -1,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    36,    37,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,    37,
       6,     7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    12,
      13,    14,    15,    16,    17,    -1,    -1,    38,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    12,    13,    14,
      15,    16,    17,    -1,    -1,    38,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    12,    13,    14,    15,    16,
      17,    -1,    -1,    38,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    32,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    32,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    32,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    36,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    12,    13,    28,    29,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    32,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    40,    41,    42,    43,    45,    51,
      56,    45,     0,    42,    56,    18,    52,    53,    18,    44,
      46,    26,    31,    34,    47,    32,    33,    26,    47,    32,
      33,    18,    19,    20,    21,    22,    27,    31,    36,    54,
      63,    64,    38,    45,    57,    58,    63,    26,    34,    18,
      53,    36,    49,    63,    26,    46,    31,    34,    48,    63,
      63,    63,    63,    54,    55,    12,    13,    14,    15,    16,
      17,    21,    22,    23,    24,    25,    28,    29,    36,    59,
      18,    33,    38,    35,    54,    63,    37,    49,    50,    49,
      38,    63,    65,    63,    34,    38,    33,    37,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,     6,     7,     9,    10,    11,    32,    37,    42,    45,
      59,    60,    61,    62,    63,    64,    34,    58,    59,    35,
      33,    37,    33,    38,    35,    63,    54,    31,    31,    32,
      63,    32,    32,    37,    61,    32,    26,    35,    49,    63,
      35,    63,    63,    32,    63,    48,    38,    38,    32,    62,
      62,     8,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    42,    42,    43,
      44,    44,    45,    45,    46,    46,    47,    47,    48,    48,
      49,    49,    49,    50,    50,    51,    52,    52,    53,    53,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     1,     1,     4,
       1,     3,     1,     1,     3,     4,     3,     4,     3,     4,
       1,     3,     2,     1,     3,     3,     1,     3,     1,     2,
       3,     4,     1,     3,     1,     3,     5,     6,     1,     3,
       2,     5,     2,     3,     1,     2,     1,     1,     4,     2,
       1,     1,     5,     7,     5,     2,     2,     3,     2,     3,
       1,     1,     1,     4,     3,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 70 "parser.y"
                   { // GlobalScope
    // 1. 语法分析 建立AST
    (yyval.grammar_tree) = CreateGrammarTree(Program, 1, (yyvsp[0].grammar_tree)); 
    // 2. 打印二元组和语法树
    if (tuple_trigger)
    {
        printf("__________________________________________________\n\n");
        printf("The two-tuples of \"Lexical Analyzing\" are printed!\n");
        printf("__________________________________________________\n");
    }
    if (!gmerror) {
        printf("\nNow print the grammar-tree of \"Grammar Analyzing\":\n");
        printf("__________________________________________________\n\n"); 
        TraverseGrammarTree((yyval.grammar_tree), 0);
        printf("__________________________________________________\n\n"); 
        printf("The grammar-tree of \"Grammar Analyzing\" is printed!\n\n"); 
    }
    // 把CompUnit的GlobalScope作为Program的GlobalScope
    (yyval.grammar_tree)->global_scope = (yyvsp[0].grammar_tree)->global_scope;
    InitScopeStack(stack);
    Scope scope;
    scope.type = ScopeGlobal;
    scope.global = (yyval.grammar_tree)->global_scope;
    // 若semantic_check开启 则执行ScopeTrial进行静态语义检查
    if (semantic_check) 
    {
        ScopeTrial((yyval.grammar_tree), scope, stack);
    }
    // 没有语义错误时 打印符号表
    if (!smerror)
    {
        printf("\nNow print the symbol tables of \"Semantic Analyzing\":\n");
        printf("__________________________________________________\n\n"); 
        DisplayGlobalScope((yyvsp[0].grammar_tree)->global_scope, "Program"); // TODO: impl this
        printf("__________________________________________________\n\n"); 
        printf("The symbol tables of \"Semantic Analyzing\" is printed!\n\n"); 
    }
}
#line 1686 "parser.tab.c"
    break;

  case 3:
#line 111 "parser.y"
         {
    (yyval.grammar_tree) = CreateGrammarTree(CompUnit, 1, (yyvsp[0].grammar_tree));
    // 新建一个GlobalScopeEntry 因为Decl默认为LocalScopeEntry 所以需要对其进行转换
    (yyval.grammar_tree)->global_scope = AddLocalIntoGlobal((yyval.grammar_tree)->global_scope, (yyvsp[0].grammar_tree)->local_scope);
}
#line 1696 "parser.tab.c"
    break;

  case 4:
#line 116 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(CompUnit, 1, (yyvsp[0].grammar_tree));
    // FuncDef已经是GlobalScopeEntry 直接加入即可
    (yyval.grammar_tree)->global_scope = AddEntryIntoGlobalScope((yyval.grammar_tree)->global_scope, (yyvsp[0].grammar_tree)->global_entry);
}
#line 1706 "parser.tab.c"
    break;

  case 5:
#line 121 "parser.y"
                  {
    (yyval.grammar_tree) = CreateGrammarTree(CompUnit, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
    // 将Decl转换为GlobalScopeEntry 然后连接到CompUnit上
    (yyval.grammar_tree)->global_scope = AddLocalIntoGlobal((yyvsp[-1].grammar_tree)->global_scope, (yyvsp[0].grammar_tree)->local_scope);
}
#line 1716 "parser.tab.c"
    break;

  case 6:
#line 126 "parser.y"
                     {
    (yyval.grammar_tree) = CreateGrammarTree(CompUnit, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
    // 将FuncDef连接到CompUnit上
    (yyval.grammar_tree)->global_scope = AddEntryIntoGlobalScope((yyvsp[-1].grammar_tree)->global_scope, (yyvsp[0].grammar_tree)->global_entry);
}
#line 1726 "parser.tab.c"
    break;

  case 7:
#line 134 "parser.y"
              {
    (yyval.grammar_tree) = CreateGrammarTree(Decl, 1, (yyvsp[0].grammar_tree));
    // 直接赋值即可
    (yyval.grammar_tree)->local_scope = (yyvsp[0].grammar_tree)->local_scope;
}
#line 1736 "parser.tab.c"
    break;

  case 8:
#line 139 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(Decl, 1, (yyvsp[0].grammar_tree));
    // 直接赋值即可
    (yyval.grammar_tree)->local_scope = (yyvsp[0].grammar_tree)->local_scope;
}
#line 1746 "parser.tab.c"
    break;

  case 9:
#line 147 "parser.y"
                                  {
    (yyval.grammar_tree) = CreateGrammarTree(ConstDecl, 3, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree));
    // 为ConstDefSeq(LocalScope)中的变量添加类型isConst
    (yyval.grammar_tree)->local_scope = AttachTypeToLocalScope((yyvsp[-1].grammar_tree)->local_scope, /* isConst */ true);
}
#line 1756 "parser.tab.c"
    break;

  case 10:
#line 155 "parser.y"
             {
    (yyval.grammar_tree) = CreateGrammarTree(ConstDefSeq, 1, (yyvsp[0].grammar_tree));
    // 新建一个LocalScope 放入ConstDef
    (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, (yyvsp[0].grammar_tree)->local_entry);
}
#line 1766 "parser.tab.c"
    break;

  case 11:
#line 160 "parser.y"
                             {
    (yyval.grammar_tree) = CreateGrammarTree(ConstDefSeq, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    // 将ConstDef连在ConstDefSeq后
    (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyvsp[-2].grammar_tree)->local_scope, (yyvsp[0].grammar_tree)->local_entry);
}
#line 1776 "parser.tab.c"
    break;

  case 12:
#line 168 "parser.y"
           {
    (yyval.grammar_tree) = CreateGrammarTree(BType, 1, (yyvsp[0].grammar_tree));
}
#line 1784 "parser.tab.c"
    break;

  case 13:
#line 171 "parser.y"
          {
    (yyval.grammar_tree) = CreateGrammarTree(BType, 1, (yyvsp[0].grammar_tree));
}
#line 1792 "parser.tab.c"
    break;

  case 14:
#line 177 "parser.y"
                                  {
    (yyval.grammar_tree) = CreateGrammarTree(ConstDef, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    // 新建一个LocalScopeEntry
    (yyval.grammar_tree)->local_entry = NewLocalIntEntry((yyvsp[-2].grammar_tree)->string_value, false, false, NewInitValue((yyvsp[0].grammar_tree)->int_value), NULL);
}
#line 1802 "parser.tab.c"
    break;

  case 15:
#line 182 "parser.y"
                                                   {
    (yyval.grammar_tree) = CreateGrammarTree(ConstDef, 3, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    // 新建一个LocalScopeEntry
    (yyval.grammar_tree)->local_entry = NewLocalArrayEntry((yyvsp[-3].grammar_tree)->string_value, 
                                         true, false, 
                                         NewArrayInfo((yyvsp[-2].grammar_tree)->dims, NULL, (yyvsp[0].grammar_tree)->array_init_value), 
                                         NULL);
}
#line 1815 "parser.tab.c"
    break;

  case 16:
#line 193 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(ConstArraySubSeq, 1, (yyvsp[-1].grammar_tree));
    // 此为第一维的大小
    CheckExprValue((yyvsp[-1].grammar_tree), stack);
    if (!(yyvsp[-1].grammar_tree)->is_constant_expr) {
        yyerror("Line %d: ConstExp needed!", yylineno);
    }
    (yyval.grammar_tree)->dims = AddIntoDimsVector((yyval.grammar_tree)->dims, (yyvsp[-1].grammar_tree)->expr_value);
}
#line 1829 "parser.tab.c"
    break;

  case 17:
#line 202 "parser.y"
                               {
    (yyval.grammar_tree) = CreateGrammarTree(ConstArraySubSeq, 2, (yyvsp[-3].grammar_tree), (yyvsp[-1].grammar_tree));
    CheckExprValue((yyvsp[-1].grammar_tree), stack);
    if (!(yyvsp[-1].grammar_tree)->is_constant_expr) {
        yyerror("Line %d: ConstExp needed!", yylineno);
    }
    (yyval.grammar_tree)->dims = AddIntoDimsVector((yyvsp[-3].grammar_tree)->dims, (yyvsp[-1].grammar_tree)->expr_value);
}
#line 1842 "parser.tab.c"
    break;

  case 18:
#line 215 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(ArraySubSeq, 0, -1);
    // 新建一个空的选择符
    (yyval.grammar_tree)->exprs = AddIntoExprsVector((yyval.grammar_tree)->exprs, (yyvsp[-1].grammar_tree));
}
#line 1852 "parser.tab.c"
    break;

  case 19:
#line 220 "parser.y"
                          {
    (yyval.grammar_tree) = CreateGrammarTree(ArraySubSeq, 2, (yyvsp[-3].grammar_tree), (yyvsp[-1].grammar_tree));
    // 将Exp对应的值放在选择符中
    (yyval.grammar_tree)->exprs = AddIntoExprsVector((yyvsp[-3].grammar_tree)->exprs, (yyvsp[-1].grammar_tree));
}
#line 1862 "parser.tab.c"
    break;

  case 20:
#line 228 "parser.y"
        {
    (yyval.grammar_tree) = CreateGrammarTree(ConstInitVal, 1, (yyvsp[0].grammar_tree));
    // 计算Exp的值 这里的Exp需要能在编译时就求出值
    CheckExprValue((yyvsp[0].grammar_tree), stack);
    if (!(yyvsp[0].grammar_tree)->is_constant_expr) {
        yyerror("Line %d: ConstExp needed!\n", yylineno);
    }
    (yyval.grammar_tree)->array_init_value = AddExprIntoArrayInitValue((yyval.grammar_tree)->array_init_value, (yyvsp[0].grammar_tree)->expr_value, false);
}
#line 1876 "parser.tab.c"
    break;

  case 21:
#line 237 "parser.y"
                            {
    (yyval.grammar_tree) = CreateGrammarTree(ConstInitVal, 1, (yyvsp[-1].grammar_tree));
    (yyval.grammar_tree)->array_init_value = MergeArrayInitValue((yyval.grammar_tree)->array_init_value, (yyvsp[-1].grammar_tree)->array_init_value);
}
#line 1885 "parser.tab.c"
    break;

  case 22:
#line 241 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(ConstInitVal, 0, -1);
    // 这一部分的子数组初始化为全零
    (yyval.grammar_tree)->array_init_value = MergeArrayInitValue((yyval.grammar_tree)->array_init_value, NULL);
}
#line 1895 "parser.tab.c"
    break;

  case 23:
#line 249 "parser.y"
                 {
    (yyval.grammar_tree) = CreateGrammarTree(ConstInitValSeq, 1, (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->array_init_value = MergeArrayInitValue((yyval.grammar_tree)->array_init_value, (yyvsp[0].grammar_tree)->array_init_value);
}
#line 1904 "parser.tab.c"
    break;

  case 24:
#line 253 "parser.y"
                                     {
    (yyval.grammar_tree) = CreateGrammarTree(ConstInitValSeq, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->array_init_value = MergeArrayInitValue((yyvsp[-2].grammar_tree)->array_init_value, (yyvsp[0].grammar_tree)->array_init_value);
}
#line 1913 "parser.tab.c"
    break;

  case 25:
#line 261 "parser.y"
                        {
    (yyval.grammar_tree) = CreateGrammarTree(VarDecl, 2, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree));
    (yyval.grammar_tree)->local_scope = AttachTypeToLocalScope((yyvsp[-1].grammar_tree)->local_scope, false);
}
#line 1922 "parser.tab.c"
    break;

  case 26:
#line 268 "parser.y"
           {
    (yyval.grammar_tree) = CreateGrammarTree(VarDefSeq, 1, (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, (yyvsp[0].grammar_tree)->local_entry);
}
#line 1931 "parser.tab.c"
    break;

  case 27:
#line 272 "parser.y"
                         {
    (yyval.grammar_tree) = CreateGrammarTree(VarDefSeq, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyvsp[-2].grammar_tree)->local_scope, (yyvsp[0].grammar_tree)->local_entry);
}
#line 1940 "parser.tab.c"
    break;

  case 28:
#line 279 "parser.y"
                 {
    (yyval.grammar_tree) = CreateGrammarTree(VarDef, 1, (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_entry = NewLocalEntry((yyvsp[0].grammar_tree)->string_value, false, false, NULL, NULL);
}
#line 1949 "parser.tab.c"
    break;

  case 29:
#line 283 "parser.y"
                                  {
    (yyval.grammar_tree) = CreateGrammarTree(VarDef, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_entry = NewLocalEntry((yyvsp[-1].grammar_tree)->string_value, true, false, NewArrayInfo((yyvsp[0].grammar_tree)->dims, NULL, NULL), NULL);
}
#line 1958 "parser.tab.c"
    break;

  case 30:
#line 287 "parser.y"
                             {
    (yyval.grammar_tree) = CreateGrammarTree(VarDef, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    if ((yyvsp[0].grammar_tree)->child->type != Exp) {
        yyerror("Line %d: InitVal must be Exp type!\n", yylineno);
    }
    (yyval.grammar_tree)->local_entry = NewLocalEntry((yyvsp[-2].grammar_tree)->string_value, false, false, NewInitValue(false, 0, (yyvsp[0].grammar_tree)->lchild), NULL);
}
#line 1970 "parser.tab.c"
    break;

  case 31:
#line 294 "parser.y"
                                              {
    (yyval.grammar_tree) = CreateGrammarTree(VarDef, 3, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_entry = NewLocalEntry((yyvsp[-3].grammar_tree)->string_value, true, false, NewArrayInfo((yyvsp[-2].grammar_tree)->dims, (yyvsp[0].grammar_tree)->exprs, NULL), NULL);
}
#line 1979 "parser.tab.c"
    break;

  case 32:
#line 301 "parser.y"
        {
    (yyval.grammar_tree) = CreateGrammarTree(InitVal, 1, (yyvsp[0].grammar_tree));
    // TODO: 记录exp
}
#line 1988 "parser.tab.c"
    break;

  case 33:
#line 305 "parser.y"
                       {
    (yyval.grammar_tree) = CreateGrammarTree(InitVal, 1, (yyvsp[-1].grammar_tree));
}
#line 1996 "parser.tab.c"
    break;

  case 34:
#line 311 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(InitValSeq, 1, (yyvsp[0].grammar_tree));
}
#line 2004 "parser.tab.c"
    break;

  case 35:
#line 314 "parser.y"
                           {
    (yyval.grammar_tree) = CreateGrammarTree(InitValSeq, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2012 "parser.tab.c"
    break;

  case 36:
#line 320 "parser.y"
                                     {
    (yyval.grammar_tree) = CreateGrammarTree(FuncDef, 3, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[0].grammar_tree));
    // 新建一个FormalScopeEntry和GlobalScopeEntry
    // FormalScope置为Null
    // LocalScopeEntry置为Block
    (yyval.grammar_tree)->global_entry = NewGlobalEntry((yyvsp[-3].grammar_tree)->string_value, true, (yyvsp[-4].grammar_tree)->lchild->type == T_Void, 
                                      NULL, 0, NULL, (yyvsp[0].grammar_tree)->local_scope);
}
#line 2025 "parser.tab.c"
    break;

  case 37:
#line 328 "parser.y"
                                                 {
    (yyval.grammar_tree) = CreateGrammarTree(FuncDef, 4, (yyvsp[-5].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    // 新建一个FormalScopeEntry和GlobalScopeEntry
    (yyval.grammar_tree)->global_entry = NewGlobalEntry((yyvsp[-4].grammar_tree)->string_value, true, (yyvsp[-5].grammar_tree)->lchild->type == T_Void,
                                      NULL, (yyvsp[-2].grammar_tree)->formal_scope->size(), (yyvsp[-2].grammar_tree)->formal_scope, (yyvsp[0].grammar_tree)->local_scope);
}
#line 2036 "parser.tab.c"
    break;

  case 38:
#line 337 "parser.y"
               {
    (yyval.grammar_tree) = CreateGrammarTree(FuncFParams, 1, (yyvsp[0].grammar_tree));
    // 新建FormalScope 加入FuncParam
    (yyval.grammar_tree)->formal_scope = AddEntryIntoFormalScope((yyval.grammar_tree)->formal_scope, (yyvsp[0].grammar_tree)->formal_entry);
}
#line 2046 "parser.tab.c"
    break;

  case 39:
#line 342 "parser.y"
                               {
    (yyval.grammar_tree) = CreateGrammarTree(FuncFParams, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->formal_scope = AddEntryIntoFormalScope((yyvsp[-2].grammar_tree)->formal_scope, (yyvsp[0].grammar_tree)->formal_entry);
}
#line 2055 "parser.tab.c"
    break;

  case 40:
#line 349 "parser.y"
                       {
    (yyval.grammar_tree) = CreateGrammarTree(FuncFParam, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
    // 新建FormalScopeEntry
    (yyval.grammar_tree)->formal_entry = NewFormalEntry((yyvsp[0].grammar_tree)->string_value, false, NULL);
}
#line 2065 "parser.tab.c"
    break;

  case 41:
#line 354 "parser.y"
                                           {
    (yyval.grammar_tree) = CreateGrammarTree(FuncFParam, 3, (yyvsp[-4].grammar_tree), (yyvsp[-3].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->formal_entry = NewFormalEntry((yyvsp[-3].grammar_tree)->string_value, true, NewArrayInfo((yyvsp[0].grammar_tree)->dims, NULL, NULL));
}
#line 2074 "parser.tab.c"
    break;

  case 42:
#line 361 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(Block, 0, -1);
    // Block直接设置为空的LocalScope
    (yyval.grammar_tree)->local_scope = NULL;
}
#line 2084 "parser.tab.c"
    break;

  case 43:
#line 366 "parser.y"
                         {
    (yyval.grammar_tree) = CreateGrammarTree(Block, 1, (yyvsp[-1].grammar_tree));
    (yyval.grammar_tree)->local_scope = (yyvsp[-1].grammar_tree)->local_scope;
}
#line 2093 "parser.tab.c"
    break;

  case 44:
#line 373 "parser.y"
              {
    (yyval.grammar_tree) = CreateGrammarTree(BlockItemSeq, 1, (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_scope = AddLocalIntoLocal((yyval.grammar_tree)->local_scope, (yyvsp[0].grammar_tree)->local_scope);
}
#line 2102 "parser.tab.c"
    break;

  case 45:
#line 377 "parser.y"
                           {
    (yyval.grammar_tree) = CreateGrammarTree(BlockItemSeq, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_scope = AddLocalIntoLocal((yyvsp[-1].grammar_tree)->local_scope, (yyvsp[0].grammar_tree)->local_scope);
    
}
#line 2112 "parser.tab.c"
    break;

  case 46:
#line 385 "parser.y"
         {
    (yyval.grammar_tree) = CreateGrammarTree(BlockItem, 1, (yyvsp[0].grammar_tree));
    (yyval.grammar_tree)->local_scope = (yyvsp[0].grammar_tree)->local_scope;
}
#line 2121 "parser.tab.c"
    break;

  case 47:
#line 389 "parser.y"
         {
    // 直接在这里处理Stmt中的Block
    (yyval.grammar_tree) = CreateGrammarTree(BlockItem, 1, (yyvsp[0].grammar_tree));
    // 1. Stmt -> Block
    if ((yyval.grammar_tree)->lchild->type == Block) {
        // add 1 entry
        LocalScopeEntry *blk = NewLocalEntry(NULL, false, true, NULL, (yyval.grammar_tree)->lchild->local_scope);
        (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, blk);
    }
    // 2. Stmt -> T_If '(' Exp ')' Stmt( -> Block)
    else if ((yyval.grammar_tree)->lchild->type == T_If &&
             (yyval.grammar_tree)->lchild->rchild->rchild->rchild == NULL) {
        // add 1 entry
        LocalScopeEntry *if_blk = NewLocalEntry(NULL, false, true, NULL, (yyval.grammar_tree)->lchild->rchild->rchild->lchild->local_scope);
        (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, if_blk);
    }
    // 3. Stmt -> T_If '(' Exp ')' Stmt T_Else Stmt
    else if ((yyval.grammar_tree)->lchild->type == T_If &&
             (yyval.grammar_tree)->lchild->rchild->rchild->rchild == T_Else) {
        // add 2 entries
        LocalScopeEntry *if_blk = NewLocalEntry(NULL, false, true, NULL, (yyval.grammar_tree)->lchild->rchild->rchild->lchild->local_scope);
        LocalScopeEntry *else_blk = NewLocalEntry(NULL, false, true, NULL, (yyval.grammar_tree)->lchild->rchild->rchild->rchild->rchild->lchild->local_scope);
        (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, if_blk);
        (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, else_blk);
    }
    // 4. Stmt -> T_While '(' Exp ')' Stmt
    else if ((yyval.grammar_tree)->lchild->type == T_While) {
        // add 1 entry
        LocalScopeEntry *while_blk = NewLocalEntry(NULL, false, true, NULL, (yyval.grammar_tree)->lchild->rchild->rchild->lchild->local_scope);
        (yyval.grammar_tree)->local_scope = AddEntryIntoLocalScope((yyval.grammar_tree)->local_scope, while_blk);
    }
}
#line 2158 "parser.tab.c"
    break;

  case 48:
#line 424 "parser.y"
                     {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 3, (yyvsp[-3].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree));
}
#line 2166 "parser.tab.c"
    break;

  case 49:
#line 427 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 1, (yyvsp[-1].grammar_tree));
}
#line 2174 "parser.tab.c"
    break;

  case 50:
#line 430 "parser.y"
        {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 0, -1);
}
#line 2182 "parser.tab.c"
    break;

  case 51:
#line 433 "parser.y"
          {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 1, (yyvsp[0].grammar_tree));
}
#line 2190 "parser.tab.c"
    break;

  case 52:
#line 436 "parser.y"
                                         {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 3, (yyvsp[-4].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2198 "parser.tab.c"
    break;

  case 53:
#line 439 "parser.y"
                                      {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 5, (yyvsp[-6].grammar_tree), (yyvsp[-4].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2206 "parser.tab.c"
    break;

  case 54:
#line 442 "parser.y"
                             {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 3, (yyvsp[-4].grammar_tree), (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2214 "parser.tab.c"
    break;

  case 55:
#line 445 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 1, (yyvsp[-1].grammar_tree));
}
#line 2222 "parser.tab.c"
    break;

  case 56:
#line 448 "parser.y"
                   {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 1, (yyvsp[-1].grammar_tree));
}
#line 2230 "parser.tab.c"
    break;

  case 57:
#line 451 "parser.y"
                     {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 2, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree));
}
#line 2238 "parser.tab.c"
    break;

  case 58:
#line 454 "parser.y"
                 {
    (yyval.grammar_tree) = CreateGrammarTree(Stmt, 1, (yyvsp[-1].grammar_tree));
}
#line 2246 "parser.tab.c"
    break;

  case 59:
#line 461 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 1, (yyvsp[-1].grammar_tree));
}
#line 2254 "parser.tab.c"
    break;

  case 60:
#line 464 "parser.y"
         {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 1, (yyvsp[0].grammar_tree));
}
#line 2262 "parser.tab.c"
    break;

  case 61:
#line 467 "parser.y"
                     {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 1, (yyvsp[0].grammar_tree));
}
#line 2270 "parser.tab.c"
    break;

  case 62:
#line 470 "parser.y"
                  {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 1, (yyvsp[0].grammar_tree));
}
#line 2278 "parser.tab.c"
    break;

  case 63:
#line 473 "parser.y"
                                     {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 2, (yyvsp[-3].grammar_tree), (yyvsp[-1].grammar_tree));
}
#line 2286 "parser.tab.c"
    break;

  case 64:
#line 476 "parser.y"
                         {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 1, (yyvsp[-2].grammar_tree));
}
#line 2294 "parser.tab.c"
    break;

  case 65:
#line 479 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2302 "parser.tab.c"
    break;

  case 66:
#line 482 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2310 "parser.tab.c"
    break;

  case 67:
#line 485 "parser.y"
            {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2318 "parser.tab.c"
    break;

  case 68:
#line 488 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2326 "parser.tab.c"
    break;

  case 69:
#line 491 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2334 "parser.tab.c"
    break;

  case 70:
#line 494 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2342 "parser.tab.c"
    break;

  case 71:
#line 497 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2350 "parser.tab.c"
    break;

  case 72:
#line 500 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2358 "parser.tab.c"
    break;

  case 73:
#line 503 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2366 "parser.tab.c"
    break;

  case 74:
#line 506 "parser.y"
                {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2374 "parser.tab.c"
    break;

  case 75:
#line 509 "parser.y"
                        {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2382 "parser.tab.c"
    break;

  case 76:
#line 512 "parser.y"
                           {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2390 "parser.tab.c"
    break;

  case 77:
#line 515 "parser.y"
                    {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2398 "parser.tab.c"
    break;

  case 78:
#line 518 "parser.y"
                       {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2406 "parser.tab.c"
    break;

  case 79:
#line 521 "parser.y"
                  {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2414 "parser.tab.c"
    break;

  case 80:
#line 524 "parser.y"
                 {
    (yyval.grammar_tree) = CreateGrammarTree(Exp, 3, (yyvsp[-2].grammar_tree), (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2422 "parser.tab.c"
    break;

  case 81:
#line 530 "parser.y"
                             {
    (yyval.grammar_tree) = CreateGrammarTree(LVal, 2, (yyvsp[-1].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2430 "parser.tab.c"
    break;

  case 82:
#line 533 "parser.y"
                 {
    (yyval.grammar_tree) = CreateGrammarTree(LVal, 1, (yyvsp[0].grammar_tree));
}
#line 2438 "parser.tab.c"
    break;

  case 83:
#line 540 "parser.y"
        {
    (yyval.grammar_tree) = CreateGrammarTree(FuncRParams, 1, (yyvsp[0].grammar_tree));
}
#line 2446 "parser.tab.c"
    break;

  case 84:
#line 543 "parser.y"
                        {
    (yyval.grammar_tree) = CreateGrammarTree(FuncRParams, 2, (yyvsp[-2].grammar_tree), (yyvsp[0].grammar_tree));
}
#line 2454 "parser.tab.c"
    break;


#line 2458 "parser.tab.c"

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
  *++yylsp = yyloc;

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
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
#line 549 "parser.y"


#include<stdarg.h>

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Error type B at Line %d Column %d: ", yylineno, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}

