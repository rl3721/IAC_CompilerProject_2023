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
  YYSYMBOL_74_ = 74,                       /* "{"  */
  YYSYMBOL_75_ = 75,                       /* "}"  */
  YYSYMBOL_76_ = 76,                       /* '.'  */
  YYSYMBOL_77_ = 77,                       /* '&'  */
  YYSYMBOL_78_ = 78,                       /* '+'  */
  YYSYMBOL_79_ = 79,                       /* '-'  */
  YYSYMBOL_80_ = 80,                       /* '~'  */
  YYSYMBOL_81_ = 81,                       /* '!'  */
  YYSYMBOL_82_ = 82,                       /* '/'  */
  YYSYMBOL_83_ = 83,                       /* '%'  */
  YYSYMBOL_84_ = 84,                       /* '<'  */
  YYSYMBOL_85_ = 85,                       /* '>'  */
  YYSYMBOL_86_ = 86,                       /* '^'  */
  YYSYMBOL_87_ = 87,                       /* '|'  */
  YYSYMBOL_88_ = 88,                       /* '?'  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_ROOT = 90,                      /* ROOT  */
  YYSYMBOL_translation_unit = 91,          /* translation_unit  */
  YYSYMBOL_external_declaration = 92,      /* external_declaration  */
  YYSYMBOL_type_specifier = 93,            /* type_specifier  */
  YYSYMBOL_storage_class_specifier = 94,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 95,            /* type_qualifier  */
  YYSYMBOL_declaration_specifiers = 96,    /* declaration_specifiers  */
  YYSYMBOL_direct_declarator = 97,         /* direct_declarator  */
  YYSYMBOL_declarator = 98,                /* declarator  */
  YYSYMBOL_type_name = 99,                 /* type_name  */
  YYSYMBOL_declaration = 100,              /* declaration  */
  YYSYMBOL_init_declarator = 101,          /* init_declarator  */
  YYSYMBOL_initializer = 102,              /* initializer  */
  YYSYMBOL_function_definition = 103,      /* function_definition  */
  YYSYMBOL_parameter_declaration = 104,    /* parameter_declaration  */
  YYSYMBOL_enum_specifier = 105,           /* enum_specifier  */
  YYSYMBOL_enumerator = 106,               /* enumerator  */
  YYSYMBOL_pointer = 107,                  /* pointer  */
  YYSYMBOL_abstract_declarator = 108,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 109, /* direct_abstract_declarator  */
  YYSYMBOL_struct_or_union_specifier = 110, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 111,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 112,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 113,       /* struct_declaration  */
  YYSYMBOL_struct_declarator = 114,        /* struct_declarator  */
  YYSYMBOL_specifier_qualifier_list = 115, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 116,   /* struct_declarator_list  */
  YYSYMBOL_init_declarator_list = 117,     /* init_declarator_list  */
  YYSYMBOL_enumerator_list = 118,          /* enumerator_list  */
  YYSYMBOL_initializer_list = 119,         /* initializer_list  */
  YYSYMBOL_identifier_list = 120,          /* identifier_list  */
  YYSYMBOL_type_qualifier_list = 121,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 122,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 123,           /* parameter_list  */
  YYSYMBOL_argument_expression_list = 124, /* argument_expression_list  */
  YYSYMBOL_declaration_or_statement = 125, /* declaration_or_statement  */
  YYSYMBOL_declaration_or_statement_list = 126, /* declaration_or_statement_list  */
  YYSYMBOL_statement = 127,                /* statement  */
  YYSYMBOL_labeled_statement = 128,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 129,     /* expression_statement  */
  YYSYMBOL_selection_statement = 130,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 131,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 132,           /* jump_statement  */
  YYSYMBOL_compound_statement = 133,       /* compound_statement  */
  YYSYMBOL_primary_expression = 134,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 135,       /* postfix_expression  */
  YYSYMBOL_unary_expression = 136,         /* unary_expression  */
  YYSYMBOL_cast_expression = 137,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 138, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 139,      /* additive_expression  */
  YYSYMBOL_shift_expression = 140,         /* shift_expression  */
  YYSYMBOL_relational_expression = 141,    /* relational_expression  */
  YYSYMBOL_equality_expression = 142,      /* equality_expression  */
  YYSYMBOL_and_expression = 143,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 144,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 145,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 146,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 147,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 148,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 149,    /* assignment_expression  */
  YYSYMBOL_expression = 150,               /* expression  */
  YYSYMBOL_constant_expression = 151       /* constant_expression  */
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
#define YYLAST   1047

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  203
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
       2,     2,     2,    81,     2,     2,     2,    83,    77,     2,
      63,    64,    72,    78,    71,    79,    76,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    67,
      84,    68,    85,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    87,    70,    80,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    74,    75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    97,    98,   103,   104,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   124,   125,
     126,   127,   128,   132,   133,   137,   138,   139,   140,   146,
     147,   151,   152,   153,   162,   163,   167,   168,   173,   174,
     178,   179,   182,   183,   184,   190,   191,   197,   198,   199,
     204,   205,   206,   209,   210,   215,   216,   217,   218,   221,
     222,   223,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   240,   241,   242,   245,   246,   250,   251,   254,   257,
     258,   259,   264,   265,   266,   267,   270,   271,   274,   275,
     278,   279,   282,   283,   286,   287,   290,   291,   294,   295,
     298,   299,   302,   303,   307,   308,   311,   312,   316,   317,
     318,   319,   320,   321,   332,   333,   334,   338,   339,   343,
     344,   345,   349,   350,   351,   352,   356,   357,   358,   359,
     360,   364,   365,   383,   384,   385,   386,   387,   391,   392,
     394,   395,   396,   397,   398,   399,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   431,   432,   436,
     437,   438,   439,   443,   444,   445,   449,   450,   451,   455,
     456,   457,   458,   459,   463,   464,   465,   469,   470,   474,
     475,   479,   480,   484,   485,   489,   490,   494,   495,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   515,   516,   520
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
  "\"{\"", "\"}\"", "'.'", "'&'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "$accept", "ROOT", "translation_unit",
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
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     360,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,    19,    12,
      17,    11,   360,  -155,   985,   985,   179,   -22,   -23,  -155,
    -155,  -155,    29,  -155,    21,    -1,    97,    44,  -155,  -155,
    -155,  -155,    17,  -155,  -155,  -155,  -155,  -155,    28,  -155,
     127,   859,   300,  -155,   -22,    73,   999,    97,   113,  -155,
     -13,  -155,  -155,  -155,   220,  -155,  -155,    12,  -155,  -155,
      54,  -155,    -9,   135,   121,  -155,  -155,   129,  -155,   711,
     730,   730,   749,   172,   151,   153,   187,   504,   195,   255,
     201,   204,   537,   458,  -155,  -155,   749,   749,   749,   749,
     749,   749,   179,  -155,  -155,   379,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,   178,   294,  -155,   -29,   143,   228,
      16,   233,   199,   196,   203,   270,     5,  -155,  -155,   141,
     999,  -155,  -155,   442,  -155,   796,   182,   749,  -155,    97,
    -155,   220,  -155,  -155,   223,  -155,   815,   583,  -155,    60,
    -155,    42,  -155,   288,  -155,   965,   504,   458,  -155,   749,
    -155,  -155,  -155,  -155,   221,   504,   749,   749,   749,   240,
     616,   229,  -155,  -155,  -155,   144,   238,   873,    -8,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,   303,  -155,  -155,
     626,   749,   306,   749,   749,   749,   749,   749,   749,   749,
     749,   749,   749,   749,   749,   749,   749,   749,   749,   749,
     749,   749,   749,   749,   749,   749,   749,   749,   749,   749,
     749,   749,   749,  -155,   749,   911,  -155,  -155,   749,  -155,
    -155,   239,  -155,   146,  -155,  -155,  -155,  -155,   186,  -155,
     259,   260,  -155,   261,    42,   930,   647,  -155,  -155,  -155,
    -155,   262,   504,  -155,     7,   100,   105,   280,   616,  -155,
    -155,   749,   731,   128,  -155,  -155,  -155,  -155,   111,  -155,
     -38,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,   -29,   -29,   143,   143,
     228,   228,   228,   228,    16,    16,   233,   199,   196,   203,
     270,    -4,  -155,  -155,  -155,   749,  -155,     1,  -155,   200,
    -155,  -155,  -155,  -155,   285,  -155,   278,  -155,  -155,   504,
     504,   504,   749,   666,  -155,  -155,   749,  -155,   749,  -155,
    -155,  -155,  -155,  -155,  -155,   272,  -155,  -155,   119,   504,
     125,  -155,  -155,   504,   286,  -155,   504,  -155,  -155,  -155
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    29,    18,    19,    20,    21,    22,     8,     9,    10,
      11,    14,    15,    12,    13,     7,    74,    75,     0,     0,
      55,     0,     2,     3,    27,    25,     0,    35,     0,     6,
       5,    17,     0,    16,     0,    52,     0,     0,    23,    24,
      96,    57,    56,     1,     4,    28,    26,    38,    40,    88,
       0,     0,     0,    45,    34,    73,     0,     0,    53,    90,
       0,    30,    97,    58,     0,    46,    39,     0,    94,    33,
      49,   100,     0,     0,    98,   134,   135,   133,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   131,     0,     0,     0,     0,
       0,     0,     0,   104,   106,     0,   105,   108,   110,   111,
     112,   113,   109,   138,   146,   157,   159,   163,   166,   169,
     174,   177,   179,   181,   183,   185,   187,   189,   201,     0,
       0,    83,    85,     0,    76,     0,     0,     0,    50,     0,
     133,     0,    41,    42,    40,    89,     0,     0,    47,    59,
      48,    60,    32,     0,    31,     0,     0,     0,   155,     0,
     147,   148,   157,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   128,   129,     0,     0,    36,     0,   150,
     149,   151,   152,   153,   154,   132,   107,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,    72,    77,     0,    82,
      84,    79,    86,     0,    51,    54,    91,    92,     0,    67,
       0,     0,    63,     0,    61,     0,     0,    95,    99,   101,
     114,     0,     0,   116,     0,     0,     0,     0,     0,   126,
     130,     0,     0,    59,    37,   137,   143,   140,     0,   102,
       0,   142,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   190,   160,   161,   162,   164,   165,   167,   168,
     172,   173,   170,   171,   175,   176,   178,   180,   182,   184,
     186,     0,   202,    71,    80,     0,    78,     0,    43,     0,
      62,    68,    64,    69,     0,    65,     0,   156,   115,     0,
       0,     0,     0,     0,   158,   141,     0,   139,     0,    81,
      87,    44,    93,    70,    66,   119,   121,   122,     0,     0,
       0,   103,   188,     0,     0,   124,     0,   120,   123,   125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,   342,   -48,  -155,   -11,    25,   -27,   -19,
     209,   -10,   301,  -131,  -155,   216,  -155,   234,    24,   -57,
    -145,  -155,  -155,   244,  -119,    68,   -66,  -155,  -155,   319,
    -155,  -155,  -155,   -50,  -155,  -155,   282,  -155,   -84,  -155,
    -154,  -155,  -155,  -155,     4,  -155,  -155,   -61,    14,    58,
      64,    20,    69,   205,   185,   222,   184,   207,  -155,   -67,
     -62,     6,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    25,   132,    70,    27,    28,
     176,    29,    49,   142,    30,    71,    31,    59,    32,   240,
     151,    33,    34,   133,   134,   232,   135,   233,    50,    60,
     238,    72,    42,   241,    74,   268,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   164
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    73,   143,   169,   244,    54,     1,    48,   131,    40,
     237,    43,   235,   150,   227,   163,   258,     1,   158,   160,
     161,   162,   243,   221,    35,    26,    55,   177,   327,   211,
     212,    62,    53,   224,     1,   162,   162,   162,   162,   162,
     162,    51,   103,   204,    41,   131,    52,    26,   144,    45,
      46,   148,    65,   205,   206,   152,   265,   138,   139,     1,
      38,    39,   153,   224,    19,     1,    63,   224,    57,   328,
     163,   319,   250,    20,   228,    19,   162,   102,   224,   143,
     163,   253,   131,   144,    20,   131,   162,   229,    36,    20,
      56,   177,    19,   222,   149,   103,    64,    52,   175,   178,
     213,   214,    58,   304,   323,   245,   227,   246,    61,   131,
     179,   180,   181,   182,   183,   184,   231,   146,   244,   147,
     264,   316,    54,   146,   230,   147,    20,    37,   269,   229,
     102,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   130,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   163,   302,   178,   320,   178,   230,   162,   318,   321,
     149,   224,   254,   255,   256,   325,   224,   131,   332,   163,
     329,   137,   326,   344,     1,   162,   187,   188,   189,   346,
     224,   262,   155,   147,    66,   314,   224,   270,    67,   154,
     162,   263,   156,    75,    76,   140,    78,    79,   223,    80,
      81,   260,   224,   306,   166,   224,   167,   307,   283,   284,
     285,   207,   208,    75,    76,   140,    78,    79,   301,    80,
      81,   290,   291,   292,   293,   335,   336,   337,   163,   209,
     210,   190,    19,   191,   162,   165,    47,   143,   215,   216,
     168,    20,   234,   139,   192,   345,   308,   309,   170,   347,
     171,   342,   349,    93,   341,   286,   287,   162,   172,   141,
     331,   173,    96,   288,   289,   324,   217,    97,    98,    99,
     100,   101,   218,    93,   294,   295,   263,   220,   231,   141,
     219,    64,    96,   247,   252,   257,   259,    97,    98,    99,
     100,   101,   261,    75,    76,    77,    78,    79,   266,    80,
      81,   271,   305,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   310,   311,   343,   317,   312,   338,   340,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   322,   334,    15,    16,    17,    18,   333,
      82,    83,    84,   348,    85,    86,    87,    88,    89,    90,
      91,    92,   203,    93,    44,     1,   251,    94,   145,    52,
      95,   249,    96,   236,   225,   330,   136,    97,    98,    99,
     100,   101,    75,    76,    77,    78,    79,   186,    80,    81,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   297,   299,    15,    16,    17,    18,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   296,    19,    15,    16,    17,    18,   300,    82,
      83,    84,    20,    85,    86,    87,    88,    89,    90,    91,
      92,   298,    93,     0,     0,     0,    94,     0,    52,   185,
       0,    96,     0,     0,     0,     0,    97,    98,    99,   100,
     101,    75,    76,   140,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    38,    39,    15,    16,    17,
      18,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    38,    39,    15,    16,    17,    18,    75,    76,    77,
      78,    79,   226,    80,    81,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,     0,     0,     0,    97,    98,    99,   100,   101,
      75,    76,   140,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,    82,    83,    84,     0,    85,    86,
      87,    88,    89,    90,    91,    92,     0,    93,     0,     0,
       0,    94,     0,    52,     0,     0,    96,     0,     0,     0,
       0,    97,    98,    99,   100,   101,    75,    76,   140,    78,
      79,     0,    80,    81,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,   174,     0,     0,     0,     0,    96,
       0,     0,     0,     0,    97,    98,    99,   100,   101,    75,
      76,   140,    78,    79,     0,    80,    81,     0,     0,    75,
      76,   140,    78,    79,     0,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,   242,
      75,    76,   140,    78,    79,    96,    80,    81,     0,     0,
      97,    98,    99,   100,   101,     0,     0,     0,     0,    75,
      76,   140,    78,    79,     0,    80,    81,     0,     0,    93,
       0,     0,     0,    94,     0,     0,     0,     0,    96,    93,
     267,     0,     0,    97,    98,    99,   100,   101,    96,     0,
       0,     0,     0,    97,    98,    99,   100,   101,     0,     0,
      93,     0,     0,   315,    75,    76,   140,    78,    79,    96,
      80,    81,     0,     0,    97,    98,    99,   100,   101,    93,
     339,     0,     0,    75,    76,   140,    78,    79,    96,    80,
      81,     0,     0,    97,    98,    99,   100,   101,     0,     0,
       0,     0,    75,    76,   140,    78,    79,     0,    80,    81,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   157,     0,    15,    16,    17,    18,
       0,     0,     0,    96,     0,     0,     0,     0,    97,    98,
      99,   100,   101,   159,   262,   239,   147,     0,     0,     0,
       0,     1,    96,    20,     0,     0,     0,    97,    98,    99,
     100,   101,    93,     0,     0,     0,     0,     0,     0,     0,
       1,    96,     0,     0,     0,     0,    97,    98,    99,   100,
     101,     7,     8,     9,    10,    11,    12,    13,    14,    38,
      39,    15,    16,    17,    18,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    19,
      15,    16,    17,    18,    68,     0,     0,     0,    20,   228,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   239,
     147,     0,     0,     0,     0,     0,     0,    20,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    15,    16,    17,    18,     7,     8,
       9,    10,    11,    12,    13,    14,    38,    39,    15,    16,
      17,    18,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   262,     0,   147,     0,
       0,     0,     0,     0,     0,    20,     7,     8,     9,    10,
      11,    12,    13,    14,    38,    39,    15,    16,    17,    18,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,     0,    15,    16,    17,    18,     0,
       0,   303,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      15,    16,    17,    18,   248,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
      15,    16,    17,    18,     7,     8,     9,    10,    11,    12,
      13,    14,    38,    39,    15,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
      19,    51,    64,    87,   149,    32,     5,    26,    56,    20,
     141,     0,   137,    70,   133,    82,   170,     5,    79,    80,
      81,    82,   147,    18,     5,     0,     5,    93,    66,    13,
      14,    42,    28,    71,     5,    96,    97,    98,    99,   100,
     101,    63,    52,    72,    20,    93,    69,    22,    67,    24,
      25,    70,    48,    82,    83,    64,    64,    70,    71,     5,
      43,    44,    71,    71,    63,     5,    42,    71,    69,    73,
     137,    64,   156,    72,    73,    63,   137,    52,    71,   141,
     147,   165,   130,   102,    72,   133,   147,   135,    69,    72,
      69,   157,    63,    88,    70,   105,    68,    69,    92,    93,
      84,    85,     5,   228,   258,    63,   225,    65,    64,   157,
      96,    97,    98,    99,   100,   101,   135,    63,   263,    65,
     177,   246,   149,    63,   135,    65,    72,   146,   190,   177,
     105,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,    69,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   228,   224,   157,    64,   159,   177,   228,   252,    64,
     146,    71,   166,   167,   168,    64,    71,   225,   309,   246,
     305,    68,    71,    64,     5,   246,     8,     9,    10,    64,
      71,    63,    71,    65,    67,   245,    71,   191,    71,    64,
     261,   177,    73,     3,     4,     5,     6,     7,    67,     9,
      10,    67,    71,    67,    63,    71,    63,    71,   204,   205,
     206,    78,    79,     3,     4,     5,     6,     7,   222,     9,
      10,   211,   212,   213,   214,   319,   320,   321,   305,    11,
      12,    63,    63,    65,   305,    73,    67,   309,    15,    16,
      63,    72,    70,    71,    76,   339,    70,    71,    63,   343,
       5,   328,   346,    63,   326,   207,   208,   328,    67,    69,
      70,    67,    72,   209,   210,   261,    77,    77,    78,    79,
      80,    81,    86,    63,   215,   216,   262,    17,   307,    69,
      87,    68,    72,     5,    73,    55,    67,    77,    78,    79,
      80,    81,    64,     3,     4,     5,     6,     7,     5,     9,
      10,     5,    73,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    64,    64,    53,    64,    66,   322,   323,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    63,    66,    45,    46,    47,    48,    64,
      50,    51,    52,    67,    54,    55,    56,    57,    58,    59,
      60,    61,    68,    63,    22,     5,   157,    67,    67,    69,
      70,   155,    72,   139,   130,   307,    57,    77,    78,    79,
      80,    81,     3,     4,     5,     6,     7,   105,     9,    10,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   218,   220,    45,    46,    47,    48,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   217,    63,    45,    46,    47,    48,   221,    50,
      51,    52,    72,    54,    55,    56,    57,    58,    59,    60,
      61,   219,    63,    -1,    -1,    -1,    67,    -1,    69,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     3,     4,     5,
       6,     7,    70,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    63,    -1,    -1,
      -1,    67,    -1,    69,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,
       3,     4,     5,     6,     7,    72,     9,    10,    -1,    -1,
      77,    78,    79,    80,    81,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    63,
      64,    -1,    -1,    77,    78,    79,    80,    81,    72,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    -1,    -1,
      63,    -1,    -1,    66,     3,     4,     5,     6,     7,    72,
       9,    10,    -1,    -1,    77,    78,    79,    80,    81,    63,
      64,    -1,    -1,     3,     4,     5,     6,     7,    72,     9,
      10,    -1,    -1,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    63,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    63,    63,    64,    65,    -1,    -1,    -1,
      -1,     5,    72,    72,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    72,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    63,
      45,    46,    47,    48,     5,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    46,    47,    48,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    45,    46,    47,    48,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    45,    46,    47,    48,    63,
      72,    90,    91,    92,    93,    94,    96,    97,    98,   100,
     103,   105,   107,   110,   111,     5,    69,    98,    43,    44,
      95,   107,   121,     0,    92,    96,    96,    67,    98,   101,
     117,    63,    69,   133,    97,     5,    69,    69,     5,   106,
     118,    64,    95,   107,    68,   133,    67,    71,     5,    64,
      96,   104,   120,   122,   123,     3,     4,     5,     6,     7,
       9,    10,    50,    51,    52,    54,    55,    56,    57,    58,
      59,    60,    61,    63,    67,    70,    72,    77,    78,    79,
      80,    81,    96,   100,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      69,    93,    95,   112,   113,   115,   118,    68,    70,    71,
       5,    69,   102,   149,    98,   101,    63,    65,    98,   107,
     108,   109,    64,    71,    64,    71,    73,    63,   136,    63,
     136,   136,   136,   148,   151,    73,    63,    63,    63,   127,
      63,     5,    67,    67,    67,   150,    99,   115,   150,   137,
     137,   137,   137,   137,   137,    70,   125,     8,     9,    10,
      63,    65,    76,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    68,    72,    82,    83,    78,    79,    11,
      12,    13,    14,    84,    85,    15,    16,    77,    86,    87,
      17,    18,    88,    67,    71,   112,    70,   113,    73,    93,
      95,    98,   114,   116,    70,   151,   106,   102,   119,    64,
     108,   122,    66,   151,   109,    63,    65,     5,    49,   104,
     127,    99,    73,   127,   150,   150,   150,    55,   129,    67,
      67,    64,    63,   107,   108,    64,     5,    64,   124,   149,
     150,     5,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   137,   137,   137,   138,   138,   139,   139,
     140,   140,   140,   140,   141,   141,   142,   143,   144,   145,
     146,   150,   149,    70,   151,    73,    67,    71,    70,    71,
      64,    64,    66,    64,   122,    66,   151,    64,   127,    64,
      64,    64,    63,   129,   137,    64,    71,    66,    73,   151,
     114,    70,   102,    64,    66,   127,   127,   127,   150,    64,
     150,   149,   148,    53,    64,   127,    64,   127,    67,   127
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   103,   103,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   111,   111,   112,   112,   113,   114,
     114,   114,   115,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   127,   127,   127,   128,   128,   128,   129,   129,   130,
     130,   130,   131,   131,   131,   131,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   137,   137,   138,
     138,   138,   138,   139,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   151
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       3,     4,     4,     3,     2,     1,     1,     2,     2,     3,
       1,     3,     1,     3,     4,     2,     3,     2,     2,     1,
       4,     5,     2,     1,     3,     1,     2,     2,     3,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     5,     4,     2,     1,     1,     1,     2,     3,     1,
       2,     3,     2,     1,     2,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     3,     2,     2,     2,
       3,     2,     3,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1
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
#line 89 "src/parser.y"
                          {g_root = new translationUnit((yyvsp[0].list));}
#line 1613 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 97 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1619 "src/parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 98 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-1].list),(yyvsp[0].tree));}
#line 1625 "src/parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 103 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1631 "src/parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 104 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1637 "src/parser.tab.cpp"
    break;

  case 7: /* type_specifier: VOID  */
#line 109 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_void);}
#line 1643 "src/parser.tab.cpp"
    break;

  case 9: /* type_specifier: SHORT  */
#line 111 "src/parser.y"
                                                                {std::cerr<<"short not assessed";exit(1);}
#line 1649 "src/parser.tab.cpp"
    break;

  case 10: /* type_specifier: INT  */
#line 112 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_int);}
#line 1655 "src/parser.tab.cpp"
    break;

  case 11: /* type_specifier: LONG  */
#line 113 "src/parser.y"
                                                                {std::cerr<<"long not spported";exit(1);}
#line 1661 "src/parser.tab.cpp"
    break;

  case 16: /* type_specifier: struct_or_union_specifier  */
#line 118 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1667 "src/parser.tab.cpp"
    break;

  case 17: /* type_specifier: enum_specifier  */
#line 119 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1673 "src/parser.tab.cpp"
    break;

  case 19: /* storage_class_specifier: EXTERN  */
#line 125 "src/parser.y"
                                {std::cerr<<"Extern not assessed"; exit(1);}
#line 1679 "src/parser.tab.cpp"
    break;

  case 20: /* storage_class_specifier: STATIC  */
#line 126 "src/parser.y"
                                {std::cerr<<"static not assessed"; exit(1);}
#line 1685 "src/parser.tab.cpp"
    break;

  case 21: /* storage_class_specifier: AUTO  */
#line 127 "src/parser.y"
                                {std::cerr<<"auto not assessed"; exit(1);}
#line 1691 "src/parser.tab.cpp"
    break;

  case 22: /* storage_class_specifier: REGISTER  */
#line 128 "src/parser.y"
                                {std::cerr<<"register not assessed"; exit(1);}
#line 1697 "src/parser.tab.cpp"
    break;

  case 23: /* type_qualifier: CONST  */
#line 132 "src/parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1703 "src/parser.tab.cpp"
    break;

  case 24: /* type_qualifier: VOLATILE  */
#line 133 "src/parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1709 "src/parser.tab.cpp"
    break;

  case 27: /* declaration_specifiers: type_specifier  */
#line 139 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1715 "src/parser.tab.cpp"
    break;

  case 28: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 140 "src/parser.y"
                                                                        {std::cerr<<"long short... concat data types not assessed"<<std::endl; exit(1);}
#line 1721 "src/parser.tab.cpp"
    break;

  case 29: /* direct_declarator: IDENTIFIER  */
#line 146 "src/parser.y"
                                                                                                {(yyval.tree) = new variableDeclarator(*(yyvsp[0].string));}
#line 1727 "src/parser.tab.cpp"
    break;

  case 30: /* direct_declarator: '(' declarator ')'  */
#line 147 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 1733 "src/parser.tab.cpp"
    break;

  case 31: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 151 "src/parser.y"
                                                                {(yyval.tree) = new functionDeclarator((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 1739 "src/parser.tab.cpp"
    break;

  case 33: /* direct_declarator: direct_declarator '(' ')'  */
#line 153 "src/parser.y"
                                                                                        {(yyval.tree) = new functionDeclarator((yyvsp[-2].tree), NULL);}
#line 1745 "src/parser.tab.cpp"
    break;

  case 34: /* declarator: pointer direct_declarator  */
#line 162 "src/parser.y"
                                                {(yyval.tree) = new pointerDeclarator((yyvsp[0].tree));}
#line 1751 "src/parser.tab.cpp"
    break;

  case 35: /* declarator: direct_declarator  */
#line 163 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1757 "src/parser.tab.cpp"
    break;

  case 38: /* declaration: declaration_specifiers ';'  */
#line 173 "src/parser.y"
                                                                                {(yyval.tree) = new declaration((yyvsp[-1].tree), NULL);}
#line 1763 "src/parser.tab.cpp"
    break;

  case 39: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 174 "src/parser.y"
                                                                {(yyval.tree) = new declaration((yyvsp[-2].tree), (yyvsp[-1].list));}
#line 1769 "src/parser.tab.cpp"
    break;

  case 40: /* init_declarator: declarator  */
#line 178 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1775 "src/parser.tab.cpp"
    break;

  case 41: /* init_declarator: declarator '=' initializer  */
#line 179 "src/parser.y"
                                        {(yyval.tree) = new initDeclarator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1781 "src/parser.tab.cpp"
    break;

  case 42: /* initializer: assignment_expression  */
#line 182 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1787 "src/parser.tab.cpp"
    break;

  case 45: /* function_definition: declarator compound_statement  */
#line 190 "src/parser.y"
                                                                                                                                {std::cerr<<"function witout type"<<std::endl;}
#line 1793 "src/parser.tab.cpp"
    break;

  case 46: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 191 "src/parser.y"
                                                                                                        {(yyval.tree) = new functionDefinition((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 1799 "src/parser.tab.cpp"
    break;

  case 47: /* parameter_declaration: declaration_specifiers declarator  */
#line 197 "src/parser.y"
                                                                        {(yyval.tree) = new declaration((yyvsp[-1].tree), initList((yyvsp[0].tree))); }
#line 1805 "src/parser.tab.cpp"
    break;

  case 48: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 198 "src/parser.y"
                                                         {std::cerr<<"Error: abstract declarators, unsupported"; exit(1);}
#line 1811 "src/parser.tab.cpp"
    break;

  case 49: /* parameter_declaration: declaration_specifiers  */
#line 199 "src/parser.y"
                                                                                {std::cerr<<"Error: abstract declarators, unsupported"; exit(1);}
#line 1817 "src/parser.tab.cpp"
    break;

  case 50: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 204 "src/parser.y"
                                                                {(yyval.tree) = new enumSpecifier((yyvsp[-1].list));}
#line 1823 "src/parser.tab.cpp"
    break;

  case 51: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 205 "src/parser.y"
                                                        {(yyval.tree) = new enumSpecifier(*(yyvsp[-3].string), (yyvsp[-1].list));}
#line 1829 "src/parser.tab.cpp"
    break;

  case 52: /* enum_specifier: ENUM IDENTIFIER  */
#line 206 "src/parser.y"
                                                                                {(yyval.tree) = new enumSpecifier(*(yyvsp[0].string), NULL);}
#line 1835 "src/parser.tab.cpp"
    break;

  case 53: /* enumerator: IDENTIFIER  */
#line 209 "src/parser.y"
                                                                        {(yyval.tree) = new Enumerator(*(yyvsp[0].string), NULL);}
#line 1841 "src/parser.tab.cpp"
    break;

  case 54: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 210 "src/parser.y"
                                                {(yyval.tree) = new Enumerator(*(yyvsp[-2].string), (yyvsp[0].tree));}
#line 1847 "src/parser.tab.cpp"
    break;

  case 75: /* struct_or_union: UNION  */
#line 246 "src/parser.y"
                        {std::cerr<<"union not assessed"; exit(1);}
#line 1853 "src/parser.tab.cpp"
    break;

  case 82: /* specifier_qualifier_list: specifier_qualifier_list type_specifier  */
#line 264 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1859 "src/parser.tab.cpp"
    break;

  case 83: /* specifier_qualifier_list: type_specifier  */
#line 265 "src/parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1865 "src/parser.tab.cpp"
    break;

  case 86: /* struct_declarator_list: struct_declarator  */
#line 270 "src/parser.y"
                                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1871 "src/parser.tab.cpp"
    break;

  case 87: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 271 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1877 "src/parser.tab.cpp"
    break;

  case 88: /* init_declarator_list: init_declarator  */
#line 274 "src/parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1883 "src/parser.tab.cpp"
    break;

  case 89: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 275 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1889 "src/parser.tab.cpp"
    break;

  case 90: /* enumerator_list: enumerator  */
#line 278 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1895 "src/parser.tab.cpp"
    break;

  case 91: /* enumerator_list: enumerator_list ',' enumerator  */
#line 279 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1901 "src/parser.tab.cpp"
    break;

  case 92: /* initializer_list: initializer  */
#line 282 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1907 "src/parser.tab.cpp"
    break;

  case 93: /* initializer_list: initializer_list ',' initializer  */
#line 283 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1913 "src/parser.tab.cpp"
    break;

  case 94: /* identifier_list: IDENTIFIER  */
#line 286 "src/parser.y"
                                                                {(yyval.list) = initList(new identifier(*(yyvsp[0].string)));}
#line 1919 "src/parser.tab.cpp"
    break;

  case 95: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 287 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), new identifier(*(yyvsp[0].string)));}
#line 1925 "src/parser.tab.cpp"
    break;

  case 98: /* parameter_type_list: parameter_list  */
#line 294 "src/parser.y"
                                                        {(yyval.list) = (yyvsp[0].list);}
#line 1931 "src/parser.tab.cpp"
    break;

  case 99: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 295 "src/parser.y"
                                        {std::cerr<<"ellipsed parameters not assessed"<<std::endl; exit(1);}
#line 1937 "src/parser.tab.cpp"
    break;

  case 100: /* parameter_list: parameter_declaration  */
#line 298 "src/parser.y"
                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1943 "src/parser.tab.cpp"
    break;

  case 101: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 299 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1949 "src/parser.tab.cpp"
    break;

  case 102: /* argument_expression_list: assignment_expression  */
#line 302 "src/parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1955 "src/parser.tab.cpp"
    break;

  case 103: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 303 "src/parser.y"
                                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1961 "src/parser.tab.cpp"
    break;

  case 104: /* declaration_or_statement: declaration  */
#line 307 "src/parser.y"
                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1967 "src/parser.tab.cpp"
    break;

  case 105: /* declaration_or_statement: statement  */
#line 308 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1973 "src/parser.tab.cpp"
    break;

  case 106: /* declaration_or_statement_list: declaration_or_statement  */
#line 311 "src/parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1979 "src/parser.tab.cpp"
    break;

  case 107: /* declaration_or_statement_list: declaration_or_statement_list declaration_or_statement  */
#line 312 "src/parser.y"
                                                                 {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1985 "src/parser.tab.cpp"
    break;

  case 108: /* statement: labeled_statement  */
#line 316 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1991 "src/parser.tab.cpp"
    break;

  case 109: /* statement: compound_statement  */
#line 317 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1997 "src/parser.tab.cpp"
    break;

  case 110: /* statement: expression_statement  */
#line 318 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2003 "src/parser.tab.cpp"
    break;

  case 111: /* statement: selection_statement  */
#line 319 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2009 "src/parser.tab.cpp"
    break;

  case 112: /* statement: iteration_statement  */
#line 320 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2015 "src/parser.tab.cpp"
    break;

  case 113: /* statement: jump_statement  */
#line 321 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2021 "src/parser.tab.cpp"
    break;

  case 115: /* labeled_statement: CASE constant_expression ':' statement  */
#line 333 "src/parser.y"
                                                  {(yyval.tree) = new caseStatement((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2027 "src/parser.tab.cpp"
    break;

  case 117: /* expression_statement: ';'  */
#line 338 "src/parser.y"
                                        {(yyval.tree) = NULL;}
#line 2033 "src/parser.tab.cpp"
    break;

  case 118: /* expression_statement: expression ';'  */
#line 339 "src/parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2039 "src/parser.tab.cpp"
    break;

  case 119: /* selection_statement: IF '(' expression ')' statement  */
#line 343 "src/parser.y"
                                                                                {(yyval.tree) = new ifElseStatement((yyvsp[-2].tree),(yyvsp[0].tree),NULL);}
#line 2045 "src/parser.tab.cpp"
    break;

  case 120: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 344 "src/parser.y"
                                                                {(yyval.tree) = new ifElseStatement((yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2051 "src/parser.tab.cpp"
    break;

  case 121: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 345 "src/parser.y"
                                                                        {(yyval.tree) = new switchStatement((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2057 "src/parser.tab.cpp"
    break;

  case 122: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 349 "src/parser.y"
                                                                        {(yyval.tree) = new whileStatement((yyvsp[-2].tree),NULL,NULL,(yyvsp[0].tree));}
#line 2063 "src/parser.tab.cpp"
    break;

  case 125: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 352 "src/parser.y"
                                                                                     {(yyval.tree) = new forStatement{(yyvsp[-4].tree), (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree)};}
#line 2069 "src/parser.tab.cpp"
    break;

  case 126: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 356 "src/parser.y"
                                {std::cerr<<"goto not assessed"; exit(1);}
#line 2075 "src/parser.tab.cpp"
    break;

  case 127: /* jump_statement: CONTINUE ';'  */
#line 357 "src/parser.y"
                                        {(yyval.tree) = new continueStatement();}
#line 2081 "src/parser.tab.cpp"
    break;

  case 128: /* jump_statement: BREAK ';'  */
#line 358 "src/parser.y"
                                                {(yyval.tree) = new breakStatement();}
#line 2087 "src/parser.tab.cpp"
    break;

  case 129: /* jump_statement: RETURN ';'  */
#line 359 "src/parser.y"
                                        {(yyval.tree) = new returnStatement(NULL);}
#line 2093 "src/parser.tab.cpp"
    break;

  case 130: /* jump_statement: RETURN expression ';'  */
#line 360 "src/parser.y"
                                {(yyval.tree) = new returnStatement((yyvsp[-1].tree));}
#line 2099 "src/parser.tab.cpp"
    break;

  case 131: /* compound_statement: '{' '}'  */
#line 364 "src/parser.y"
                                                                                        {(yyval.tree) = new compoundStatement(NULL);}
#line 2105 "src/parser.tab.cpp"
    break;

  case 132: /* compound_statement: '{' declaration_or_statement_list '}'  */
#line 365 "src/parser.y"
                                                    {{(yyval.tree) = new compoundStatement((yyvsp[-1].list));}}
#line 2111 "src/parser.tab.cpp"
    break;

  case 133: /* primary_expression: IDENTIFIER  */
#line 383 "src/parser.y"
                                        {(yyval.tree) = new identifier(*(yyvsp[0].string));}
#line 2117 "src/parser.tab.cpp"
    break;

  case 134: /* primary_expression: CONSTANT_INT  */
#line 384 "src/parser.y"
                                        {(yyval.tree) = new intConstant((yyvsp[0].ival));}
#line 2123 "src/parser.tab.cpp"
    break;

  case 137: /* primary_expression: '(' expression ')'  */
#line 387 "src/parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2129 "src/parser.tab.cpp"
    break;

  case 138: /* postfix_expression: primary_expression  */
#line 391 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2135 "src/parser.tab.cpp"
    break;

  case 139: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 392 "src/parser.y"
                                                                                {(yyval.tree) = new arrayIndex((yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 2141 "src/parser.tab.cpp"
    break;

  case 140: /* postfix_expression: postfix_expression '(' ')'  */
#line 394 "src/parser.y"
                                                                                        {(yyval.tree) = new functionCall((yyvsp[-2].tree), NULL);}
#line 2147 "src/parser.tab.cpp"
    break;

  case 141: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 395 "src/parser.y"
                                                                {(yyval.tree) = new functionCall((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 2153 "src/parser.tab.cpp"
    break;

  case 144: /* postfix_expression: postfix_expression INC_OP  */
#line 398 "src/parser.y"
                                                                                                {(yyval.tree) = new postIncrement((yyvsp[-1].tree));}
#line 2159 "src/parser.tab.cpp"
    break;

  case 145: /* postfix_expression: postfix_expression DEC_OP  */
#line 399 "src/parser.y"
                                                                                                {(yyval.tree) = new postDecrement((yyvsp[-1].tree));}
#line 2165 "src/parser.tab.cpp"
    break;

  case 146: /* unary_expression: postfix_expression  */
#line 408 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2171 "src/parser.tab.cpp"
    break;

  case 147: /* unary_expression: INC_OP unary_expression  */
#line 409 "src/parser.y"
                                                        {(yyval.tree) = new preIncrement((yyvsp[0].tree));}
#line 2177 "src/parser.tab.cpp"
    break;

  case 148: /* unary_expression: DEC_OP unary_expression  */
#line 410 "src/parser.y"
                                                        {(yyval.tree) = new preIncrement((yyvsp[0].tree));}
#line 2183 "src/parser.tab.cpp"
    break;

  case 149: /* unary_expression: '&' cast_expression  */
#line 411 "src/parser.y"
                                                        {(yyval.tree) = new addressOperator((yyvsp[0].tree));}
#line 2189 "src/parser.tab.cpp"
    break;

  case 150: /* unary_expression: '*' cast_expression  */
#line 412 "src/parser.y"
                                                        {(yyval.tree) = new dereferenceOperator((yyvsp[0].tree));}
#line 2195 "src/parser.tab.cpp"
    break;

  case 151: /* unary_expression: '+' cast_expression  */
#line 413 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2201 "src/parser.tab.cpp"
    break;

  case 152: /* unary_expression: '-' cast_expression  */
#line 414 "src/parser.y"
                                                        {(yyval.tree) = new negOperator((yyvsp[0].tree));}
#line 2207 "src/parser.tab.cpp"
    break;

  case 153: /* unary_expression: '~' cast_expression  */
#line 415 "src/parser.y"
                                                        {(yyval.tree) = new bwNotOperator((yyvsp[0].tree));}
#line 2213 "src/parser.tab.cpp"
    break;

  case 154: /* unary_expression: '!' cast_expression  */
#line 416 "src/parser.y"
                                            {(yyval.tree) = new notOperator((yyvsp[0].tree));}
#line 2219 "src/parser.tab.cpp"
    break;

  case 155: /* unary_expression: SIZEOF unary_expression  */
#line 417 "src/parser.y"
                                                        {(yyval.tree) = new sizeOfOperator((yyvsp[0].tree));}
#line 2225 "src/parser.tab.cpp"
    break;

  case 157: /* cast_expression: unary_expression  */
#line 431 "src/parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2231 "src/parser.tab.cpp"
    break;

  case 158: /* cast_expression: '(' type_name ')' cast_expression  */
#line 432 "src/parser.y"
                                            {std::cerr<<"Error: casting not supported"; exit(1);}
#line 2237 "src/parser.tab.cpp"
    break;

  case 159: /* multiplicative_expression: cast_expression  */
#line 436 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2243 "src/parser.tab.cpp"
    break;

  case 160: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 437 "src/parser.y"
                                                        {(yyval.tree) = new mulOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2249 "src/parser.tab.cpp"
    break;

  case 161: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 438 "src/parser.y"
                                                        {(yyval.tree) = new divOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2255 "src/parser.tab.cpp"
    break;

  case 162: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 439 "src/parser.y"
                                                        {(yyval.tree) = new modOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2261 "src/parser.tab.cpp"
    break;

  case 163: /* additive_expression: multiplicative_expression  */
#line 443 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2267 "src/parser.tab.cpp"
    break;

  case 164: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 444 "src/parser.y"
                                                                {(yyval.tree) = new addOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2273 "src/parser.tab.cpp"
    break;

  case 165: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 445 "src/parser.y"
                                                                {(yyval.tree) = new subOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2279 "src/parser.tab.cpp"
    break;

  case 166: /* shift_expression: additive_expression  */
#line 449 "src/parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2285 "src/parser.tab.cpp"
    break;

  case 167: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 450 "src/parser.y"
                                                        {(yyval.tree) = new leftShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2291 "src/parser.tab.cpp"
    break;

  case 168: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 451 "src/parser.y"
                                                        {(yyval.tree) = new rightShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2297 "src/parser.tab.cpp"
    break;

  case 169: /* relational_expression: shift_expression  */
#line 455 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2303 "src/parser.tab.cpp"
    break;

  case 170: /* relational_expression: relational_expression '<' shift_expression  */
#line 456 "src/parser.y"
                                                                {(yyval.tree) = new ltOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2309 "src/parser.tab.cpp"
    break;

  case 171: /* relational_expression: relational_expression '>' shift_expression  */
#line 457 "src/parser.y"
                                                                {(yyval.tree) = new gtOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2315 "src/parser.tab.cpp"
    break;

  case 172: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 458 "src/parser.y"
                                                                {(yyval.tree) = new leOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2321 "src/parser.tab.cpp"
    break;

  case 173: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 459 "src/parser.y"
                                                                {(yyval.tree) = new geOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2327 "src/parser.tab.cpp"
    break;

  case 174: /* equality_expression: relational_expression  */
#line 463 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2333 "src/parser.tab.cpp"
    break;

  case 175: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 464 "src/parser.y"
                                                                {(yyval.tree) = new equalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2339 "src/parser.tab.cpp"
    break;

  case 176: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 465 "src/parser.y"
                                                                {(yyval.tree) = new inequalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2345 "src/parser.tab.cpp"
    break;

  case 177: /* and_expression: equality_expression  */
#line 469 "src/parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2351 "src/parser.tab.cpp"
    break;

  case 178: /* and_expression: and_expression '&' equality_expression  */
#line 470 "src/parser.y"
                                                        {(yyval.tree) = new andOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2357 "src/parser.tab.cpp"
    break;

  case 179: /* exclusive_or_expression: and_expression  */
#line 474 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2363 "src/parser.tab.cpp"
    break;

  case 180: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 475 "src/parser.y"
                                                        {(yyval.tree) = new exclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2369 "src/parser.tab.cpp"
    break;

  case 181: /* inclusive_or_expression: exclusive_or_expression  */
#line 479 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2375 "src/parser.tab.cpp"
    break;

  case 182: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 480 "src/parser.y"
                                                                {(yyval.tree) = new inclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2381 "src/parser.tab.cpp"
    break;

  case 183: /* logical_and_expression: inclusive_or_expression  */
#line 484 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2387 "src/parser.tab.cpp"
    break;

  case 184: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 485 "src/parser.y"
                                                                {(yyval.tree) = new logicalAndOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2393 "src/parser.tab.cpp"
    break;

  case 185: /* logical_or_expression: logical_and_expression  */
#line 489 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2399 "src/parser.tab.cpp"
    break;

  case 186: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 490 "src/parser.y"
                                                                {(yyval.tree) = new logicalOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2405 "src/parser.tab.cpp"
    break;

  case 187: /* conditional_expression: logical_or_expression  */
#line 494 "src/parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2411 "src/parser.tab.cpp"
    break;

  case 189: /* assignment_expression: conditional_expression  */
#line 499 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2417 "src/parser.tab.cpp"
    break;

  case 190: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 500 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2423 "src/parser.tab.cpp"
    break;

  case 191: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 501 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new mulOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2429 "src/parser.tab.cpp"
    break;

  case 192: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 502 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new divOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2435 "src/parser.tab.cpp"
    break;

  case 193: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 503 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new modOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2441 "src/parser.tab.cpp"
    break;

  case 194: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 504 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new addOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2447 "src/parser.tab.cpp"
    break;

  case 195: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 505 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new subOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2453 "src/parser.tab.cpp"
    break;

  case 196: /* assignment_expression: unary_expression LEFT_ASSIGN assignment_expression  */
#line 506 "src/parser.y"
                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new leftShiftOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2459 "src/parser.tab.cpp"
    break;

  case 197: /* assignment_expression: unary_expression RIGHT_ASSIGN assignment_expression  */
#line 507 "src/parser.y"
                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new rightShiftOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2465 "src/parser.tab.cpp"
    break;

  case 198: /* assignment_expression: unary_expression AND_ASSIGN assignment_expression  */
#line 508 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new andOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2471 "src/parser.tab.cpp"
    break;

  case 199: /* assignment_expression: unary_expression XOR_ASSIGN assignment_expression  */
#line 509 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new exclusiveOrOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2477 "src/parser.tab.cpp"
    break;

  case 200: /* assignment_expression: unary_expression OR_ASSIGN assignment_expression  */
#line 510 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new inclusiveOrOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2483 "src/parser.tab.cpp"
    break;

  case 201: /* expression: assignment_expression  */
#line 515 "src/parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2489 "src/parser.tab.cpp"
    break;

  case 202: /* expression: expression ',' assignment_expression  */
#line 516 "src/parser.y"
                                                {std::cerr<<"not assessed"; exit(1);}
#line 2495 "src/parser.tab.cpp"
    break;

  case 203: /* constant_expression: conditional_expression  */
#line 520 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2501 "src/parser.tab.cpp"
    break;


#line 2505 "src/parser.tab.cpp"

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

#line 526 "src/parser.y"

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
