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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





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

#include "maths_parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONSTANT_INT = 3,               /* CONSTANT_INT  */
  YYSYMBOL_CONSTANT_FLOAT = 4,             /* CONSTANT_FLOAT  */
  YYSYMBOL_IDENTIFIER = 5,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 7,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 8,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 9,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 10,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 11,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 12,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 13,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 14,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 15,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 16,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 17,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 18,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 19,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 20,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 21,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 22,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 23,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 24,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 25,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 26,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 27,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 28,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 29,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 30,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 31,                    /* EXTERN  */
  YYSYMBOL_STATIC = 32,                    /* STATIC  */
  YYSYMBOL_AUTO = 33,                      /* AUTO  */
  YYSYMBOL_REGISTER = 34,                  /* REGISTER  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_LONG = 38,                      /* LONG  */
  YYSYMBOL_SIGNED = 39,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 40,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 42,                    /* DOUBLE  */
  YYSYMBOL_CONST = 43,                     /* CONST  */
  YYSYMBOL_VOLATILE = 44,                  /* VOLATILE  */
  YYSYMBOL_VOID = 45,                      /* VOID  */
  YYSYMBOL_STRUCT = 46,                    /* STRUCT  */
  YYSYMBOL_UNION = 47,                     /* UNION  */
  YYSYMBOL_ENUM = 48,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 49,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_DEFAULT = 51,                   /* DEFAULT  */
  YYSYMBOL_IF = 52,                        /* IF  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_GOTO = 58,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_HELLO_WORLD = 62,               /* HELLO_WORLD  */
  YYSYMBOL_63_ = 63,                       /* '('  */
  YYSYMBOL_64_ = 64,                       /* ')'  */
  YYSYMBOL_65_ = 65,                       /* '['  */
  YYSYMBOL_66_ = 66,                       /* ']'  */
  YYSYMBOL_67_ = 67,                       /* ';'  */
  YYSYMBOL_68_ = 68,                       /* '='  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* ','  */
  YYSYMBOL_72_ = 72,                       /* '*'  */
  YYSYMBOL_73_ = 73,                       /* ':'  */
  YYSYMBOL_74_ = 74,                       /* '.'  */
  YYSYMBOL_75_ = 75,                       /* '&'  */
  YYSYMBOL_76_ = 76,                       /* '+'  */
  YYSYMBOL_77_ = 77,                       /* '-'  */
  YYSYMBOL_78_ = 78,                       /* '~'  */
  YYSYMBOL_79_ = 79,                       /* '!'  */
  YYSYMBOL_80_ = 80,                       /* '/'  */
  YYSYMBOL_81_ = 81,                       /* '%'  */
  YYSYMBOL_82_ = 82,                       /* '<'  */
  YYSYMBOL_83_ = 83,                       /* '>'  */
  YYSYMBOL_84_ = 84,                       /* '^'  */
  YYSYMBOL_85_ = 85,                       /* '|'  */
  YYSYMBOL_86_ = 86,                       /* '?'  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_ROOT = 88,                      /* ROOT  */
  YYSYMBOL_type_specifier = 89,            /* type_specifier  */
  YYSYMBOL_storage_class_specifier = 90,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 91,            /* type_qualifier  */
  YYSYMBOL_declaration_specifiers = 92,    /* declaration_specifiers  */
  YYSYMBOL_direct_declarator = 93,         /* direct_declarator  */
  YYSYMBOL_declarator = 94,                /* declarator  */
  YYSYMBOL_type_name = 95,                 /* type_name  */
  YYSYMBOL_declaration = 96,               /* declaration  */
  YYSYMBOL_init_declarator = 97,           /* init_declarator  */
  YYSYMBOL_initializer = 98,               /* initializer  */
  YYSYMBOL_parameter_declaration = 99,     /* parameter_declaration  */
  YYSYMBOL_enum_specifier = 100,           /* enum_specifier  */
  YYSYMBOL_enumerator = 101,               /* enumerator  */
  YYSYMBOL_pointer = 102,                  /* pointer  */
  YYSYMBOL_abstract_declarator = 103,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 104, /* direct_abstract_declarator  */
  YYSYMBOL_struct_or_union_specifier = 105, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 106,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 107,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 108,       /* struct_declaration  */
  YYSYMBOL_struct_declarator = 109,        /* struct_declarator  */
  YYSYMBOL_specifier_qualifier_list = 110, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 111,   /* struct_declarator_list  */
  YYSYMBOL_init_declarator_list = 112,     /* init_declarator_list  */
  YYSYMBOL_enumerator_list = 113,          /* enumerator_list  */
  YYSYMBOL_initializer_list = 114,         /* initializer_list  */
  YYSYMBOL_identifier_list = 115,          /* identifier_list  */
  YYSYMBOL_type_qualifier_list = 116,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 117,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 118,           /* parameter_list  */
  YYSYMBOL_argument_expression_list = 119, /* argument_expression_list  */
  YYSYMBOL_primary_expression = 120,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 121,       /* postfix_expression  */
  YYSYMBOL_unary_expression = 122,         /* unary_expression  */
  YYSYMBOL_unary_operator = 123,           /* unary_operator  */
  YYSYMBOL_cast_expression = 124,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 125, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 126,      /* additive_expression  */
  YYSYMBOL_shift_expression = 127,         /* shift_expression  */
  YYSYMBOL_relational_expression = 128,    /* relational_expression  */
  YYSYMBOL_equality_expression = 129,      /* equality_expression  */
  YYSYMBOL_and_expression = 130,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 131,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 132,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 133,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 134,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 135,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 136,    /* assignment_expression  */
  YYSYMBOL_expression = 137,               /* expression  */
  YYSYMBOL_constant_expression = 138       /* constant_expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
typedef yytype_int16 yy_state_t;

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   715

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
       2,     2,     2,    79,     2,     2,     2,    81,    75,     2,
      63,    64,    72,    76,    71,    77,    74,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    67,
      82,    68,    83,    86,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    85,    70,    78,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    91,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   123,   124,   125,   126,   127,
     131,   132,   136,   137,   138,   139,   145,   146,   147,   148,
     149,   150,   151,   155,   156,   160,   161,   166,   168,   172,
     173,   176,   177,   178,   191,   192,   193,   198,   199,   200,
     203,   204,   209,   210,   211,   212,   215,   216,   217,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   234,   235,
     236,   239,   240,   244,   245,   248,   251,   252,   253,   258,
     259,   260,   261,   264,   265,   268,   269,   272,   273,   276,
     277,   280,   281,   284,   285,   288,   289,   292,   293,   296,
     297,   370,   371,   372,   373,   374,   378,   379,   380,   381,
     382,   383,   384,   385,   391,   392,   393,   394,   395,   396,
     400,   401,   402,   403,   404,   405,   409,   410,   414,   415,
     416,   417,   421,   422,   423,   427,   428,   429,   433,   434,
     435,   436,   437,   441,   442,   443,   447,   448,   452,   453,
     457,   458,   462,   463,   467,   468,   472,   473,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     493,   494,   498
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
  "\"end of file\"", "error", "\"invalid token\"", "CONSTANT_INT",
  "CONSTANT_FLOAT", "IDENTIFIER", "STRING_LITERAL", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "HELLO_WORLD", "'('",
  "')'", "'['", "']'", "';'", "'='", "'{'", "'}'", "','", "'*'", "':'",
  "'.'", "'&'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "$accept", "ROOT", "type_specifier",
  "storage_class_specifier", "type_qualifier", "declaration_specifiers",
  "direct_declarator", "declarator", "type_name", "declaration",
  "init_declarator", "initializer", "parameter_declaration",
  "enum_specifier", "enumerator", "pointer", "abstract_declarator",
  "direct_abstract_declarator", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator", "specifier_qualifier_list",
  "struct_declarator_list", "init_declarator_list", "enumerator_list",
  "initializer_list", "identifier_list", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "argument_expression_list",
  "primary_expression", "postfix_expression", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "expression", "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-133)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     653,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,    16,    49,   653,
     653,    20,  -133,  -133,  -133,    21,   -46,    95,  -133,  -133,
    -133,  -133,    30,  -133,    17,    -8,    35,  -133,    12,   -26,
      42,   667,    95,    50,  -133,    37,    81,  -133,  -133,  -133,
    -133,    17,   499,   209,   273,    -8,  -133,    30,   667,  -133,
    -133,   543,  -133,   383,    84,   318,  -133,    95,  -133,  -133,
    -133,  -133,  -133,    51,  -133,   -21,    92,    77,  -133,  -133,
    -133,  -133,   328,   405,   405,   192,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   143,  -133,   318,  -133,    78,    45,
     164,    23,   162,    85,    89,    98,   173,    -2,  -133,   127,
     273,  -133,   486,  -133,  -133,  -133,   579,  -133,  -133,   318,
    -133,  -133,   132,  -133,     0,  -133,  -133,  -133,   455,   290,
    -133,     9,  -133,    31,  -133,   195,  -133,   633,   192,  -133,
     318,  -133,  -133,   147,   529,  -133,   -18,   202,  -133,  -133,
     300,   318,   215,  -133,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,  -133,  -133,   109,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,  -133,  -133,   318,
    -133,     5,  -133,   160,   161,  -133,   175,    31,   598,   308,
    -133,  -133,  -133,   178,   318,   402,    54,  -133,  -133,   318,
    -133,  -133,   -12,  -133,    -1,  -133,  -133,  -133,  -133,    78,
      78,    45,    45,   164,   164,   164,   164,    23,    23,   162,
      85,    89,    98,   173,    67,  -133,   182,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   179,  -133,   181,  -133,  -133,  -133,
    -133,   318,  -133,   318,  -133,  -133,  -133,  -133,  -133,  -133
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    15,    16,    17,    18,    19,     5,     6,     7,     8,
      11,    12,     9,    10,     4,    71,    72,     0,     0,    24,
      22,     0,     3,    14,    13,     0,    49,     0,     1,    25,
      23,    26,     0,    37,    52,    34,    39,    85,     0,     0,
      70,     0,     0,    50,    87,     0,     0,    20,    21,    93,
      54,    53,     0,     0,     0,    33,    38,     0,     0,    80,
      82,     0,    73,     0,     0,     0,    47,     0,    27,    94,
      55,    91,    32,    46,    97,     0,     0,    95,   102,   103,
     101,   104,     0,     0,     0,     0,    29,   121,   120,   122,
     123,   124,   125,   106,   114,   126,     0,   128,   132,   135,
     138,   143,   146,   148,   150,   152,   154,   156,   172,     0,
       0,    40,   126,   158,    41,    86,     0,    69,    74,     0,
      79,    81,    76,    83,     0,    48,    51,    88,     0,     0,
      44,    56,    45,    57,    31,     0,    30,     0,     0,   118,
       0,   115,   116,     0,    35,   170,     0,     0,   112,   113,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    77,     0,
      75,     0,    64,     0,     0,    60,     0,    58,     0,     0,
      92,    96,    98,     0,     0,     0,    56,    36,   105,     0,
     111,   108,     0,    99,     0,   110,   129,   130,   131,   133,
     134,   136,   137,   141,   142,   139,   140,   144,   145,   147,
     149,   151,   153,   155,     0,    42,     0,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   159,    78,    84,
      59,    65,    61,    66,     0,    62,     0,   119,   127,   171,
     109,     0,   107,     0,    43,    90,    67,    63,   100,   157
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,   -34,  -133,   -29,    28,   -30,   -19,    88,  -133,
     187,   -99,   111,  -133,   183,   -31,   -64,  -125,  -133,  -133,
     191,   -43,    62,   -47,  -133,  -133,   214,  -133,  -133,  -133,
     -51,  -133,  -133,  -133,  -133,   -52,  -133,   -92,    24,    44,
     -20,    57,    96,    94,    97,   103,   118,  -133,   -53,   -15,
    -132,   -50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    19,    20,    60,    73,    35,    36,   143,    22,
      37,   111,    74,    23,    44,    38,   193,   133,    24,    25,
      61,    62,   123,    63,   124,    39,    45,   175,    75,    51,
     194,    77,   212,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   113,   145,
     146,   109
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,    76,   112,    50,   153,    49,   197,    59,    55,   132,
      31,   174,   108,    46,    31,   126,   171,    31,   118,   214,
      70,    26,    69,    42,    59,    31,    40,    59,    21,   120,
     139,   141,   142,   112,   121,    31,   161,   162,   144,   114,
     234,    56,   131,   134,   122,    57,   208,    29,    30,    28,
     135,    59,   260,   209,   130,    52,    31,    53,   112,   261,
      47,    48,   216,   217,   218,   262,   108,   190,    32,   188,
     209,   191,   128,   118,   129,    32,   108,    34,   119,   196,
     207,   197,    59,    32,   172,    27,   112,    33,   112,    34,
      41,   144,    34,    32,   198,   114,   199,   131,   112,   112,
      43,    55,    34,    54,    59,   163,   164,    66,    67,    46,
     120,    58,   258,   206,   128,   121,   129,   205,    65,   129,
     112,   157,   158,    34,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   213,   108,   265,   209,   248,
     263,   223,   224,   225,   226,    68,   108,   254,   137,   256,
     154,   147,   148,   149,   125,    67,   136,   112,   155,   156,
     167,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   122,   168,   206,   159,   160,   165,   166,   235,
     236,   219,   220,   169,   112,    78,    79,    80,    81,    82,
     170,    83,    84,   173,   259,    78,    79,    80,    81,    82,
     200,    83,    84,   221,   222,   189,   150,   210,   151,   112,
     269,   204,    78,    79,    80,    81,    82,   152,    83,    84,
     215,   114,   227,   228,   250,   251,   203,     6,     7,     8,
       9,    10,    11,    12,    13,    47,    48,    14,    15,    16,
      17,   252,   257,   266,   115,    85,   268,   267,   202,   116,
     127,   110,   264,   249,    87,    85,    64,    88,    89,    90,
      91,    92,   230,   229,    87,     0,   231,    88,    89,    90,
      91,    92,    85,   232,     0,    86,    78,    79,    80,    81,
      82,    87,    83,    84,    88,    89,    90,    91,    92,   233,
       0,     0,     0,    78,    79,    80,    81,    82,     0,    83,
      84,     0,     0,    78,    79,    80,    81,    82,     0,    83,
      84,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,    78,    79,    80,    81,    82,     0,    83,    84,     0,
       0,    78,    79,    80,    81,    82,    85,    83,    84,     0,
       0,     0,   110,     0,     0,    87,     0,     0,    88,    89,
      90,    91,    92,    85,     0,     0,   195,     0,     0,     0,
       0,     0,    87,    85,   211,    88,    89,    90,    91,    92,
       0,    85,    87,     0,   255,    88,    89,    90,    91,    92,
      87,    85,     0,    88,    89,    90,    91,    92,    31,     0,
      87,   138,     0,    88,    89,    90,    91,    92,     0,     0,
      87,     0,     0,    88,    89,    90,    91,    92,    78,    79,
      80,    81,    82,     0,    83,    84,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    47,    48,    14,    15,
      16,    17,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    32,    14,    15,    16,
      17,     0,     0,     0,     0,    34,   119,     0,     0,     0,
      31,     0,     0,     0,     0,   205,   192,   129,   140,     0,
       0,     0,     0,     0,    34,     0,     0,    87,     0,     0,
      88,    89,    90,    91,    92,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,     0,
      14,    15,    16,    17,    71,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,     0,     0,     0,   128,   192,
     129,     0,     0,     0,     0,     0,     0,    34,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,    14,    15,    16,    17,     0,     0,
       0,     0,     0,     0,   186,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     6,     7,     8,     9,    10,    11,
      12,    13,    47,    48,    14,    15,    16,    17,     6,     7,
       8,     9,    10,    11,    12,    13,    47,    48,    14,    15,
      16,    17,   205,     0,   129,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     6,     7,     8,     9,    10,    11,
      12,    13,    47,    48,    14,    15,    16,    17,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,    14,    15,    16,    17,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   253,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    14,    15,
      16,    17,   201,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,    14,    15,
      16,    17,     6,     7,     8,     9,    10,    11,    12,    13,
      47,    48,    14,    15,    16,    17
};

static const yytype_int16 yycheck[] =
{
      53,    52,    54,    34,    96,    34,   131,    41,    38,    73,
       5,   110,    65,    32,     5,    65,    18,     5,    61,   151,
      51,     5,    51,    69,    58,     5,     5,    61,     0,    63,
      82,    83,    84,    85,    63,     5,    13,    14,    85,    54,
     172,    67,    73,    64,    63,    71,    64,    19,    20,     0,
      71,    85,    64,    71,    73,    63,     5,    65,   110,    71,
      43,    44,   154,   155,   156,    66,   119,    67,    63,   119,
      71,    71,    63,   116,    65,    63,   129,    72,    73,   129,
     144,   206,   116,    63,    86,    69,   138,    67,   140,    72,
      69,   138,    72,    63,    63,   110,    65,   128,   150,   151,
       5,   131,    72,    68,   138,    82,    83,    70,    71,   128,
     144,    69,   204,   144,    63,   144,    65,    63,    68,    65,
     172,    76,    77,    72,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   150,   189,   236,    71,   189,
      73,   161,   162,   163,   164,    64,   199,   198,    71,   199,
      72,     8,     9,    10,    70,    71,    64,   209,    80,    81,
      75,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   191,    84,   205,    11,    12,    15,    16,    70,
      71,   157,   158,    85,   236,     3,     4,     5,     6,     7,
      17,     9,    10,    66,   209,     3,     4,     5,     6,     7,
       5,     9,    10,   159,   160,    73,    63,     5,    65,   261,
     263,    64,     3,     4,     5,     6,     7,    74,     9,    10,
       5,   236,   165,   166,    64,    64,   138,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    66,    64,    64,    57,    63,   261,    66,   137,    58,
      67,    69,    70,   191,    72,    63,    42,    75,    76,    77,
      78,    79,   168,   167,    72,    -1,   169,    75,    76,    77,
      78,    79,    63,   170,    -1,    66,     3,     4,     5,     6,
       7,    72,     9,    10,    75,    76,    77,    78,    79,   171,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,     3,     4,     5,     6,     7,    63,     9,    10,    -1,
      -1,    -1,    69,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    63,    64,    75,    76,    77,    78,    79,
      -1,    63,    72,    -1,    66,    75,    76,    77,    78,    79,
      72,    63,    -1,    75,    76,    77,    78,    79,     5,    -1,
      72,    63,    -1,    75,    76,    77,    78,    79,    -1,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    79,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    63,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
       5,    -1,    -1,    -1,    -1,    63,    64,    65,    63,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    79,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,     5,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    46,    47,    48,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    49,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    45,    46,    47,    48,    88,    89,
      90,    92,    96,   100,   105,   106,     5,    69,     0,    92,
      92,     5,    63,    67,    72,    93,    94,    97,   102,   112,
       5,    69,    69,     5,   101,   113,    94,    43,    44,    91,
     102,   116,    63,    65,    68,    93,    67,    71,    69,    89,
      91,   107,   108,   110,   113,    68,    70,    71,    64,    91,
     102,     5,    64,    92,    99,   115,   117,   118,     3,     4,
       5,     6,     7,     9,    10,    63,    66,    72,    75,    76,
      77,    78,    79,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   138,
      69,    98,   122,   135,   136,    97,   107,    70,   108,    73,
      89,    91,    94,   109,   111,    70,   138,   101,    63,    65,
      94,   102,   103,   104,    64,    71,    64,    71,    63,   122,
      63,   122,   122,    95,   110,   136,   137,     8,     9,    10,
      63,    65,    74,   124,    72,    80,    81,    76,    77,    11,
      12,    13,    14,    82,    83,    15,    16,    75,    84,    85,
      17,    18,    86,    66,    98,   114,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    68,    70,   138,    73,
      67,    71,    64,   103,   117,    66,   138,   104,    63,    65,
       5,    49,    99,    95,    64,    63,   102,   103,    64,    71,
       5,    64,   119,   136,   137,     5,   124,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   128,   128,   129,
     130,   131,   132,   133,   137,    70,    71,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   138,   109,
      64,    64,    66,    64,   117,    66,   138,    64,   124,   136,
      64,    71,    66,    73,    70,    98,    64,    66,   136,   135
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    99,    99,    99,   100,   100,   100,
     101,   101,   102,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     105,   106,   106,   107,   107,   108,   109,   109,   109,   110,
     110,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     125,   125,   126,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   138
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     4,     3,
       4,     4,     3,     2,     1,     1,     2,     2,     3,     1,
       3,     1,     3,     4,     2,     2,     1,     4,     5,     2,
       1,     3,     1,     2,     2,     3,     1,     1,     2,     3,
       2,     3,     3,     4,     2,     3,     3,     4,     5,     4,
       2,     1,     1,     1,     2,     3,     1,     2,     3,     2,
       1,     2,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* ROOT: declaration  */
#line 91 "src/maths_parser.y"
                      {g_root = (yyvsp[0].tree);}
#line 1495 "src/maths_parser.tab.cpp"
    break;

  case 4: /* type_specifier: VOID  */
#line 108 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_void);}
#line 1501 "src/maths_parser.tab.cpp"
    break;

  case 6: /* type_specifier: SHORT  */
#line 110 "src/maths_parser.y"
                                                                {std::cerr<<"short not assessed";exit(1);}
#line 1507 "src/maths_parser.tab.cpp"
    break;

  case 7: /* type_specifier: INT  */
#line 111 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_int);}
#line 1513 "src/maths_parser.tab.cpp"
    break;

  case 8: /* type_specifier: LONG  */
#line 112 "src/maths_parser.y"
                                                                {std::cerr<<"long not spported";exit(1);}
#line 1519 "src/maths_parser.tab.cpp"
    break;

  case 13: /* type_specifier: struct_or_union_specifier  */
#line 117 "src/maths_parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1525 "src/maths_parser.tab.cpp"
    break;

  case 14: /* type_specifier: enum_specifier  */
#line 118 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1531 "src/maths_parser.tab.cpp"
    break;

  case 16: /* storage_class_specifier: EXTERN  */
#line 124 "src/maths_parser.y"
                                {std::cerr<<"Extern not assessed"; exit(1);}
#line 1537 "src/maths_parser.tab.cpp"
    break;

  case 17: /* storage_class_specifier: STATIC  */
#line 125 "src/maths_parser.y"
                                {std::cerr<<"static not assessed"; exit(1);}
#line 1543 "src/maths_parser.tab.cpp"
    break;

  case 18: /* storage_class_specifier: AUTO  */
#line 126 "src/maths_parser.y"
                                {std::cerr<<"auto not assessed"; exit(1);}
#line 1549 "src/maths_parser.tab.cpp"
    break;

  case 19: /* storage_class_specifier: REGISTER  */
#line 127 "src/maths_parser.y"
                                {std::cerr<<"register not assessed"; exit(1);}
#line 1555 "src/maths_parser.tab.cpp"
    break;

  case 20: /* type_qualifier: CONST  */
#line 131 "src/maths_parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1561 "src/maths_parser.tab.cpp"
    break;

  case 21: /* type_qualifier: VOLATILE  */
#line 132 "src/maths_parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1567 "src/maths_parser.tab.cpp"
    break;

  case 24: /* declaration_specifiers: type_specifier  */
#line 138 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1573 "src/maths_parser.tab.cpp"
    break;

  case 25: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 139 "src/maths_parser.y"
                                                                        {std::cerr<<"long short... concat data types not assessed"<<std::endl; exit(1);}
#line 1579 "src/maths_parser.tab.cpp"
    break;

  case 26: /* direct_declarator: IDENTIFIER  */
#line 145 "src/maths_parser.y"
                                                                                                {(yyval.tree) = new variableDeclarator(*(yyvsp[0].string));}
#line 1585 "src/maths_parser.tab.cpp"
    break;

  case 27: /* direct_declarator: '(' declarator ')'  */
#line 146 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 1591 "src/maths_parser.tab.cpp"
    break;

  case 34: /* declarator: direct_declarator  */
#line 156 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1597 "src/maths_parser.tab.cpp"
    break;

  case 37: /* declaration: declaration_specifiers ';'  */
#line 166 "src/maths_parser.y"
                                                                                {std::cerr<<"variable with no name";exit(1);}
#line 1603 "src/maths_parser.tab.cpp"
    break;

  case 38: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 168 "src/maths_parser.y"
                                                                {(yyval.tree) = new declaration((yyvsp[-2].tree), (yyvsp[-1].list));}
#line 1609 "src/maths_parser.tab.cpp"
    break;

  case 39: /* init_declarator: declarator  */
#line 172 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1615 "src/maths_parser.tab.cpp"
    break;

  case 40: /* init_declarator: declarator '=' initializer  */
#line 173 "src/maths_parser.y"
                                        {(yyval.tree) = new initDeclarator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1621 "src/maths_parser.tab.cpp"
    break;

  case 41: /* initializer: assignment_expression  */
#line 176 "src/maths_parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1627 "src/maths_parser.tab.cpp"
    break;

  case 46: /* parameter_declaration: declaration_specifiers  */
#line 193 "src/maths_parser.y"
                                                                                {std::cerr<<"parameter with no name";exit(1);}
#line 1633 "src/maths_parser.tab.cpp"
    break;

  case 72: /* struct_or_union: UNION  */
#line 240 "src/maths_parser.y"
                        {std::cerr<<"union not assessed"; exit(1);}
#line 1639 "src/maths_parser.tab.cpp"
    break;

  case 79: /* specifier_qualifier_list: specifier_qualifier_list type_specifier  */
#line 258 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1645 "src/maths_parser.tab.cpp"
    break;

  case 80: /* specifier_qualifier_list: type_specifier  */
#line 259 "src/maths_parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1651 "src/maths_parser.tab.cpp"
    break;

  case 83: /* struct_declarator_list: struct_declarator  */
#line 264 "src/maths_parser.y"
                                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1657 "src/maths_parser.tab.cpp"
    break;

  case 84: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 265 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1663 "src/maths_parser.tab.cpp"
    break;

  case 85: /* init_declarator_list: init_declarator  */
#line 268 "src/maths_parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1669 "src/maths_parser.tab.cpp"
    break;

  case 86: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 269 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1675 "src/maths_parser.tab.cpp"
    break;

  case 87: /* enumerator_list: enumerator  */
#line 272 "src/maths_parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1681 "src/maths_parser.tab.cpp"
    break;

  case 88: /* enumerator_list: enumerator_list ',' enumerator  */
#line 273 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1687 "src/maths_parser.tab.cpp"
    break;

  case 89: /* initializer_list: initializer  */
#line 276 "src/maths_parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1693 "src/maths_parser.tab.cpp"
    break;

  case 90: /* initializer_list: initializer_list ',' initializer  */
#line 277 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1699 "src/maths_parser.tab.cpp"
    break;

  case 91: /* identifier_list: IDENTIFIER  */
#line 280 "src/maths_parser.y"
                                                                {(yyval.list) = initList(new identifier(*(yyvsp[0].string)));}
#line 1705 "src/maths_parser.tab.cpp"
    break;

  case 92: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 281 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), new identifier(*(yyvsp[0].string)));}
#line 1711 "src/maths_parser.tab.cpp"
    break;

  case 95: /* parameter_type_list: parameter_list  */
#line 288 "src/maths_parser.y"
                                                        {(yyval.list) = (yyvsp[0].list);}
#line 1717 "src/maths_parser.tab.cpp"
    break;

  case 96: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 289 "src/maths_parser.y"
                                        {std::cerr<<"ellipsed parameters not assessed"<<std::endl; exit(1);}
#line 1723 "src/maths_parser.tab.cpp"
    break;

  case 97: /* parameter_list: parameter_declaration  */
#line 292 "src/maths_parser.y"
                                                                        {initList((yyvsp[0].tree));}
#line 1729 "src/maths_parser.tab.cpp"
    break;

  case 98: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 293 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1735 "src/maths_parser.tab.cpp"
    break;

  case 99: /* argument_expression_list: assignment_expression  */
#line 296 "src/maths_parser.y"
                                                                                                {initList((yyvsp[0].tree));}
#line 1741 "src/maths_parser.tab.cpp"
    break;

  case 100: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 297 "src/maths_parser.y"
                                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1747 "src/maths_parser.tab.cpp"
    break;

  case 101: /* primary_expression: IDENTIFIER  */
#line 370 "src/maths_parser.y"
                                        {(yyval.tree) = new identifier(*(yyvsp[0].string));}
#line 1753 "src/maths_parser.tab.cpp"
    break;

  case 102: /* primary_expression: CONSTANT_INT  */
#line 371 "src/maths_parser.y"
                                        {(yyval.tree) = new intConstant((yyvsp[0].ival));}
#line 1759 "src/maths_parser.tab.cpp"
    break;

  case 105: /* primary_expression: '(' expression ')'  */
#line 374 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 1765 "src/maths_parser.tab.cpp"
    break;

  case 106: /* postfix_expression: primary_expression  */
#line 378 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1771 "src/maths_parser.tab.cpp"
    break;

  case 114: /* unary_expression: postfix_expression  */
#line 391 "src/maths_parser.y"
                                          {(yyval.tree) = (yyvsp[0].tree);}
#line 1777 "src/maths_parser.tab.cpp"
    break;

  case 126: /* cast_expression: unary_expression  */
#line 409 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1783 "src/maths_parser.tab.cpp"
    break;

  case 128: /* multiplicative_expression: cast_expression  */
#line 414 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1789 "src/maths_parser.tab.cpp"
    break;

  case 132: /* additive_expression: multiplicative_expression  */
#line 421 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1795 "src/maths_parser.tab.cpp"
    break;

  case 135: /* shift_expression: additive_expression  */
#line 427 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1801 "src/maths_parser.tab.cpp"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 433 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1807 "src/maths_parser.tab.cpp"
    break;

  case 143: /* equality_expression: relational_expression  */
#line 441 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1813 "src/maths_parser.tab.cpp"
    break;

  case 146: /* and_expression: equality_expression  */
#line 447 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1819 "src/maths_parser.tab.cpp"
    break;

  case 148: /* exclusive_or_expression: and_expression  */
#line 452 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1825 "src/maths_parser.tab.cpp"
    break;

  case 150: /* inclusive_or_expression: exclusive_or_expression  */
#line 457 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1831 "src/maths_parser.tab.cpp"
    break;

  case 152: /* logical_and_expression: inclusive_or_expression  */
#line 462 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1837 "src/maths_parser.tab.cpp"
    break;

  case 154: /* logical_or_expression: logical_and_expression  */
#line 467 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1843 "src/maths_parser.tab.cpp"
    break;

  case 156: /* conditional_expression: logical_or_expression  */
#line 472 "src/maths_parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1849 "src/maths_parser.tab.cpp"
    break;

  case 158: /* assignment_expression: conditional_expression  */
#line 477 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1855 "src/maths_parser.tab.cpp"
    break;

  case 170: /* expression: assignment_expression  */
#line 493 "src/maths_parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1861 "src/maths_parser.tab.cpp"
    break;

  case 171: /* expression: expression ',' assignment_expression  */
#line 494 "src/maths_parser.y"
                                                {std::cerr<<"not assessed"; exit(1);}
#line 1867 "src/maths_parser.tab.cpp"
    break;

  case 172: /* constant_expression: conditional_expression  */
#line 498 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1873 "src/maths_parser.tab.cpp"
    break;


#line 1877 "src/maths_parser.tab.cpp"

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
      yyerror (YY_("syntax error"));
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 504 "src/maths_parser.y"

#include <stdio.h>

//extern char yytext[];
//extern int column;

/*yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}*/
void yyerror(const char *s) {
    std::cerr << "Error: " << s << std::endl;
}

const Tree *g_root; // Definition of variable (to match declaration earlier)
const Tree *parseAST()
{
  g_root =0;
  yyparse();
  return g_root;
}
