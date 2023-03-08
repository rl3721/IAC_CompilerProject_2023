#ifndef ast_hpp
#define ast_hpp

#include "ast/ast_base.hpp"
#include "ast/ast_hello_world.hpp"
#include "ast/ast_typespecifier.hpp"
#include "ast/ast_specifierqualifierlist.hpp"
#include "ast/ast_functiondefinition.hpp"
#include "ast/ast_directdeclarator.hpp"
#include "ast/ast_compoundstatement.hpp"
#include "ast/ast_statementlist.hpp"
#include "ast/ast_jumpstatement.hpp"
#include "ast/ast_expression.hpp"
#include "ast/ast_primaryexpression.hpp"
#include "ast/ast_translationunit.hpp"
#include "ast/ast_parameterlist.hpp"
#include "ast/ast_parameterdeclaration.hpp"
#include "ast/ast_bilateraloperations.hpp"
#include "ast/ast_declaration.hpp"

//todo: compress all list type subclass into one

extern const Tree *parseAST();
#endif
