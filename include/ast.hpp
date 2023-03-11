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


//todo: compress all list type subclass into one

extern const Tree *parseAST();
#endif
