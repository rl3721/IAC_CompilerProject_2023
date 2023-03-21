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

#include "parser.tab.hpp"
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
  YYSYMBOL_array_constant_index_list = 96, /* array_constant_index_list  */
  YYSYMBOL_declarator = 97,                /* declarator  */
  YYSYMBOL_type_name = 98,                 /* type_name  */
  YYSYMBOL_declaration = 99,               /* declaration  */
  YYSYMBOL_init_declarator = 100,          /* init_declarator  */
  YYSYMBOL_initializer = 101,              /* initializer  */
  YYSYMBOL_function_definition = 102,      /* function_definition  */
  YYSYMBOL_parameter_declaration = 103,    /* parameter_declaration  */
  YYSYMBOL_enum_specifier = 104,           /* enum_specifier  */
  YYSYMBOL_enumerator = 105,               /* enumerator  */
  YYSYMBOL_pointer = 106,                  /* pointer  */
  YYSYMBOL_abstract_declarator = 107,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 108, /* direct_abstract_declarator  */
  YYSYMBOL_struct_or_union_specifier = 109, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 110,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 111,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 112,       /* struct_declaration  */
  YYSYMBOL_struct_declarator = 113,        /* struct_declarator  */
  YYSYMBOL_specifier_qualifier_list = 114, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 115,   /* struct_declarator_list  */
  YYSYMBOL_init_declarator_list = 116,     /* init_declarator_list  */
  YYSYMBOL_enumerator_list = 117,          /* enumerator_list  */
  YYSYMBOL_initializer_list = 118,         /* initializer_list  */
  YYSYMBOL_identifier_list = 119,          /* identifier_list  */
  YYSYMBOL_type_qualifier_list = 120,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 121,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 122,           /* parameter_list  */
  YYSYMBOL_argument_expression_list = 123, /* argument_expression_list  */
  YYSYMBOL_declaration_or_statement = 124, /* declaration_or_statement  */
  YYSYMBOL_declaration_or_statement_list = 125, /* declaration_or_statement_list  */
  YYSYMBOL_statement = 126,                /* statement  */
  YYSYMBOL_labeled_statement = 127,        /* labeled_statement  */
  YYSYMBOL_compound_unlabled_statement = 128, /* compound_unlabled_statement  */
  YYSYMBOL_unlabled_statement_list = 129,  /* unlabled_statement_list  */
  YYSYMBOL_unlabled_statement = 130,       /* unlabled_statement  */
  YYSYMBOL_expression_statement = 131,     /* expression_statement  */
  YYSYMBOL_selection_statement = 132,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 133,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 134,           /* jump_statement  */
  YYSYMBOL_compound_statement = 135,       /* compound_statement  */
  YYSYMBOL_primary_expression = 136,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 137,       /* postfix_expression  */
  YYSYMBOL_array_index_list = 138,         /* array_index_list  */
  YYSYMBOL_unary_expression = 139,         /* unary_expression  */
  YYSYMBOL_cast_expression = 140,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 141, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 142,      /* additive_expression  */
  YYSYMBOL_shift_expression = 143,         /* shift_expression  */
  YYSYMBOL_relational_expression = 144,    /* relational_expression  */
  YYSYMBOL_equality_expression = 145,      /* equality_expression  */
  YYSYMBOL_and_expression = 146,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 147,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 148,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 149,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 150,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 151,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 152,    /* assignment_expression  */
  YYSYMBOL_expression = 153,               /* expression  */
  YYSYMBOL_constant_expression = 154       /* constant_expression  */
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
#define YYLAST   1167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  370

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
       0,    90,    90,    98,    99,   104,   105,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   125,   126,
     127,   128,   129,   133,   134,   138,   139,   140,   141,   147,
     148,   150,   152,   153,   154,   158,   159,   163,   164,   168,
     169,   174,   175,   179,   180,   183,   184,   185,   191,   192,
     198,   199,   200,   205,   206,   207,   210,   211,   216,   217,
     218,   219,   222,   223,   224,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   241,   242,   243,   246,   247,   251,
     252,   256,   265,   266,   267,   272,   273,   274,   275,   278,
     279,   282,   283,   286,   287,   290,   291,   294,   295,   298,
     299,   302,   303,   306,   307,   310,   311,   315,   316,   319,
     320,   324,   325,   326,   327,   328,   329,   340,   341,   342,
     346,   349,   350,   353,   354,   355,   356,   357,   358,   362,
     363,   367,   368,   369,   373,   374,   375,   376,   380,   381,
     382,   383,   384,   388,   389,   407,   408,   409,   410,   411,
     415,   417,   418,   419,   420,   421,   422,   423,   427,   428,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     443,   456,   457,   461,   462,   463,   464,   468,   469,   470,
     474,   475,   476,   480,   481,   482,   483,   484,   488,   489,
     490,   494,   495,   499,   500,   504,   505,   509,   510,   514,
     515,   519,   520,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   540,   541,   545
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
  "array_constant_index_list", "declarator", "type_name", "declaration",
  "init_declarator", "initializer", "function_definition",
  "parameter_declaration", "enum_specifier", "enumerator", "pointer",
  "abstract_declarator", "direct_abstract_declarator",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration", "struct_declarator",
  "specifier_qualifier_list", "struct_declarator_list",
  "init_declarator_list", "enumerator_list", "initializer_list",
  "identifier_list", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "argument_expression_list", "declaration_or_statement",
  "declaration_or_statement_list", "statement", "labeled_statement",
  "compound_unlabled_statement", "unlabled_statement_list",
  "unlabled_statement", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "compound_statement",
  "primary_expression", "postfix_expression", "array_index_list",
  "unary_expression", "cast_expression", "multiplicative_expression",
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

#define YYPACT_NINF (-255)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     968,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,    22,    52,
      46,    30,   968,  -255,  1119,  1119,    21,   151,   -16,  -255,
    -255,  -255,    40,  -255,    28,    18,    87,    42,  -255,  -255,
    -255,  -255,    46,  -255,  -255,  -255,  -255,  -255,     3,  -255,
     -20,   987,   836,    58,   311,  -255,   151,    66,   265,    87,
      89,  -255,   126,  -255,  -255,  -255,   553,  -255,  -255,    52,
    -255,  -255,   127,  -255,   -15,   115,   120,  -255,  -255,  -255,
    -255,   844,   874,   874,   542,   836,   836,   836,   836,   836,
     836,  -255,   203,  -255,  -255,   -13,   184,   264,    95,   263,
     131,   145,   153,   235,    14,  -255,   191,   836,   181,   836,
     189,   220,   246,   256,   588,   261,   324,   266,   267,   682,
    -255,  -255,    21,  -255,  -255,   388,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,   222,  -255,  -255,    12,   265,   112,   367,
    -255,   211,   836,  -255,    87,   553,  -255,  -255,   262,  -255,
     924,   711,  -255,    64,  -255,   165,  -255,   326,  -255,  1099,
     665,  -255,   836,  -255,  -255,  -255,  -255,   268,  1036,     6,
    -255,  -255,  -255,  -255,  -255,  -255,   331,  -255,  -255,   729,
     836,   332,   273,   836,   836,   836,   836,   836,   836,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
     836,   836,  -255,   288,   588,   282,   588,   836,   836,   836,
     305,   759,   297,  -255,  -255,  -255,   164,  -255,  -255,   836,
     836,   836,   836,   836,   836,   836,   836,   836,   836,   836,
    -255,   836,   444,   836,   300,  -255,   188,  -255,  -255,  -255,
    -255,  -255,  -255,   227,  -255,   312,   313,  -255,   309,   165,
    1079,   793,  -255,  -255,  -255,   315,   836,  1022,  -255,  -255,
     174,  -255,  -255,  -255,  -255,    11,  -255,    -5,  -255,   836,
    -255,  -255,  -255,   -13,   -13,   184,   184,   264,   264,   264,
     264,    95,    95,   263,   131,   145,   153,   235,   146,  -255,
    -255,   465,  -255,   117,   129,   134,   319,   759,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   836,  -255,   112,  -255,   217,  -255,
    -255,  -255,  -255,   320,  -255,   330,  -255,  -255,  -255,   836,
    -255,   116,   836,  -255,  -255,   465,  -255,  -255,  -255,  -255,
    -255,  -255,   588,   588,   588,   836,   810,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,   346,  -255,  -255,
     144,   588,   154,   588,   318,  -255,   588,  -255,  -255,  -255
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    29,    18,    19,    20,    21,    22,     8,     9,    10,
      11,    14,    15,    12,    13,     7,    77,    78,     0,     0,
      58,     0,     2,     3,    27,    25,     0,    38,     0,     6,
       5,    17,     0,    16,     0,    55,     0,     0,    23,    24,
      99,    60,    59,     1,     4,    28,    26,    41,    43,    91,
       0,     0,     0,    31,     0,    48,    37,    76,     0,     0,
      56,    93,     0,    30,   100,    61,     0,    49,    42,     0,
      97,    34,    52,   103,     0,     0,   101,   146,   147,   145,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   160,   171,   173,   177,   180,   183,   188,   191,
     193,   195,   197,   199,   201,   217,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   143,     0,   107,   109,     0,   108,   111,   113,   114,
     115,   116,   112,   171,   203,   215,     0,     0,     0,     0,
      79,     0,     0,    53,     0,     0,    44,    45,    43,    92,
       0,     0,    50,    62,    51,    63,    33,     0,    32,     0,
       0,   169,     0,   161,   162,    86,    88,     0,    39,     0,
     164,   163,   165,   166,   167,   168,     0,   156,   157,     0,
       0,     0,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,     0,   144,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,    82,    89,     0,    75,    80,    54,
      57,    94,    95,     0,    70,     0,     0,    66,     0,    64,
       0,     0,    98,   102,   104,     0,     0,     0,    85,    87,
      62,    40,   149,   155,   152,     0,   105,     0,   154,     0,
     174,   175,   176,   178,   179,   181,   182,   186,   187,   184,
     185,   189,   190,   192,   194,   196,   198,   200,     0,    36,
     117,     0,   119,     0,     0,     0,     0,     0,   138,   142,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     204,   216,    74,    83,     0,    81,     0,    46,     0,    65,
      71,    67,    72,     0,    68,     0,   170,   172,   153,     0,
     158,     0,     0,   123,   118,   120,   121,   125,   126,   127,
     128,   124,     0,     0,     0,     0,     0,    84,    90,    47,
      96,    73,    69,   106,   159,   202,   122,   131,   133,   134,
       0,     0,     0,     0,     0,   136,     0,   132,   135,   137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,   378,   -38,  -255,     2,     0,   -22,  -255,
     -17,  -255,   -51,   341,  -138,  -255,   242,  -255,   272,     8,
     -54,  -134,  -255,  -255,   274,  -116,   101,  -255,  -255,  -255,
     372,  -255,  -255,  -255,   -40,  -255,  -255,   307,  -255,  -110,
    -255,  -255,  -255,   106,  -163,  -254,  -233,  -215,   -27,  -255,
    -255,  -255,   -47,   -73,   136,   137,    81,   133,   254,   255,
     258,   260,   253,  -255,   -44,   -60,    -6,   -78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    25,    40,    72,    27,    53,
      28,   167,    29,    49,   146,    30,    73,    31,    61,    32,
     245,   155,    33,    34,   139,   140,   235,   168,   236,    50,
      62,   243,    74,    42,   246,    76,   265,   124,   125,   126,
     127,   334,   335,   336,   128,   129,   130,   131,   132,    91,
      92,   182,   133,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   134,   135,   136,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    55,    37,   123,   210,    93,   147,   242,   105,    48,
      56,    75,   170,   171,   172,   173,   174,   175,   154,   249,
     138,    67,    26,   238,    45,    46,     1,    35,    41,   203,
      43,   205,   200,    57,   161,   163,   164,   338,    93,    93,
      93,    93,    93,    93,    64,     1,   165,    68,   297,   156,
      65,    69,   148,    54,   122,   152,   157,     1,   339,   183,
      93,   330,    93,   105,   240,   105,   231,   184,   185,     1,
     262,    66,    54,   248,   123,   328,   340,   231,   169,   230,
     153,   338,   329,   231,    19,   147,   166,    59,    47,    38,
      39,    36,    60,    20,   290,    93,   292,    58,   105,   138,
     201,   138,   339,    19,    93,   148,    63,   105,   190,   191,
     270,   271,   272,   216,   261,    19,   238,     1,    20,   266,
     340,   234,   255,   107,    20,   122,   249,   150,   337,   151,
     258,    56,     1,    37,   346,   137,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,   169,   313,   169,   142,   153,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     259,   311,   337,   325,   267,    19,   260,   192,   193,   158,
     350,   342,   354,   327,    20,   233,    93,   231,   231,   105,
     150,   159,   151,   343,   138,   288,   143,   144,   344,    20,
     231,   293,   294,   295,    93,   231,   196,   105,   364,    93,
     323,   176,   177,   178,    51,   231,    52,   231,   366,   332,
      77,    78,    79,    80,    81,   231,    82,    83,   250,   197,
     251,   299,   357,   358,   359,   231,   347,   257,   198,   151,
     333,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   365,   199,   367,   204,   315,   369,   202,   147,   316,
     186,   187,   206,   331,   341,   260,   179,    93,   180,   353,
     105,   277,   278,   279,   280,   188,   189,   181,   194,   195,
      84,   239,   144,   207,   333,    93,   145,   349,   355,    85,
     229,   122,    86,    87,    88,    89,    90,   317,   318,   234,
       7,     8,     9,    10,    11,    12,    13,    14,   341,   208,
      15,    16,    17,    18,    77,    78,   108,    80,    81,   209,
      82,    83,   273,   274,   211,   275,   276,   281,   282,   212,
      66,   252,   256,   213,   214,   122,   263,   268,   269,   360,
     362,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   289,   291,    15,    16,    17,    18,
     296,   109,   110,   111,   298,   112,   113,   114,   115,   116,
     117,   118,   119,   314,    84,   321,   319,   320,   120,   326,
      54,   121,   345,    85,   351,   368,    86,    87,    88,    89,
      90,    77,    78,   108,    80,    81,   352,    82,    83,   363,
      44,   254,     7,     8,     9,    10,    11,    12,    13,    14,
     149,   232,    15,    16,    17,    18,   241,   348,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   141,   218,    15,    16,    17,    18,   237,   109,   110,
     111,   356,   112,   113,   114,   115,   116,   117,   118,   119,
     283,    84,   284,   287,     0,   120,   285,    54,   217,   286,
      85,     0,     0,    86,    87,    88,    89,    90,    77,    78,
      79,    80,    81,     0,    82,    83,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,    15,
      16,    17,    18,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      15,    16,    17,    18,   312,     0,     0,   111,     0,   112,
     113,   114,   115,   116,   117,   118,   119,     0,    84,     0,
       0,     0,   120,     0,    54,     0,     0,    85,     0,     0,
      86,    87,    88,    89,    90,    77,    78,    79,    80,    81,
       0,    82,    83,     0,     0,     0,    77,    78,    79,    80,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    38,    39,    15,    16,    17,
      18,    77,    78,   108,    80,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,    84,    86,    87,    88,
      89,    90,   145,     0,     0,    85,     0,     0,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
       0,    84,     0,     0,     0,   120,     0,    54,     0,     0,
      85,     0,     0,    86,    87,    88,    89,    90,    77,    78,
      79,    80,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    80,    81,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      15,    16,    17,    18,    77,    78,    79,    80,    81,     0,
      82,    83,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,    77,    78,    79,    80,    81,    85,    82,    83,
      86,    87,    88,    89,    90,    84,     0,     0,     0,   215,
       0,     0,     0,     0,    85,     0,     0,    86,    87,    88,
      89,    90,    77,    78,    79,    80,    81,     0,    82,    83,
       0,     0,     0,     0,    84,     0,     0,   247,     0,     0,
       0,     0,     0,    85,     0,     0,    86,    87,    88,    89,
      90,     0,    84,   264,     0,     0,    77,    78,    79,    80,
      81,    85,    82,    83,    86,    87,    88,    89,    90,     0,
       0,     0,     0,    77,    78,    79,    80,    81,     0,    82,
      83,     0,    84,     0,     0,     0,   120,     0,     0,     0,
       0,    85,     0,     0,    86,    87,    88,    89,    90,    77,
      78,    79,    80,    81,     0,    82,    83,    77,    78,    79,
      80,    81,     0,    82,    83,     0,    84,     0,     0,   324,
       0,     0,     0,     0,     0,    85,     0,     0,    86,    87,
      88,    89,    90,    84,   361,     0,     0,    77,    78,    79,
      80,    81,    85,    82,    83,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,   160,    85,     0,
       0,    86,    87,    88,    89,    90,    85,     0,     0,    86,
      87,    88,    89,    90,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    86,
      87,    88,    89,    90,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,    15,
      16,    17,    18,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   244,   151,
       0,     0,    70,     0,     0,     0,    20,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,    15,    16,    17,    18,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,    19,    15,    16,    17,    18,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,    15,    16,    17,
      18,     7,     8,     9,    10,    11,    12,    13,    14,    38,
      39,    15,    16,    17,    18,   257,   244,   151,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,   257,
       0,   151,     0,     0,     0,     0,     0,     0,    20,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    15,    16,    17,    18,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,   322,    15,    16,    17,    18,   253,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    15,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
       0,    28,    19,    54,   114,    52,    66,   145,    52,    26,
      32,    51,    85,    86,    87,    88,    89,    90,    72,   153,
      58,    48,    22,   139,    24,    25,     5,     5,    20,   107,
       0,   109,    18,     5,    81,    82,    83,   291,    85,    86,
      87,    88,    89,    90,    42,     5,    84,    67,   211,    64,
      42,    71,    69,    69,    54,    72,    71,     5,   291,    72,
     107,    66,   109,   107,   142,   109,    71,    80,    81,     5,
      64,    68,    69,   151,   125,    64,   291,    71,    84,    67,
      72,   335,    71,    71,    63,   145,    84,    69,    67,    43,
      44,    69,     5,    72,   204,   142,   206,    69,   142,   137,
      86,   139,   335,    63,   151,   122,    64,   151,    13,    14,
     183,   184,   185,   119,   168,    63,   232,     5,    72,   179,
     335,   138,   160,    65,    72,   125,   260,    63,   291,    65,
     168,   153,     5,   150,   297,    69,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   160,   233,   162,    68,   150,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     168,   231,   335,   251,   180,    63,   168,    82,    83,    64,
     318,    64,    66,   256,    72,    73,   233,    71,    71,   233,
      63,    71,    65,    64,   232,   201,    70,    71,    64,    72,
      71,   207,   208,   209,   251,    71,    75,   251,    64,   256,
     250,     8,     9,    10,    63,    71,    65,    71,    64,    73,
       3,     4,     5,     6,     7,    71,     9,    10,    63,    84,
      65,    67,   342,   343,   344,    71,   314,    63,    85,    65,
     291,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   361,    17,   363,    73,    67,   366,    66,   318,    71,
      76,    77,    73,   269,   291,   257,    63,   314,    65,   329,
     314,   190,   191,   192,   193,    11,    12,    74,    15,    16,
      63,    70,    71,    63,   335,   332,    69,    70,   332,    72,
      68,   291,    75,    76,    77,    78,    79,    70,    71,   316,
      35,    36,    37,    38,    39,    40,    41,    42,   335,    63,
      45,    46,    47,    48,     3,     4,     5,     6,     7,    63,
       9,    10,   186,   187,    63,   188,   189,   194,   195,     5,
      68,     5,    64,    67,    67,   335,     5,     5,    65,   345,
     346,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    66,    73,    45,    46,    47,    48,
      55,    50,    51,    52,    67,    54,    55,    56,    57,    58,
      59,    60,    61,    73,    63,    66,    64,    64,    67,    64,
      69,    70,    63,    72,    64,    67,    75,    76,    77,    78,
      79,     3,     4,     5,     6,     7,    66,     9,    10,    53,
      22,   159,    35,    36,    37,    38,    39,    40,    41,    42,
      69,   137,    45,    46,    47,    48,   144,   316,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    59,   125,    45,    46,    47,    48,    70,    50,    51,
      52,   335,    54,    55,    56,    57,    58,    59,    60,    61,
     196,    63,   197,   200,    -1,    67,   198,    69,    70,   199,
      72,    -1,    -1,    75,    76,    77,    78,    79,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      46,    47,    48,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    70,    -1,    -1,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    79,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    63,    75,    76,    77,
      78,    79,    69,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    63,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    79,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    72,     9,    10,
      75,    76,    77,    78,    79,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    79,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      79,    -1,    63,    64,    -1,    -1,     3,     4,     5,     6,
       7,    72,     9,    10,    75,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    76,    77,    78,    79,     3,
       4,     5,     6,     7,    -1,     9,    10,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    63,    64,    -1,    -1,     3,     4,     5,
       6,     7,    72,     9,    10,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    72,    -1,
      -1,    75,    76,    77,    78,    79,    72,    -1,    -1,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    45,
      46,    47,    48,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      -1,    -1,     5,    -1,    -1,    -1,    72,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    45,    46,    47,    48,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    63,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    46,    47,
      48,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    63,    64,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    64,    45,    46,    47,    48,    49,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    48,    63,
      72,    88,    89,    90,    91,    92,    94,    95,    97,    99,
     102,   104,   106,   109,   110,     5,    69,    97,    43,    44,
      93,   106,   120,     0,    90,    94,    94,    67,    97,   100,
     116,    63,    65,    96,    69,   135,    95,     5,    69,    69,
       5,   105,   117,    64,    93,   106,    68,   135,    67,    71,
       5,    64,    94,   103,   119,   121,   122,     3,     4,     5,
       6,     7,     9,    10,    63,    72,    75,    76,    77,    78,
      79,   136,   137,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   154,    65,     5,    50,
      51,    52,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    70,    94,    99,   124,   125,   126,   127,   131,   132,
     133,   134,   135,   139,   151,   152,   153,    69,    91,   111,
     112,   117,    68,    70,    71,    69,   101,   152,    97,   100,
      63,    65,    97,   106,   107,   108,    64,    71,    64,    71,
      63,   139,    63,   139,   139,    91,    93,    98,   114,   153,
     140,   140,   140,   140,   140,   140,     8,     9,    10,    63,
      65,    74,   138,    72,    80,    81,    76,    77,    11,    12,
      13,    14,    82,    83,    15,    16,    75,    84,    85,    17,
      18,    86,    66,   154,    73,   154,    73,    63,    63,    63,
     126,    63,     5,    67,    67,    67,   153,    70,   124,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    68,
      67,    71,   111,    73,    97,   113,   115,    70,   112,    70,
     154,   105,   101,   118,    64,   107,   121,    66,   154,   108,
      63,    65,     5,    49,   103,    91,    64,    63,    91,    93,
     106,   107,    64,     5,    64,   123,   152,   153,     5,    65,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   144,   144,   145,   146,   147,   148,   149,   153,    66,
     126,    73,   126,   153,   153,   153,    55,   131,    67,    67,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,    70,   154,    73,    67,    71,    70,    71,    64,
      64,    66,    64,   121,    66,   154,    64,   140,    64,    71,
      66,   153,    73,    99,   128,   129,   130,   131,   132,   133,
     134,   135,    64,    64,    64,    63,   131,   154,   113,    70,
     101,    64,    66,   152,    66,   151,   130,   126,   126,   126,
     153,    64,   153,    53,    64,   126,    64,   126,    67,   126
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112,   113,   113,   113,   114,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   126,   126,   126,   126,   127,   127,   127,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   135,   135,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   141,   142,   142,   142,
     143,   143,   143,   144,   144,   144,   144,   144,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   153,   154
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       3,     2,     4,     4,     3,     3,     4,     2,     1,     1,
       2,     2,     3,     1,     3,     1,     3,     4,     2,     3,
       2,     2,     1,     4,     5,     2,     1,     3,     1,     2,
       2,     3,     1,     1,     2,     3,     2,     3,     3,     4,
       2,     3,     3,     4,     5,     4,     2,     1,     1,     1,
       2,     3,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     7,     5,     5,     7,     6,     7,     3,     2,
       2,     2,     3,     2,     3,     1,     1,     1,     1,     3,
       1,     2,     3,     4,     3,     3,     2,     2,     3,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     1
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
#line 90 "src/parser.y"
                          {g_root = new translationUnit((yyvsp[0].list));}
#line 1651 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 98 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1657 "src/parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 99 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-1].list),(yyvsp[0].tree));}
#line 1663 "src/parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 104 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1669 "src/parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 105 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1675 "src/parser.tab.cpp"
    break;

  case 7: /* type_specifier: VOID  */
#line 110 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_void);}
#line 1681 "src/parser.tab.cpp"
    break;

  case 8: /* type_specifier: CHAR  */
#line 111 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_char);}
#line 1687 "src/parser.tab.cpp"
    break;

  case 9: /* type_specifier: SHORT  */
#line 112 "src/parser.y"
                                                                {std::cerr<<"short not assessed";exit(1);}
#line 1693 "src/parser.tab.cpp"
    break;

  case 10: /* type_specifier: INT  */
#line 113 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_int);}
#line 1699 "src/parser.tab.cpp"
    break;

  case 11: /* type_specifier: LONG  */
#line 114 "src/parser.y"
                                                                {std::cerr<<"long not spported";exit(1);}
#line 1705 "src/parser.tab.cpp"
    break;

  case 12: /* type_specifier: FLOAT  */
#line 115 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_float);}
#line 1711 "src/parser.tab.cpp"
    break;

  case 13: /* type_specifier: DOUBLE  */
#line 116 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_double);}
#line 1717 "src/parser.tab.cpp"
    break;

  case 15: /* type_specifier: UNSIGNED  */
#line 118 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_unsigned);}
#line 1723 "src/parser.tab.cpp"
    break;

  case 16: /* type_specifier: struct_or_union_specifier  */
#line 119 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1729 "src/parser.tab.cpp"
    break;

  case 17: /* type_specifier: enum_specifier  */
#line 120 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1735 "src/parser.tab.cpp"
    break;

  case 19: /* storage_class_specifier: EXTERN  */
#line 126 "src/parser.y"
                                {std::cerr<<"Extern not assessed"; exit(1);}
#line 1741 "src/parser.tab.cpp"
    break;

  case 20: /* storage_class_specifier: STATIC  */
#line 127 "src/parser.y"
                                {std::cerr<<"static not assessed"; exit(1);}
#line 1747 "src/parser.tab.cpp"
    break;

  case 21: /* storage_class_specifier: AUTO  */
#line 128 "src/parser.y"
                                {std::cerr<<"auto not assessed"; exit(1);}
#line 1753 "src/parser.tab.cpp"
    break;

  case 22: /* storage_class_specifier: REGISTER  */
#line 129 "src/parser.y"
                                {std::cerr<<"register not assessed"; exit(1);}
#line 1759 "src/parser.tab.cpp"
    break;

  case 23: /* type_qualifier: CONST  */
#line 133 "src/parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1765 "src/parser.tab.cpp"
    break;

  case 24: /* type_qualifier: VOLATILE  */
#line 134 "src/parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1771 "src/parser.tab.cpp"
    break;

  case 27: /* declaration_specifiers: type_specifier  */
#line 140 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1777 "src/parser.tab.cpp"
    break;

  case 28: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 141 "src/parser.y"
                                                                        {std::cerr<<"long short... concat data types not assessed"<<std::endl; exit(1);}
#line 1783 "src/parser.tab.cpp"
    break;

  case 29: /* direct_declarator: IDENTIFIER  */
#line 147 "src/parser.y"
                                                                                                {(yyval.tree) = new variableDeclarator(*(yyvsp[0].string));}
#line 1789 "src/parser.tab.cpp"
    break;

  case 30: /* direct_declarator: '(' declarator ')'  */
#line 148 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 1795 "src/parser.tab.cpp"
    break;

  case 31: /* direct_declarator: direct_declarator array_constant_index_list  */
#line 150 "src/parser.y"
                                                                {(yyval.tree) = new arrayDeclarator((yyvsp[-1].tree), (yyvsp[0].list));}
#line 1801 "src/parser.tab.cpp"
    break;

  case 32: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 152 "src/parser.y"
                                                                {(yyval.tree) = new functionDeclarator((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 1807 "src/parser.tab.cpp"
    break;

  case 34: /* direct_declarator: direct_declarator '(' ')'  */
#line 154 "src/parser.y"
                                                                                        {(yyval.tree) = new functionDeclarator((yyvsp[-2].tree), NULL);}
#line 1813 "src/parser.tab.cpp"
    break;

  case 35: /* array_constant_index_list: '[' constant_expression ']'  */
#line 158 "src/parser.y"
                                                                        {(yyval.list) = initList((yyvsp[-1].tree));}
#line 1819 "src/parser.tab.cpp"
    break;

  case 36: /* array_constant_index_list: array_constant_index_list '[' constant_expression ']'  */
#line 159 "src/parser.y"
                                                                {(yyval.list) = concatList((yyvsp[-3].list), (yyvsp[-1].tree));}
#line 1825 "src/parser.tab.cpp"
    break;

  case 37: /* declarator: pointer direct_declarator  */
#line 163 "src/parser.y"
                                                {(yyval.tree) = new pointerDeclarator((yyvsp[0].tree));}
#line 1831 "src/parser.tab.cpp"
    break;

  case 38: /* declarator: direct_declarator  */
#line 164 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1837 "src/parser.tab.cpp"
    break;

  case 41: /* declaration: declaration_specifiers ';'  */
#line 174 "src/parser.y"
                                                                                {(yyval.tree) = new declaration((yyvsp[-1].tree), NULL);}
#line 1843 "src/parser.tab.cpp"
    break;

  case 42: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 175 "src/parser.y"
                                                                {(yyval.tree) = new declaration((yyvsp[-2].tree), (yyvsp[-1].list));}
#line 1849 "src/parser.tab.cpp"
    break;

  case 43: /* init_declarator: declarator  */
#line 179 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1855 "src/parser.tab.cpp"
    break;

  case 44: /* init_declarator: declarator '=' initializer  */
#line 180 "src/parser.y"
                                        {(yyval.tree) = new initDeclarator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1861 "src/parser.tab.cpp"
    break;

  case 45: /* initializer: assignment_expression  */
#line 183 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1867 "src/parser.tab.cpp"
    break;

  case 48: /* function_definition: declarator compound_statement  */
#line 191 "src/parser.y"
                                                                                                                                {std::cerr<<"function witout type"<<std::endl;}
#line 1873 "src/parser.tab.cpp"
    break;

  case 49: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 192 "src/parser.y"
                                                                                                        {(yyval.tree) = new functionDefinition((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 1879 "src/parser.tab.cpp"
    break;

  case 50: /* parameter_declaration: declaration_specifiers declarator  */
#line 198 "src/parser.y"
                                                                        {(yyval.tree) = new declaration((yyvsp[-1].tree), initList((yyvsp[0].tree))); }
#line 1885 "src/parser.tab.cpp"
    break;

  case 51: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 199 "src/parser.y"
                                                         {std::cerr<<"Error: abstract declarators, unsupported"; exit(1);}
#line 1891 "src/parser.tab.cpp"
    break;

  case 52: /* parameter_declaration: declaration_specifiers  */
#line 200 "src/parser.y"
                                                                                {std::cerr<<"Error: abstract declarators, unsupported"; exit(1);}
#line 1897 "src/parser.tab.cpp"
    break;

  case 53: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 205 "src/parser.y"
                                                                {(yyval.tree) = new enumSpecifier((yyvsp[-1].list));}
#line 1903 "src/parser.tab.cpp"
    break;

  case 54: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 206 "src/parser.y"
                                                        {(yyval.tree) = new enumSpecifier(*(yyvsp[-3].string), (yyvsp[-1].list));}
#line 1909 "src/parser.tab.cpp"
    break;

  case 55: /* enum_specifier: ENUM IDENTIFIER  */
#line 207 "src/parser.y"
                                                                                {(yyval.tree) = new enumSpecifier(*(yyvsp[0].string), NULL);}
#line 1915 "src/parser.tab.cpp"
    break;

  case 56: /* enumerator: IDENTIFIER  */
#line 210 "src/parser.y"
                                                                        {(yyval.tree) = new Enumerator(*(yyvsp[0].string), NULL);}
#line 1921 "src/parser.tab.cpp"
    break;

  case 57: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 211 "src/parser.y"
                                                {(yyval.tree) = new Enumerator(*(yyvsp[-2].string), (yyvsp[0].tree));}
#line 1927 "src/parser.tab.cpp"
    break;

  case 78: /* struct_or_union: UNION  */
#line 247 "src/parser.y"
                        {std::cerr<<"union not assessed"; exit(1);}
#line 1933 "src/parser.tab.cpp"
    break;

  case 79: /* struct_declaration_list: struct_declaration  */
#line 251 "src/parser.y"
                                                      {(yyval.list) = initList((yyvsp[0].tree));}
#line 1939 "src/parser.tab.cpp"
    break;

  case 80: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 252 "src/parser.y"
                                                      {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1945 "src/parser.tab.cpp"
    break;

  case 82: /* struct_declarator: declarator  */
#line 265 "src/parser.y"
                     {(yyval.tree) = (yyvsp[0].tree);}
#line 1951 "src/parser.tab.cpp"
    break;

  case 85: /* specifier_qualifier_list: specifier_qualifier_list type_specifier  */
#line 272 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1957 "src/parser.tab.cpp"
    break;

  case 86: /* specifier_qualifier_list: type_specifier  */
#line 273 "src/parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1963 "src/parser.tab.cpp"
    break;

  case 89: /* struct_declarator_list: struct_declarator  */
#line 278 "src/parser.y"
                                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1969 "src/parser.tab.cpp"
    break;

  case 90: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 279 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1975 "src/parser.tab.cpp"
    break;

  case 91: /* init_declarator_list: init_declarator  */
#line 282 "src/parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1981 "src/parser.tab.cpp"
    break;

  case 92: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 283 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1987 "src/parser.tab.cpp"
    break;

  case 93: /* enumerator_list: enumerator  */
#line 286 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1993 "src/parser.tab.cpp"
    break;

  case 94: /* enumerator_list: enumerator_list ',' enumerator  */
#line 287 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1999 "src/parser.tab.cpp"
    break;

  case 95: /* initializer_list: initializer  */
#line 290 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 2005 "src/parser.tab.cpp"
    break;

  case 96: /* initializer_list: initializer_list ',' initializer  */
#line 291 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 2011 "src/parser.tab.cpp"
    break;

  case 97: /* identifier_list: IDENTIFIER  */
#line 294 "src/parser.y"
                                                                {(yyval.list) = initList(new identifier(*(yyvsp[0].string)));}
#line 2017 "src/parser.tab.cpp"
    break;

  case 98: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 295 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), new identifier(*(yyvsp[0].string)));}
#line 2023 "src/parser.tab.cpp"
    break;

  case 101: /* parameter_type_list: parameter_list  */
#line 302 "src/parser.y"
                                                        {(yyval.list) = (yyvsp[0].list);}
#line 2029 "src/parser.tab.cpp"
    break;

  case 102: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 303 "src/parser.y"
                                        {std::cerr<<"ellipsed parameters not assessed"<<std::endl; exit(1);}
#line 2035 "src/parser.tab.cpp"
    break;

  case 103: /* parameter_list: parameter_declaration  */
#line 306 "src/parser.y"
                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 2041 "src/parser.tab.cpp"
    break;

  case 104: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 307 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 2047 "src/parser.tab.cpp"
    break;

  case 105: /* argument_expression_list: assignment_expression  */
#line 310 "src/parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 2053 "src/parser.tab.cpp"
    break;

  case 106: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 311 "src/parser.y"
                                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 2059 "src/parser.tab.cpp"
    break;

  case 107: /* declaration_or_statement: declaration  */
#line 315 "src/parser.y"
                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2065 "src/parser.tab.cpp"
    break;

  case 108: /* declaration_or_statement: statement  */
#line 316 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2071 "src/parser.tab.cpp"
    break;

  case 109: /* declaration_or_statement_list: declaration_or_statement  */
#line 319 "src/parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 2077 "src/parser.tab.cpp"
    break;

  case 110: /* declaration_or_statement_list: declaration_or_statement_list declaration_or_statement  */
#line 320 "src/parser.y"
                                                                 {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 2083 "src/parser.tab.cpp"
    break;

  case 111: /* statement: labeled_statement  */
#line 324 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2089 "src/parser.tab.cpp"
    break;

  case 112: /* statement: compound_statement  */
#line 325 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2095 "src/parser.tab.cpp"
    break;

  case 113: /* statement: expression_statement  */
#line 326 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2101 "src/parser.tab.cpp"
    break;

  case 114: /* statement: selection_statement  */
#line 327 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2107 "src/parser.tab.cpp"
    break;

  case 115: /* statement: iteration_statement  */
#line 328 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2113 "src/parser.tab.cpp"
    break;

  case 116: /* statement: jump_statement  */
#line 329 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2119 "src/parser.tab.cpp"
    break;

  case 118: /* labeled_statement: CASE constant_expression ':' compound_unlabled_statement  */
#line 341 "src/parser.y"
                                                                    {(yyval.tree) = new caseStatement((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2125 "src/parser.tab.cpp"
    break;

  case 119: /* labeled_statement: DEFAULT ':' statement  */
#line 342 "src/parser.y"
                                                                                                {(yyval.tree) = new caseStatement(NULL, (yyvsp[0].tree));}
#line 2131 "src/parser.tab.cpp"
    break;

  case 120: /* compound_unlabled_statement: unlabled_statement_list  */
#line 346 "src/parser.y"
                                        {(yyval.tree) = new compoundStatement((yyvsp[0].list));}
#line 2137 "src/parser.tab.cpp"
    break;

  case 121: /* unlabled_statement_list: unlabled_statement  */
#line 349 "src/parser.y"
                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 2143 "src/parser.tab.cpp"
    break;

  case 122: /* unlabled_statement_list: unlabled_statement_list unlabled_statement  */
#line 350 "src/parser.y"
                                                     {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 2149 "src/parser.tab.cpp"
    break;

  case 123: /* unlabled_statement: declaration  */
#line 353 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2155 "src/parser.tab.cpp"
    break;

  case 124: /* unlabled_statement: compound_statement  */
#line 354 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2161 "src/parser.tab.cpp"
    break;

  case 125: /* unlabled_statement: expression_statement  */
#line 355 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2167 "src/parser.tab.cpp"
    break;

  case 126: /* unlabled_statement: selection_statement  */
#line 356 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2173 "src/parser.tab.cpp"
    break;

  case 127: /* unlabled_statement: iteration_statement  */
#line 357 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2179 "src/parser.tab.cpp"
    break;

  case 128: /* unlabled_statement: jump_statement  */
#line 358 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2185 "src/parser.tab.cpp"
    break;

  case 129: /* expression_statement: ';'  */
#line 362 "src/parser.y"
                                        {(yyval.tree) = NULL;}
#line 2191 "src/parser.tab.cpp"
    break;

  case 130: /* expression_statement: expression ';'  */
#line 363 "src/parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2197 "src/parser.tab.cpp"
    break;

  case 131: /* selection_statement: IF '(' expression ')' statement  */
#line 367 "src/parser.y"
                                                                                {(yyval.tree) = new ifElseStatement((yyvsp[-2].tree),(yyvsp[0].tree),NULL);}
#line 2203 "src/parser.tab.cpp"
    break;

  case 132: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 368 "src/parser.y"
                                                                {(yyval.tree) = new ifElseStatement((yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2209 "src/parser.tab.cpp"
    break;

  case 133: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 369 "src/parser.y"
                                                                        {(yyval.tree) = new switchStatement((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2215 "src/parser.tab.cpp"
    break;

  case 134: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 373 "src/parser.y"
                                                                        {(yyval.tree) = new whileStatement((yyvsp[-2].tree),NULL,NULL,(yyvsp[0].tree));}
#line 2221 "src/parser.tab.cpp"
    break;

  case 137: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 376 "src/parser.y"
                                                                                     {(yyval.tree) = new forStatement{(yyvsp[-4].tree), (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree)};}
#line 2227 "src/parser.tab.cpp"
    break;

  case 138: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 380 "src/parser.y"
                                {std::cerr<<"goto not assessed"; exit(1);}
#line 2233 "src/parser.tab.cpp"
    break;

  case 139: /* jump_statement: CONTINUE ';'  */
#line 381 "src/parser.y"
                                        {(yyval.tree) = new continueStatement();}
#line 2239 "src/parser.tab.cpp"
    break;

  case 140: /* jump_statement: BREAK ';'  */
#line 382 "src/parser.y"
                                                {(yyval.tree) = new breakStatement();}
#line 2245 "src/parser.tab.cpp"
    break;

  case 141: /* jump_statement: RETURN ';'  */
#line 383 "src/parser.y"
                                        {(yyval.tree) = new returnStatement(NULL);}
#line 2251 "src/parser.tab.cpp"
    break;

  case 142: /* jump_statement: RETURN expression ';'  */
#line 384 "src/parser.y"
                                {(yyval.tree) = new returnStatement((yyvsp[-1].tree));}
#line 2257 "src/parser.tab.cpp"
    break;

  case 143: /* compound_statement: '{' '}'  */
#line 388 "src/parser.y"
                                                                                        {(yyval.tree) = new compoundStatement(NULL);}
#line 2263 "src/parser.tab.cpp"
    break;

  case 144: /* compound_statement: '{' declaration_or_statement_list '}'  */
#line 389 "src/parser.y"
                                                    {{(yyval.tree) = new compoundStatement((yyvsp[-1].list));}}
#line 2269 "src/parser.tab.cpp"
    break;

  case 145: /* primary_expression: IDENTIFIER  */
#line 407 "src/parser.y"
                                        {(yyval.tree) = new identifier(*(yyvsp[0].string));}
#line 2275 "src/parser.tab.cpp"
    break;

  case 146: /* primary_expression: CONSTANT_INT  */
#line 408 "src/parser.y"
                                        {(yyval.tree) = new intConstant((yyvsp[0].ival));}
#line 2281 "src/parser.tab.cpp"
    break;

  case 147: /* primary_expression: CONSTANT_FLOAT  */
#line 409 "src/parser.y"
                                        {(yyval.tree) = new floatConstant((yyvsp[0].dval));}
#line 2287 "src/parser.tab.cpp"
    break;

  case 148: /* primary_expression: STRING_LITERAL  */
#line 410 "src/parser.y"
                                        {(yyval.tree) = new stringConstant(*(yyvsp[0].string));}
#line 2293 "src/parser.tab.cpp"
    break;

  case 149: /* primary_expression: '(' expression ')'  */
#line 411 "src/parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2299 "src/parser.tab.cpp"
    break;

  case 150: /* postfix_expression: primary_expression  */
#line 415 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2305 "src/parser.tab.cpp"
    break;

  case 151: /* postfix_expression: postfix_expression array_index_list  */
#line 417 "src/parser.y"
                                                                                {(yyval.tree) = new arrayIndex((yyvsp[-1].tree), (yyvsp[0].list));}
#line 2311 "src/parser.tab.cpp"
    break;

  case 152: /* postfix_expression: postfix_expression '(' ')'  */
#line 418 "src/parser.y"
                                                                                        {(yyval.tree) = new functionCall((yyvsp[-2].tree), NULL);}
#line 2317 "src/parser.tab.cpp"
    break;

  case 153: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 419 "src/parser.y"
                                                                {(yyval.tree) = new functionCall((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 2323 "src/parser.tab.cpp"
    break;

  case 156: /* postfix_expression: postfix_expression INC_OP  */
#line 422 "src/parser.y"
                                                                                                {(yyval.tree) = new postIncrement((yyvsp[-1].tree));}
#line 2329 "src/parser.tab.cpp"
    break;

  case 157: /* postfix_expression: postfix_expression DEC_OP  */
#line 423 "src/parser.y"
                                                                                                {(yyval.tree) = new postDecrement((yyvsp[-1].tree));}
#line 2335 "src/parser.tab.cpp"
    break;

  case 158: /* array_index_list: '[' expression ']'  */
#line 427 "src/parser.y"
                                {(yyval.list) = initList((yyvsp[-1].tree));}
#line 2341 "src/parser.tab.cpp"
    break;

  case 159: /* array_index_list: array_index_list '[' expression ']'  */
#line 428 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-3].list), (yyvsp[-1].tree));}
#line 2347 "src/parser.tab.cpp"
    break;

  case 160: /* unary_expression: postfix_expression  */
#line 432 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2353 "src/parser.tab.cpp"
    break;

  case 161: /* unary_expression: INC_OP unary_expression  */
#line 433 "src/parser.y"
                                                        {(yyval.tree) = new preIncrement((yyvsp[0].tree));}
#line 2359 "src/parser.tab.cpp"
    break;

  case 162: /* unary_expression: DEC_OP unary_expression  */
#line 434 "src/parser.y"
                                                        {(yyval.tree) = new preIncrement((yyvsp[0].tree));}
#line 2365 "src/parser.tab.cpp"
    break;

  case 163: /* unary_expression: '&' cast_expression  */
#line 435 "src/parser.y"
                                                        {(yyval.tree) = new addressOperator((yyvsp[0].tree));}
#line 2371 "src/parser.tab.cpp"
    break;

  case 164: /* unary_expression: '*' cast_expression  */
#line 436 "src/parser.y"
                                                        {(yyval.tree) = new dereferenceOperator((yyvsp[0].tree));}
#line 2377 "src/parser.tab.cpp"
    break;

  case 165: /* unary_expression: '+' cast_expression  */
#line 437 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2383 "src/parser.tab.cpp"
    break;

  case 166: /* unary_expression: '-' cast_expression  */
#line 438 "src/parser.y"
                                                        {(yyval.tree) = new negOperator((yyvsp[0].tree));}
#line 2389 "src/parser.tab.cpp"
    break;

  case 167: /* unary_expression: '~' cast_expression  */
#line 439 "src/parser.y"
                                                        {(yyval.tree) = new bwNotOperator((yyvsp[0].tree));}
#line 2395 "src/parser.tab.cpp"
    break;

  case 168: /* unary_expression: '!' cast_expression  */
#line 440 "src/parser.y"
                                            {(yyval.tree) = new notOperator((yyvsp[0].tree));}
#line 2401 "src/parser.tab.cpp"
    break;

  case 169: /* unary_expression: SIZEOF unary_expression  */
#line 441 "src/parser.y"
                                                        {(yyval.tree) = new sizeOfOperator((yyvsp[0].tree));}
#line 2407 "src/parser.tab.cpp"
    break;

  case 170: /* unary_expression: SIZEOF '(' type_specifier ')'  */
#line 443 "src/parser.y"
                                                {(yyval.tree) = new sizeOfTypeOperator((yyvsp[-1].tree));}
#line 2413 "src/parser.tab.cpp"
    break;

  case 171: /* cast_expression: unary_expression  */
#line 456 "src/parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2419 "src/parser.tab.cpp"
    break;

  case 172: /* cast_expression: '(' type_name ')' cast_expression  */
#line 457 "src/parser.y"
                                            {std::cerr<<"Error: casting not supported"; exit(1);}
#line 2425 "src/parser.tab.cpp"
    break;

  case 173: /* multiplicative_expression: cast_expression  */
#line 461 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2431 "src/parser.tab.cpp"
    break;

  case 174: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 462 "src/parser.y"
                                                        {(yyval.tree) = new mulOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2437 "src/parser.tab.cpp"
    break;

  case 175: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 463 "src/parser.y"
                                                        {(yyval.tree) = new divOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2443 "src/parser.tab.cpp"
    break;

  case 176: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 464 "src/parser.y"
                                                        {(yyval.tree) = new modOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2449 "src/parser.tab.cpp"
    break;

  case 177: /* additive_expression: multiplicative_expression  */
#line 468 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2455 "src/parser.tab.cpp"
    break;

  case 178: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 469 "src/parser.y"
                                                                {(yyval.tree) = new addOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2461 "src/parser.tab.cpp"
    break;

  case 179: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 470 "src/parser.y"
                                                                {(yyval.tree) = new subOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2467 "src/parser.tab.cpp"
    break;

  case 180: /* shift_expression: additive_expression  */
#line 474 "src/parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2473 "src/parser.tab.cpp"
    break;

  case 181: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 475 "src/parser.y"
                                                        {(yyval.tree) = new leftShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2479 "src/parser.tab.cpp"
    break;

  case 182: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 476 "src/parser.y"
                                                        {(yyval.tree) = new rightShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2485 "src/parser.tab.cpp"
    break;

  case 183: /* relational_expression: shift_expression  */
#line 480 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2491 "src/parser.tab.cpp"
    break;

  case 184: /* relational_expression: relational_expression '<' shift_expression  */
#line 481 "src/parser.y"
                                                                {(yyval.tree) = new ltOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2497 "src/parser.tab.cpp"
    break;

  case 185: /* relational_expression: relational_expression '>' shift_expression  */
#line 482 "src/parser.y"
                                                                {(yyval.tree) = new gtOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2503 "src/parser.tab.cpp"
    break;

  case 186: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 483 "src/parser.y"
                                                                {(yyval.tree) = new leOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2509 "src/parser.tab.cpp"
    break;

  case 187: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 484 "src/parser.y"
                                                                {(yyval.tree) = new geOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2515 "src/parser.tab.cpp"
    break;

  case 188: /* equality_expression: relational_expression  */
#line 488 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2521 "src/parser.tab.cpp"
    break;

  case 189: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 489 "src/parser.y"
                                                                {(yyval.tree) = new equalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2527 "src/parser.tab.cpp"
    break;

  case 190: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 490 "src/parser.y"
                                                                {(yyval.tree) = new inequalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2533 "src/parser.tab.cpp"
    break;

  case 191: /* and_expression: equality_expression  */
#line 494 "src/parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2539 "src/parser.tab.cpp"
    break;

  case 192: /* and_expression: and_expression '&' equality_expression  */
#line 495 "src/parser.y"
                                                        {(yyval.tree) = new andOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2545 "src/parser.tab.cpp"
    break;

  case 193: /* exclusive_or_expression: and_expression  */
#line 499 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2551 "src/parser.tab.cpp"
    break;

  case 194: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 500 "src/parser.y"
                                                        {(yyval.tree) = new exclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2557 "src/parser.tab.cpp"
    break;

  case 195: /* inclusive_or_expression: exclusive_or_expression  */
#line 504 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2563 "src/parser.tab.cpp"
    break;

  case 196: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 505 "src/parser.y"
                                                                {(yyval.tree) = new inclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2569 "src/parser.tab.cpp"
    break;

  case 197: /* logical_and_expression: inclusive_or_expression  */
#line 509 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2575 "src/parser.tab.cpp"
    break;

  case 198: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 510 "src/parser.y"
                                                                {(yyval.tree) = new logicalAndOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2581 "src/parser.tab.cpp"
    break;

  case 199: /* logical_or_expression: logical_and_expression  */
#line 514 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2587 "src/parser.tab.cpp"
    break;

  case 200: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 515 "src/parser.y"
                                                                {(yyval.tree) = new logicalOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2593 "src/parser.tab.cpp"
    break;

  case 201: /* conditional_expression: logical_or_expression  */
#line 519 "src/parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2599 "src/parser.tab.cpp"
    break;

  case 203: /* assignment_expression: conditional_expression  */
#line 524 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2605 "src/parser.tab.cpp"
    break;

  case 204: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 525 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2611 "src/parser.tab.cpp"
    break;

  case 205: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 526 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new mulOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2617 "src/parser.tab.cpp"
    break;

  case 206: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 527 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new divOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2623 "src/parser.tab.cpp"
    break;

  case 207: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 528 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new modOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2629 "src/parser.tab.cpp"
    break;

  case 208: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 529 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new addOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2635 "src/parser.tab.cpp"
    break;

  case 209: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 530 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new subOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2641 "src/parser.tab.cpp"
    break;

  case 210: /* assignment_expression: unary_expression LEFT_ASSIGN assignment_expression  */
#line 531 "src/parser.y"
                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new leftShiftOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2647 "src/parser.tab.cpp"
    break;

  case 211: /* assignment_expression: unary_expression RIGHT_ASSIGN assignment_expression  */
#line 532 "src/parser.y"
                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new rightShiftOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2653 "src/parser.tab.cpp"
    break;

  case 212: /* assignment_expression: unary_expression AND_ASSIGN assignment_expression  */
#line 533 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new andOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2659 "src/parser.tab.cpp"
    break;

  case 213: /* assignment_expression: unary_expression XOR_ASSIGN assignment_expression  */
#line 534 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new exclusiveOrOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2665 "src/parser.tab.cpp"
    break;

  case 214: /* assignment_expression: unary_expression OR_ASSIGN assignment_expression  */
#line 535 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new inclusiveOrOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2671 "src/parser.tab.cpp"
    break;

  case 215: /* expression: assignment_expression  */
#line 540 "src/parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2677 "src/parser.tab.cpp"
    break;

  case 216: /* expression: expression ',' assignment_expression  */
#line 541 "src/parser.y"
                                                {std::cerr<<"not assessed"; exit(1);}
#line 2683 "src/parser.tab.cpp"
    break;

  case 217: /* constant_expression: conditional_expression  */
#line 545 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2689 "src/parser.tab.cpp"
    break;


#line 2693 "src/parser.tab.cpp"

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

#line 551 "src/parser.y"

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
