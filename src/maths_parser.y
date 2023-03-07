%code requires{
  #include "ast.hpp"

  #include <cassert>

 extern const Tree *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  const Tree *tree;
  double number;
  std::string *string;
}

%token <number> CONSTANT 
%token <string> IDENTIFIER STRING_LITERAL 

%token  SIZEOF PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token  AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token  SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token  XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token  TYPEDEF EXTERN STATIC AUTO REGISTER
%token  CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token  STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%token HELLO_WORLD

%type <tree> ROOT
%type <tree> translation_unit
%type <tree> primary_expression
%type <tree> postfix_expression
%type <tree> argument_expression_list
%type <tree> unary_expression
%type <tree> unary_operator
%type <tree> cast_expression
%type <tree> multiplicative_expression
%type <tree> additive_expression
%type <tree> shift_expression
%type <tree> relational_expression
%type <tree> equality_expression
%type <tree> and_expression
%type <tree> exclusive_or_expression
%type <tree> inclusive_or_expression
%type <tree> logical_and_expression
%type <tree> logical_or_expression
%type <tree> conditional_expression
%type <tree> assignment_expression
%type <tree> expression
%type <tree> constant_expression
%type <tree> declaration
%type <tree> declaration_specifiers
%type <tree> init_declarator_list
%type <tree> init_declarator
%type <tree> storage_class_specifier
%type <tree> type_specifier
%type <tree> struct_or_union_specifier
%type <tree> struct_or_union
%type <tree> struct_declaration_list
%type <tree> struct_declaration
%type <tree> specifier_qualifier_list
%type <tree> struct_declarator_list
%type <tree> struct_declarator
%type <tree> enum_specifier
%type <tree> enumerator_list
%type <tree> enumerator
%type <tree> type_qualifier
%type <tree> parameter_type_list
%type <tree> parameter_list
%type <tree> parameter_declaration
%type <tree> identifier_list
%type <tree> initializer
%type <tree> type_name
%type <tree> abstract_declarator
%type <tree> direct_abstract_declarator
%type <tree> declarator
%type <tree> direct_declarator
%type <tree> statement
%type <tree> labeled_statement
%type <tree> compound_statement
%type <tree> declaration_list
%type <tree> statement_list
%type <tree> expression_statement
%type <tree> selection_statement
%type <tree> iteration_statement
%type <tree> jump_statement
%type <tree> function_definition
%type <tree> external_declaration

%start ROOT
%%

ROOT
	:translation_unit {g_root = $1;}
	//|IDENTIFIER  {g_root = new helloWorld();}
	//|expression  {g_root = $1;}
	//|function_definition  {g_root = $1;}
	//|HELLO_WORLD {g_root = new helloWorld();}
	
	;

primary_expression
	: IDENTIFIER			{$$ = new identifierPrimaryExpression(*$1);}
	| CONSTANT				{$$ = new constantPrimaryExpression($1);}
	| STRING_LITERAL		{$$ = new stringPrimaryExpression(*$1);}
	| '(' expression ')'	{$$ = $2;} //tbc
	;

postfix_expression
	: primary_expression									{$$ = $1;}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression              {$$ = $1;}
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'     //{new Tree(Unary_operator, $1);}
	| '*'     //{new Tree(Unary_operator, $1);}
	| '+'     //{new Tree(Unary_operator, $1);}
	| '-'     //{new Tree(Unary_operator, $1);}
	| '~'     //{new Tree(Unary_operator, $1);}
	| '!'     //{new Tree(Unary_operator, $1);}
	;

cast_expression
	: unary_expression						{$$ = $1;}
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression								{$$ = $1;}
	| multiplicative_expression '*' cast_expression 
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression							{$$ = $1;}
	| additive_expression '+' multiplicative_expression	{$$ = new addOperator($1, $3);}
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression							{$$ = $1;}
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression									{$$ = $1;}
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression								{$$ = $1;}
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression						{$$ = $1;}
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression								{$$ = $1;}
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression								{$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression								{$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression								{$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression												{$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression											{$$ = $1;}
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression					{$$ = $1;}
	| expression ',' assignment_expression	{$$ = new expression($1, $3);}
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier									{$$ = $1;}
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID							{$$ = new typeSpecifier("VOID");}
	| CHAR							{$$ = new typeSpecifier("CHAR");}
	| SHORT							{$$ = new typeSpecifier("SHORT");}
	| INT							{$$ = new typeSpecifier("INT");}
	| LONG							{$$ = new typeSpecifier("LONG");}
	| FLOAT							{$$ = new typeSpecifier("FLOAT");}
	| DOUBLE						{$$ = new typeSpecifier("DOUBLE");}
	| SIGNED						{$$ = new typeSpecifier("SIGNED");}
	| UNSIGNED						{$$ = new typeSpecifier("UNSIGNED");}
	| struct_or_union_specifier		{$$ = $1;}
	| enum_specifier				{$$ = $1;}
	//| TYPE_NAME //removed from lexer
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list	{$$ = new specifierList($1, $2);}
	| type_specifier							{$$ = $1;}
	| type_qualifier specifier_qualifier_list	{$$ = new qualifierList($1, $2);}
	| type_qualifier							{$$ = $1;}
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator				{$$ = $1;}
	;

direct_declarator //to be finished in ast
	: IDENTIFIER 										{$$ = new identifierDirectDeclarator(*$1);}
	| '(' declarator ')'								{$$ = $2;}
	| direct_declarator '[' constant_expression ']'		{$$ = new squareDirectDeclarator($1, $3);}
	| direct_declarator '[' ']'							{$$ = new squareDirectDeclarator($1, NULL);}
	| direct_declarator '(' parameter_type_list ')'		{$$ = new roundDirectDeclarator($1, $3);}
	| direct_declarator '(' identifier_list ')'			{$$ = new roundDirectDeclarator($1, $3);}
	| direct_declarator '(' ')'							{$$ = new roundDirectDeclarator($1, NULL);}
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list //in parameterlist.hpp
	: parameter_list				{$$ = $1;}
	| parameter_list ',' ELLIPSIS	{$$ = new elipsedParameterList($1);}
	;

parameter_list
	: parameter_declaration						{$$ = $1;}
	| parameter_list ',' parameter_declaration	{$$ = new parameterList($1, $3);}
	;

parameter_declaration
	: declaration_specifiers declarator				{$$ = new nonAbstractParameterDeclaration($1, $2); }
	| declaration_specifiers abstract_declarator	{$$ = new abstractParameterDeclaration($1, $2); }
	| declaration_specifiers						{$$ = $1;}
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list						{$$ = $1;}
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement		{$$ = $1;}
	| compound_statement	{$$ = $1;}
	| expression_statement	{$$ = $1;}
	| selection_statement	{$$ = $1;}
	| iteration_statement	{$$ = $1;}
	| jump_statement		{$$ = $1;}
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'									{$$ = new compoundStatement(NULL, NULL);}
	| '{' statement_list '}'					{$$ = new compoundStatement(NULL, $2);}
	| '{' declaration_list '}'					{$$ = new compoundStatement($2, NULL);}
	| '{' declaration_list statement_list '}'	{$$ = new compoundStatement($2, $3);}
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement					{$$ = $1;}
	| statement statement_list 	{$$ = new statementList($1, $2);}
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'	{$$ = new gotoJumpStatement(*$2);}
	| CONTINUE ';'			{$$ = new continueJumpStatement();}
	| BREAK ';'				{$$ = new breakJumpStatement();}
	| RETURN ';'			{$$ = new returnJumpStatement(NULL);}
	| RETURN expression ';'	{$$ = new returnJumpStatement($2);}
	;

translation_unit
	: external_declaration					{$$ = $1;}
	| translation_unit external_declaration	{$$ = new translationUnit($1, $2);}
	;

external_declaration
	: function_definition	{$$ = $1;}
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement		{$$ = new fullFunctionDefinition($1, $2, $3, $4) ;}
	| declaration_specifiers declarator compound_statement						{$$ = new noSpecifierFunctionDefinition($1, $2, $3) ;}
	| declarator declaration_list compound_statement							{$$ = new noListFunctionDefinition($1, $2, $3) ;}
	| declarator compound_statement												{$$ = new simpleFunctionDefinition($1, $2) ;}
	;

%%
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