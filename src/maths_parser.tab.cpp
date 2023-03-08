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
  YYSYMBOL_CONSTANT = 3,                   /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 6,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 7,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 8,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 9,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 10,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 11,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 12,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 13,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 14,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 15,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 16,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 17,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 23,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 24,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 25,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 26,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 27,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 28,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_SHORT = 35,                     /* SHORT  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_LONG = 37,                      /* LONG  */
  YYSYMBOL_SIGNED = 38,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 39,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 40,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 41,                    /* DOUBLE  */
  YYSYMBOL_CONST = 42,                     /* CONST  */
  YYSYMBOL_VOLATILE = 43,                  /* VOLATILE  */
  YYSYMBOL_VOID = 44,                      /* VOID  */
  YYSYMBOL_STRUCT = 45,                    /* STRUCT  */
  YYSYMBOL_UNION = 46,                     /* UNION  */
  YYSYMBOL_ENUM = 47,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 48,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_DEFAULT = 50,                   /* DEFAULT  */
  YYSYMBOL_IF = 51,                        /* IF  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_SWITCH = 53,                    /* SWITCH  */
  YYSYMBOL_WHILE = 54,                     /* WHILE  */
  YYSYMBOL_DO = 55,                        /* DO  */
  YYSYMBOL_FOR = 56,                       /* FOR  */
  YYSYMBOL_GOTO = 57,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 58,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 59,                     /* BREAK  */
  YYSYMBOL_RETURN = 60,                    /* RETURN  */
  YYSYMBOL_HELLO_WORLD = 61,               /* HELLO_WORLD  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_ROOT = 87,                      /* ROOT  */
  YYSYMBOL_primary_expression = 88,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 90,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 91,          /* unary_expression  */
  YYSYMBOL_unary_operator = 92,            /* unary_operator  */
  YYSYMBOL_cast_expression = 93,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 94, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 95,       /* additive_expression  */
  YYSYMBOL_shift_expression = 96,          /* shift_expression  */
  YYSYMBOL_relational_expression = 97,     /* relational_expression  */
  YYSYMBOL_equality_expression = 98,       /* equality_expression  */
  YYSYMBOL_and_expression = 99,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 100,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 101,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 102,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 103,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 104,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 105,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 106,      /* assignment_operator  */
  YYSYMBOL_expression = 107,               /* expression  */
  YYSYMBOL_constant_expression = 108,      /* constant_expression  */
  YYSYMBOL_declaration = 109,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 110,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 111,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 112,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 113,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 114,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 115, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 116,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 117,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 118,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 119, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 120,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 121,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 122,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 123,          /* enumerator_list  */
  YYSYMBOL_enumerator = 124,               /* enumerator  */
  YYSYMBOL_type_qualifier = 125,           /* type_qualifier  */
  YYSYMBOL_declarator = 126,               /* declarator  */
  YYSYMBOL_direct_declarator = 127,        /* direct_declarator  */
  YYSYMBOL_pointer = 128,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 129,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 130,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 132,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 133,          /* identifier_list  */
  YYSYMBOL_type_name = 134,                /* type_name  */
  YYSYMBOL_abstract_declarator = 135,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 136, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 137,              /* initializer  */
  YYSYMBOL_initializer_list = 138,         /* initializer_list  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_labeled_statement = 140,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 141,       /* compound_statement  */
  YYSYMBOL_declaration_list = 142,         /* declaration_list  */
  YYSYMBOL_statement_list = 143,           /* statement_list  */
  YYSYMBOL_expression_statement = 144,     /* expression_statement  */
  YYSYMBOL_selection_statement = 145,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 146,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 147,           /* jump_statement  */
  YYSYMBOL_translation_unit = 148,         /* translation_unit  */
  YYSYMBOL_external_declaration = 149,     /* external_declaration  */
  YYSYMBOL_function_definition = 150       /* function_definition  */
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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1123

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   113,   114,   115,   116,   120,   121,   122,
     123,   124,   125,   126,   127,   131,   132,   136,   137,   138,
     139,   140,   141,   145,   146,   147,   148,   149,   150,   154,
     155,   159,   160,   161,   162,   166,   167,   168,   172,   173,
     174,   178,   179,   180,   181,   182,   186,   187,   188,   192,
     193,   197,   198,   202,   203,   207,   208,   212,   213,   217,
     218,   222,   223,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   241,   242,   246,   250,   251,   255,
     256,   257,   258,   259,   260,   264,   265,   269,   270,   274,
     275,   276,   277,   278,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   297,   298,   299,   303,   304,
     308,   309,   313,   317,   318,   319,   320,   324,   325,   329,
     330,   331,   335,   336,   337,   341,   342,   346,   347,   351,
     352,   356,   357,   361,   362,   363,   364,   365,   366,   367,
     371,   372,   373,   374,   378,   379,   384,   385,   389,   390,
     394,   395,   396,   400,   401,   405,   406,   410,   411,   412,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   428,
     429,   430,   434,   435,   439,   440,   441,   442,   443,   444,
     448,   449,   450,   454,   455,   456,   457,   461,   462,   466,
     467,   471,   472,   476,   477,   478,   482,   483,   484,   485,
     489,   490,   491,   492,   493,   497,   498,   502,   503,   507,
     508,   509,   510
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
  "\"end of file\"", "error", "\"invalid token\"", "CONSTANT",
  "IDENTIFIER", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "HELLO_WORLD", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "ROOT", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     793,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
       2,    38,     3,    21,  -216,    30,  1076,  1076,  -216,    11,
    -216,  1076,   891,    80,    13,   793,  -216,  -216,   -30,    97,
       0,  -216,  -216,     3,  -216,  -216,   -34,  -216,   872,  -216,
    -216,    52,   851,  -216,   300,  1076,    30,  -216,    61,   837,
     533,    80,  -216,    97,    23,   -37,  -216,  -216,  -216,  -216,
      38,  -216,    62,  -216,    61,   851,   851,   905,  -216,    12,
     851,  -216,    33,  -216,   659,   675,   675,   704,    96,   137,
     172,   180,   444,   190,   193,   155,   174,   407,   517,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   132,   266,
     704,  -216,   135,   157,   178,    43,   208,   199,   191,   189,
     254,    26,  -216,  -216,    55,   444,  -216,  -216,   371,   186,
    -216,  -216,  -216,  -216,  -216,   192,  -216,  -216,  -216,    14,
     212,   209,  -216,    -3,  -216,  -216,  -216,  -216,   214,   -23,
     704,    97,  -216,  -216,    62,  -216,  -216,  -216,   923,  -216,
    -216,  -216,   704,    60,  -216,   201,  -216,   444,   517,  -216,
     704,  -216,  -216,   216,   444,   704,   704,   704,   226,   462,
     215,  -216,  -216,  -216,   103,     6,   114,   232,   295,  -216,
    -216,   562,   704,   298,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,   704,  -216,   704,   704,   704,
     704,   704,   704,   704,   704,   704,   704,   704,   704,   704,
     704,   704,   704,   704,   704,   704,   704,  -216,  -216,  -216,
     222,  -216,   749,   588,  -216,    53,  -216,   138,  -216,  1056,
    -216,   306,  -216,  -216,  -216,  -216,  -216,    31,  -216,  -216,
      12,  -216,   704,  -216,   248,   444,  -216,   108,   118,   144,
     250,   462,  -216,  -216,  -216,   980,   169,  -216,   704,  -216,
    -216,   150,  -216,   176,  -216,  -216,  -216,  -216,  -216,   135,
     135,   157,   157,   178,   178,   178,   178,    43,    43,   208,
     199,   191,   189,   254,   -28,  -216,  -216,  -216,   251,   252,
    -216,   255,   138,  1021,   604,  -216,  -216,  -216,   389,  -216,
    -216,  -216,  -216,  -216,   444,   444,   444,   704,   633,  -216,
    -216,   704,  -216,   704,  -216,  -216,  -216,  -216,   253,  -216,
     256,  -216,  -216,   261,  -216,  -216,   152,   444,   153,  -216,
    -216,  -216,  -216,   444,   234,  -216,   444,  -216,  -216,  -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,    89,    90,    91,    92,    93,    95,    96,    97,
      98,   101,   102,    99,   100,   129,   130,    94,   108,   109,
       0,     0,   140,     0,   208,     0,    79,    81,   103,     0,
     104,    83,     0,   132,     0,     2,   205,   207,   124,     0,
       0,   144,   142,   141,     1,    77,     0,    85,    87,    80,
      82,   107,     0,    84,     0,   187,     0,   212,     0,     0,
       0,   131,   206,     0,   127,     0,   125,   134,   145,   143,
       0,    78,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     4,     3,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,   191,   183,     7,    17,    29,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      57,    59,    61,    74,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,   188,    87,   211,   153,   139,   152,
       0,   146,   148,     0,     3,   136,    29,    76,     0,     0,
       0,     0,   122,    86,     0,   169,    88,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    21,
       0,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,   203,     0,     0,   155,     0,     0,    13,
      14,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    63,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   190,   185,
       0,   184,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,   180,     0,     0,   182,     0,     0,     0,
       0,     0,   200,   204,     6,     0,   157,   156,     0,    12,
       9,     0,    15,     0,    11,    62,    32,    33,    34,    36,
      37,    39,    40,    44,    45,    42,    43,    47,    48,    50,
      52,    54,    56,    58,     0,    75,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,    22,   181,     0,     0,     0,     0,     0,    30,
      10,     0,     8,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    16,
      60,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,  -216,   -60,  -216,   -99,    39,    42,
      45,    47,    99,   101,   102,   100,   128,  -216,   -59,   -25,
    -216,   -88,   -65,    59,   246,  -216,   257,  -216,   -40,  -216,
    -216,   286,   -46,   -57,  -216,    75,  -216,   263,   213,   160,
     -18,   -29,   -14,  -216,   -55,  -216,   124,  -216,   197,  -107,
    -215,  -141,  -216,   -90,  -216,   147,   136,    -2,  -165,  -216,
    -216,  -216,  -216,   331,  -216
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    23,   107,   108,   271,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     205,   124,   148,    55,   139,    46,    47,    26,    27,    28,
      29,    77,    78,    79,   163,   164,    30,    65,    66,    31,
      32,    33,    34,    43,   298,   141,   142,   143,   187,   299,
     237,   156,   247,   125,   126,   127,    58,   129,   130,   131,
     132,   133,    35,    36,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   147,   178,    40,   140,    61,    38,    48,    42,   184,
     185,   206,    76,   246,   261,    51,     1,     1,     1,   159,
     302,    44,   173,   166,   169,   171,   172,   146,   147,    69,
     151,   161,   236,    70,     1,    76,    76,    76,   135,   226,
      76,   186,     1,   224,   151,    15,    16,   155,   152,    71,
     146,   302,   135,   323,    63,   214,   215,     1,    76,    24,
     240,   165,   243,    67,   241,    81,   144,    83,    84,   264,
      85,    86,    22,   226,    21,    21,   232,   253,   233,   267,
     185,    22,   185,    22,   256,   244,    39,   257,   258,   259,
     146,   147,    21,   162,    24,    52,   318,   249,   308,    22,
      21,    64,   146,   147,   273,   150,   225,    22,   276,   277,
     278,   186,   161,    45,   167,   232,   309,   233,    76,   216,
     217,   234,   226,   228,    98,   235,   230,   250,    76,   155,
      99,   100,   101,   102,   103,   104,    75,   294,   227,   188,
     189,   190,    59,   251,    60,    54,   154,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   313,   272,   332,   301,   319,
     226,   314,   266,   146,   147,   226,   265,   174,   233,    57,
     275,   315,    41,    22,    74,   226,   263,   311,   212,   213,
     128,   134,   146,   147,   191,    73,   192,   180,   193,   175,
     303,   295,   304,    68,   207,   136,    61,   316,   146,   208,
     209,   226,    80,   320,    40,   344,   346,   321,   235,   226,
     226,   157,   218,   219,   333,   334,   335,   210,   211,   336,
     338,   265,   165,   233,   176,    80,    80,    80,   181,   330,
      80,   322,   177,   226,   146,   147,    25,   345,   328,   279,
     280,   266,   179,   347,   281,   282,   349,   182,    80,   283,
     284,   285,   286,   146,   340,   287,   288,   220,   222,   221,
     223,   231,    49,    50,    72,   238,   239,    53,    56,   242,
     260,    25,   252,   155,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    56,   268,   339,   255,   262,   269,
      56,    56,   274,    81,    82,    83,    84,   296,    85,    86,
     307,   312,   317,   343,   324,   325,   341,   348,    80,   289,
     326,   342,   290,   292,   291,   310,   149,   153,    80,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   204,    87,
      88,    89,   293,    90,    91,    92,    93,    94,    95,    96,
      97,   158,    98,   306,   245,   254,    62,     0,    99,   100,
     101,   102,   103,   104,    81,    82,    83,    84,     0,    85,
      86,     0,     0,   105,    54,   106,     0,     0,     0,     0,
       0,     0,    81,   144,    83,    84,     0,    85,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,   144,    83,    84,     0,    85,    86,     0,     0,     0,
      87,    88,    89,     0,    90,    91,    92,    93,    94,    95,
      96,    97,     0,    98,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,     0,     0,    81,    82,    83,
      84,    98,    85,    86,   105,    54,   229,    99,   100,   101,
     102,   103,   104,     0,     0,    81,   144,    83,    84,    98,
      85,    86,     0,   154,   331,    99,   100,   101,   102,   103,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,     0,     0,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
      81,   144,    83,    84,    98,    85,    86,   105,    54,     0,
      99,   100,   101,   102,   103,   104,    81,   144,    83,    84,
       0,    85,    86,     0,     0,   105,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    81,   144,    83,    84,     0,
      85,    86,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,    81,   144,    83,    84,    98,    85,    86,   145,     0,
       0,    99,   100,   101,   102,   103,   104,    81,   144,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,   270,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,    81,   144,    83,    84,
       0,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,   300,     0,     0,    99,   100,   101,   102,
     103,   104,    81,   144,    83,    84,    98,    85,    86,   329,
       0,     0,    99,   100,   101,   102,   103,   104,    81,   144,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,   337,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,    81,   144,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,   168,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,   170,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,   297,   233,     0,     0,     0,     0,    22,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
     138,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,    72,     0,    54,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   248,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   265,   297,   233,     0,     0,     0,     0,    22,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   327,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   305,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
      60,    60,    92,    21,    59,    34,     4,    25,    22,    97,
      98,   110,    52,   154,   179,     4,     4,     4,     4,    76,
     235,     0,    87,    80,    84,    85,    86,    87,    87,    43,
      67,    77,   139,    67,     4,    75,    76,    77,    56,    67,
      80,    98,     4,    17,    67,    42,    43,    72,    85,    83,
     110,   266,    70,    81,    84,    12,    13,     4,    98,     0,
      63,    79,    85,    63,    67,     3,     4,     5,     6,    63,
       8,     9,    69,    67,    62,    62,    62,   167,    64,   186,
     168,    69,   170,    69,   174,   150,    84,   175,   176,   177,
     150,   150,    62,    81,    35,    84,   261,   162,    67,    69,
      62,     4,   162,   162,   192,    82,    80,    69,   207,   208,
     209,   168,   158,    83,    81,    62,    85,    64,   158,    76,
      77,   139,    67,   125,    62,   139,   128,    67,   168,   154,
      68,    69,    70,    71,    72,    73,    84,   225,    83,     7,
       8,     9,    62,    83,    64,    84,    84,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   255,   191,   308,   233,   268,
      67,    63,   186,   233,   233,    67,    62,    81,    64,    32,
     205,    63,    22,    69,    48,    67,    83,   252,    10,    11,
      54,    55,   252,   252,    62,    48,    64,     4,    66,    62,
      62,   226,    64,    43,    69,    58,   235,    63,   268,    74,
      75,    67,    52,    63,   232,    63,    63,    67,   232,    67,
      67,    74,    14,    15,   314,   315,   316,    70,    71,   317,
     318,    62,   250,    64,    62,    75,    76,    77,    83,   304,
      80,    65,    62,    67,   304,   304,     0,   337,   303,   210,
     211,   265,    62,   343,   212,   213,   346,    83,    98,   214,
     215,   216,   217,   323,   323,   218,   219,    68,    79,    78,
      16,    85,    26,    27,    82,    63,    67,    31,    32,    65,
      54,    35,    81,   308,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    48,    63,   321,    81,    83,     4,
      54,    55,     4,     3,     4,     5,     6,    85,     8,     9,
       4,    63,    62,    52,    63,    63,    63,    83,   158,   220,
      65,    65,   221,   223,   222,   250,    63,    70,   168,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    82,    49,
      50,    51,   224,    53,    54,    55,    56,    57,    58,    59,
      60,    75,    62,   239,   151,   168,    35,    -1,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    -1,    -1,     3,     4,     5,
       6,    62,     8,     9,    83,    84,    85,    68,    69,    70,
      71,    72,    73,    -1,    -1,     3,     4,     5,     6,    62,
       8,     9,    -1,    84,    85,    68,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    -1,    -1,
       3,     4,     5,     6,    62,     8,     9,    83,    84,    -1,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,     3,     4,     5,     6,    62,     8,     9,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,     3,     4,     5,     6,    62,     8,     9,    65,
      -1,    -1,    68,    69,    70,    71,    72,    73,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      63,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    82,    -1,    84,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    62,    69,    87,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   148,   149,   150,     4,    84,
     126,   125,   128,   129,     0,    83,   111,   112,   126,   110,
     110,     4,    84,   110,    84,   109,   110,   141,   142,    62,
      64,   127,   149,    84,     4,   123,   124,    63,   125,   128,
      67,    83,    82,   141,   142,    84,   114,   117,   118,   119,
     125,     3,     4,     5,     6,     8,     9,    49,    50,    51,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    68,
      69,    70,    71,    72,    73,    83,    85,    88,    89,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   107,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   142,   126,   141,     4,    63,   110,
     130,   131,   132,   133,     4,    65,    91,   104,   108,   123,
      82,    67,    85,   112,    84,   105,   137,   141,   117,   119,
      85,   118,    81,   120,   121,   126,   119,    81,    62,    91,
      62,    91,    91,   108,    81,    62,    62,    62,   139,    62,
       4,    83,    83,    83,   107,   107,   119,   134,     7,     8,
       9,    62,    64,    66,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    82,   106,    93,    69,    74,    75,
      70,    71,    10,    11,    12,    13,    76,    77,    14,    15,
      68,    78,    79,    16,    17,    80,    67,    83,   143,    85,
     143,    85,    62,    64,   126,   128,   135,   136,    63,    67,
      63,    67,    65,    85,   108,   124,   137,   138,    85,   108,
      67,    83,    81,   139,   134,    81,   139,   107,   107,   107,
      54,   144,    83,    83,    63,    62,   128,   135,    63,     4,
      63,    90,   105,   107,     4,   105,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      99,   100,   101,   102,   107,   105,    85,    63,   130,   135,
      65,   108,   136,    62,    64,    48,   132,     4,    67,    85,
     121,   108,    63,   139,    63,    63,    63,    62,   144,    93,
      63,    67,    65,    81,    63,    63,    65,    63,   130,    65,
     108,    85,   137,   139,   139,   139,   107,    63,   107,   105,
     104,    63,    65,    52,    63,   139,    63,   139,    83,   139
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   145,   146,   146,   146,   146,
     147,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
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
  case 2: /* ROOT: translation_unit  */
#line 104 "src/maths_parser.y"
                          {g_root = (yyvsp[0].tree);}
#line 1632 "src/maths_parser.tab.cpp"
    break;

  case 3: /* primary_expression: IDENTIFIER  */
#line 113 "src/maths_parser.y"
                                        {(yyval.tree) = new identifierPrimaryExpression(*(yyvsp[0].string));}
#line 1638 "src/maths_parser.tab.cpp"
    break;

  case 4: /* primary_expression: CONSTANT  */
#line 114 "src/maths_parser.y"
                                                {(yyval.tree) = new constantPrimaryExpression((yyvsp[0].number));}
#line 1644 "src/maths_parser.tab.cpp"
    break;

  case 5: /* primary_expression: STRING_LITERAL  */
#line 115 "src/maths_parser.y"
                                        {(yyval.tree) = new stringPrimaryExpression(*(yyvsp[0].string));}
#line 1650 "src/maths_parser.tab.cpp"
    break;

  case 6: /* primary_expression: '(' expression ')'  */
#line 116 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 1656 "src/maths_parser.tab.cpp"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 120 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1662 "src/maths_parser.tab.cpp"
    break;

  case 17: /* unary_expression: postfix_expression  */
#line 136 "src/maths_parser.y"
                                          {(yyval.tree) = (yyvsp[0].tree);}
#line 1668 "src/maths_parser.tab.cpp"
    break;

  case 29: /* cast_expression: unary_expression  */
#line 154 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1674 "src/maths_parser.tab.cpp"
    break;

  case 31: /* multiplicative_expression: cast_expression  */
#line 159 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1680 "src/maths_parser.tab.cpp"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 160 "src/maths_parser.y"
                                                        {(yyval.tree) = new mulOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1686 "src/maths_parser.tab.cpp"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 161 "src/maths_parser.y"
                                                        {(yyval.tree) = new divOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1692 "src/maths_parser.tab.cpp"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 162 "src/maths_parser.y"
                                                        {(yyval.tree) = new modOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1698 "src/maths_parser.tab.cpp"
    break;

  case 35: /* additive_expression: multiplicative_expression  */
#line 166 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1704 "src/maths_parser.tab.cpp"
    break;

  case 36: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 167 "src/maths_parser.y"
                                                                {(yyval.tree) = new addOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1710 "src/maths_parser.tab.cpp"
    break;

  case 37: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 168 "src/maths_parser.y"
                                                                {(yyval.tree) = new subOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1716 "src/maths_parser.tab.cpp"
    break;

  case 38: /* shift_expression: additive_expression  */
#line 172 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1722 "src/maths_parser.tab.cpp"
    break;

  case 39: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 173 "src/maths_parser.y"
                                                        {(yyval.tree) = new leftShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1728 "src/maths_parser.tab.cpp"
    break;

  case 40: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 174 "src/maths_parser.y"
                                                        {(yyval.tree) = new rightShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1734 "src/maths_parser.tab.cpp"
    break;

  case 41: /* relational_expression: shift_expression  */
#line 178 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1740 "src/maths_parser.tab.cpp"
    break;

  case 42: /* relational_expression: relational_expression '<' shift_expression  */
#line 179 "src/maths_parser.y"
                                                                {(yyval.tree) = new ltOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1746 "src/maths_parser.tab.cpp"
    break;

  case 43: /* relational_expression: relational_expression '>' shift_expression  */
#line 180 "src/maths_parser.y"
                                                                {(yyval.tree) = new gtOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1752 "src/maths_parser.tab.cpp"
    break;

  case 44: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 181 "src/maths_parser.y"
                                                                {(yyval.tree) = new leOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1758 "src/maths_parser.tab.cpp"
    break;

  case 45: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 182 "src/maths_parser.y"
                                                                {(yyval.tree) = new geOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1764 "src/maths_parser.tab.cpp"
    break;

  case 46: /* equality_expression: relational_expression  */
#line 186 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1770 "src/maths_parser.tab.cpp"
    break;

  case 47: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 187 "src/maths_parser.y"
                                                                {(yyval.tree) = new equalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1776 "src/maths_parser.tab.cpp"
    break;

  case 48: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 188 "src/maths_parser.y"
                                                                {(yyval.tree) = new inequalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1782 "src/maths_parser.tab.cpp"
    break;

  case 49: /* and_expression: equality_expression  */
#line 192 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1788 "src/maths_parser.tab.cpp"
    break;

  case 50: /* and_expression: and_expression '&' equality_expression  */
#line 193 "src/maths_parser.y"
                                                        {(yyval.tree) = new andOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1794 "src/maths_parser.tab.cpp"
    break;

  case 51: /* exclusive_or_expression: and_expression  */
#line 197 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1800 "src/maths_parser.tab.cpp"
    break;

  case 52: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 198 "src/maths_parser.y"
                                                        {(yyval.tree) = new exclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1806 "src/maths_parser.tab.cpp"
    break;

  case 53: /* inclusive_or_expression: exclusive_or_expression  */
#line 202 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1812 "src/maths_parser.tab.cpp"
    break;

  case 54: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 203 "src/maths_parser.y"
                                                                {(yyval.tree) = new inclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1818 "src/maths_parser.tab.cpp"
    break;

  case 55: /* logical_and_expression: inclusive_or_expression  */
#line 207 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1824 "src/maths_parser.tab.cpp"
    break;

  case 56: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 208 "src/maths_parser.y"
                                                                {(yyval.tree) = new logicalAndOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1830 "src/maths_parser.tab.cpp"
    break;

  case 57: /* logical_or_expression: logical_and_expression  */
#line 212 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1836 "src/maths_parser.tab.cpp"
    break;

  case 58: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 213 "src/maths_parser.y"
                                                                {(yyval.tree) = new logicalOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1842 "src/maths_parser.tab.cpp"
    break;

  case 59: /* conditional_expression: logical_or_expression  */
#line 217 "src/maths_parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1848 "src/maths_parser.tab.cpp"
    break;

  case 61: /* assignment_expression: conditional_expression  */
#line 222 "src/maths_parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1854 "src/maths_parser.tab.cpp"
    break;

  case 62: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 223 "src/maths_parser.y"
                                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree));}
#line 1860 "src/maths_parser.tab.cpp"
    break;

  case 63: /* assignment_operator: '='  */
#line 227 "src/maths_parser.y"
                                {(yyval.tree) = new assignmentOperator("=");}
#line 1866 "src/maths_parser.tab.cpp"
    break;

  case 64: /* assignment_operator: MUL_ASSIGN  */
#line 228 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("*=");}
#line 1872 "src/maths_parser.tab.cpp"
    break;

  case 65: /* assignment_operator: DIV_ASSIGN  */
#line 229 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("=");}
#line 1878 "src/maths_parser.tab.cpp"
    break;

  case 66: /* assignment_operator: MOD_ASSIGN  */
#line 230 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("&=");}
#line 1884 "src/maths_parser.tab.cpp"
    break;

  case 67: /* assignment_operator: ADD_ASSIGN  */
#line 231 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("+=");}
#line 1890 "src/maths_parser.tab.cpp"
    break;

  case 68: /* assignment_operator: SUB_ASSIGN  */
#line 232 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("-=");}
#line 1896 "src/maths_parser.tab.cpp"
    break;

  case 69: /* assignment_operator: LEFT_ASSIGN  */
#line 233 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("<<=");}
#line 1902 "src/maths_parser.tab.cpp"
    break;

  case 70: /* assignment_operator: RIGHT_ASSIGN  */
#line 234 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator(">>=");}
#line 1908 "src/maths_parser.tab.cpp"
    break;

  case 71: /* assignment_operator: AND_ASSIGN  */
#line 235 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("&=");}
#line 1914 "src/maths_parser.tab.cpp"
    break;

  case 72: /* assignment_operator: XOR_ASSIGN  */
#line 236 "src/maths_parser.y"
                        {(yyval.tree) = new assignmentOperator("^=");}
#line 1920 "src/maths_parser.tab.cpp"
    break;

  case 73: /* assignment_operator: OR_ASSIGN  */
#line 237 "src/maths_parser.y"
                                {(yyval.tree) = new assignmentOperator("|=");}
#line 1926 "src/maths_parser.tab.cpp"
    break;

  case 74: /* expression: assignment_expression  */
#line 241 "src/maths_parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1932 "src/maths_parser.tab.cpp"
    break;

  case 75: /* expression: expression ',' assignment_expression  */
#line 242 "src/maths_parser.y"
                                                {(yyval.tree) = new expression((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1938 "src/maths_parser.tab.cpp"
    break;

  case 76: /* constant_expression: conditional_expression  */
#line 246 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1944 "src/maths_parser.tab.cpp"
    break;

  case 77: /* declaration: declaration_specifiers ';'  */
#line 250 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 1950 "src/maths_parser.tab.cpp"
    break;

  case 78: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 251 "src/maths_parser.y"
                                                                {(yyval.tree) = new declaration((yyvsp[-2].tree), (yyvsp[-1].tree));}
#line 1956 "src/maths_parser.tab.cpp"
    break;

  case 81: /* declaration_specifiers: type_specifier  */
#line 257 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1962 "src/maths_parser.tab.cpp"
    break;

  case 85: /* init_declarator_list: init_declarator  */
#line 264 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1968 "src/maths_parser.tab.cpp"
    break;

  case 87: /* init_declarator: declarator  */
#line 269 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1974 "src/maths_parser.tab.cpp"
    break;

  case 88: /* init_declarator: declarator '=' initializer  */
#line 270 "src/maths_parser.y"
                                        {(yyval.tree) = new initDeclarator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1980 "src/maths_parser.tab.cpp"
    break;

  case 94: /* type_specifier: VOID  */
#line 282 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("VOID");}
#line 1986 "src/maths_parser.tab.cpp"
    break;

  case 95: /* type_specifier: CHAR  */
#line 283 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("CHAR");}
#line 1992 "src/maths_parser.tab.cpp"
    break;

  case 96: /* type_specifier: SHORT  */
#line 284 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("SHORT");}
#line 1998 "src/maths_parser.tab.cpp"
    break;

  case 97: /* type_specifier: INT  */
#line 285 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("INT");}
#line 2004 "src/maths_parser.tab.cpp"
    break;

  case 98: /* type_specifier: LONG  */
#line 286 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("LONG");}
#line 2010 "src/maths_parser.tab.cpp"
    break;

  case 99: /* type_specifier: FLOAT  */
#line 287 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("FLOAT");}
#line 2016 "src/maths_parser.tab.cpp"
    break;

  case 100: /* type_specifier: DOUBLE  */
#line 288 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("DOUBLE");}
#line 2022 "src/maths_parser.tab.cpp"
    break;

  case 101: /* type_specifier: SIGNED  */
#line 289 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("SIGNED");}
#line 2028 "src/maths_parser.tab.cpp"
    break;

  case 102: /* type_specifier: UNSIGNED  */
#line 290 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier("UNSIGNED");}
#line 2034 "src/maths_parser.tab.cpp"
    break;

  case 103: /* type_specifier: struct_or_union_specifier  */
#line 291 "src/maths_parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2040 "src/maths_parser.tab.cpp"
    break;

  case 104: /* type_specifier: enum_specifier  */
#line 292 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2046 "src/maths_parser.tab.cpp"
    break;

  case 113: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 317 "src/maths_parser.y"
                                                        {(yyval.tree) = new specifierList((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 2052 "src/maths_parser.tab.cpp"
    break;

  case 114: /* specifier_qualifier_list: type_specifier  */
#line 318 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2058 "src/maths_parser.tab.cpp"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 319 "src/maths_parser.y"
                                                        {(yyval.tree) = new qualifierList((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 2064 "src/maths_parser.tab.cpp"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier  */
#line 320 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2070 "src/maths_parser.tab.cpp"
    break;

  case 132: /* declarator: direct_declarator  */
#line 357 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2076 "src/maths_parser.tab.cpp"
    break;

  case 133: /* direct_declarator: IDENTIFIER  */
#line 361 "src/maths_parser.y"
                                                                                                {(yyval.tree) = new identifierDirectDeclarator(*(yyvsp[0].string));}
#line 2082 "src/maths_parser.tab.cpp"
    break;

  case 134: /* direct_declarator: '(' declarator ')'  */
#line 362 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 2088 "src/maths_parser.tab.cpp"
    break;

  case 135: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 363 "src/maths_parser.y"
                                                                {(yyval.tree) = new squareDirectDeclarator((yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 2094 "src/maths_parser.tab.cpp"
    break;

  case 136: /* direct_declarator: direct_declarator '[' ']'  */
#line 364 "src/maths_parser.y"
                                                                                        {(yyval.tree) = new squareDirectDeclarator((yyvsp[-2].tree), NULL);}
#line 2100 "src/maths_parser.tab.cpp"
    break;

  case 137: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 365 "src/maths_parser.y"
                                                                {(yyval.tree) = new roundDirectDeclarator((yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 2106 "src/maths_parser.tab.cpp"
    break;

  case 138: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 366 "src/maths_parser.y"
                                                                        {(yyval.tree) = new roundDirectDeclarator((yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 2112 "src/maths_parser.tab.cpp"
    break;

  case 139: /* direct_declarator: direct_declarator '(' ')'  */
#line 367 "src/maths_parser.y"
                                                                                        {(yyval.tree) = new roundDirectDeclarator((yyvsp[-2].tree), NULL);}
#line 2118 "src/maths_parser.tab.cpp"
    break;

  case 146: /* parameter_type_list: parameter_list  */
#line 384 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2124 "src/maths_parser.tab.cpp"
    break;

  case 147: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 385 "src/maths_parser.y"
                                        {(yyval.tree) = new elipsedParameterList((yyvsp[-2].tree));}
#line 2130 "src/maths_parser.tab.cpp"
    break;

  case 148: /* parameter_list: parameter_declaration  */
#line 389 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2136 "src/maths_parser.tab.cpp"
    break;

  case 149: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 390 "src/maths_parser.y"
                                                        {(yyval.tree) = new parameterList((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2142 "src/maths_parser.tab.cpp"
    break;

  case 150: /* parameter_declaration: declaration_specifiers declarator  */
#line 394 "src/maths_parser.y"
                                                                        {(yyval.tree) = new nonAbstractParameterDeclaration((yyvsp[-1].tree), (yyvsp[0].tree)); }
#line 2148 "src/maths_parser.tab.cpp"
    break;

  case 151: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 395 "src/maths_parser.y"
                                                        {(yyval.tree) = new abstractParameterDeclaration((yyvsp[-1].tree), (yyvsp[0].tree)); }
#line 2154 "src/maths_parser.tab.cpp"
    break;

  case 152: /* parameter_declaration: declaration_specifiers  */
#line 396 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2160 "src/maths_parser.tab.cpp"
    break;

  case 155: /* type_name: specifier_qualifier_list  */
#line 405 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2166 "src/maths_parser.tab.cpp"
    break;

  case 169: /* initializer: assignment_expression  */
#line 428 "src/maths_parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2172 "src/maths_parser.tab.cpp"
    break;

  case 174: /* statement: labeled_statement  */
#line 439 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2178 "src/maths_parser.tab.cpp"
    break;

  case 175: /* statement: compound_statement  */
#line 440 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2184 "src/maths_parser.tab.cpp"
    break;

  case 176: /* statement: expression_statement  */
#line 441 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2190 "src/maths_parser.tab.cpp"
    break;

  case 177: /* statement: selection_statement  */
#line 442 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2196 "src/maths_parser.tab.cpp"
    break;

  case 178: /* statement: iteration_statement  */
#line 443 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2202 "src/maths_parser.tab.cpp"
    break;

  case 179: /* statement: jump_statement  */
#line 444 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2208 "src/maths_parser.tab.cpp"
    break;

  case 183: /* compound_statement: '{' '}'  */
#line 454 "src/maths_parser.y"
                                                                                        {(yyval.tree) = new compoundStatement(NULL, NULL);}
#line 2214 "src/maths_parser.tab.cpp"
    break;

  case 184: /* compound_statement: '{' statement_list '}'  */
#line 455 "src/maths_parser.y"
                                                                        {(yyval.tree) = new compoundStatement(NULL, (yyvsp[-1].tree));}
#line 2220 "src/maths_parser.tab.cpp"
    break;

  case 185: /* compound_statement: '{' declaration_list '}'  */
#line 456 "src/maths_parser.y"
                                                                        {(yyval.tree) = new compoundStatement((yyvsp[-1].tree), NULL);}
#line 2226 "src/maths_parser.tab.cpp"
    break;

  case 186: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 457 "src/maths_parser.y"
                                                        {(yyval.tree) = new compoundStatement((yyvsp[-2].tree), (yyvsp[-1].tree));}
#line 2232 "src/maths_parser.tab.cpp"
    break;

  case 187: /* declaration_list: declaration  */
#line 461 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2238 "src/maths_parser.tab.cpp"
    break;

  case 188: /* declaration_list: declaration declaration_list  */
#line 462 "src/maths_parser.y"
                                        {(yyval.tree) = new declarationList((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 2244 "src/maths_parser.tab.cpp"
    break;

  case 189: /* statement_list: statement  */
#line 466 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2250 "src/maths_parser.tab.cpp"
    break;

  case 190: /* statement_list: statement statement_list  */
#line 467 "src/maths_parser.y"
                                        {(yyval.tree) = new statementList((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 2256 "src/maths_parser.tab.cpp"
    break;

  case 191: /* expression_statement: ';'  */
#line 471 "src/maths_parser.y"
                                        {(yyval.tree) = NULL;}
#line 2262 "src/maths_parser.tab.cpp"
    break;

  case 192: /* expression_statement: expression ';'  */
#line 472 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2268 "src/maths_parser.tab.cpp"
    break;

  case 200: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 489 "src/maths_parser.y"
                                {(yyval.tree) = new gotoJumpStatement(*(yyvsp[-1].string));}
#line 2274 "src/maths_parser.tab.cpp"
    break;

  case 201: /* jump_statement: CONTINUE ';'  */
#line 490 "src/maths_parser.y"
                                        {(yyval.tree) = new continueJumpStatement();}
#line 2280 "src/maths_parser.tab.cpp"
    break;

  case 202: /* jump_statement: BREAK ';'  */
#line 491 "src/maths_parser.y"
                                                {(yyval.tree) = new breakJumpStatement();}
#line 2286 "src/maths_parser.tab.cpp"
    break;

  case 203: /* jump_statement: RETURN ';'  */
#line 492 "src/maths_parser.y"
                                        {(yyval.tree) = new returnJumpStatement(NULL);}
#line 2292 "src/maths_parser.tab.cpp"
    break;

  case 204: /* jump_statement: RETURN expression ';'  */
#line 493 "src/maths_parser.y"
                                {(yyval.tree) = new returnJumpStatement((yyvsp[-1].tree));}
#line 2298 "src/maths_parser.tab.cpp"
    break;

  case 205: /* translation_unit: external_declaration  */
#line 497 "src/maths_parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2304 "src/maths_parser.tab.cpp"
    break;

  case 206: /* translation_unit: translation_unit external_declaration  */
#line 498 "src/maths_parser.y"
                                                {(yyval.tree) = new translationUnit((yyvsp[-1].tree), (yyvsp[0].tree));}
#line 2310 "src/maths_parser.tab.cpp"
    break;

  case 207: /* external_declaration: function_definition  */
#line 502 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2316 "src/maths_parser.tab.cpp"
    break;

  case 209: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 507 "src/maths_parser.y"
                                                                                        {(yyval.tree) = new fullFunctionDefinition((yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 2322 "src/maths_parser.tab.cpp"
    break;

  case 210: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 508 "src/maths_parser.y"
                                                                                                        {(yyval.tree) = new noSpecifierFunctionDefinition((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 2328 "src/maths_parser.tab.cpp"
    break;

  case 211: /* function_definition: declarator declaration_list compound_statement  */
#line 509 "src/maths_parser.y"
                                                                                                                {(yyval.tree) = new noListFunctionDefinition((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 2334 "src/maths_parser.tab.cpp"
    break;

  case 212: /* function_definition: declarator compound_statement  */
#line 510 "src/maths_parser.y"
                                                                                                                                {(yyval.tree) = new simpleFunctionDefinition((yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 2340 "src/maths_parser.tab.cpp"
    break;


#line 2344 "src/maths_parser.tab.cpp"

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

#line 513 "src/maths_parser.y"

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
