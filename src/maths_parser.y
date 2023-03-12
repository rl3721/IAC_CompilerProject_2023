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
  TreePtr tree;
  ListPtr list;
  int ival;
  double dval;
  std::string *string;
}

%token <ival> CONSTANT_INT
%token <dval> CONSTANT_FLOAT
%token <string> IDENTIFIER STRING_LITERAL //I won't actually use strings for now

%token  SIZEOF PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token  AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token  SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token  XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token  TYPEDEF EXTERN STATIC AUTO REGISTER
%token  CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token  STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%token HELLO_WORLD

//
%type <tree> ROOT

//declaration related
%type <tree> function_definition external_declaration //global declarations
%type <tree> direct_declarator declarator init_declarator
%type <tree> initializer 
%type <tree> parameter_declaration declaration
	//specifiers
%type <tree> storage_class_specifier struct_or_union_specifier enum_specifier
%type <tree> type_specifier type_qualifier declaration_specifiers 
	//struct enum related
%type <tree> struct_declaration struct_or_union struct_declarator
%type <tree> enumerator
	//pointer related
%type <tree> abstract_declarator direct_abstract_declarator type_name

//Statement
%type <tree> statement
%type <tree> labeled_statement compound_statement jump_statement
%type <tree> expression_statement selection_statement iteration_statement 
%type <tree> declaration_or_statement declaration_or_statement_list

//expressions
%type <tree> primary_expression postfix_expression unary_expression 
%type <tree> cast_expression multiplicative_expression additive_expression
%type <tree> shift_expression relational_expression equality_expression
%type <tree> and_expression exclusive_or_expression inclusive_or_expression 
%type <tree> logical_and_expression logical_or_expression conditional_expression
%type <tree> assignment_expression expression constant_expression

//list
%type <list> translation_unit //list of external_declaration
%type <list> argument_expression_list init_declarator_list struct_declaration_list 
%type <list> specifier_qualifier_list struct_declarator_list enumerator_list
%type <list>  parameter_type_list identifier_list parameter_list
%type <list> initializer_list
//%type <tree> declaration_list statement_list

//operator
%type <tree> unary_operator //assignment_operator

%start ROOT
%%

ROOT
	://translation_unit {g_root = $1;}
	//|IDENTIFIER  {g_root = new helloWorld();}
	//|expression  {g_root = $1;}
	|declaration  {g_root = $1;}
	//|HELLO_WORLD {g_root = new helloWorld();}
	;

translation_unit
	: external_declaration					{$$ = initList($1);}
	| translation_unit external_declaration	{$$ = concatList($1,$2);}
	;
/*********************Declarations**************************************/

external_declaration //global declarations
	: function_definition	{$$ = $1;}
	| declaration			{$$ = $1;}
	;
	/**********Used for all declations********/

type_specifier
	: VOID							{$$ = new typeSpecifier(variable_types::_void);}
	| CHAR							//{$$ = new typeSpecifier("CHAR");}
	| SHORT							{std::cerr<<"short not assessed";exit(1);}
	| INT							{$$ = new typeSpecifier(variable_types::_int);}
	| LONG							{std::cerr<<"long not spported";exit(1);}
	| FLOAT							//{$$ = new typeSpecifier("FLOAT");}
	| DOUBLE						//{$$ = new typeSpecifier("DOUBLE");}
	| SIGNED						//{$$ = new typeSpecifier("INT");} //this is wrong, but just let it be
	| UNSIGNED						//{$$ = new typeSpecifier("UNSIGNED");}
	| struct_or_union_specifier		{$$ = $1;} //may be do struct
	| enum_specifier				{$$ = $1;} //todo enum
	//| TYPE_NAME //removed from lexer
	;

storage_class_specifier
	: TYPEDEF //todo
	| EXTERN		{std::cerr<<"Extern not assessed"; exit(1);}
	| STATIC		{std::cerr<<"static not assessed"; exit(1);}
	| AUTO			{std::cerr<<"auto not assessed"; exit(1);}
	| REGISTER		{std::cerr<<"register not assessed"; exit(1);}
	;

type_qualifier //not assesed
	: CONST			{std::cerr<<"not assessed"; exit(1);}
	| VOLATILE		{std::cerr<<"not assessed"; exit(1);}
	;

declaration_specifiers
	: storage_class_specifier							//todo typedef
	| storage_class_specifier declaration_specifiers	//todo typedef
	| type_specifier									{$$ = $1;}
	| type_specifier declaration_specifiers				{std::cerr<<"long short... concat data types not assessed"<<std::endl; exit(1);}
	//| type_qualifier
	//| type_qualifier declaration_specifiers
	;

direct_declarator 
	: IDENTIFIER 										{$$ = new variableDeclarator(*$1);}
	| '(' declarator ')'								{$$ = $2;}
	| direct_declarator '[' constant_expression ']'		//{$$ = new arrayDeclarator($1, $3);}
	| direct_declarator '[' ']'							//{$$ = new arrayDeclarator($1, NULL);}
	| direct_declarator '(' parameter_type_list ')'		//{$$ = new functionDeclarator($1, $3);}
	| direct_declarator '(' identifier_list ')'			//{$$ = new functionDeclarator($1, $3);}
	| direct_declarator '(' ')'							//{$$ = new functionDeclarator($1, NULL);}
	;

declarator
	: pointer direct_declarator		//todo pointer
	| direct_declarator				{$$ = $1;}
	;

type_name
	: specifier_qualifier_list						//{$$ = $1;}
	| specifier_qualifier_list abstract_declarator//todo pointers
	;
	/***********variable declaration************/

declaration
	: declaration_specifiers ';' 						{std::cerr<<"variable with no name";exit(1);} //I am not sure if this actually does anything, variable with no name?
															//okay I think it just increases the scope offset by size of the speicifer, I will do that later
	| declaration_specifiers init_declarator_list ';'	{$$ = new declaration($1, $2);}
	;

init_declarator
	: declarator					{$$ = $1;}
	| declarator '=' initializer	{$$ = new initDeclarator($1, $3);} //in declaration, 
	;
initializer
	: assignment_expression			{$$ = $1;} //I really think should be conditional_expression, I am going to work as it is
	| '{' initializer_list '}'		//todo: initList
	| '{' initializer_list ',' '}'	//todo: initList
	;	

	/************function definition************/

function_definition //type, identifier(parameter?), {statements}
	: declarator compound_statement												{std::cerr<<"function witout type"<<std::endl;}
	| declaration_specifiers declarator compound_statement						//{$$ = new functionDefinition($1, $2, $3) ;}
	//| declarator declaration_list compound_statement							{std::cerr<<"function witout type"<<std::endl;}
	//| declaration_specifiers declarator declaration_list compound_statement		{std::cerr<<"unsupported: for struct Constructor function?" ;}
	;

parameter_declaration
	: declaration_specifiers declarator				//{$$ = new declaration($1, $2); } //similar to variable declaration
	| declaration_specifiers abstract_declarator	 //todo:pointers
	| declaration_specifiers						{std::cerr<<"parameter with no name";exit(1);}//not sure what this does
	;

	/***********enum related******************/
enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;
enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

	/*******pointer related*******/
pointer
	: '*'	//todo: pointers
	| '*' type_qualifier_list		//not assessed
	| '*' pointer		//todo: pointers
	| '*' type_qualifier_list pointer	//not assessed
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


	/**************struct related************/
struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;
struct_or_union
	: STRUCT //prob not gonna get to it
	| UNION		{std::cerr<<"union not assessed"; exit(1);}
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;
struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;
struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

/**********************************Lists*****************************************/
specifier_qualifier_list //for struct and type name
	: specifier_qualifier_list type_specifier 	{$$ = concatList($1, $2);}
	| type_specifier							{$$ = initList($1);}
	| specifier_qualifier_list type_qualifier 	//not assessed
	| type_qualifier							//not assessed
	;
struct_declarator_list
	: struct_declarator								{$$ = initList($1);}
	| struct_declarator_list ',' struct_declarator	{$$ = concatList($1, $3);}
	;
init_declarator_list
	: init_declarator							{$$ = initList($1);}
	| init_declarator_list ',' init_declarator	{$$ = concatList($1, $3);}
	;
enumerator_list
	: enumerator						{$$ = initList($1);}
	| enumerator_list ',' enumerator	{$$ = concatList($1, $3);}
	;
initializer_list //Todo
	: initializer						{$$ = initList($1);}
	| initializer_list ',' initializer	{$$ = concatList($1, $3);}
	;
identifier_list
	: IDENTIFIER						{$$ = initList(new identifier(*$1));}
	| identifier_list ',' IDENTIFIER	{$$ = concatList($1, new identifier(*$3));}
	;
type_qualifier_list //not assessed, but saved as place holder
	: type_qualifier
	| type_qualifier_list type_qualifier
	;
parameter_type_list//actually just equivalent to parameter_list
	: parameter_list				{$$ = $1;}
	| parameter_list ',' ELLIPSIS	{std::cerr<<"ellipsed parameters not assessed"<<std::endl; exit(1);}
	;
parameter_list
	: parameter_declaration						{initList($1);}
	| parameter_list ',' parameter_declaration	{$$ = concatList($1, $3);}
	;
argument_expression_list
	: assignment_expression									{initList($1);}
	| argument_expression_list ',' assignment_expression	{$$ = concatList($1, $3);}
	;

declaration_or_statement
	: declaration	{$$ = $1;}
	| statement		{$$ = $1;}

declaration_or_statement_list
	: declaration_or_statement								{$$ = initList($1);}
	| declaration_or_statement_list declaration_or_statement {$$ = concatList($1, $2);}

/***********************************Statements**************************************************/
statement
	: labeled_statement		{$$ = $1;}
	| compound_statement	{$$ = $1;}
	| expression_statement	{$$ = $1;}
	| selection_statement	{$$ = $1;}
	| iteration_statement	{$$ = $1;}
	| jump_statement		{$$ = $1;}
	;

labeled_statement //case and switch todo
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

expression_statement
	: ';'				{$$ = NULL;}//do nothing
	| expression ';'	{$$ = $1;}
	;

selection_statement
	: IF '(' expression ')' statement					//{$$ = new ifElse($3,$5);}
	| IF '(' expression ')' statement ELSE statement	//{$$ = new ifElse($3,$5,$7);}
	| SWITCH '(' expression ')' statement//todo switch
	;

iteration_statement
	: WHILE '(' expression ')' statement				
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'	//{std::cerr<<"goto not assessed"; exit(1);}
	| CONTINUE ';'			//{$$ = new continueJumpStatement();}
	| BREAK ';'				//{$$ = new breakJumpStatement();}
	| RETURN ';'			//{$$ = new returnJumpStatement(NULL);}
	| RETURN expression ';'	//{$$ = new returnJumpStatement($2);}
	;

compound_statement
	: '{' '}'									//{$$ = new compoundStatement(NULL);}
	| '{'declaration_or_statement_list '}'      //{{$$ = new compoundStatement($2);}}//replacing below lines to allow different sequence
	//| '{' statement_list '}'					//{$$ = new compoundStatement(NULL, $2);}
	//| '{' declaration_list '}'					//{$$ = new compoundStatement($2, NULL);}
	//| '{' declaration_list statement_list '}'	{$$ = new compoundStatement($2, $3);}
	;

/*statement_list
	: statement					{$$ = $1;}
	| statement statement_list 	{$$ = new statementList($1, $2);}
	;
declaration_list //also in statementlist_hpp
	: declaration					{$$ = $1;}
	| declaration declaration_list 	{$$ = new declarationList($1, $2);}
	;*/

/*****************************Expressions**********************************/

primary_expression
	: IDENTIFIER			{$$ = new identifier(*$1);}
	| CONSTANT_INT			{$$ = new intConstant($1);}
	| CONSTANT_FLOAT				//{$$ = new floatConstant($1);}
	| STRING_LITERAL		//{$$ = new stringPrimaryExpression(*$1);} //don't bother with this for now
	| '(' expression ')'	{$$ = $2;} 
	;

postfix_expression 
	: primary_expression									{$$ = $1;}
	| postfix_expression '[' expression ']'//todo array indexing
	| postfix_expression '(' ')'							//{$$ = new functionCall($1, NULL);}
	| postfix_expression '(' argument_expression_list ')'	//{$$ = new functionCall($1, $3);}
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
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
	| multiplicative_expression '*' cast_expression //{$$ = new mulOperator($1, $3);}
	| multiplicative_expression '/' cast_expression	//{$$ = new divOperator($1, $3);}
	| multiplicative_expression '%' cast_expression	//{$$ = new modOperator($1, $3);}
	;

additive_expression
	: multiplicative_expression							{$$ = $1;}
	| additive_expression '+' multiplicative_expression	//{$$ = new addOperator($1, $3);}
	| additive_expression '-' multiplicative_expression	//{$$ = new subOperator($1, $3);}
	;

shift_expression
	: additive_expression							{$$ = $1;}
	| shift_expression LEFT_OP additive_expression	//{$$ = new leftShiftOperator($1, $3);}
	| shift_expression RIGHT_OP additive_expression	//{$$ = new rightShiftOperator($1, $3);}
	;

relational_expression
	: shift_expression									{$$ = $1;}
	| relational_expression '<' shift_expression		//{$$ = new ltOperator($1, $3);}
	| relational_expression '>' shift_expression		//{$$ = new gtOperator($1, $3);}
	| relational_expression LE_OP shift_expression		//{$$ = new leOperator($1, $3);}
	| relational_expression GE_OP shift_expression		//{$$ = new geOperator($1, $3);}
	;

equality_expression
	: relational_expression								{$$ = $1;}
	| equality_expression EQ_OP relational_expression	//{$$ = new equalityOperator($1, $3);}
	| equality_expression NE_OP relational_expression	//{$$ = new inequalityOperator($1, $3);}
	;

and_expression
	: equality_expression						{$$ = $1;}
	| and_expression '&' equality_expression	//{$$ = new andOperator($1, $3);}
	;

exclusive_or_expression
	: and_expression								{$$ = $1;}
	| exclusive_or_expression '^' and_expression	//{$$ = new exclusiveOrOperator($1, $3);}
	;

inclusive_or_expression
	: exclusive_or_expression								{$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression	//{$$ = new inclusiveOrOperator($1, $3);}
	;

logical_and_expression
	: inclusive_or_expression								{$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression	//{$$ = new logicalAndOperator($1, $3);}
	;

logical_or_expression
	: logical_and_expression								{$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression	//{$$ = new logicalOrOperator($1, $3);}
	;

conditional_expression
	: logical_or_expression												{$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression								{$$ = $1;}
	| unary_expression '=' assignment_expression			//{$$ = new assignmentExpression($1,$3);}
	| unary_expression MUL_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new mulOperator($1,$3));}
	| unary_expression DIV_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new divOperator($1,$3));}
	| unary_expression MOD_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new modOperator($1,$3));}
	| unary_expression ADD_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new addOperator($1,$3));}
	| unary_expression SUB_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new subOperator($1,$3));}
	| unary_expression LEFT_ASSIGN assignment_expression	//{$$ = new assignmentExpression($1, new leftShiftOperator($1,$3));}
	| unary_expression RIGHT_ASSIGN assignment_expression	//{$$ = new assignmentExpression($1, new rightShiftOperator($1,$3));}
	| unary_expression AND_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new andOperator($1,$3));}
	| unary_expression XOR_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new exclusiveOrOperator($1,$3));}
	| unary_expression OR_ASSIGN assignment_expression		//{$$ = new assignmentExpression($1, new inclusiveOrOperator($1,$3));}
	;


expression
	: assignment_expression					{$$ = $1;}
	| expression ',' assignment_expression	{std::cerr<<"not assessed"; exit(1);}
	;

constant_expression
	: conditional_expression	{$$ = $1;}
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