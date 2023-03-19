#ifndef ast_hpp
#define ast_hpp

#include "ast/ast_base.hpp"
#include "ast/List.hpp"
#include "ast/context.hpp"

#include "ast/ast_compoundstatement.hpp"
#include "ast/ast_binaryoperations.hpp"
#include "ast/ast_jumpstatement.hpp"
#include "ast/ast_functiondefinition.hpp"
#include "ast/ast_jumpstatement.hpp"
#include "ast/ast_typespecifier.hpp"
#include "ast/ast_directdeclarator.hpp"
#include "ast/ast_declaration.hpp"
#include "ast/ast_primaryexpression.hpp"
#include "ast/ast_functioncall.hpp"
#include "ast/ast_selection_statement.hpp"
#include "ast/ast_unaryoperations.hpp"
#include "ast/ast_iteration_statement.hpp"
#include "ast/ast_enum.hpp"
#include "ast/ast_array.hpp"
#include "ast/ast_pointer.hpp"
#include "ast/ast_case.hpp"
#include "ast/ast_switch.hpp"
#include "ast/ast_default.hpp"


//todo: compress all list type subclass into one

extern const Tree *parseAST();
#endif
