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
#define YYLAST   1068

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  354

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
       0,    88,    88,    96,    97,   102,   103,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   123,   124,
     125,   126,   127,   131,   132,   136,   137,   138,   139,   145,
     146,   147,   148,   149,   150,   151,   155,   156,   160,   161,
     166,   167,   171,   172,   175,   176,   177,   183,   184,   190,
     191,   192,   197,   198,   199,   202,   203,   208,   209,   210,
     211,   214,   215,   216,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   233,   234,   235,   238,   239,   243,   244,
     247,   250,   251,   252,   257,   258,   259,   260,   263,   264,
     267,   268,   271,   272,   275,   276,   279,   280,   283,   284,
     287,   288,   291,   292,   295,   296,   300,   301,   304,   305,
     309,   310,   311,   312,   313,   314,   325,   326,   327,   331,
     332,   336,   337,   338,   342,   343,   344,   345,   349,   350,
     351,   352,   353,   357,   358,   376,   377,   378,   379,   380,
     384,   385,   386,   387,   388,   389,   390,   391,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   420,
     421,   425,   426,   427,   428,   432,   433,   434,   438,   439,
     440,   444,   445,   446,   447,   448,   452,   453,   454,   458,
     459,   463,   464,   468,   469,   473,   474,   478,   479,   483,
     484,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   504,   505,   509
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

#define YYPACT_NINF (-190)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     338,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,    18,   196,
      -8,    26,   338,  -190,  1006,  1006,   110,     4,     8,  -190,
    -190,  -190,    19,  -190,    20,    11,    54,    35,  -190,  -190,
    -190,  -190,    -8,  -190,  -190,  -190,  -190,  -190,     6,  -190,
     -17,   853,   446,   278,  -190,     4,    36,  1020,    54,   112,
    -190,   147,  -190,  -190,  -190,   561,  -190,  -190,   196,  -190,
    -190,   201,  -190,    -3,   121,    56,  -190,  -190,  -190,  -190,
     721,   731,   731,   436,  -190,   741,   741,   741,   741,   741,
     741,  -190,   111,  -190,  -190,   -27,   141,   213,    33,   211,
     116,   122,   152,   217,    10,  -190,   162,   164,   741,   176,
     187,   191,   202,   482,   204,   266,   205,   207,   580,  -190,
    -190,   110,  -190,  -190,   357,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,   438,  -190,  -190,    14,  1020,  -190,  -190,   925,
    -190,   790,   171,   741,  -190,    54,   561,  -190,  -190,   208,
    -190,   809,   590,  -190,    60,  -190,   140,  -190,   272,  -190,
     986,   436,  -190,   741,  -190,  -190,   215,   887,    -1,  -190,
    -190,  -190,  -190,  -190,  -190,   275,  -190,  -190,   600,   741,
     281,   741,   741,   741,   741,   741,   741,   741,   741,   741,
     741,   741,   741,   741,   741,   741,   741,   741,   741,   741,
    -190,   482,   218,   482,   741,   741,   741,   235,   622,   227,
    -190,  -190,  -190,    57,  -190,  -190,   741,   741,   741,   741,
     741,   741,   741,   741,   741,   741,   741,  -190,   741,   939,
    -190,  -190,   741,  -190,  -190,   220,  -190,    59,  -190,  -190,
    -190,  -190,   174,  -190,   233,   236,  -190,   261,   140,   966,
     701,  -190,  -190,  -190,   237,   741,   873,   150,  -190,  -190,
    -190,  -190,     7,  -190,   -18,  -190,  -190,  -190,  -190,   -27,
     -27,   141,   141,   213,   213,   213,   213,    33,    33,   211,
     116,   122,   152,   217,   143,  -190,   482,  -190,    12,    15,
      29,   239,   622,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   741,
    -190,   183,  -190,   226,  -190,  -190,  -190,  -190,   267,  -190,
     274,  -190,  -190,  -190,   741,  -190,   741,  -190,   482,   482,
     482,   741,   711,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,   246,  -190,  -190,   107,   482,   126,   482,   277,  -190,
     482,  -190,  -190,  -190
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
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,   140,   148,   159,   161,   165,   168,   171,   176,   179,
     181,   183,   185,   187,   189,   205,     0,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     133,     0,   106,   108,     0,   107,   110,   112,   113,   114,
     115,   111,   159,   191,   203,     0,     0,    85,    87,     0,
      78,     0,     0,     0,    52,     0,     0,    43,    44,    42,
      91,     0,     0,    49,    61,    50,    62,    34,     0,    33,
       0,     0,   157,     0,   149,   150,     0,    38,     0,   152,
     151,   153,   154,   155,   156,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,     0,   134,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
      74,    79,     0,    84,    86,    81,    88,     0,    53,    56,
      93,    94,     0,    69,     0,     0,    65,     0,    63,     0,
       0,    97,   101,   103,     0,     0,     0,    61,    39,   139,
     145,   142,     0,   104,     0,   144,   162,   163,   164,   166,
     167,   169,   170,   174,   175,   172,   173,   177,   178,   180,
     182,   184,   186,   188,     0,   116,     0,   118,     0,     0,
       0,     0,     0,   128,   132,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   192,   204,    73,    82,     0,
      80,     0,    45,     0,    64,    70,    66,    71,     0,    67,
       0,   158,   160,   143,     0,   141,     0,   117,     0,     0,
       0,     0,     0,    83,    89,    46,    95,    72,    68,   105,
     190,   121,   123,   124,     0,     0,     0,     0,     0,   126,
       0,   122,   125,   127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,  -190,  -190,   320,    31,  -190,    24,     5,   -23,   -19,
     185,   -33,   283,  -138,  -190,   189,  -190,   209,     1,   -60,
    -144,  -190,  -190,   216,  -117,    42,   -71,  -190,  -190,   307,
    -190,  -190,  -190,   -49,  -190,  -190,   257,  -190,  -107,  -190,
    -189,  -190,  -190,  -190,     3,  -190,  -190,   -48,   -72,    63,
      66,    21,    77,   188,   224,   210,   203,   223,  -190,   -51,
     -62,   -10,   -46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    25,   138,    71,    27,    28,
     166,    29,    49,   147,    30,    72,    31,    60,    32,   244,
     156,    33,    34,   139,   140,   236,   141,   237,    50,    61,
     242,    73,    42,   245,    75,   262,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    91,    92,   132,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   133,
     134,   135,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   105,    74,   148,    93,    26,   207,    48,   241,    55,
     248,   155,   167,   169,   170,   171,   172,   173,   174,   292,
     122,    41,   231,    35,     1,    56,    43,    26,   198,    45,
      46,    54,   162,   164,   165,    38,    39,    93,    93,    93,
      93,    93,    93,    64,    40,   181,   188,   189,   325,   149,
      67,    66,   153,   228,    68,   182,   183,   105,   121,    59,
      93,   157,   202,   259,    20,     1,    63,    51,   158,    52,
     228,   323,   154,   168,    65,    53,   328,    53,   324,   329,
      58,   227,    19,   228,   148,   228,   228,    36,   137,    57,
     167,   122,   105,   330,   285,    93,   287,   239,   199,    62,
     228,   105,   149,   332,    93,   136,   247,   258,   213,   266,
     267,   268,   231,   248,   137,     1,   263,   190,   191,   175,
     176,   177,   235,   151,   294,   152,   310,   160,   228,   121,
     311,    55,    37,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,   168,   154,   168,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   234,   306,   137,   257,   264,
     137,   348,   233,    19,   178,   336,   179,    47,   228,   327,
     143,   105,    20,   322,    93,   159,   308,   180,     1,   284,
     350,   234,   137,   194,   288,   289,   290,   228,   233,   105,
     318,     1,    93,   249,   320,   250,     1,    93,   195,   273,
     274,   275,   276,   256,   228,   152,   326,   144,   145,   184,
     185,   341,   342,   343,   186,   187,   192,   193,   200,    76,
      77,    78,    79,    80,   197,    81,    82,   201,   349,   196,
     351,   238,   145,   353,   312,   313,    19,   269,   270,   203,
     204,   148,   271,   272,   205,    20,   232,   257,   105,    19,
     137,    93,   339,   333,   151,   206,   152,   208,    20,   277,
     278,   209,   210,    20,   211,   340,    65,   251,    93,   255,
     260,    76,    77,   107,    79,    80,   265,    81,    82,    83,
     291,   286,   235,   309,   293,   146,   335,   314,    85,   347,
     315,   321,   331,    86,    87,    88,    89,    90,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   344,   346,    15,    16,    17,    18,   316,   108,   109,
     110,   337,   111,   112,   113,   114,   115,   116,   117,   118,
     338,    83,    44,     1,   352,   119,   254,    53,   120,   253,
      85,   150,   229,   334,   240,    86,    87,    88,    89,    90,
      76,    77,   107,    79,    80,   142,    81,    82,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   215,   279,    15,    16,    17,    18,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     282,    19,    15,    16,    17,    18,   281,   108,   109,   110,
      20,   111,   112,   113,   114,   115,   116,   117,   118,   280,
      83,   283,     0,     0,   119,     0,    53,   214,     0,    85,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,    76,
      77,    78,    79,    80,     0,    81,    82,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    38,
      39,    15,    16,    17,    18,    76,    77,   107,    79,    80,
       0,    81,    82,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,   226,     0,    85,    83,
       0,     0,    84,    86,    87,    88,    89,    90,    85,     0,
       0,     0,     0,    86,    87,    88,    89,    90,     0,     0,
       0,     0,   108,   109,   110,     0,   111,   112,   113,   114,
     115,   116,   117,   118,     0,    83,     0,     0,     0,   119,
       0,    53,     0,     0,    85,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    76,    77,    78,    79,    80,
     146,    81,    82,    85,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    83,     0,     0,     0,   212,     0,     0,
       0,     0,    85,    83,     0,     0,   246,    86,    87,    88,
      89,    90,    85,    83,   261,     0,     0,    86,    87,    88,
      89,    90,    85,     0,     0,     0,     0,    86,    87,    88,
      89,    90,     0,     0,     0,    83,     0,     0,     0,   119,
       0,     0,     0,     0,    85,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,   319,     0,     0,
       0,     0,     0,    85,    83,   345,     0,     0,    86,    87,
      88,    89,    90,    85,   161,     0,     0,     0,    86,    87,
      88,    89,    90,    85,   163,     1,     0,     0,    86,    87,
      88,    89,    90,    85,    83,     0,     0,     0,    86,    87,
      88,    89,    90,    85,     1,     0,     0,     0,    86,    87,
      88,    89,    90,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    38,    39,    15,    16,    17,    18,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,    19,    15,    16,    17,    18,    69,     0,
       0,     0,    20,   232,     0,     0,     0,     0,     0,     0,
       0,     0,   151,   243,   152,     0,     0,     0,     0,     0,
       0,    20,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,    15,    16,
      17,    18,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,    70,    15,    16,
      17,    18,     7,     8,     9,    10,    11,    12,    13,    14,
      38,    39,    15,    16,    17,    18,   256,   243,   152,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
     256,     0,   152,     0,     0,     0,     0,     0,     0,    20,
       7,     8,     9,    10,    11,    12,    13,    14,    38,    39,
      15,    16,    17,    18,     7,     8,     9,    10,    11,    12,
      13,    14,    38,    39,    15,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,   230,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   307,
       0,    15,    16,    17,    18,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
     317,    15,    16,    17,    18,   252,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,    15,    16,    17,    18,     7,     8,     9,    10,    11,
      12,    13,    14,    38,    39,    15,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
      19,    52,    51,    65,    52,     0,   113,    26,   146,    32,
     154,    71,    83,    85,    86,    87,    88,    89,    90,   208,
      53,    20,   139,     5,     5,     5,     0,    22,    18,    24,
      25,    28,    80,    81,    82,    43,    44,    85,    86,    87,
      88,    89,    90,    42,    20,    72,    13,    14,    66,    68,
      67,    48,    71,    71,    71,    82,    83,   108,    53,     5,
     108,    64,   108,    64,    72,     5,    42,    63,    71,    65,
      71,    64,    71,    83,    68,    69,    64,    69,    71,    64,
      69,    67,    63,    71,   146,    71,    71,    69,    57,    69,
     161,   124,   143,    64,   201,   143,   203,   143,    88,    64,
      71,   152,   121,   292,   152,    69,   152,   167,   118,   181,
     182,   183,   229,   257,    83,     5,   178,    84,    85,     8,
       9,    10,   141,    63,    67,    65,    67,    71,    71,   124,
      71,   154,   151,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   161,   151,   163,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   141,   228,   136,   167,   179,
     139,    64,   141,    63,    63,   313,    65,    67,    71,   286,
      68,   232,    72,   255,   232,    64,   232,    76,     5,   199,
      64,   167,   161,    77,   204,   205,   206,    71,   167,   250,
     249,     5,   250,    63,   250,    65,     5,   255,    86,   188,
     189,   190,   191,    63,    71,    65,    73,    70,    71,    78,
      79,   328,   329,   330,    11,    12,    15,    16,    66,     3,
       4,     5,     6,     7,    17,     9,    10,    73,   345,    87,
     347,    70,    71,   350,    70,    71,    63,   184,   185,    73,
      63,   313,   186,   187,    63,    72,    73,   256,   309,    63,
     229,   309,   324,   309,    63,    63,    65,    63,    72,   192,
     193,     5,    67,    72,    67,   326,    68,     5,   326,    64,
       5,     3,     4,     5,     6,     7,     5,     9,    10,    63,
      55,    73,   311,    73,    67,    69,    70,    64,    72,    53,
      64,    64,    63,    77,    78,    79,    80,    81,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   331,   332,    45,    46,    47,    48,    66,    50,    51,
      52,    64,    54,    55,    56,    57,    58,    59,    60,    61,
      66,    63,    22,     5,    67,    67,   161,    69,    70,   160,
      72,    68,   136,   311,   145,    77,    78,    79,    80,    81,
       3,     4,     5,     6,     7,    58,     9,    10,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   124,   194,    45,    46,    47,    48,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     197,    63,    45,    46,    47,    48,   196,    50,    51,    52,
      72,    54,    55,    56,    57,    58,    59,    60,    61,   195,
      63,   198,    -1,    -1,    67,    -1,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    72,    63,
      -1,    -1,    66,    77,    78,    79,    80,    81,    72,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    -1,    -1,
      -1,    -1,    50,    51,    52,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,     3,     4,     5,     6,     7,
      69,     9,    10,    72,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    63,    -1,    -1,    66,    77,    78,    79,
      80,    81,    72,    63,    64,    -1,    -1,    77,    78,    79,
      80,    81,    72,    -1,    -1,    -1,    -1,    77,    78,    79,
      80,    81,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    72,    63,    64,    -1,    -1,    77,    78,
      79,    80,    81,    72,    63,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    72,    63,     5,    -1,    -1,    77,    78,
      79,    80,    81,    72,    63,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    72,     5,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    63,    45,    46,    47,    48,     5,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    64,    45,    46,
      47,    48,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    70,
      -1,    45,    46,    47,    48,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      64,    45,    46,    47,    48,    49,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    46,    47,    48,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48
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
     117,    63,    65,    69,   133,    97,     5,    69,    69,     5,
     106,   118,    64,    95,   107,    68,   133,    67,    71,     5,
      64,    96,   104,   120,   122,   123,     3,     4,     5,     6,
       7,     9,    10,    63,    66,    72,    77,    78,    79,    80,
      81,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   151,     5,    50,    51,
      52,    54,    55,    56,    57,    58,    59,    60,    61,    67,
      70,    96,   100,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   136,   148,   149,   150,    69,    93,    95,   112,
     113,   115,   118,    68,    70,    71,    69,   102,   149,    98,
     101,    63,    65,    98,   107,   108,   109,    64,    71,    64,
      71,    63,   136,    63,   136,   136,    99,   115,   150,   137,
     137,   137,   137,   137,   137,     8,     9,    10,    63,    65,
      76,    72,    82,    83,    78,    79,    11,    12,    13,    14,
      84,    85,    15,    16,    77,    86,    87,    17,    18,    88,
      66,    73,   151,    73,    63,    63,    63,   127,    63,     5,
      67,    67,    67,   150,    70,   125,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    68,    67,    71,   112,
      70,   113,    73,    93,    95,    98,   114,   116,    70,   151,
     106,   102,   119,    64,   108,   122,    66,   151,   109,    63,
      65,     5,    49,   104,    99,    64,    63,   107,   108,    64,
       5,    64,   124,   149,   150,     5,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     143,   144,   145,   146,   150,   127,    73,   127,   150,   150,
     150,    55,   129,    67,    67,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,    70,   151,    73,
      67,    71,    70,    71,    64,    64,    66,    64,   122,    66,
     151,    64,   137,    64,    71,    66,    73,   127,    64,    64,
      64,    63,   129,   151,   114,    70,   102,    64,    66,   149,
     148,   127,   127,   127,   150,    64,   150,    53,    64,   127,
      64,   127,    67,   127
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   104,   105,   105,   105,   106,   106,   107,   107,   107,
     107,   108,   108,   108,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   114,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   127,   127,   127,   127,   128,   128,   128,   129,
     129,   130,   130,   130,   131,   131,   131,   131,   132,   132,
     132,   132,   132,   133,   133,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   138,   138,   139,   139,   139,   140,   140,
     140,   141,   141,   141,   141,   141,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   151
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
       2,     2,     2,     2,     2,     2,     2,     2,     4,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1
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
#line 88 "src/parser.y"
                          {g_root = new translationUnit((yyvsp[0].list));}
#line 1620 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 96 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1626 "src/parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 97 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-1].list),(yyvsp[0].tree));}
#line 1632 "src/parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 102 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1638 "src/parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 103 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1644 "src/parser.tab.cpp"
    break;

  case 7: /* type_specifier: VOID  */
#line 108 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_void);}
#line 1650 "src/parser.tab.cpp"
    break;

  case 9: /* type_specifier: SHORT  */
#line 110 "src/parser.y"
                                                                {std::cerr<<"short not assessed";exit(1);}
#line 1656 "src/parser.tab.cpp"
    break;

  case 10: /* type_specifier: INT  */
#line 111 "src/parser.y"
                                                                {(yyval.tree) = new typeSpecifier(variable_types::_int);}
#line 1662 "src/parser.tab.cpp"
    break;

  case 11: /* type_specifier: LONG  */
#line 112 "src/parser.y"
                                                                {std::cerr<<"long not spported";exit(1);}
#line 1668 "src/parser.tab.cpp"
    break;

  case 16: /* type_specifier: struct_or_union_specifier  */
#line 117 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1674 "src/parser.tab.cpp"
    break;

  case 17: /* type_specifier: enum_specifier  */
#line 118 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1680 "src/parser.tab.cpp"
    break;

  case 19: /* storage_class_specifier: EXTERN  */
#line 124 "src/parser.y"
                                {std::cerr<<"Extern not assessed"; exit(1);}
#line 1686 "src/parser.tab.cpp"
    break;

  case 20: /* storage_class_specifier: STATIC  */
#line 125 "src/parser.y"
                                {std::cerr<<"static not assessed"; exit(1);}
#line 1692 "src/parser.tab.cpp"
    break;

  case 21: /* storage_class_specifier: AUTO  */
#line 126 "src/parser.y"
                                {std::cerr<<"auto not assessed"; exit(1);}
#line 1698 "src/parser.tab.cpp"
    break;

  case 22: /* storage_class_specifier: REGISTER  */
#line 127 "src/parser.y"
                                {std::cerr<<"register not assessed"; exit(1);}
#line 1704 "src/parser.tab.cpp"
    break;

  case 23: /* type_qualifier: CONST  */
#line 131 "src/parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1710 "src/parser.tab.cpp"
    break;

  case 24: /* type_qualifier: VOLATILE  */
#line 132 "src/parser.y"
                                {std::cerr<<"not assessed"; exit(1);}
#line 1716 "src/parser.tab.cpp"
    break;

  case 27: /* declaration_specifiers: type_specifier  */
#line 138 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1722 "src/parser.tab.cpp"
    break;

  case 28: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 139 "src/parser.y"
                                                                        {std::cerr<<"long short... concat data types not assessed"<<std::endl; exit(1);}
#line 1728 "src/parser.tab.cpp"
    break;

  case 29: /* direct_declarator: IDENTIFIER  */
#line 145 "src/parser.y"
                                                                                                {(yyval.tree) = new variableDeclarator(*(yyvsp[0].string));}
#line 1734 "src/parser.tab.cpp"
    break;

  case 30: /* direct_declarator: '(' declarator ')'  */
#line 146 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[-1].tree);}
#line 1740 "src/parser.tab.cpp"
    break;

  case 31: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 147 "src/parser.y"
                                                                {(yyval.tree) = new arrayDeclarator((yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 1746 "src/parser.tab.cpp"
    break;

  case 32: /* direct_declarator: direct_declarator '[' ']'  */
#line 148 "src/parser.y"
                                                                                        {std::cerr<<"not assessed"; exit(1);}
#line 1752 "src/parser.tab.cpp"
    break;

  case 33: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 149 "src/parser.y"
                                                                {(yyval.tree) = new functionDeclarator((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 1758 "src/parser.tab.cpp"
    break;

  case 35: /* direct_declarator: direct_declarator '(' ')'  */
#line 151 "src/parser.y"
                                                                                        {(yyval.tree) = new functionDeclarator((yyvsp[-2].tree), NULL);}
#line 1764 "src/parser.tab.cpp"
    break;

  case 36: /* declarator: pointer direct_declarator  */
#line 155 "src/parser.y"
                                                {(yyval.tree) = new pointerDeclarator((yyvsp[0].tree));}
#line 1770 "src/parser.tab.cpp"
    break;

  case 37: /* declarator: direct_declarator  */
#line 156 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1776 "src/parser.tab.cpp"
    break;

  case 40: /* declaration: declaration_specifiers ';'  */
#line 166 "src/parser.y"
                                                                                {(yyval.tree) = new declaration((yyvsp[-1].tree), NULL);}
#line 1782 "src/parser.tab.cpp"
    break;

  case 41: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 167 "src/parser.y"
                                                                {(yyval.tree) = new declaration((yyvsp[-2].tree), (yyvsp[-1].list));}
#line 1788 "src/parser.tab.cpp"
    break;

  case 42: /* init_declarator: declarator  */
#line 171 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1794 "src/parser.tab.cpp"
    break;

  case 43: /* init_declarator: declarator '=' initializer  */
#line 172 "src/parser.y"
                                        {(yyval.tree) = new initDeclarator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 1800 "src/parser.tab.cpp"
    break;

  case 44: /* initializer: assignment_expression  */
#line 175 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1806 "src/parser.tab.cpp"
    break;

  case 47: /* function_definition: declarator compound_statement  */
#line 183 "src/parser.y"
                                                                                                                                {std::cerr<<"function witout type"<<std::endl;}
#line 1812 "src/parser.tab.cpp"
    break;

  case 48: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 184 "src/parser.y"
                                                                                                        {(yyval.tree) = new functionDefinition((yyvsp[-2].tree), (yyvsp[-1].tree), (yyvsp[0].tree)) ;}
#line 1818 "src/parser.tab.cpp"
    break;

  case 49: /* parameter_declaration: declaration_specifiers declarator  */
#line 190 "src/parser.y"
                                                                        {(yyval.tree) = new declaration((yyvsp[-1].tree), initList((yyvsp[0].tree))); }
#line 1824 "src/parser.tab.cpp"
    break;

  case 50: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 191 "src/parser.y"
                                                         {std::cerr<<"Error: abstract declarators, unsupported"; exit(1);}
#line 1830 "src/parser.tab.cpp"
    break;

  case 51: /* parameter_declaration: declaration_specifiers  */
#line 192 "src/parser.y"
                                                                                {std::cerr<<"Error: abstract declarators, unsupported"; exit(1);}
#line 1836 "src/parser.tab.cpp"
    break;

  case 52: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 197 "src/parser.y"
                                                                {(yyval.tree) = new enumSpecifier((yyvsp[-1].list));}
#line 1842 "src/parser.tab.cpp"
    break;

  case 53: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 198 "src/parser.y"
                                                        {(yyval.tree) = new enumSpecifier(*(yyvsp[-3].string), (yyvsp[-1].list));}
#line 1848 "src/parser.tab.cpp"
    break;

  case 54: /* enum_specifier: ENUM IDENTIFIER  */
#line 199 "src/parser.y"
                                                                                {(yyval.tree) = new enumSpecifier(*(yyvsp[0].string), NULL);}
#line 1854 "src/parser.tab.cpp"
    break;

  case 55: /* enumerator: IDENTIFIER  */
#line 202 "src/parser.y"
                                                                        {(yyval.tree) = new Enumerator(*(yyvsp[0].string), NULL);}
#line 1860 "src/parser.tab.cpp"
    break;

  case 56: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 203 "src/parser.y"
                                                {(yyval.tree) = new Enumerator(*(yyvsp[-2].string), (yyvsp[0].tree));}
#line 1866 "src/parser.tab.cpp"
    break;

  case 77: /* struct_or_union: UNION  */
#line 239 "src/parser.y"
                        {std::cerr<<"union not assessed"; exit(1);}
#line 1872 "src/parser.tab.cpp"
    break;

  case 84: /* specifier_qualifier_list: specifier_qualifier_list type_specifier  */
#line 257 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 1878 "src/parser.tab.cpp"
    break;

  case 85: /* specifier_qualifier_list: type_specifier  */
#line 258 "src/parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1884 "src/parser.tab.cpp"
    break;

  case 88: /* struct_declarator_list: struct_declarator  */
#line 263 "src/parser.y"
                                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1890 "src/parser.tab.cpp"
    break;

  case 89: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 264 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1896 "src/parser.tab.cpp"
    break;

  case 90: /* init_declarator_list: init_declarator  */
#line 267 "src/parser.y"
                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1902 "src/parser.tab.cpp"
    break;

  case 91: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 268 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1908 "src/parser.tab.cpp"
    break;

  case 92: /* enumerator_list: enumerator  */
#line 271 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1914 "src/parser.tab.cpp"
    break;

  case 93: /* enumerator_list: enumerator_list ',' enumerator  */
#line 272 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1920 "src/parser.tab.cpp"
    break;

  case 94: /* initializer_list: initializer  */
#line 275 "src/parser.y"
                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1926 "src/parser.tab.cpp"
    break;

  case 95: /* initializer_list: initializer_list ',' initializer  */
#line 276 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1932 "src/parser.tab.cpp"
    break;

  case 96: /* identifier_list: IDENTIFIER  */
#line 279 "src/parser.y"
                                                                {(yyval.list) = initList(new identifier(*(yyvsp[0].string)));}
#line 1938 "src/parser.tab.cpp"
    break;

  case 97: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 280 "src/parser.y"
                                                {(yyval.list) = concatList((yyvsp[-2].list), new identifier(*(yyvsp[0].string)));}
#line 1944 "src/parser.tab.cpp"
    break;

  case 100: /* parameter_type_list: parameter_list  */
#line 287 "src/parser.y"
                                                        {(yyval.list) = (yyvsp[0].list);}
#line 1950 "src/parser.tab.cpp"
    break;

  case 101: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 288 "src/parser.y"
                                        {std::cerr<<"ellipsed parameters not assessed"<<std::endl; exit(1);}
#line 1956 "src/parser.tab.cpp"
    break;

  case 102: /* parameter_list: parameter_declaration  */
#line 291 "src/parser.y"
                                                                        {(yyval.list) = initList((yyvsp[0].tree));}
#line 1962 "src/parser.tab.cpp"
    break;

  case 103: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 292 "src/parser.y"
                                                        {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1968 "src/parser.tab.cpp"
    break;

  case 104: /* argument_expression_list: assignment_expression  */
#line 295 "src/parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1974 "src/parser.tab.cpp"
    break;

  case 105: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 296 "src/parser.y"
                                                                {(yyval.list) = concatList((yyvsp[-2].list), (yyvsp[0].tree));}
#line 1980 "src/parser.tab.cpp"
    break;

  case 106: /* declaration_or_statement: declaration  */
#line 300 "src/parser.y"
                        {(yyval.tree) = (yyvsp[0].tree);}
#line 1986 "src/parser.tab.cpp"
    break;

  case 107: /* declaration_or_statement: statement  */
#line 301 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 1992 "src/parser.tab.cpp"
    break;

  case 108: /* declaration_or_statement_list: declaration_or_statement  */
#line 304 "src/parser.y"
                                                                                                {(yyval.list) = initList((yyvsp[0].tree));}
#line 1998 "src/parser.tab.cpp"
    break;

  case 109: /* declaration_or_statement_list: declaration_or_statement_list declaration_or_statement  */
#line 305 "src/parser.y"
                                                                 {(yyval.list) = concatList((yyvsp[-1].list), (yyvsp[0].tree));}
#line 2004 "src/parser.tab.cpp"
    break;

  case 110: /* statement: labeled_statement  */
#line 309 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2010 "src/parser.tab.cpp"
    break;

  case 111: /* statement: compound_statement  */
#line 310 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2016 "src/parser.tab.cpp"
    break;

  case 112: /* statement: expression_statement  */
#line 311 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2022 "src/parser.tab.cpp"
    break;

  case 113: /* statement: selection_statement  */
#line 312 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2028 "src/parser.tab.cpp"
    break;

  case 114: /* statement: iteration_statement  */
#line 313 "src/parser.y"
                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2034 "src/parser.tab.cpp"
    break;

  case 115: /* statement: jump_statement  */
#line 314 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2040 "src/parser.tab.cpp"
    break;

  case 117: /* labeled_statement: CASE constant_expression ':' statement  */
#line 326 "src/parser.y"
                                                  {(yyval.tree) = new caseStatement((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2046 "src/parser.tab.cpp"
    break;

  case 119: /* expression_statement: ';'  */
#line 331 "src/parser.y"
                                        {(yyval.tree) = NULL;}
#line 2052 "src/parser.tab.cpp"
    break;

  case 120: /* expression_statement: expression ';'  */
#line 332 "src/parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2058 "src/parser.tab.cpp"
    break;

  case 121: /* selection_statement: IF '(' expression ')' statement  */
#line 336 "src/parser.y"
                                                                                {(yyval.tree) = new ifElseStatement((yyvsp[-2].tree),(yyvsp[0].tree),NULL);}
#line 2064 "src/parser.tab.cpp"
    break;

  case 122: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 337 "src/parser.y"
                                                                {(yyval.tree) = new ifElseStatement((yyvsp[-4].tree),(yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2070 "src/parser.tab.cpp"
    break;

  case 123: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 338 "src/parser.y"
                                                                        {(yyval.tree) = new switchStatement((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2076 "src/parser.tab.cpp"
    break;

  case 124: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 342 "src/parser.y"
                                                                        {(yyval.tree) = new whileStatement((yyvsp[-2].tree),NULL,NULL,(yyvsp[0].tree));}
#line 2082 "src/parser.tab.cpp"
    break;

  case 127: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 345 "src/parser.y"
                                                                                     {(yyval.tree) = new forStatement{(yyvsp[-4].tree), (yyvsp[-3].tree), (yyvsp[-2].tree), (yyvsp[0].tree)};}
#line 2088 "src/parser.tab.cpp"
    break;

  case 128: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 349 "src/parser.y"
                                {std::cerr<<"goto not assessed"; exit(1);}
#line 2094 "src/parser.tab.cpp"
    break;

  case 129: /* jump_statement: CONTINUE ';'  */
#line 350 "src/parser.y"
                                        {(yyval.tree) = new continueStatement();}
#line 2100 "src/parser.tab.cpp"
    break;

  case 130: /* jump_statement: BREAK ';'  */
#line 351 "src/parser.y"
                                                {(yyval.tree) = new breakStatement();}
#line 2106 "src/parser.tab.cpp"
    break;

  case 131: /* jump_statement: RETURN ';'  */
#line 352 "src/parser.y"
                                        {(yyval.tree) = new returnStatement(NULL);}
#line 2112 "src/parser.tab.cpp"
    break;

  case 132: /* jump_statement: RETURN expression ';'  */
#line 353 "src/parser.y"
                                {(yyval.tree) = new returnStatement((yyvsp[-1].tree));}
#line 2118 "src/parser.tab.cpp"
    break;

  case 133: /* compound_statement: '{' '}'  */
#line 357 "src/parser.y"
                                                                                        {(yyval.tree) = new compoundStatement(NULL);}
#line 2124 "src/parser.tab.cpp"
    break;

  case 134: /* compound_statement: '{' declaration_or_statement_list '}'  */
#line 358 "src/parser.y"
                                                    {{(yyval.tree) = new compoundStatement((yyvsp[-1].list));}}
#line 2130 "src/parser.tab.cpp"
    break;

  case 135: /* primary_expression: IDENTIFIER  */
#line 376 "src/parser.y"
                                        {(yyval.tree) = new identifier(*(yyvsp[0].string));}
#line 2136 "src/parser.tab.cpp"
    break;

  case 136: /* primary_expression: CONSTANT_INT  */
#line 377 "src/parser.y"
                                        {(yyval.tree) = new intConstant((yyvsp[0].ival));}
#line 2142 "src/parser.tab.cpp"
    break;

  case 139: /* primary_expression: '(' expression ')'  */
#line 380 "src/parser.y"
                                {(yyval.tree) = (yyvsp[-1].tree);}
#line 2148 "src/parser.tab.cpp"
    break;

  case 140: /* postfix_expression: primary_expression  */
#line 384 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2154 "src/parser.tab.cpp"
    break;

  case 141: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 385 "src/parser.y"
                                                                                {(yyval.tree) = new arrayIndex((yyvsp[-3].tree), (yyvsp[-1].tree));}
#line 2160 "src/parser.tab.cpp"
    break;

  case 142: /* postfix_expression: postfix_expression '(' ')'  */
#line 386 "src/parser.y"
                                                                                        {(yyval.tree) = new functionCall((yyvsp[-2].tree), NULL);}
#line 2166 "src/parser.tab.cpp"
    break;

  case 143: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 387 "src/parser.y"
                                                                {(yyval.tree) = new functionCall((yyvsp[-3].tree), (yyvsp[-1].list));}
#line 2172 "src/parser.tab.cpp"
    break;

  case 146: /* postfix_expression: postfix_expression INC_OP  */
#line 390 "src/parser.y"
                                                                                                {(yyval.tree) = new postIncrement((yyvsp[-1].tree));}
#line 2178 "src/parser.tab.cpp"
    break;

  case 147: /* postfix_expression: postfix_expression DEC_OP  */
#line 391 "src/parser.y"
                                                                                                {(yyval.tree) = new postDecrement((yyvsp[-1].tree));}
#line 2184 "src/parser.tab.cpp"
    break;

  case 148: /* unary_expression: postfix_expression  */
#line 397 "src/parser.y"
                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2190 "src/parser.tab.cpp"
    break;

  case 149: /* unary_expression: INC_OP unary_expression  */
#line 398 "src/parser.y"
                                                        {(yyval.tree) = new preIncrement((yyvsp[0].tree));}
#line 2196 "src/parser.tab.cpp"
    break;

  case 150: /* unary_expression: DEC_OP unary_expression  */
#line 399 "src/parser.y"
                                                        {(yyval.tree) = new preIncrement((yyvsp[0].tree));}
#line 2202 "src/parser.tab.cpp"
    break;

  case 151: /* unary_expression: '&' cast_expression  */
#line 400 "src/parser.y"
                                                        {(yyval.tree) = new addressOperator((yyvsp[0].tree));}
#line 2208 "src/parser.tab.cpp"
    break;

  case 152: /* unary_expression: '*' cast_expression  */
#line 401 "src/parser.y"
                                                        {(yyval.tree) = new dereferenceOperator((yyvsp[0].tree));}
#line 2214 "src/parser.tab.cpp"
    break;

  case 153: /* unary_expression: '+' cast_expression  */
#line 402 "src/parser.y"
                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2220 "src/parser.tab.cpp"
    break;

  case 154: /* unary_expression: '-' cast_expression  */
#line 403 "src/parser.y"
                                                        {(yyval.tree) = new negOperator((yyvsp[0].tree));}
#line 2226 "src/parser.tab.cpp"
    break;

  case 155: /* unary_expression: '~' cast_expression  */
#line 404 "src/parser.y"
                                                        {(yyval.tree) = new bwNotOperator((yyvsp[0].tree));}
#line 2232 "src/parser.tab.cpp"
    break;

  case 156: /* unary_expression: '!' cast_expression  */
#line 405 "src/parser.y"
                                            {(yyval.tree) = new notOperator((yyvsp[0].tree));}
#line 2238 "src/parser.tab.cpp"
    break;

  case 157: /* unary_expression: SIZEOF unary_expression  */
#line 406 "src/parser.y"
                                                        {(yyval.tree) = new sizeOfOperator((yyvsp[0].tree));}
#line 2244 "src/parser.tab.cpp"
    break;

  case 159: /* cast_expression: unary_expression  */
#line 420 "src/parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2250 "src/parser.tab.cpp"
    break;

  case 160: /* cast_expression: '(' type_name ')' cast_expression  */
#line 421 "src/parser.y"
                                            {std::cerr<<"Error: casting not supported"; exit(1);}
#line 2256 "src/parser.tab.cpp"
    break;

  case 161: /* multiplicative_expression: cast_expression  */
#line 425 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2262 "src/parser.tab.cpp"
    break;

  case 162: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 426 "src/parser.y"
                                                        {(yyval.tree) = new mulOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2268 "src/parser.tab.cpp"
    break;

  case 163: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 427 "src/parser.y"
                                                        {(yyval.tree) = new divOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2274 "src/parser.tab.cpp"
    break;

  case 164: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 428 "src/parser.y"
                                                        {(yyval.tree) = new modOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2280 "src/parser.tab.cpp"
    break;

  case 165: /* additive_expression: multiplicative_expression  */
#line 432 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2286 "src/parser.tab.cpp"
    break;

  case 166: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 433 "src/parser.y"
                                                                {(yyval.tree) = new addOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2292 "src/parser.tab.cpp"
    break;

  case 167: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 434 "src/parser.y"
                                                                {(yyval.tree) = new subOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2298 "src/parser.tab.cpp"
    break;

  case 168: /* shift_expression: additive_expression  */
#line 438 "src/parser.y"
                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2304 "src/parser.tab.cpp"
    break;

  case 169: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 439 "src/parser.y"
                                                        {(yyval.tree) = new leftShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2310 "src/parser.tab.cpp"
    break;

  case 170: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 440 "src/parser.y"
                                                        {(yyval.tree) = new rightShiftOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2316 "src/parser.tab.cpp"
    break;

  case 171: /* relational_expression: shift_expression  */
#line 444 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2322 "src/parser.tab.cpp"
    break;

  case 172: /* relational_expression: relational_expression '<' shift_expression  */
#line 445 "src/parser.y"
                                                                {(yyval.tree) = new ltOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2328 "src/parser.tab.cpp"
    break;

  case 173: /* relational_expression: relational_expression '>' shift_expression  */
#line 446 "src/parser.y"
                                                                {(yyval.tree) = new gtOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2334 "src/parser.tab.cpp"
    break;

  case 174: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 447 "src/parser.y"
                                                                {(yyval.tree) = new leOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2340 "src/parser.tab.cpp"
    break;

  case 175: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 448 "src/parser.y"
                                                                {(yyval.tree) = new geOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2346 "src/parser.tab.cpp"
    break;

  case 176: /* equality_expression: relational_expression  */
#line 452 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2352 "src/parser.tab.cpp"
    break;

  case 177: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 453 "src/parser.y"
                                                                {(yyval.tree) = new equalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2358 "src/parser.tab.cpp"
    break;

  case 178: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 454 "src/parser.y"
                                                                {(yyval.tree) = new inequalityOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2364 "src/parser.tab.cpp"
    break;

  case 179: /* and_expression: equality_expression  */
#line 458 "src/parser.y"
                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2370 "src/parser.tab.cpp"
    break;

  case 180: /* and_expression: and_expression '&' equality_expression  */
#line 459 "src/parser.y"
                                                        {(yyval.tree) = new andOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2376 "src/parser.tab.cpp"
    break;

  case 181: /* exclusive_or_expression: and_expression  */
#line 463 "src/parser.y"
                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2382 "src/parser.tab.cpp"
    break;

  case 182: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 464 "src/parser.y"
                                                        {(yyval.tree) = new exclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2388 "src/parser.tab.cpp"
    break;

  case 183: /* inclusive_or_expression: exclusive_or_expression  */
#line 468 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2394 "src/parser.tab.cpp"
    break;

  case 184: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 469 "src/parser.y"
                                                                {(yyval.tree) = new inclusiveOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2400 "src/parser.tab.cpp"
    break;

  case 185: /* logical_and_expression: inclusive_or_expression  */
#line 473 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2406 "src/parser.tab.cpp"
    break;

  case 186: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 474 "src/parser.y"
                                                                {(yyval.tree) = new logicalAndOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2412 "src/parser.tab.cpp"
    break;

  case 187: /* logical_or_expression: logical_and_expression  */
#line 478 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2418 "src/parser.tab.cpp"
    break;

  case 188: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 479 "src/parser.y"
                                                                {(yyval.tree) = new logicalOrOperator((yyvsp[-2].tree), (yyvsp[0].tree));}
#line 2424 "src/parser.tab.cpp"
    break;

  case 189: /* conditional_expression: logical_or_expression  */
#line 483 "src/parser.y"
                                                                                                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2430 "src/parser.tab.cpp"
    break;

  case 191: /* assignment_expression: conditional_expression  */
#line 488 "src/parser.y"
                                                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2436 "src/parser.tab.cpp"
    break;

  case 192: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 489 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree),(yyvsp[0].tree));}
#line 2442 "src/parser.tab.cpp"
    break;

  case 193: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 490 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new mulOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2448 "src/parser.tab.cpp"
    break;

  case 194: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 491 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new divOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2454 "src/parser.tab.cpp"
    break;

  case 195: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 492 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new modOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2460 "src/parser.tab.cpp"
    break;

  case 196: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 493 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new addOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2466 "src/parser.tab.cpp"
    break;

  case 197: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 494 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new subOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2472 "src/parser.tab.cpp"
    break;

  case 198: /* assignment_expression: unary_expression LEFT_ASSIGN assignment_expression  */
#line 495 "src/parser.y"
                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new leftShiftOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2478 "src/parser.tab.cpp"
    break;

  case 199: /* assignment_expression: unary_expression RIGHT_ASSIGN assignment_expression  */
#line 496 "src/parser.y"
                                                                {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new rightShiftOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2484 "src/parser.tab.cpp"
    break;

  case 200: /* assignment_expression: unary_expression AND_ASSIGN assignment_expression  */
#line 497 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new andOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2490 "src/parser.tab.cpp"
    break;

  case 201: /* assignment_expression: unary_expression XOR_ASSIGN assignment_expression  */
#line 498 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new exclusiveOrOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2496 "src/parser.tab.cpp"
    break;

  case 202: /* assignment_expression: unary_expression OR_ASSIGN assignment_expression  */
#line 499 "src/parser.y"
                                                                        {(yyval.tree) = new assignmentExpression((yyvsp[-2].tree), new inclusiveOrOperator((yyvsp[-2].tree),(yyvsp[0].tree)));}
#line 2502 "src/parser.tab.cpp"
    break;

  case 203: /* expression: assignment_expression  */
#line 504 "src/parser.y"
                                                                {(yyval.tree) = (yyvsp[0].tree);}
#line 2508 "src/parser.tab.cpp"
    break;

  case 204: /* expression: expression ',' assignment_expression  */
#line 505 "src/parser.y"
                                                {std::cerr<<"not assessed"; exit(1);}
#line 2514 "src/parser.tab.cpp"
    break;

  case 205: /* constant_expression: conditional_expression  */
#line 509 "src/parser.y"
                                        {(yyval.tree) = (yyvsp[0].tree);}
#line 2520 "src/parser.tab.cpp"
    break;


#line 2524 "src/parser.tab.cpp"

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

#line 515 "src/parser.y"

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
