#ifndef ast_tree_hpp
#define ast_tree_hpp

#include <string>
#include <iostream>
#include <vector>


struct Tree;

typedef const Tree *TreePtr;

enum TreeType{
    goodbye_world, //0
    Identifier, //1: value = NAME
    typeSpecifier, //2: value = INT, FLOAT, DOUBLE, SIGNED ....
    specifierQualifierList, //3, [specifier/qualifier, specifierQualifierList?] 
    functionDefinition, //4, [declarationSpecifiers/NULL, declarator, declarationList/NULL, compoundStatement]!
    compoundStatement, //5 tbc
    directDeclarator,
    Int_constant, //2
    Float_constant, //3: _value = CONSTANT
    Unary_operator, //4_value = Operator
    While, 
    For, 
    If
};

struct Tree
{
    /* different types of constructors used*/
    Tree(TreeType _type, std::string _value, const std::vector<TreePtr> &_branches)
        : type(_type)
        , value(_value)
        , branches(_branches)
    {}
    
    Tree(TreeType _type, std::string _value)
        : type(_type)
        , value(_value)
    {}

    Tree(TreeType _type, double _value) //long doubles are not supported by this ast
        : type(_type)
        , value(std::to_string(_value))
    {}
    
    template<class ...TArgs>
    Tree(int _type, TArgs ...args)
        : type(_type)
        , branches{args...}
    {}

    Tree(TreeType _type)
        : type(_type)
    {}

    /*the destructor*/
    ~Tree(){
        for (std::vector<const Tree*>::size_type i = 0; i<branches.size();i++){
            delete branches[i];
        }
    }
    /*for printing the ast with print_conanical*/
    void print(std::ostream &dst) const {
        dst << type << ":" << value << "[";
        for (std::vector<const Tree*>::size_type i = 0; i < branches.size(); i++) {
            branches[i]->print(dst);
        }
        dst << "]\n";
}
    TreeType type;
    std::string value;
    std::vector<TreePtr> branches;
};



extern const Tree *parseAST();

#endif
