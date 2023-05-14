/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         Saulparse
#define yylex           Saullex
#define yyerror         Saulerror
#define yydebug         Sauldebug
#define yynerrs         Saulnerrs

/* First part of user prologue.  */
#line 22 "Saul.y"

/* Begin C preamble code */

#include <algorithm> /* for std::reverse */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.H"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE Saul_scan_string(const char *str, yyscan_t scanner);
extern void Saul_delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void Saullex_destroy(yyscan_t scanner);
extern char* Saulget_text(yyscan_t scanner);

extern yyscan_t Saul_initialize_lexer(FILE * inp);

/* End C preamble code */

#line 105 "Parser.C"

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

#include "Bison.H"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__BANGEQ = 4,                    /* _BANGEQ  */
  YYSYMBOL__AMP = 5,                       /* _AMP  */
  YYSYMBOL__LPAREN = 6,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 7,                    /* _RPAREN  */
  YYSYMBOL__STAR = 8,                      /* _STAR  */
  YYSYMBOL__PLUS = 9,                      /* _PLUS  */
  YYSYMBOL__COMMA = 10,                    /* _COMMA  */
  YYSYMBOL__MINUS = 11,                    /* _MINUS  */
  YYSYMBOL__RARROW = 12,                   /* _RARROW  */
  YYSYMBOL__DOT = 13,                      /* _DOT  */
  YYSYMBOL__SLASH = 14,                    /* _SLASH  */
  YYSYMBOL__COLON = 15,                    /* _COLON  */
  YYSYMBOL__COLONEQ = 16,                  /* _COLONEQ  */
  YYSYMBOL__SEMI = 17,                     /* _SEMI  */
  YYSYMBOL__LT = 18,                       /* _LT  */
  YYSYMBOL__LDARROW = 19,                  /* _LDARROW  */
  YYSYMBOL__EQ = 20,                       /* _EQ  */
  YYSYMBOL__DEQ = 21,                      /* _DEQ  */
  YYSYMBOL__RDARROW = 22,                  /* _RDARROW  */
  YYSYMBOL__GT = 23,                       /* _GT  */
  YYSYMBOL__GTEQ = 24,                     /* _GTEQ  */
  YYSYMBOL__KW_Bool = 25,                  /* _KW_Bool  */
  YYSYMBOL__KW_Bot = 26,                   /* _KW_Bot  */
  YYSYMBOL__KW_Nat = 27,                   /* _KW_Nat  */
  YYSYMBOL__SYMB_25 = 28,                  /* _SYMB_25  */
  YYSYMBOL__SYMB_24 = 29,                  /* _SYMB_24  */
  YYSYMBOL__SYMB_26 = 30,                  /* _SYMB_26  */
  YYSYMBOL__KW_Top = 31,                   /* _KW_Top  */
  YYSYMBOL__KW_Unit = 32,                  /* _KW_Unit  */
  YYSYMBOL__KW_and = 33,                   /* _KW_and  */
  YYSYMBOL__KW_core = 34,                  /* _KW_core  */
  YYSYMBOL__KW_else = 35,                  /* _KW_else  */
  YYSYMBOL__KW_false = 36,                 /* _KW_false  */
  YYSYMBOL__KW_fn = 37,                    /* _KW_fn  */
  YYSYMBOL__KW_if = 38,                    /* _KW_if  */
  YYSYMBOL__KW_inl = 39,                   /* _KW_inl  */
  YYSYMBOL__KW_inline = 40,                /* _KW_inline  */
  YYSYMBOL__KW_inr = 41,                   /* _KW_inr  */
  YYSYMBOL__KW_language = 42,              /* _KW_language  */
  YYSYMBOL__KW_match = 43,                 /* _KW_match  */
  YYSYMBOL__KW_new = 44,                   /* _KW_new  */
  YYSYMBOL__KW_not = 45,                   /* _KW_not  */
  YYSYMBOL__KW_or = 46,                    /* _KW_or  */
  YYSYMBOL__SYMB_23 = 47,                  /* _SYMB_23  */
  YYSYMBOL__KW_return = 48,                /* _KW_return  */
  YYSYMBOL__KW_succ = 49,                  /* _KW_succ  */
  YYSYMBOL__KW_then = 50,                  /* _KW_then  */
  YYSYMBOL__KW_true = 51,                  /* _KW_true  */
  YYSYMBOL__KW_unit = 52,                  /* _KW_unit  */
  YYSYMBOL__LBRACE = 53,                   /* _LBRACE  */
  YYSYMBOL__BAR = 54,                      /* _BAR  */
  YYSYMBOL__RBRACE = 55,                   /* _RBRACE  */
  YYSYMBOL_T_SaulIdent = 56,               /* T_SaulIdent  */
  YYSYMBOL__INTEGER_ = 57,                 /* _INTEGER_  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_Program = 59,                   /* Program  */
  YYSYMBOL_LanguageDecl = 60,              /* LanguageDecl  */
  YYSYMBOL_Decl = 61,                      /* Decl  */
  YYSYMBOL_ListDecl = 62,                  /* ListDecl  */
  YYSYMBOL_Annotation = 63,                /* Annotation  */
  YYSYMBOL_ListAnnotation = 64,            /* ListAnnotation  */
  YYSYMBOL_ParamDecl = 65,                 /* ParamDecl  */
  YYSYMBOL_ListParamDecl = 66,             /* ListParamDecl  */
  YYSYMBOL_ReturnType = 67,                /* ReturnType  */
  YYSYMBOL_MatchCase = 68,                 /* MatchCase  */
  YYSYMBOL_ListMatchCase = 69,             /* ListMatchCase  */
  YYSYMBOL_Pattern = 70,                   /* Pattern  */
  YYSYMBOL_ListPattern = 71,               /* ListPattern  */
  YYSYMBOL_LabelledPattern = 72,           /* LabelledPattern  */
  YYSYMBOL_ListLabelledPattern = 73,       /* ListLabelledPattern  */
  YYSYMBOL_Binding = 74,                   /* Binding  */
  YYSYMBOL_ListBinding = 75,               /* ListBinding  */
  YYSYMBOL_Expr = 76,                      /* Expr  */
  YYSYMBOL_ListExpr = 77,                  /* ListExpr  */
  YYSYMBOL_Expr1 = 78,                     /* Expr1  */
  YYSYMBOL_Expr2 = 79,                     /* Expr2  */
  YYSYMBOL_Expr3 = 80,                     /* Expr3  */
  YYSYMBOL_Expr4 = 81,                     /* Expr4  */
  YYSYMBOL_Expr5 = 82,                     /* Expr5  */
  YYSYMBOL_Expr6 = 83,                     /* Expr6  */
  YYSYMBOL_Expr7 = 84,                     /* Expr7  */
  YYSYMBOL_Type = 85,                      /* Type  */
  YYSYMBOL_Type1 = 86,                     /* Type1  */
  YYSYMBOL_Type2 = 87,                     /* Type2  */
  YYSYMBOL_Type3 = 88,                     /* Type3  */
  YYSYMBOL_ListType = 89,                  /* ListType  */
  YYSYMBOL_RecordFieldType = 90,           /* RecordFieldType  */
  YYSYMBOL_ListRecordFieldType = 91        /* ListRecordFieldType  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 85 "Saul.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, Saulget_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 242 "Parser.C"


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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   197,   197,   203,   205,   207,   208,   215,   217,   218,
     220,   222,   223,   224,   226,   227,   234,   236,   237,   238,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   252,   253,   254,   256,   258,   259,   261,   263,   264,
     266,   267,   268,   270,   271,   272,   274,   275,   276,   278,
     279,   280,   281,   282,   283,   284,   289,   290,   291,   292,
     293,   294,   296,   297,   298,   299,   301,   302,   303,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   320,   321,   322,   323,   324,   325,   327,
     328,   330,   331,   333,   334,   335,   337,   338,   339,   340,
     341,   342,   343,   344,   346,   347,   348,   350,   352,   353
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_BANGEQ",
  "_AMP", "_LPAREN", "_RPAREN", "_STAR", "_PLUS", "_COMMA", "_MINUS",
  "_RARROW", "_DOT", "_SLASH", "_COLON", "_COLONEQ", "_SEMI", "_LT",
  "_LDARROW", "_EQ", "_DEQ", "_RDARROW", "_GT", "_GTEQ", "_KW_Bool",
  "_KW_Bot", "_KW_Nat", "_SYMB_25", "_SYMB_24", "_SYMB_26", "_KW_Top",
  "_KW_Unit", "_KW_and", "_KW_core", "_KW_else", "_KW_false", "_KW_fn",
  "_KW_if", "_KW_inl", "_KW_inline", "_KW_inr", "_KW_language",
  "_KW_match", "_KW_new", "_KW_not", "_KW_or", "_SYMB_23", "_KW_return",
  "_KW_succ", "_KW_then", "_KW_true", "_KW_unit", "_LBRACE", "_BAR",
  "_RBRACE", "T_SaulIdent", "_INTEGER_", "$accept", "Program",
  "LanguageDecl", "Decl", "ListDecl", "Annotation", "ListAnnotation",
  "ParamDecl", "ListParamDecl", "ReturnType", "MatchCase", "ListMatchCase",
  "Pattern", "ListPattern", "LabelledPattern", "ListLabelledPattern",
  "Binding", "ListBinding", "Expr", "ListExpr", "Expr1", "Expr2", "Expr3",
  "Expr4", "Expr5", "Expr6", "Expr7", "Type", "Type1", "Type2", "Type3",
  "ListType", "RecordFieldType", "ListRecordFieldType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -16,    16,   -81,     6,   -81,    48,   -81,   -81,    14,
      -4,   -81,   -81,    53,     4,    54,    52,    63,   212,     4,
      59,     5,   212,   -81,   -81,   -81,   -81,   -81,    66,   229,
     -81,   -81,   -81,    64,   -81,   -81,   212,    21,   -81,    72,
     212,    65,    77,    27,    85,    42,     5,   -81,   -81,   -81,
      94,   212,   212,   -81,    50,   -81,   -81,    68,   101,   -81,
     -81,    65,   -81,    47,   212,    47,   175,   108,   112,   113,
     -81,   114,    47,   115,   117,   143,   119,   120,   -81,   121,
     -81,   -81,   109,   -81,   -81,    73,   116,   118,     3,    11,
     -81,     7,   -81,   -81,   122,   -81,    47,    47,    47,     4,
      80,    47,    47,    78,   175,    47,    47,   135,   126,    86,
     130,   102,   -81,    47,    47,   143,   175,   175,   143,   143,
     143,   143,   143,   175,   175,   175,   175,    47,   -28,   -81,
     125,   152,   153,   157,    47,   160,   161,   223,   162,   163,
     167,    47,   129,   -81,    47,   -81,   -81,   -81,    -5,    11,
      11,    -5,    -5,    -5,    -5,    -5,    11,   -81,   -81,   -81,
     168,   -81,   -81,   -81,   -81,    47,   123,   142,   -81,   -81,
     223,   -81,   172,   183,   185,   -81,   -81,   242,   -81,   -81,
     139,   146,   176,   -81,   -81,   -81,   -81,   135,   -81,   -81,
     -81,   187,   154,    47,   199,   223,   223,   223,   188,   197,
     155,   202,   158,   223,   -81,    47,    47,    47,   -81,   -81,
     208,   214,   216,   223,   223,   -81,   169,   -81,   -81,   -81,
     226,   181,   -81,   -81,   -81,   -81,   -81,   188,   -81,   -81,
     -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,     8,     3,     6,     0,
       0,     7,     9,     0,    11,     0,    12,     0,     0,    11,
      14,     0,     0,    96,   100,    97,    99,    98,     0,   104,
     102,    10,    90,    92,    95,    13,     0,     0,   101,     0,
     104,   102,   105,     0,   108,     0,     0,    15,     5,   103,
       0,     0,   104,    93,     0,    94,    91,     8,     0,   107,
     106,     0,   109,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    74,     0,
      83,    85,    43,    87,    86,     0,    42,    48,    55,    61,
      65,    68,    82,    89,     0,    67,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,    87,    38,     0,
      44,     0,     4,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,    73,    43,    72,    40,    46,    54,    58,
      59,    49,    50,    53,    51,    52,    60,    62,    63,    64,
       0,    70,    71,    80,    79,     0,     0,     0,    75,    76,
       0,    24,     0,     0,     0,    25,    26,    31,    29,    27,
      18,     0,     0,    66,    78,    77,    37,     0,    39,    45,
      69,     0,     0,     0,     0,     0,     0,     0,    29,    32,
       0,    35,     0,    17,    57,     0,     0,     0,    47,    30,
       0,     0,     0,     0,    31,    22,     0,    23,    19,    16,
       0,     0,    20,    21,    28,    34,    33,     0,    36,    81,
      56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   -81,   182,   -81,   -81,   -81,   -18,   -81,
     -81,    37,    93,    28,   -81,    -7,   -81,    99,   -63,   -80,
     -69,   170,   -10,   -60,   -58,   -81,   -81,    71,   -81,    -6,
     -81,   -35,   -81,   192
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     8,     6,    12,     9,    16,    17,    37,
     180,   181,   182,   200,   201,   202,   108,   109,   110,   111,
      86,    87,    88,    89,    90,    91,    92,    42,    32,    33,
      34,    43,    44,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    35,    94,   100,   116,    50,   117,   115,    95,     1,
      21,    22,   116,   127,   117,    38,     5,    60,     4,   124,
     128,   118,   119,     7,   120,   125,   121,   122,   161,   162,
      23,    24,    25,   130,   131,   132,    26,    27,   135,   136,
      56,   123,   139,   140,   126,   147,   138,   160,    -2,   123,
     146,    10,    13,    65,    11,    66,   149,   150,    29,    14,
      15,    30,    19,   156,   189,   167,   157,   158,   159,    18,
      20,    36,    40,    46,    48,    67,    68,    69,   186,    49,
      51,   133,    53,    70,    71,    72,    73,    52,    74,    31,
      75,    76,    77,    39,    78,    54,    79,    55,    80,    81,
      82,    58,   191,    83,    84,   148,    61,    47,   151,   152,
     153,   154,   155,    64,    96,    65,    63,    66,    97,    98,
      99,   101,    59,   102,   208,   104,   105,   106,   112,   129,
     134,   137,   163,   113,   114,    93,   142,    67,    68,    69,
     144,   143,   219,   220,   221,    70,    71,    72,    73,    65,
      74,    66,    75,    76,    77,   141,    78,   145,    79,   164,
      80,    81,    82,   165,   166,   107,    84,   168,   169,   183,
     184,    67,    68,    69,   185,   190,   192,   193,   195,    70,
      71,    65,    73,    66,    74,   187,    75,    76,    77,   196,
      78,   197,    79,   203,    80,    81,    82,   206,   205,    83,
      84,   204,   207,    67,    68,    69,   209,   214,   213,   228,
     215,    70,   216,   217,    73,   222,    74,    21,    22,    76,
      77,   223,    78,   224,    79,   227,    80,    81,    82,   170,
      57,    83,    84,   229,    21,    22,   230,    23,    24,    25,
     218,   188,   226,    26,    27,   103,    62,     0,   170,    28,
       0,     0,     0,     0,    23,    24,    25,     0,     0,   171,
      26,    27,   172,   194,   173,    29,    28,     0,    30,     0,
     199,     0,   174,     0,   175,   176,   177,     0,   171,   178,
     179,   172,    29,   173,     0,    41,     0,     0,   210,   211,
     212,   174,     0,   175,   176,   177,     0,     0,   198,   179,
       0,     0,     0,     0,     0,     0,   225,   199
};

static const yytype_int16 yycheck[] =
{
      63,    19,    65,    72,     9,    40,    11,     4,    66,    42,
       5,     6,     9,     6,    11,    21,     0,    52,    34,     8,
      13,    18,    19,    17,    21,    14,    23,    24,    56,    57,
      25,    26,    27,    96,    97,    98,    31,    32,   101,   102,
      46,    46,   105,   106,    33,   114,   104,   127,     0,    46,
     113,    37,    56,     6,    40,     8,   116,   117,    53,     6,
      56,    56,    10,   123,   144,   134,   124,   125,   126,    15,
       7,    12,     6,     9,    53,    28,    29,    30,   141,     7,
      15,    99,    55,    36,    37,    38,    39,    10,    41,    18,
      43,    44,    45,    22,    47,    10,    49,    55,    51,    52,
      53,     7,   165,    56,    57,   115,    56,    36,   118,   119,
     120,   121,   122,    12,     6,     6,    48,     8,     6,     6,
       6,     6,    51,     6,   193,     6,     6,     6,    55,     7,
      50,    53,     7,    17,    16,    64,    10,    28,    29,    30,
      10,    55,   205,   206,   207,    36,    37,    38,    39,     6,
      41,     8,    43,    44,    45,    20,    47,    55,    49,     7,
      51,    52,    53,    10,     7,    56,    57,     7,     7,     7,
       7,    28,    29,    30,     7,     7,    53,    35,     6,    36,
      37,     6,    39,     8,    41,    56,    43,    44,    45,     6,
      47,     6,    49,    54,    51,    52,    53,    10,    22,    56,
      57,    55,    48,    28,    29,    30,     7,    10,    20,   216,
      55,    36,    10,    55,    39,     7,    41,     5,     6,    44,
      45,     7,    47,     7,    49,    56,    51,    52,    53,     6,
      48,    56,    57,     7,     5,     6,    55,    25,    26,    27,
     203,   142,   214,    31,    32,    75,    54,    -1,     6,    37,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,    36,
      31,    32,    39,   170,    41,    53,    37,    -1,    56,    -1,
     177,    -1,    49,    -1,    51,    52,    53,    -1,    36,    56,
      57,    39,    53,    41,    -1,    56,    -1,    -1,   195,   196,
     197,    49,    -1,    51,    52,    53,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   214
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    42,    59,    60,    34,     0,    62,    17,    61,    64,
      37,    40,    63,    56,     6,    56,    65,    66,    15,    10,
       7,     5,     6,    25,    26,    27,    31,    32,    37,    53,
      56,    85,    86,    87,    88,    66,    12,    67,    87,    85,
       6,    56,    85,    89,    90,    91,     9,    85,    53,     7,
      89,    15,    10,    55,    10,    55,    87,    62,     7,    85,
      89,    56,    91,    48,    12,     6,     8,    28,    29,    30,
      36,    37,    38,    39,    41,    43,    44,    45,    47,    49,
      51,    52,    53,    56,    57,    76,    78,    79,    80,    81,
      82,    83,    84,    85,    76,    82,     6,     6,     6,     6,
      78,     6,     6,    79,     6,     6,     6,    56,    74,    75,
      76,    77,    55,    17,    16,     4,     9,    11,    18,    19,
      21,    23,    24,    46,     8,    14,    33,     6,    13,     7,
      76,    76,    76,    66,    50,    76,    76,    53,    82,    76,
      76,    20,    10,    55,    10,    55,    76,    78,    80,    81,
      81,    80,    80,    80,    80,    80,    81,    82,    82,    82,
      77,    56,    57,     7,     7,    10,     7,    78,     7,     7,
       6,    36,    39,    41,    49,    51,    52,    53,    56,    57,
      68,    69,    70,     7,     7,     7,    76,    56,    75,    77,
       7,    76,    53,    35,    70,     6,     6,     6,    56,    70,
      71,    72,    73,    54,    55,    22,    10,    48,    78,     7,
      70,    70,    70,    20,    10,    55,    10,    55,    69,    76,
      76,    76,     7,     7,     7,    70,    71,    56,    73,     7,
      55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    61,    62,    62,    63,    64,    64,
      65,    66,    66,    66,    67,    67,    68,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    71,    71,    72,    73,    73,    74,    75,    75,
      76,    76,    76,    77,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    81,    81,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    90,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,    12,     0,     2,     1,     0,     2,
       3,     0,     1,     3,     0,     2,     3,     0,     1,     3,
       4,     4,     3,     3,     1,     1,     1,     1,     4,     1,
       3,     0,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     2,     1,     0,     1,     3,     3,     6,     1,     3,
       3,     3,     3,     3,     3,     1,     8,     5,     3,     3,
       3,     1,     3,     3,     3,     1,     4,     2,     1,     4,
       3,     3,     3,     3,     1,     4,     4,     4,     4,     4,
       4,     8,     1,     1,     1,     1,     1,     1,     3,     6,
       1,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     0,     1,     3,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  case 2: /* Program: LanguageDecl ListDecl  */
#line 197 "Saul.y"
                                { (yyval.program_) = new Saul::AProgram((yyvsp[-1].languagedecl_), (yyvsp[0].listdecl_)); (yyval.program_)->line_number = (yyloc).first_line; (yyval.program_)->char_number = (yyloc).first_column; result->program_ = (yyval.program_); }
#line 1496 "Parser.C"
    break;

  case 3: /* LanguageDecl: _KW_language _KW_core _SEMI  */
#line 203 "Saul.y"
                                           { (yyval.languagedecl_) = new Saul::LanguageCore(); (yyval.languagedecl_)->line_number = (yyloc).first_line; (yyval.languagedecl_)->char_number = (yyloc).first_column; result->languagedecl_ = (yyval.languagedecl_); }
#line 1502 "Parser.C"
    break;

  case 4: /* Decl: ListAnnotation _KW_fn T_SaulIdent _LPAREN ListParamDecl _RPAREN ReturnType _LBRACE ListDecl _KW_return Expr _RBRACE  */
#line 205 "Saul.y"
                                                                                                                           { std::reverse((yyvsp[-7].listparamdecl_)->begin(),(yyvsp[-7].listparamdecl_)->end()) ;(yyval.decl_) = new Saul::DeclFun((yyvsp[-11].listannotation_), (yyvsp[-9]._string), (yyvsp[-7].listparamdecl_), (yyvsp[-5].returntype_), (yyvsp[-3].listdecl_), (yyvsp[-1].expr_)); (yyval.decl_)->line_number = (yyloc).first_line; (yyval.decl_)->char_number = (yyloc).first_column; result->decl_ = (yyval.decl_); }
#line 1508 "Parser.C"
    break;

  case 5: /* ListDecl: %empty  */
#line 207 "Saul.y"
                       { (yyval.listdecl_) = new Saul::ListDecl(); result->listdecl_ = (yyval.listdecl_); }
#line 1514 "Parser.C"
    break;

  case 6: /* ListDecl: ListDecl Decl  */
#line 208 "Saul.y"
                  { (yyvsp[-1].listdecl_)->push_back((yyvsp[0].decl_)); (yyval.listdecl_) = (yyvsp[-1].listdecl_); result->listdecl_ = (yyval.listdecl_); }
#line 1520 "Parser.C"
    break;

  case 7: /* Annotation: _KW_inline  */
#line 215 "Saul.y"
                        { (yyval.annotation_) = new Saul::InlineAnnotation(); (yyval.annotation_)->line_number = (yyloc).first_line; (yyval.annotation_)->char_number = (yyloc).first_column; result->annotation_ = (yyval.annotation_); }
#line 1526 "Parser.C"
    break;

  case 8: /* ListAnnotation: %empty  */
#line 217 "Saul.y"
                             { (yyval.listannotation_) = new Saul::ListAnnotation(); result->listannotation_ = (yyval.listannotation_); }
#line 1532 "Parser.C"
    break;

  case 9: /* ListAnnotation: ListAnnotation Annotation  */
#line 218 "Saul.y"
                              { (yyvsp[-1].listannotation_)->push_back((yyvsp[0].annotation_)); (yyval.listannotation_) = (yyvsp[-1].listannotation_); result->listannotation_ = (yyval.listannotation_); }
#line 1538 "Parser.C"
    break;

  case 10: /* ParamDecl: T_SaulIdent _COLON Type  */
#line 220 "Saul.y"
                                    { (yyval.paramdecl_) = new Saul::AParamDecl((yyvsp[-2]._string), (yyvsp[0].type_)); (yyval.paramdecl_)->line_number = (yyloc).first_line; (yyval.paramdecl_)->char_number = (yyloc).first_column; result->paramdecl_ = (yyval.paramdecl_); }
#line 1544 "Parser.C"
    break;

  case 11: /* ListParamDecl: %empty  */
#line 222 "Saul.y"
                            { (yyval.listparamdecl_) = new Saul::ListParamDecl(); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 1550 "Parser.C"
    break;

  case 12: /* ListParamDecl: ParamDecl  */
#line 223 "Saul.y"
              { (yyval.listparamdecl_) = new Saul::ListParamDecl(); (yyval.listparamdecl_)->push_back((yyvsp[0].paramdecl_)); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 1556 "Parser.C"
    break;

  case 13: /* ListParamDecl: ParamDecl _COMMA ListParamDecl  */
#line 224 "Saul.y"
                                   { (yyvsp[0].listparamdecl_)->push_back((yyvsp[-2].paramdecl_)); (yyval.listparamdecl_) = (yyvsp[0].listparamdecl_); result->listparamdecl_ = (yyval.listparamdecl_); }
#line 1562 "Parser.C"
    break;

  case 14: /* ReturnType: %empty  */
#line 226 "Saul.y"
                         { (yyval.returntype_) = new Saul::NoReturnType(); (yyval.returntype_)->line_number = (yyloc).first_line; (yyval.returntype_)->char_number = (yyloc).first_column; result->returntype_ = (yyval.returntype_); }
#line 1568 "Parser.C"
    break;

  case 15: /* ReturnType: _RARROW Type  */
#line 227 "Saul.y"
                 { (yyval.returntype_) = new Saul::SomeReturnType((yyvsp[0].type_)); (yyval.returntype_)->line_number = (yyloc).first_line; (yyval.returntype_)->char_number = (yyloc).first_column; result->returntype_ = (yyval.returntype_); }
#line 1574 "Parser.C"
    break;

  case 16: /* MatchCase: Pattern _RDARROW Expr  */
#line 234 "Saul.y"
                                  { (yyval.matchcase_) = new Saul::AMatchCase((yyvsp[-2].pattern_), (yyvsp[0].expr_)); (yyval.matchcase_)->line_number = (yyloc).first_line; (yyval.matchcase_)->char_number = (yyloc).first_column; result->matchcase_ = (yyval.matchcase_); }
#line 1580 "Parser.C"
    break;

  case 17: /* ListMatchCase: %empty  */
#line 236 "Saul.y"
                            { (yyval.listmatchcase_) = new Saul::ListMatchCase(); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 1586 "Parser.C"
    break;

  case 18: /* ListMatchCase: MatchCase  */
#line 237 "Saul.y"
              { (yyval.listmatchcase_) = new Saul::ListMatchCase(); (yyval.listmatchcase_)->push_back((yyvsp[0].matchcase_)); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 1592 "Parser.C"
    break;

  case 19: /* ListMatchCase: MatchCase _BAR ListMatchCase  */
#line 238 "Saul.y"
                                 { (yyvsp[0].listmatchcase_)->push_back((yyvsp[-2].matchcase_)); (yyval.listmatchcase_) = (yyvsp[0].listmatchcase_); result->listmatchcase_ = (yyval.listmatchcase_); }
#line 1598 "Parser.C"
    break;

  case 20: /* Pattern: _KW_inl _LPAREN Pattern _RPAREN  */
#line 240 "Saul.y"
                                          { (yyval.pattern_) = new Saul::PatternInl((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1604 "Parser.C"
    break;

  case 21: /* Pattern: _KW_inr _LPAREN Pattern _RPAREN  */
#line 241 "Saul.y"
                                    { (yyval.pattern_) = new Saul::PatternInr((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1610 "Parser.C"
    break;

  case 22: /* Pattern: _LBRACE ListPattern _RBRACE  */
#line 242 "Saul.y"
                                { std::reverse((yyvsp[-1].listpattern_)->begin(),(yyvsp[-1].listpattern_)->end()) ;(yyval.pattern_) = new Saul::PatternTuple((yyvsp[-1].listpattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1616 "Parser.C"
    break;

  case 23: /* Pattern: _LBRACE ListLabelledPattern _RBRACE  */
#line 243 "Saul.y"
                                        { std::reverse((yyvsp[-1].listlabelledpattern_)->begin(),(yyvsp[-1].listlabelledpattern_)->end()) ;(yyval.pattern_) = new Saul::PatternRecord((yyvsp[-1].listlabelledpattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1622 "Parser.C"
    break;

  case 24: /* Pattern: _KW_false  */
#line 244 "Saul.y"
              { (yyval.pattern_) = new Saul::PatternFalse(); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1628 "Parser.C"
    break;

  case 25: /* Pattern: _KW_true  */
#line 245 "Saul.y"
             { (yyval.pattern_) = new Saul::PatternTrue(); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1634 "Parser.C"
    break;

  case 26: /* Pattern: _KW_unit  */
#line 246 "Saul.y"
             { (yyval.pattern_) = new Saul::PatternUnit(); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1640 "Parser.C"
    break;

  case 27: /* Pattern: _INTEGER_  */
#line 247 "Saul.y"
              { (yyval.pattern_) = new Saul::PatternInt((yyvsp[0]._int)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1646 "Parser.C"
    break;

  case 28: /* Pattern: _KW_succ _LPAREN Pattern _RPAREN  */
#line 248 "Saul.y"
                                     { (yyval.pattern_) = new Saul::PatternSucc((yyvsp[-1].pattern_)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1652 "Parser.C"
    break;

  case 29: /* Pattern: T_SaulIdent  */
#line 249 "Saul.y"
                { (yyval.pattern_) = new Saul::PatternVar((yyvsp[0]._string)); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1658 "Parser.C"
    break;

  case 30: /* Pattern: _LPAREN Pattern _RPAREN  */
#line 250 "Saul.y"
                            { (yyval.pattern_) = (yyvsp[-1].pattern_); (yyval.pattern_)->line_number = (yyloc).first_line; (yyval.pattern_)->char_number = (yyloc).first_column; result->pattern_ = (yyval.pattern_); }
#line 1664 "Parser.C"
    break;

  case 31: /* ListPattern: %empty  */
#line 252 "Saul.y"
                          { (yyval.listpattern_) = new Saul::ListPattern(); result->listpattern_ = (yyval.listpattern_); }
#line 1670 "Parser.C"
    break;

  case 32: /* ListPattern: Pattern  */
#line 253 "Saul.y"
            { (yyval.listpattern_) = new Saul::ListPattern(); (yyval.listpattern_)->push_back((yyvsp[0].pattern_)); result->listpattern_ = (yyval.listpattern_); }
#line 1676 "Parser.C"
    break;

  case 33: /* ListPattern: Pattern _COMMA ListPattern  */
#line 254 "Saul.y"
                               { (yyvsp[0].listpattern_)->push_back((yyvsp[-2].pattern_)); (yyval.listpattern_) = (yyvsp[0].listpattern_); result->listpattern_ = (yyval.listpattern_); }
#line 1682 "Parser.C"
    break;

  case 34: /* LabelledPattern: T_SaulIdent _EQ Pattern  */
#line 256 "Saul.y"
                                          { (yyval.labelledpattern_) = new Saul::ALabelledPattern((yyvsp[-2]._string), (yyvsp[0].pattern_)); (yyval.labelledpattern_)->line_number = (yyloc).first_line; (yyval.labelledpattern_)->char_number = (yyloc).first_column; result->labelledpattern_ = (yyval.labelledpattern_); }
#line 1688 "Parser.C"
    break;

  case 35: /* ListLabelledPattern: LabelledPattern  */
#line 258 "Saul.y"
                                      { (yyval.listlabelledpattern_) = new Saul::ListLabelledPattern(); (yyval.listlabelledpattern_)->push_back((yyvsp[0].labelledpattern_)); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 1694 "Parser.C"
    break;

  case 36: /* ListLabelledPattern: LabelledPattern _COMMA ListLabelledPattern  */
#line 259 "Saul.y"
                                               { (yyvsp[0].listlabelledpattern_)->push_back((yyvsp[-2].labelledpattern_)); (yyval.listlabelledpattern_) = (yyvsp[0].listlabelledpattern_); result->listlabelledpattern_ = (yyval.listlabelledpattern_); }
#line 1700 "Parser.C"
    break;

  case 37: /* Binding: T_SaulIdent _EQ Expr  */
#line 261 "Saul.y"
                               { (yyval.binding_) = new Saul::ABinding((yyvsp[-2]._string), (yyvsp[0].expr_)); (yyval.binding_)->line_number = (yyloc).first_line; (yyval.binding_)->char_number = (yyloc).first_column; result->binding_ = (yyval.binding_); }
#line 1706 "Parser.C"
    break;

  case 38: /* ListBinding: Binding  */
#line 263 "Saul.y"
                      { (yyval.listbinding_) = new Saul::ListBinding(); (yyval.listbinding_)->push_back((yyvsp[0].binding_)); result->listbinding_ = (yyval.listbinding_); }
#line 1712 "Parser.C"
    break;

  case 39: /* ListBinding: Binding _COMMA ListBinding  */
#line 264 "Saul.y"
                               { (yyvsp[0].listbinding_)->push_back((yyvsp[-2].binding_)); (yyval.listbinding_) = (yyvsp[0].listbinding_); result->listbinding_ = (yyval.listbinding_); }
#line 1718 "Parser.C"
    break;

  case 40: /* Expr: Expr1 _SEMI Expr  */
#line 266 "Saul.y"
                        { (yyval.expr_) = new Saul::Sequence((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1724 "Parser.C"
    break;

  case 41: /* Expr: Expr1 _SEMI  */
#line 267 "Saul.y"
                { (yyval.expr_) = (yyvsp[-1].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1730 "Parser.C"
    break;

  case 42: /* Expr: Expr1  */
#line 268 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1736 "Parser.C"
    break;

  case 43: /* ListExpr: %empty  */
#line 270 "Saul.y"
                       { (yyval.listexpr_) = new Saul::ListExpr(); result->listexpr_ = (yyval.listexpr_); }
#line 1742 "Parser.C"
    break;

  case 44: /* ListExpr: Expr  */
#line 271 "Saul.y"
         { (yyval.listexpr_) = new Saul::ListExpr(); (yyval.listexpr_)->push_back((yyvsp[0].expr_)); result->listexpr_ = (yyval.listexpr_); }
#line 1748 "Parser.C"
    break;

  case 45: /* ListExpr: Expr _COMMA ListExpr  */
#line 272 "Saul.y"
                         { (yyvsp[0].listexpr_)->push_back((yyvsp[-2].expr_)); (yyval.listexpr_) = (yyvsp[0].listexpr_); result->listexpr_ = (yyval.listexpr_); }
#line 1754 "Parser.C"
    break;

  case 46: /* Expr1: Expr2 _COLONEQ Expr1  */
#line 274 "Saul.y"
                             { (yyval.expr_) = new Saul::Assign((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1760 "Parser.C"
    break;

  case 47: /* Expr1: _KW_if Expr1 _KW_then Expr1 _KW_else Expr1  */
#line 275 "Saul.y"
                                               { (yyval.expr_) = new Saul::If((yyvsp[-4].expr_), (yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1766 "Parser.C"
    break;

  case 48: /* Expr1: Expr2  */
#line 276 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1772 "Parser.C"
    break;

  case 49: /* Expr2: Expr3 _LT Expr3  */
#line 278 "Saul.y"
                        { (yyval.expr_) = new Saul::LessThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1778 "Parser.C"
    break;

  case 50: /* Expr2: Expr3 _LDARROW Expr3  */
#line 279 "Saul.y"
                         { (yyval.expr_) = new Saul::LessThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1784 "Parser.C"
    break;

  case 51: /* Expr2: Expr3 _GT Expr3  */
#line 280 "Saul.y"
                    { (yyval.expr_) = new Saul::GreaterThan((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1790 "Parser.C"
    break;

  case 52: /* Expr2: Expr3 _GTEQ Expr3  */
#line 281 "Saul.y"
                      { (yyval.expr_) = new Saul::GreaterThanOrEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1796 "Parser.C"
    break;

  case 53: /* Expr2: Expr3 _DEQ Expr3  */
#line 282 "Saul.y"
                     { (yyval.expr_) = new Saul::Equal((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1802 "Parser.C"
    break;

  case 54: /* Expr2: Expr3 _BANGEQ Expr3  */
#line 283 "Saul.y"
                        { (yyval.expr_) = new Saul::NotEqual((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1808 "Parser.C"
    break;

  case 55: /* Expr2: Expr3  */
#line 284 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1814 "Parser.C"
    break;

  case 56: /* Expr3: _KW_fn _LPAREN ListParamDecl _RPAREN _LBRACE _KW_return Expr _RBRACE  */
#line 289 "Saul.y"
                                                                             { std::reverse((yyvsp[-5].listparamdecl_)->begin(),(yyvsp[-5].listparamdecl_)->end()) ;(yyval.expr_) = new Saul::Abstraction((yyvsp[-5].listparamdecl_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1820 "Parser.C"
    break;

  case 57: /* Expr3: _KW_match Expr2 _LBRACE ListMatchCase _RBRACE  */
#line 290 "Saul.y"
                                                  { std::reverse((yyvsp[-1].listmatchcase_)->begin(),(yyvsp[-1].listmatchcase_)->end()) ;(yyval.expr_) = new Saul::Match((yyvsp[-3].expr_), (yyvsp[-1].listmatchcase_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1826 "Parser.C"
    break;

  case 58: /* Expr3: Expr3 _PLUS Expr4  */
#line 291 "Saul.y"
                      { (yyval.expr_) = new Saul::Add((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1832 "Parser.C"
    break;

  case 59: /* Expr3: Expr3 _MINUS Expr4  */
#line 292 "Saul.y"
                       { (yyval.expr_) = new Saul::Subtract((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1838 "Parser.C"
    break;

  case 60: /* Expr3: Expr3 _KW_or Expr4  */
#line 293 "Saul.y"
                       { (yyval.expr_) = new Saul::LogicOr((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1844 "Parser.C"
    break;

  case 61: /* Expr3: Expr4  */
#line 294 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1850 "Parser.C"
    break;

  case 62: /* Expr4: Expr4 _STAR Expr5  */
#line 296 "Saul.y"
                          { (yyval.expr_) = new Saul::Multiply((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1856 "Parser.C"
    break;

  case 63: /* Expr4: Expr4 _SLASH Expr5  */
#line 297 "Saul.y"
                       { (yyval.expr_) = new Saul::Divide((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1862 "Parser.C"
    break;

  case 64: /* Expr4: Expr4 _KW_and Expr5  */
#line 298 "Saul.y"
                        { (yyval.expr_) = new Saul::LogicAnd((yyvsp[-2].expr_), (yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1868 "Parser.C"
    break;

  case 65: /* Expr4: Expr5  */
#line 299 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1874 "Parser.C"
    break;

  case 66: /* Expr5: _KW_new _LPAREN Expr5 _RPAREN  */
#line 301 "Saul.y"
                                      { (yyval.expr_) = new Saul::Ref((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1880 "Parser.C"
    break;

  case 67: /* Expr5: _STAR Expr5  */
#line 302 "Saul.y"
                { (yyval.expr_) = new Saul::Deref((yyvsp[0].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1886 "Parser.C"
    break;

  case 68: /* Expr5: Expr6  */
#line 303 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1892 "Parser.C"
    break;

  case 69: /* Expr6: Expr6 _LPAREN ListExpr _RPAREN  */
#line 305 "Saul.y"
                                       { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Saul::Application((yyvsp[-3].expr_), (yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1898 "Parser.C"
    break;

  case 70: /* Expr6: Expr6 _DOT T_SaulIdent  */
#line 306 "Saul.y"
                           { (yyval.expr_) = new Saul::DotRecord((yyvsp[-2].expr_), (yyvsp[0]._string)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1904 "Parser.C"
    break;

  case 71: /* Expr6: Expr6 _DOT _INTEGER_  */
#line 307 "Saul.y"
                         { (yyval.expr_) = new Saul::DotTuple((yyvsp[-2].expr_), (yyvsp[0]._int)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1910 "Parser.C"
    break;

  case 72: /* Expr6: _LBRACE ListExpr _RBRACE  */
#line 308 "Saul.y"
                             { std::reverse((yyvsp[-1].listexpr_)->begin(),(yyvsp[-1].listexpr_)->end()) ;(yyval.expr_) = new Saul::Tuple((yyvsp[-1].listexpr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1916 "Parser.C"
    break;

  case 73: /* Expr6: _LBRACE ListBinding _RBRACE  */
#line 309 "Saul.y"
                                { std::reverse((yyvsp[-1].listbinding_)->begin(),(yyvsp[-1].listbinding_)->end()) ;(yyval.expr_) = new Saul::Record((yyvsp[-1].listbinding_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1922 "Parser.C"
    break;

  case 74: /* Expr6: _SYMB_23  */
#line 310 "Saul.y"
             { (yyval.expr_) = new Saul::Panic(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1928 "Parser.C"
    break;

  case 75: /* Expr6: _KW_inl _LPAREN Expr _RPAREN  */
#line 311 "Saul.y"
                                 { (yyval.expr_) = new Saul::Inl((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1934 "Parser.C"
    break;

  case 76: /* Expr6: _KW_inr _LPAREN Expr _RPAREN  */
#line 312 "Saul.y"
                                 { (yyval.expr_) = new Saul::Inr((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1940 "Parser.C"
    break;

  case 77: /* Expr6: _KW_succ _LPAREN Expr _RPAREN  */
#line 313 "Saul.y"
                                  { (yyval.expr_) = new Saul::Succ((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1946 "Parser.C"
    break;

  case 78: /* Expr6: _KW_not _LPAREN Expr _RPAREN  */
#line 314 "Saul.y"
                                 { (yyval.expr_) = new Saul::LogicNot((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1952 "Parser.C"
    break;

  case 79: /* Expr6: _SYMB_24 _LPAREN Expr _RPAREN  */
#line 315 "Saul.y"
                                  { (yyval.expr_) = new Saul::Pred((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1958 "Parser.C"
    break;

  case 80: /* Expr6: _SYMB_25 _LPAREN Expr _RPAREN  */
#line 316 "Saul.y"
                                  { (yyval.expr_) = new Saul::IsZero((yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1964 "Parser.C"
    break;

  case 81: /* Expr6: _SYMB_26 _LPAREN Expr _COMMA Expr _COMMA Expr _RPAREN  */
#line 317 "Saul.y"
                                                          { (yyval.expr_) = new Saul::NatRec((yyvsp[-5].expr_), (yyvsp[-3].expr_), (yyvsp[-1].expr_)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1970 "Parser.C"
    break;

  case 82: /* Expr6: Expr7  */
#line 318 "Saul.y"
          { (yyval.expr_) = (yyvsp[0].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1976 "Parser.C"
    break;

  case 83: /* Expr7: _KW_true  */
#line 320 "Saul.y"
                 { (yyval.expr_) = new Saul::ConstTrue(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1982 "Parser.C"
    break;

  case 84: /* Expr7: _KW_false  */
#line 321 "Saul.y"
              { (yyval.expr_) = new Saul::ConstFalse(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1988 "Parser.C"
    break;

  case 85: /* Expr7: _KW_unit  */
#line 322 "Saul.y"
             { (yyval.expr_) = new Saul::ConstUnit(); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 1994 "Parser.C"
    break;

  case 86: /* Expr7: _INTEGER_  */
#line 323 "Saul.y"
              { (yyval.expr_) = new Saul::ConstInt((yyvsp[0]._int)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2000 "Parser.C"
    break;

  case 87: /* Expr7: T_SaulIdent  */
#line 324 "Saul.y"
                { (yyval.expr_) = new Saul::Var((yyvsp[0]._string)); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2006 "Parser.C"
    break;

  case 88: /* Expr7: _LPAREN Expr _RPAREN  */
#line 325 "Saul.y"
                         { (yyval.expr_) = (yyvsp[-1].expr_); (yyval.expr_)->line_number = (yyloc).first_line; (yyval.expr_)->char_number = (yyloc).first_column; result->expr_ = (yyval.expr_); }
#line 2012 "Parser.C"
    break;

  case 89: /* Type: _KW_fn _LPAREN ListType _RPAREN _RARROW Type  */
#line 327 "Saul.y"
                                                    { std::reverse((yyvsp[-3].listtype_)->begin(),(yyvsp[-3].listtype_)->end()) ;(yyval.type_) = new Saul::TypeFun((yyvsp[-3].listtype_), (yyvsp[0].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2018 "Parser.C"
    break;

  case 90: /* Type: Type1  */
#line 328 "Saul.y"
          { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2024 "Parser.C"
    break;

  case 91: /* Type1: Type2 _PLUS Type2  */
#line 330 "Saul.y"
                          { (yyval.type_) = new Saul::TypeSum((yyvsp[-2].type_), (yyvsp[0].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2030 "Parser.C"
    break;

  case 92: /* Type1: Type2  */
#line 331 "Saul.y"
          { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2036 "Parser.C"
    break;

  case 93: /* Type2: _LBRACE ListType _RBRACE  */
#line 333 "Saul.y"
                                 { std::reverse((yyvsp[-1].listtype_)->begin(),(yyvsp[-1].listtype_)->end()) ;(yyval.type_) = new Saul::TypeTuple((yyvsp[-1].listtype_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2042 "Parser.C"
    break;

  case 94: /* Type2: _LBRACE ListRecordFieldType _RBRACE  */
#line 334 "Saul.y"
                                        { std::reverse((yyvsp[-1].listrecordfieldtype_)->begin(),(yyvsp[-1].listrecordfieldtype_)->end()) ;(yyval.type_) = new Saul::TypeRecord((yyvsp[-1].listrecordfieldtype_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2048 "Parser.C"
    break;

  case 95: /* Type2: Type3  */
#line 335 "Saul.y"
          { (yyval.type_) = (yyvsp[0].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2054 "Parser.C"
    break;

  case 96: /* Type3: _KW_Bool  */
#line 337 "Saul.y"
                 { (yyval.type_) = new Saul::TypeBool(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2060 "Parser.C"
    break;

  case 97: /* Type3: _KW_Nat  */
#line 338 "Saul.y"
            { (yyval.type_) = new Saul::TypeNat(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2066 "Parser.C"
    break;

  case 98: /* Type3: _KW_Unit  */
#line 339 "Saul.y"
             { (yyval.type_) = new Saul::TypeUnit(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2072 "Parser.C"
    break;

  case 99: /* Type3: _KW_Top  */
#line 340 "Saul.y"
            { (yyval.type_) = new Saul::TypeTop(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2078 "Parser.C"
    break;

  case 100: /* Type3: _KW_Bot  */
#line 341 "Saul.y"
            { (yyval.type_) = new Saul::TypeBottom(); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2084 "Parser.C"
    break;

  case 101: /* Type3: _AMP Type2  */
#line 342 "Saul.y"
               { (yyval.type_) = new Saul::TypeRef((yyvsp[0].type_)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2090 "Parser.C"
    break;

  case 102: /* Type3: T_SaulIdent  */
#line 343 "Saul.y"
                { (yyval.type_) = new Saul::TypeVar((yyvsp[0]._string)); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2096 "Parser.C"
    break;

  case 103: /* Type3: _LPAREN Type _RPAREN  */
#line 344 "Saul.y"
                         { (yyval.type_) = (yyvsp[-1].type_); (yyval.type_)->line_number = (yyloc).first_line; (yyval.type_)->char_number = (yyloc).first_column; result->type_ = (yyval.type_); }
#line 2102 "Parser.C"
    break;

  case 104: /* ListType: %empty  */
#line 346 "Saul.y"
                       { (yyval.listtype_) = new Saul::ListType(); result->listtype_ = (yyval.listtype_); }
#line 2108 "Parser.C"
    break;

  case 105: /* ListType: Type  */
#line 347 "Saul.y"
         { (yyval.listtype_) = new Saul::ListType(); (yyval.listtype_)->push_back((yyvsp[0].type_)); result->listtype_ = (yyval.listtype_); }
#line 2114 "Parser.C"
    break;

  case 106: /* ListType: Type _COMMA ListType  */
#line 348 "Saul.y"
                         { (yyvsp[0].listtype_)->push_back((yyvsp[-2].type_)); (yyval.listtype_) = (yyvsp[0].listtype_); result->listtype_ = (yyval.listtype_); }
#line 2120 "Parser.C"
    break;

  case 107: /* RecordFieldType: T_SaulIdent _COLON Type  */
#line 350 "Saul.y"
                                          { (yyval.recordfieldtype_) = new Saul::ARecordFieldType((yyvsp[-2]._string), (yyvsp[0].type_)); (yyval.recordfieldtype_)->line_number = (yyloc).first_line; (yyval.recordfieldtype_)->char_number = (yyloc).first_column; result->recordfieldtype_ = (yyval.recordfieldtype_); }
#line 2126 "Parser.C"
    break;

  case 108: /* ListRecordFieldType: RecordFieldType  */
#line 352 "Saul.y"
                                      { (yyval.listrecordfieldtype_) = new Saul::ListRecordFieldType(); (yyval.listrecordfieldtype_)->push_back((yyvsp[0].recordfieldtype_)); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2132 "Parser.C"
    break;

  case 109: /* ListRecordFieldType: RecordFieldType _COMMA ListRecordFieldType  */
#line 353 "Saul.y"
                                               { (yyvsp[0].listrecordfieldtype_)->push_back((yyvsp[-2].recordfieldtype_)); (yyval.listrecordfieldtype_) = (yyvsp[0].listrecordfieldtype_); result->listrecordfieldtype_ = (yyval.listrecordfieldtype_); }
#line 2138 "Parser.C"
    break;


#line 2142 "Parser.C"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
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
                      yytoken, &yylval, &yylloc, scanner, result);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 356 "Saul.y"


namespace Saul
{
/* Entrypoint: parse Program* from file. */
Program* pProgram(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse Program* from string. */
Program* psProgram(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.program_;
  }
}

/* Entrypoint: parse ListSaulIdent* from file. */
ListSaulIdent* pListSaulIdent(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listsaulident_->begin(), result.listsaulident_->end());
    return result.listsaulident_;
  }
}

/* Entrypoint: parse ListSaulIdent* from string. */
ListSaulIdent* psListSaulIdent(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listsaulident_->begin(), result.listsaulident_->end());
    return result.listsaulident_;
  }
}

/* Entrypoint: parse LanguageDecl* from file. */
LanguageDecl* pLanguageDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.languagedecl_;
  }
}

/* Entrypoint: parse LanguageDecl* from string. */
LanguageDecl* psLanguageDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.languagedecl_;
  }
}

/* Entrypoint: parse Decl* from file. */
Decl* pDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decl_;
  }
}

/* Entrypoint: parse Decl* from string. */
Decl* psDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.decl_;
  }
}

/* Entrypoint: parse ListDecl* from file. */
ListDecl* pListDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listdecl_;
  }
}

/* Entrypoint: parse ListDecl* from string. */
ListDecl* psListDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listdecl_;
  }
}

/* Entrypoint: parse LocalDecl* from file. */
LocalDecl* pLocalDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.localdecl_;
  }
}

/* Entrypoint: parse LocalDecl* from string. */
LocalDecl* psLocalDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.localdecl_;
  }
}

/* Entrypoint: parse ListLocalDecl* from file. */
ListLocalDecl* pListLocalDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlocaldecl_;
  }
}

/* Entrypoint: parse ListLocalDecl* from string. */
ListLocalDecl* psListLocalDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listlocaldecl_;
  }
}

/* Entrypoint: parse Annotation* from file. */
Annotation* pAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse Annotation* from string. */
Annotation* psAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.annotation_;
  }
}

/* Entrypoint: parse ListAnnotation* from file. */
ListAnnotation* pListAnnotation(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listannotation_;
  }
}

/* Entrypoint: parse ListAnnotation* from string. */
ListAnnotation* psListAnnotation(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.listannotation_;
  }
}

/* Entrypoint: parse ParamDecl* from file. */
ParamDecl* pParamDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.paramdecl_;
  }
}

/* Entrypoint: parse ParamDecl* from string. */
ParamDecl* psParamDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.paramdecl_;
  }
}

/* Entrypoint: parse ListParamDecl* from file. */
ListParamDecl* pListParamDecl(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparamdecl_->begin(), result.listparamdecl_->end());
    return result.listparamdecl_;
  }
}

/* Entrypoint: parse ListParamDecl* from string. */
ListParamDecl* psListParamDecl(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listparamdecl_->begin(), result.listparamdecl_->end());
    return result.listparamdecl_;
  }
}

/* Entrypoint: parse ReturnType* from file. */
ReturnType* pReturnType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.returntype_;
  }
}

/* Entrypoint: parse ReturnType* from string. */
ReturnType* psReturnType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.returntype_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType* from file. */
ListType* pListType9(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType* from string. */
ListType* psListType9(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse MatchCase* from file. */
MatchCase* pMatchCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.matchcase_;
  }
}

/* Entrypoint: parse MatchCase* from string. */
MatchCase* psMatchCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.matchcase_;
  }
}

/* Entrypoint: parse ListMatchCase* from file. */
ListMatchCase* pListMatchCase(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listmatchcase_->begin(), result.listmatchcase_->end());
    return result.listmatchcase_;
  }
}

/* Entrypoint: parse ListMatchCase* from string. */
ListMatchCase* psListMatchCase(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listmatchcase_->begin(), result.listmatchcase_->end());
    return result.listmatchcase_;
  }
}

/* Entrypoint: parse Pattern* from file. */
Pattern* pPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pattern_;
  }
}

/* Entrypoint: parse Pattern* from string. */
Pattern* psPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.pattern_;
  }
}

/* Entrypoint: parse ListPattern* from file. */
ListPattern* pListPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listpattern_->begin(), result.listpattern_->end());
    return result.listpattern_;
  }
}

/* Entrypoint: parse ListPattern* from string. */
ListPattern* psListPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listpattern_->begin(), result.listpattern_->end());
    return result.listpattern_;
  }
}

/* Entrypoint: parse LabelledPattern* from file. */
LabelledPattern* pLabelledPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelledpattern_;
  }
}

/* Entrypoint: parse LabelledPattern* from string. */
LabelledPattern* psLabelledPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.labelledpattern_;
  }
}

/* Entrypoint: parse ListLabelledPattern* from file. */
ListLabelledPattern* pListLabelledPattern(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlabelledpattern_->begin(), result.listlabelledpattern_->end());
    return result.listlabelledpattern_;
  }
}

/* Entrypoint: parse ListLabelledPattern* from string. */
ListLabelledPattern* psListLabelledPattern(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listlabelledpattern_->begin(), result.listlabelledpattern_->end());
    return result.listlabelledpattern_;
  }
}

/* Entrypoint: parse Binding* from file. */
Binding* pBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binding_;
  }
}

/* Entrypoint: parse Binding* from string. */
Binding* psBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.binding_;
  }
}

/* Entrypoint: parse ListBinding* from file. */
ListBinding* pListBinding(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listbinding_->begin(), result.listbinding_->end());
    return result.listbinding_;
  }
}

/* Entrypoint: parse ListBinding* from string. */
ListBinding* psListBinding(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listbinding_->begin(), result.listbinding_->end());
    return result.listbinding_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListExpr* from file. */
ListExpr* pListExpr(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr* from string. */
ListExpr* psListExpr(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse ListExpr* from file. */
ListExpr* pListExpr2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse ListExpr* from string. */
ListExpr* psListExpr2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listexpr_->begin(), result.listexpr_->end());
    return result.listexpr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr4(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr4(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr5(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr5(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr6(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr6(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from file. */
Expr* pExpr7(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Expr* from string. */
Expr* psExpr7(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.expr_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType1(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType1(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType2(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType2(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from file. */
Type* pType3(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type* from string. */
Type* psType3(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse ListType* from file. */
ListType* pListType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse ListType* from string. */
ListType* psListType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listtype_->begin(), result.listtype_->end());
    return result.listtype_;
  }
}

/* Entrypoint: parse RecordFieldType* from file. */
RecordFieldType* pRecordFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfieldtype_;
  }
}

/* Entrypoint: parse RecordFieldType* from string. */
RecordFieldType* psRecordFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.recordfieldtype_;
  }
}

/* Entrypoint: parse ListRecordFieldType* from file. */
ListRecordFieldType* pListRecordFieldType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordfieldtype_->begin(), result.listrecordfieldtype_->end());
    return result.listrecordfieldtype_;
  }
}

/* Entrypoint: parse ListRecordFieldType* from string. */
ListRecordFieldType* psListRecordFieldType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = Saul_initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = Saul_scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  Saul_delete_buffer(buf, scanner);
  Saullex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
std::reverse(result.listrecordfieldtype_->begin(), result.listrecordfieldtype_->end());
    return result.listrecordfieldtype_;
  }
}


}
