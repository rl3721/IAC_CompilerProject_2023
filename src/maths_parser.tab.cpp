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
  YYSYMBOL_translation_unit = 89,          /* translation_unit  */
  YYSYMBOL_external_declaration = 90,      /* external_declaration  */
  YYSYMBOL_type_specifier = 91,            /* type_specifier  */
  YYSYMBOL_storage_class_specifier = 92,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 93,            /* type_qualifier  */
  YYSYMBOL_declaration_specifiers = 94,    /* declaration_specifiers  */
  YYSYMBOL_direct_declarator = 95,         /* direct_declarator  */
  YYSYMBOL_declarator = 96,                /* declarator  */
  YYSYMBOL_type_name = 97,                 /* type_name  */
  YYSYMBOL_declaration = 98,               /* declaration  */
  YYSYMBOL_init_declarator = 99,           /* init_declarator  */
  YYSYMBOL_initializer = 100,              /* initializer  */
  YYSYMBOL_function_definition = 101,      /* function_definition  */
  YYSYMBOL_parameter_declaration = 102,    /* parameter_declaration  */
  YYSYMBOL_enum_specifier = 103,           /* enum_specifier  */
  YYSYMBOL_enumerator = 104,               /* enumerator  */
  YYSYMBOL_pointer = 105,                  /* pointer  */
  YYSYMBOL_abstract_declarator = 106,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 107, /* direct_abstract_declarator  */
  YYSYMBOL_struct_or_union_specifier = 108, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 109,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 110,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 111,       /* struct_declaration  */
  YYSYMBOL_struct_declarator = 112,        /* struct_declarator  */
  YYSYMBOL_specifier_qualifier_list = 113, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 114,   /* struct_declarator_list  */
  YYSYMBOL_init_declarator_list = 115,     /* init_declarator_list  */
  YYSYMBOL_enumerator_list = 116,          /* enumerator_list  */
  YYSYMBOL_initializer_list = 117,         /* initializer_list  */
  YYSYMBOL_identifier_list = 118,          /* identifier_list  */
  YYSYMBOL_type_qualifier_list = 119,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 120,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 121,           /* parameter_list  */
  YYSYMBOL_argument_expression_list = 122, /* argument_expression_list  */
  YYSYMBOL_declaration_or_statement = 123, /* declaration_or_statement  */
  YYSYMBOL_declaration_or_statement_list = 124, /* declaration_or_statement_list  */
  YYSYMBOL_statement = 125,                /* statement  */
  YYSYMBOL_labeled_statement = 126,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 127,     /* expression_statement  */
  YYSYMBOL_selection_statement = 128,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 129,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 130,           /* jump_statement  */
  YYSYMBOL_compound_statement = 131,       /* compound_statement  */
  YYSYMBOL_primary_expression = 132,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 133,       /* postfix_expression  */
  YYSYMBOL_unary_expression = 134,         /* unary_expression  */
  YYSYMBOL_unary_operator = 135,           /* unary_operator  */
  YYSYMBOL_cast_expression = 136,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 137, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 138,      /* additive_expression  */
  YYSYMBOL_shift_expression = 139,         /* shift_expression  */
  YYSYMBOL_relational_expression = 140,    /* relational_expression  */
  YYSYMBOL_equality_expression = 141,      /* equality_expression  */
  YYSYMBOL_and_expression = 142,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 143,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 144,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 145,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 146,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 147,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 148,    /* assignment_expression  */
  YYSYMBOL_expression = 149,               /* expression  */
  YYSYMBOL_constant_expression = 150       /* constant_expression  */
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
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1091

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

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
       0,    88,    88,    96,    97,   102,   103,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   123,   124,
     125,   126,   127,   131,   132,   136,   137,   138,   139,   145,
     146,   147,   148,   149,   150,   151,   155,   156,   160,   161,
     166,   168,   172,   173,   176,   177,   178,   184,   185,   191,
     192,   193,   198,   199,   200,   203,   204,   209,   210,   211,
     212,   215,   216,   217,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   234,   235,   236,   239,   240,   244,   245,
     248,   251,   252,   253,   258,   259,   260,   261,   264,   265,
     268,   269,   272,   273,   276,   277,   280,   281,   284,   285,
     288,   289,   292,   293,   296,   297,   301,   302,   305,   306,
     310,   311,   312,   313,   314,   315,   319,   320,   321,   325,
     326,   330,   331,   332,   336,   337,   338,   339,   343,   344,
     345,   346,   347,   351,   352,   370,   371,   372,   373,   374,
     378,   379,   380,   381,   382,   383,   384,   385,   391,   392,
     393,   394,   395,   396,   400,   401,   402,   403,   404,   405,
     409,   410,   414,   415,   416,   417,   421,   422,   423,   427,
     428,   429,   433,   434,   435,   436,   437,   441,   442,   443,
     447,   448,   452,   453,   457,   458,   462,   463,   467,   468,
     472,   473,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   493,   494,   498
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
  "'^'", "'|'", "'?'", "$accept", "ROOT", "translation_unit",
  "external_declaration", "type_specifier", "storage_class_specifier",
  "type_qualifier", "declaration_specifiers", "direct_declarator",
  "declarator", "type_name", "declaration", "init_declarator",
  "initializer", "function_definition", "parameter_declaration",
  "enum_specifier", "enumerator", "pointer", "abstract_declarator",
  "direct_abstract_declarator", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator", "specifier_qualifier_list",
  "struct_declarator_list", "init_declarator_list", "enumerator_list",
  "initializer_list", "identifier_list", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "argument_expression_list",
  "declaration_or_statement", "declaration_or_statement_list", "statement",
  "labeled_statement", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "compound_statement",
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

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     869,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,    25,    55,
      -9,    32,   869,  -192,  1029,  1029,    11,    10,   -10,  -192,
    -192,  -192,    18,  -192,    35,     7,    62,   -46,  -192,  -192,
    -192,  -192,    -9,  -192,  -192,  -192,  -192,  -192,   -21,  -192,
      50,   888,   451,   289,  -192,    10,   104,  1043,    62,     2,
    -192,    36,  -192,  -192,  -192,   528,  -192,  -192,    55,  -192,
    -192,    14,  -192,   -35,    66,   121,  -192,  -192,  -192,  -192,
     698,   728,   728,   443,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,   162,  -192,   736,  -192,   -27,   133,   208,    29,
     207,    44,   100,   116,   198,    -1,  -192,   160,   151,   736,
     159,   171,   174,   176,   489,   185,   240,   194,   196,   566,
    -192,  -192,    11,  -192,  -192,   366,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,   360,  -192,  -192,   119,  1043,  -192,  -192,
     427,  -192,   781,   180,   736,  -192,    62,   528,  -192,  -192,
     199,  -192,   825,   574,  -192,    17,  -192,   113,  -192,   259,
    -192,   801,   443,  -192,   736,  -192,  -192,   202,   937,   -14,
     263,  -192,  -192,   605,   736,   264,  -192,   736,   736,   736,
     736,   736,   736,   736,   736,   736,   736,   736,   736,   736,
     736,   736,   736,   736,   736,   736,  -192,   489,   197,   489,
     736,   736,   736,   217,   651,   206,  -192,  -192,  -192,   120,
    -192,  -192,   736,   736,   736,   736,   736,   736,   736,   736,
     736,   736,   736,  -192,   736,   975,  -192,  -192,   736,  -192,
    -192,   201,  -192,   122,  -192,  -192,  -192,  -192,   182,  -192,
     211,   212,  -192,   214,   113,   994,   613,  -192,  -192,  -192,
     213,   736,   923,   134,  -192,  -192,  -192,  -192,    -2,  -192,
     -45,  -192,  -192,  -192,  -192,   -27,   -27,   133,   133,   208,
     208,   208,   208,    29,    29,   207,    44,   100,   116,   198,
     131,  -192,   489,  -192,     0,     1,    58,   215,   651,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,   736,  -192,   158,  -192,   237,
    -192,  -192,  -192,  -192,   218,  -192,   219,  -192,  -192,  -192,
     736,  -192,   736,  -192,   489,   489,   489,   736,   690,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,   228,  -192,  -192,
      61,   489,   111,   489,   216,  -192,   489,  -192,  -192,  -192
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    29,    18,    19,    20,    21,    22,     8,     9,    10,
      11,    14,    15,    12,    13,     7,    76,    77,     0,     0,
      57,     0,     2,     3,    27,    25,     0,    37,     0,     6,
       5,    17,     0,    16,     0,    54,     0,     0,    23,    24,
      98,    59,    58,     1,     4,    28,    26,    40,    42,    90,
       0,     0,     0,     0,    47,    36,    75,     0,     0,    55,
      92,     0,    30,    99,    60,     0,    48,    41,     0,    96,
      35,    51,   102,     0,     0,   100,   136,   137,   135,   138,
       0,     0,     0,     0,    32,   155,   154,   156,   157,   158,
     159,   140,   148,   160,     0,   162,   166,   169,   172,   177,
     180,   182,   184,   186,   188,   190,   206,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   133,     0,   106,   108,     0,   107,   110,   112,   113,
     114,   115,   111,   160,   192,   204,     0,     0,    85,    87,
       0,    78,     0,     0,     0,    52,     0,     0,    43,    44,
      42,    91,     0,     0,    49,    61,    50,    62,    34,     0,
      33,     0,     0,   152,     0,   149,   150,     0,    38,     0,
       0,   146,   147,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,     0,
     134,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,    74,    79,     0,    84,
      86,    81,    88,     0,    53,    56,    93,    94,     0,    69,
       0,     0,    65,     0,    63,     0,     0,    97,   101,   103,
       0,     0,     0,    61,    39,   139,   145,   142,     0,   104,
       0,   144,   163,   164,   165,   167,   168,   170,   171,   175,
     176,   173,   174,   178,   179,   181,   183,   185,   187,   189,
       0,   116,     0,   118,     0,     0,     0,     0,     0,   128,
     132,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   193,   205,    73,    82,     0,    80,     0,    45,     0,
      64,    70,    66,    71,     0,    67,     0,   153,   161,   143,
       0,   141,     0,   117,     0,     0,     0,     0,     0,    83,
      89,    46,    95,    72,    68,   105,   191,   121,   123,   124,
       0,     0,     0,     0,     0,   126,     0,   122,   125,   127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,   262,   -42,  -192,    26,     3,   -24,   -19,
     124,   -33,   221,  -143,  -192,   126,  -192,   144,    13,   -59,
    -145,  -192,  -192,   154,  -126,    -6,   -72,  -192,  -192,   239,
    -192,  -192,  -192,   -49,  -192,  -192,   177,  -192,  -108,  -192,
    -191,  -192,  -192,  -192,    -4,  -192,  -192,   -43,  -192,   -63,
      48,    73,    27,    70,   114,   112,   118,   115,   117,  -192,
     -51,   -60,     5,   -48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    25,   139,    71,    27,    28,
     167,    29,    49,   148,    30,    72,    31,    60,    32,   240,
     157,    33,    34,   140,   141,   232,   142,   233,    50,    61,
     238,    73,    42,   241,    75,   258,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    91,    92,   133,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     134,   135,   136,   107
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   106,    74,    26,   237,   149,   203,    48,    55,    93,
     244,   168,   156,   288,   227,   138,     1,   194,    62,     1,
     123,   321,     1,     1,    54,    26,   224,    45,    46,   158,
      35,   176,    43,    41,    38,    39,   159,   163,   165,   166,
      56,   138,   184,   185,    66,   177,    40,    65,    53,   150,
     255,    93,   154,   178,   179,    64,   122,   224,   106,    53,
       1,   198,   319,    20,   324,   325,    93,    59,    63,   320,
     144,   224,   224,    51,    19,    52,    58,   152,    47,   153,
     152,    19,   153,    20,   155,   195,    20,   149,   169,   281,
     168,   283,   123,   106,    36,   138,   235,   328,   138,   227,
     229,    93,   106,   150,    57,   243,   145,   146,   244,   254,
      93,   186,   187,   259,   262,   263,   264,    67,    19,   190,
     138,    68,   326,   231,   209,   344,   229,    20,   122,   224,
     160,    55,   224,    37,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,     1,   302,   155,   332,   169,   230,   169,
     170,   171,   172,   137,   323,   346,   245,   106,   246,   260,
     304,   253,   224,   138,   191,    93,   223,   290,   318,   306,
     224,   224,   161,   307,   230,   106,   314,   252,   316,   153,
     280,   192,   224,    93,   322,   284,   285,   286,    93,   180,
     181,   269,   270,   271,   272,   193,   337,   338,   339,   182,
     183,    19,   188,   189,   197,   173,   196,   174,   265,   266,
      20,   228,   199,   345,   200,   347,   175,   201,   349,   202,
      76,    77,    78,    79,    80,   205,    81,    82,   204,   149,
     234,   146,   308,   309,   106,   267,   268,   329,   273,   274,
     335,   206,    93,   207,   247,   253,   251,    65,   256,   261,
     282,   336,   287,   289,   305,   310,   311,   317,   327,    93,
     312,   343,   333,   348,    44,   334,   250,   249,   231,   151,
     236,   225,    76,    77,   108,    79,    80,   143,    81,    82,
      83,   330,   211,   276,   275,     0,   147,   331,   278,    85,
     277,   279,    86,    87,    88,    89,    90,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   340,   342,    15,    16,    17,    18,     0,   109,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,     0,    83,     0,     0,     0,   120,     0,    53,   121,
       0,    85,     0,     0,    86,    87,    88,    89,    90,    76,
      77,   108,    79,    80,     0,    81,    82,     0,     0,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,    15,    16,    17,    18,     0,   109,   110,   111,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   222,    83,
       0,     0,     0,   120,     0,    53,   210,     0,    85,     0,
       0,    86,    87,    88,    89,    90,    76,    77,    78,    79,
      80,     0,    81,    82,    76,    77,    78,    79,    80,     0,
      81,    82,     7,     8,     9,    10,    11,    12,    13,    14,
      38,    39,    15,    16,    17,    18,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    38,    39,    15,    16,
      17,    18,    76,    77,   108,    79,    80,   226,    81,    82,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    83,    85,     0,    84,    86,    87,
      88,    89,    90,    85,     0,     0,    86,    87,    88,    89,
      90,    76,    77,    78,    79,    80,     0,    81,    82,   109,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,     0,    83,     0,     0,     0,   120,     0,    53,     0,
       0,    85,     0,     0,    86,    87,    88,    89,    90,    76,
      77,    78,    79,    80,     0,    81,    82,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,   147,     0,     0,
      85,     0,     0,    86,    87,    88,    89,    90,    76,    77,
      78,    79,    80,     0,    81,    82,    76,    77,    78,    79,
      80,     0,    81,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,   208,     0,     0,     0,    83,    85,     0,
     242,    86,    87,    88,    89,    90,    85,     0,     0,    86,
      87,    88,    89,    90,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,    83,   257,
       0,     0,     0,     0,     0,     0,    83,    85,     0,   315,
      86,    87,    88,    89,    90,    85,     0,     0,    86,    87,
      88,    89,    90,    76,    77,    78,    79,    80,     0,    81,
      82,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,     0,     0,     0,    83,     0,     0,     0,   120,     0,
       0,     0,     0,    85,     0,     0,    86,    87,    88,    89,
      90,    76,    77,    78,    79,    80,     0,    81,    82,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,    83,   341,     0,     0,     0,     0,     0,
       0,   162,    85,     0,     0,    86,    87,    88,    89,    90,
      85,     0,     0,    86,    87,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,    83,
      85,     0,     0,    86,    87,    88,    89,    90,    85,     0,
       0,    86,    87,    88,    89,    90,     7,     8,     9,    10,
      11,    12,    13,    14,    38,    39,    15,    16,    17,    18,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    19,     0,    15,    16,    17,    18,
     248,     0,     0,    20,   228,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      15,    16,    17,    18,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   239,
     153,     0,     0,    69,     0,     0,     0,    20,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    15,    16,    17,    18,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,    19,    15,    16,    17,    18,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,    15,    16,
      17,    18,     7,     8,     9,    10,    11,    12,    13,    14,
      38,    39,    15,    16,    17,    18,   252,   239,   153,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
     252,     0,   153,     0,     0,     0,     0,     0,     0,    20,
       7,     8,     9,    10,    11,    12,    13,    14,    38,    39,
      15,    16,    17,    18,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,    15,
      16,    17,    18,     0,     0,   303,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   313,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    15,    16,    17,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    38,    39,    15,    16,
      17,    18
};

static const yytype_int16 yycheck[] =
{
      19,    52,    51,     0,   147,    65,   114,    26,    32,    52,
     155,    83,    71,   204,   140,    57,     5,    18,    64,     5,
      53,    66,     5,     5,    28,    22,    71,    24,    25,    64,
       5,    94,     0,    20,    43,    44,    71,    80,    81,    82,
       5,    83,    13,    14,    48,    72,    20,    68,    69,    68,
      64,    94,    71,    80,    81,    42,    53,    71,   109,    69,
       5,   109,    64,    72,    64,    64,   109,     5,    42,    71,
      68,    71,    71,    63,    63,    65,    69,    63,    67,    65,
      63,    63,    65,    72,    71,    86,    72,   147,    83,   197,
     162,   199,   125,   144,    69,   137,   144,   288,   140,   225,
     142,   144,   153,   122,    69,   153,    70,    71,   253,   168,
     153,    82,    83,   173,   177,   178,   179,    67,    63,    75,
     162,    71,    64,   142,   119,    64,   168,    72,   125,    71,
      64,   155,    71,   152,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     5,   224,   152,   309,   162,   142,   164,
       8,     9,    10,    69,   282,    64,    63,   228,    65,   174,
     228,   168,    71,   225,    84,   228,    67,    67,   251,    67,
      71,    71,    71,    71,   168,   246,   245,    63,   246,    65,
     195,    85,    71,   246,    73,   200,   201,   202,   251,    76,
      77,   184,   185,   186,   187,    17,   324,   325,   326,    11,
      12,    63,    15,    16,    73,    63,    66,    65,   180,   181,
      72,    73,    73,   341,    63,   343,    74,    63,   346,    63,
       3,     4,     5,     6,     7,     5,     9,    10,    63,   309,
      70,    71,    70,    71,   305,   182,   183,   305,   188,   189,
     320,    67,   305,    67,     5,   252,    64,    68,     5,     5,
      73,   322,    55,    67,    73,    64,    64,    64,    63,   322,
      66,    53,    64,    67,    22,    66,   162,   161,   307,    68,
     146,   137,     3,     4,     5,     6,     7,    58,     9,    10,
      63,   307,   125,   191,   190,    -1,    69,    70,   193,    72,
     192,   194,    75,    76,    77,    78,    79,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   327,   328,    45,    46,    47,    48,    -1,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    72,    -1,    -1,    75,    76,    77,    78,    79,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    46,    47,    48,    -1,    50,    51,    52,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    68,    63,
      -1,    -1,    -1,    67,    -1,    69,    70,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,     3,     4,     5,     6,
       7,    -1,     9,    10,     3,     4,     5,     6,     7,    -1,
       9,    10,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     3,     4,     5,     6,     7,    70,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    72,    -1,    66,    75,    76,
      77,    78,    79,    72,    -1,    -1,    75,    76,    77,    78,
      79,     3,     4,     5,     6,     7,    -1,     9,    10,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    63,    -1,    -1,    -1,    67,    -1,    69,    -1,
      -1,    72,    -1,    -1,    75,    76,    77,    78,    79,     3,
       4,     5,     6,     7,    -1,     9,    10,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    79,     3,     4,
       5,     6,     7,    -1,     9,    10,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    63,    72,    -1,
      66,    75,    76,    77,    78,    79,    72,    -1,    -1,    75,
      76,    77,    78,    79,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    72,    -1,    66,
      75,    76,    77,    78,    79,    72,    -1,    -1,    75,    76,
      77,    78,    79,     3,     4,     5,     6,     7,    -1,     9,
      10,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      79,     3,     4,     5,     6,     7,    -1,     9,    10,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    72,    -1,    -1,    75,    76,    77,    78,    79,
      72,    -1,    -1,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      72,    -1,    -1,    75,    76,    77,    78,    79,    72,    -1,
      -1,    75,    76,    77,    78,    79,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       5,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    63,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    72,    73,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,     5,    -1,    -1,    -1,    72,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    63,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      46,    47,    48,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    48,    63,
      72,    88,    89,    90,    91,    92,    94,    95,    96,    98,
     101,   103,   105,   108,   109,     5,    69,    96,    43,    44,
      93,   105,   119,     0,    90,    94,    94,    67,    96,    99,
     115,    63,    65,    69,   131,    95,     5,    69,    69,     5,
     104,   116,    64,    93,   105,    68,   131,    67,    71,     5,
      64,    94,   102,   118,   120,   121,     3,     4,     5,     6,
       7,     9,    10,    63,    66,    72,    75,    76,    77,    78,
      79,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   150,     5,    50,
      51,    52,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    70,    94,    98,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   134,   147,   148,   149,    69,    91,    93,
     110,   111,   113,   116,    68,    70,    71,    69,   100,   148,
      96,    99,    63,    65,    96,   105,   106,   107,    64,    71,
      64,    71,    63,   134,    63,   134,   134,    97,   113,   149,
       8,     9,    10,    63,    65,    74,   136,    72,    80,    81,
      76,    77,    11,    12,    13,    14,    82,    83,    15,    16,
      75,    84,    85,    17,    18,    86,    66,    73,   150,    73,
      63,    63,    63,   125,    63,     5,    67,    67,    67,   149,
      70,   123,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    68,    67,    71,   110,    70,   111,    73,    91,
      93,    96,   112,   114,    70,   150,   104,   100,   117,    64,
     106,   120,    66,   150,   107,    63,    65,     5,    49,   102,
      97,    64,    63,   105,   106,    64,     5,    64,   122,   148,
     149,     5,   136,   136,   136,   137,   137,   138,   138,   139,
     139,   139,   139,   140,   140,   141,   142,   143,   144,   145,
     149,   125,    73,   125,   149,   149,   149,    55,   127,    67,
      67,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,    70,   150,    73,    67,    71,    70,    71,
      64,    64,    66,    64,   120,    66,   150,    64,   136,    64,
      71,    66,    73,   125,    64,    64,    64,    63,   127,   150,
     112,    70,   100,    64,    66,   148,   147,   125,   125,   125,
     149,    64,   149,    53,    64,   125,    64,   125,    67,   125
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   101,   101,   102,
     102,   102,   103,   103,   103,   104,   104,   105,   105,   105,
     105,   106,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   110,   110,
     111,   112,   112,   112,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   126,   126,   126,   127,
     127,   128,   128,   128,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     136,   136,   137,   137,   137,   137,   138,   138,   138,   139,
     139,   139,   140,   140,   140,   140,   140,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       3,     4,     3,     4,     4,     3,     2,     1,     1,     2,
       2,     3,     1,     3,     1,     3,     4,     2,     3,     2,
       2,     1,     4,     5,     2,     1,     3,     1,     2,     2,
       3,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     5,     4,     2,     1,     1,     1,     2,
       3,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     3,     2,
       2,     2,     3,     2,     3,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     1
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
#line 88 "src/maths_parser.y"
                          {g_root = new translationUnit((yyvsp[0].list));}
#line 1622 "src/maths_parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 96 "src/maths_parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1628 "src/maths_parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 97 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-1].list),(yyvsp[0].tree));}
#line 1634 "src/maths_parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 102 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1640 "src/maths_parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 103 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1646 "src/maths_parser.tab.cpp"
    break;

  case 7: /* type_specifier: VOID  */
#line 108 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_void);}
#line 1652 "src/maths_parser.tab.cpp"
    break;

  case 9: /* type_specifier: SHORT  */
#line 110 "src/maths_parser.y"
                                                                {std::cerr<<"short not assessed";exit(1);}
#line 1658 "src/maths_parser.tab.cpp"
    break;

  case 10: /* type_specifier: INT  */
#line 111 "src/maths_parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_int);}
#line 1664 "src/maths_parser.tab.cpp"
    break;

  case 11: /* type_specifier: LONG  */
#line 112 "src/maths_parser.y"
                                                                {std::cerr<<"long not spported";exit(1);}
#line 1670 "src/maths_parser.tab.cpp"
    break;

  case 16: /* type_specifier: struct_or_union_specifier  */
#line 117 "src/maths_parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1676 "src/maths_parser.tab.cpp"
    break;

  case 17: /* type_specifier: enum_specifier  */
#line 118 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1682 "src/maths_parser.tab.cpp"
    break;

  case 19: /* storage_class_specifier: EXTERN  */
#line 124 "src/maths_parser.y"
                                {std::cerr<<"Extern not assessed"; exit(1);}
#line 1688 "src/maths_parser.tab.cpp"
    break;

  case 20: /* storage_class_specifier: STATIC  */
#line 125 "src/maths_parser.y"
                                {std::cerr<<"static not assessed"; exit(1);}
#line 1694 "src/maths_parser.tab.cpp"
    break;

  case 21: /* storage_class_specifier: AUTO  */
#line 126 "src/maths_parser.y"
                                {std::cerr<<"auto not assessed"; exit(1);}
#line 1700 "src/maths_parser.tab.cpp"
    break;

  case 22: /* storage_class_specifier: REGISTER  */
#line 127 "src/maths_parser.y"
                                {std::cerr<<"register not assessed"; exit(1);}
#line 1706 "src/maths_parser.tab.cpp"
    break;

  case 23: /* type_qualifier: CONST  */
#line 131 "src/maths_parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1712 "src/maths_parser.tab.cpp"
    break;

  case 24: /* type_qualifier: VOLATILE  */
#line 132 "src/maths_parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1718 "src/maths_parser.tab.cpp"
    break;

  case 27: /* declaration_specifiers: type_specifier  */
#line 138 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1724 "src/maths_parser.tab.cpp"
    break;

  case 28: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 139 "src/maths_parser.y"
                                                                        {std::cerr<<"long short... concat data types not assessed"<<std::endl; exit(1);}
#line 1730 "src/maths_parser.tab.cpp"
    break;

  case 29: /* direct_declarator: IDENTIFIER  */
#line 145 "src/maths_parser.y"
                                                                                                {(yyval.tree) = new variableDeclarator(*(yyvsp[0].string));}
#line 1736 "src/maths_parser.tab.cpp"
    break;

  case 30: /* direct_declarator: '(' declarator ')'  */
#line 146 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 1742 "src/maths_parser.tab.cpp"
    break;

  case 33: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 149 "src/maths_parser.y"
                                                                {(yyval.tree) = new functionDeclarator((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 1748 "src/maths_parser.tab.cpp"
    break;

  case 35: /* direct_declarator: direct_declarator '(' ')'  */
#line 151 "src/maths_parser.y"
                                                                                        {(yyval.tree) = new functionDeclarator((yyvsp[-2].tree), NULL);}
#line 1754 "src/maths_parser.tab.cpp"
    break;

  case 37: /* declarator: direct_declarator  */
#line 156 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1760 "src/maths_parser.tab.cpp"
    break;

  case 40: /* declaration: declaration_specifiers ';'  */
#line 166 "src/maths_parser.y"
                                                                                {std::cerr<<"variable with no name";exit(1);}
#line 1766 "src/maths_parser.tab.cpp"
    break;

  case 41: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 168 "src/maths_parser.y"
                                                                {(yyval.tree) = new declaration((yyvsp[-2].tree), (yyvsp[-1].list));}
#line 1772 "src/maths_parser.tab.cpp"
    break;

  case 42: /* init_declarator: declarator  */
#line 172 "src/maths_parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1778 "src/maths_parser.tab.cpp"
    break;

  case 43: /* init_declarator: declarator '=' initializer  */
#line 173 "src/maths_parser.y"
                                        {(yyval.tree) = new initDeclarator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1784 "src/maths_parser.tab.cpp"
    break;

  case 44: /* initializer: assignment_expression  */
#line 176 "src/maths_parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1790 "src/maths_parser.tab.cpp"
    break;

  case 47: /* function_definition: declarator compound_statement  */
#line 184 "src/maths_parser.y"
                                                                                                                                {std::cerr<<"function witout type"<<std::endl;}
#line 1796 "src/maths_parser.tab.cpp"
    break;

  case 48: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 185 "src/maths_parser.y"
                                                                                                        {(yyval.tree) = new functionDefinition((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 1802 "src/maths_parser.tab.cpp"
    break;

  case 49: /* parameter_declaration: declaration_specifiers declarator  */
#line 191 "src/maths_parser.y"
                                                                        {(yyval.tree) = new declaration((yyvsp[-1].tree), initList((yyvsp[0].tree))); }
#line 1808 "src/maths_parser.tab.cpp"
    break;

  case 51: /* parameter_declaration: declaration_specifiers  */
#line 193 "src/maths_parser.y"
                                                                                {std::cerr<<"parameter with no name";exit(1);}
#line 1814 "src/maths_parser.tab.cpp"
    break;

  case 77: /* struct_or_union: UNION  */
#line 240 "src/maths_parser.y"
                        {std::cerr<<"union not assessed"; exit(1);}
#line 1820 "src/maths_parser.tab.cpp"
    break;

  case 84: /* specifier_qualifier_list: specifier_qualifier_list type_specifier  */
#line 258 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1826 "src/maths_parser.tab.cpp"
    break;

  case 85: /* specifier_qualifier_list: type_specifier  */
#line 259 "src/maths_parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1832 "src/maths_parser.tab.cpp"
    break;

  case 88: /* struct_declarator_list: struct_declarator  */
#line 264 "src/maths_parser.y"
                                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1838 "src/maths_parser.tab.cpp"
    break;

  case 89: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 265 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1844 "src/maths_parser.tab.cpp"
    break;

  case 90: /* init_declarator_list: init_declarator  */
#line 268 "src/maths_parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1850 "src/maths_parser.tab.cpp"
    break;

  case 91: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 269 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1856 "src/maths_parser.tab.cpp"
    break;

  case 92: /* enumerator_list: enumerator  */
#line 272 "src/maths_parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1862 "src/maths_parser.tab.cpp"
    break;

  case 93: /* enumerator_list: enumerator_list ',' enumerator  */
#line 273 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1868 "src/maths_parser.tab.cpp"
    break;

  case 94: /* initializer_list: initializer  */
#line 276 "src/maths_parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1874 "src/maths_parser.tab.cpp"
    break;

  case 95: /* initializer_list: initializer_list ',' initializer  */
#line 277 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1880 "src/maths_parser.tab.cpp"
    break;

  case 96: /* identifier_list: IDENTIFIER  */
#line 280 "src/maths_parser.y"
                                                                {(yyval.list) = initList(new identifier(*(yyvsp[0].string)));}
#line 1886 "src/maths_parser.tab.cpp"
    break;

  case 97: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 281 "src/maths_parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), new identifier(*(yyvsp[0].string)));}
#line 1892 "src/maths_parser.tab.cpp"
    break;

  case 100: /* parameter_type_list: parameter_list  */
#line 288 "src/maths_parser.y"
                                                        {(yyval.list) = (yyvsp[0].list);}
#line 1898 "src/maths_parser.tab.cpp"
    break;

  case 101: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 289 "src/maths_parser.y"
                                        {std::cerr<<"ellipsed parameters not assessed"<<std::endl; exit(1);}
#line 1904 "src/maths_parser.tab.cpp"
    break;

  case 102: /* parameter_list: parameter_declaration  */
#line 292 "src/maths_parser.y"
                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1910 "src/maths_parser.tab.cpp"
    break;

  case 103: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 293 "src/maths_parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1916 "src/maths_parser.tab.cpp"
    break;

  case 104: /* argument_expression_list: assignment_expression  */
#line 296 "src/maths_parser.y"
                                                                                                {initList((yyvsp[0].tree));}
#line 1922 "src/maths_parser.tab.cpp"
    break;

  case 105: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 297 "src/maths_parser.y"
                                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1928 "src/maths_parser.tab.cpp"
    break;

  case 106: /* declaration_or_statement: declaration  */
#line 301 "src/maths_parser.y"
                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1934 "src/maths_parser.tab.cpp"
    break;

  case 107: /* declaration_or_statement: statement  */
#line 302 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1940 "src/maths_parser.tab.cpp"
    break;

  case 108: /* declaration_or_statement_list: declaration_or_statement  */
#line 305 "src/maths_parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1946 "src/maths_parser.tab.cpp"
    break;

  case 109: /* declaration_or_statement_list: declaration_or_statement_list declaration_or_statement  */
#line 306 "src/maths_parser.y"
                                                                 {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1952 "src/maths_parser.tab.cpp"
    break;

  case 110: /* statement: labeled_statement  */
#line 310 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1958 "src/maths_parser.tab.cpp"
    break;

  case 111: /* statement: compound_statement  */
#line 311 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1964 "src/maths_parser.tab.cpp"
    break;

  case 112: /* statement: expression_statement  */
#line 312 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1970 "src/maths_parser.tab.cpp"
    break;

  case 113: /* statement: selection_statement  */
#line 313 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1976 "src/maths_parser.tab.cpp"
    break;

  case 114: /* statement: iteration_statement  */
#line 314 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1982 "src/maths_parser.tab.cpp"
    break;

  case 115: /* statement: jump_statement  */
#line 315 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1988 "src/maths_parser.tab.cpp"
    break;

  case 119: /* expression_statement: ';'  */
#line 325 "src/maths_parser.y"
                                        {(yyval.tree) = NULL;}
#line 1994 "src/maths_parser.tab.cpp"
    break;

  case 120: /* expression_statement: expression ';'  */
#line 326 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2000 "src/maths_parser.tab.cpp"
    break;

  case 133: /* compound_statement: '{' '}'  */
#line 351 "src/maths_parser.y"
                                                                                        {(yyval.tree) = new compoundStatement(NULL);}
#line 2006 "src/maths_parser.tab.cpp"
    break;

  case 134: /* compound_statement: '{' declaration_or_statement_list '}'  */
#line 352 "src/maths_parser.y"
                                                    {{(yyval.tree) = new compoundStatement((yyvsp[-1].list));}}
#line 2012 "src/maths_parser.tab.cpp"
    break;

  case 135: /* primary_expression: IDENTIFIER  */
#line 370 "src/maths_parser.y"
                                        {(yyval.tree) = new identifier(*(yyvsp[0].string));}
#line 2018 "src/maths_parser.tab.cpp"
    break;

  case 136: /* primary_expression: CONSTANT_INT  */
#line 371 "src/maths_parser.y"
                                        {(yyval.tree) = new intConstant((yyvsp[0].ival));}
#line 2024 "src/maths_parser.tab.cpp"
    break;

  case 139: /* primary_expression: '(' expression ')'  */
#line 374 "src/maths_parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2030 "src/maths_parser.tab.cpp"
    break;

  case 140: /* postfix_expression: primary_expression  */
#line 378 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2036 "src/maths_parser.tab.cpp"
    break;

  case 148: /* unary_expression: postfix_expression  */
#line 391 "src/maths_parser.y"
                                          {(yyval.tree) = (yyvsp[0].tree);}
#line 2042 "src/maths_parser.tab.cpp"
    break;

  case 160: /* cast_expression: unary_expression  */
#line 409 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2048 "src/maths_parser.tab.cpp"
    break;

  case 162: /* multiplicative_expression: cast_expression  */
#line 414 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2054 "src/maths_parser.tab.cpp"
    break;

  case 166: /* additive_expression: multiplicative_expression  */
#line 421 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2060 "src/maths_parser.tab.cpp"
    break;

  case 169: /* shift_expression: additive_expression  */
#line 427 "src/maths_parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2066 "src/maths_parser.tab.cpp"
    break;

  case 172: /* relational_expression: shift_expression  */
#line 433 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2072 "src/maths_parser.tab.cpp"
    break;

  case 177: /* equality_expression: relational_expression  */
#line 441 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2078 "src/maths_parser.tab.cpp"
    break;

  case 180: /* and_expression: equality_expression  */
#line 447 "src/maths_parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2084 "src/maths_parser.tab.cpp"
    break;

  case 182: /* exclusive_or_expression: and_expression  */
#line 452 "src/maths_parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2090 "src/maths_parser.tab.cpp"
    break;

  case 184: /* inclusive_or_expression: exclusive_or_expression  */
#line 457 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2096 "src/maths_parser.tab.cpp"
    break;

  case 186: /* logical_and_expression: inclusive_or_expression  */
#line 462 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2102 "src/maths_parser.tab.cpp"
    break;

  case 188: /* logical_or_expression: logical_and_expression  */
#line 467 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2108 "src/maths_parser.tab.cpp"
    break;

  case 190: /* conditional_expression: logical_or_expression  */
#line 472 "src/maths_parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2114 "src/maths_parser.tab.cpp"
    break;

  case 192: /* assignment_expression: conditional_expression  */
#line 477 "src/maths_parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2120 "src/maths_parser.tab.cpp"
    break;

  case 204: /* expression: assignment_expression  */
#line 493 "src/maths_parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2126 "src/maths_parser.tab.cpp"
    break;

  case 205: /* expression: expression ',' assignment_expression  */
#line 494 "src/maths_parser.y"
                                                {std::cerr<<"not assessed"; exit(1);}
#line 2132 "src/maths_parser.tab.cpp"
    break;

  case 206: /* constant_expression: conditional_expression  */
#line 498 "src/maths_parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2138 "src/maths_parser.tab.cpp"
    break;


#line 2142 "src/maths_parser.tab.cpp"

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
