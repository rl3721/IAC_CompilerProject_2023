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
    // Tree(TreeType _type, std::string _value, const std::vector<TreePtr> &_branches)
    //     : type(_type)
    //     , value(_value)
    //     , branches(_branches)
    // {}
    
    
    Tree(TreeType _type)
        : type(_type)
    {}
    Tree(TreeType _type, std::string _value)
        : type(_type)
        , sval(_value)
    {}
    Tree(TreeType _type, double _value) //long doubles are not supported by this ast
        : type(_type)
        , dval(_value)
    {}
    Tree(TreeType _type, TreePtr _content)
        : type(_type)
        , branches{_content}
    {}
    Tree(TreeType _type, TreePtr _left, TreePtr _right) 
        : type(_type)
        , branches{_left, _right}
    {}

    //naming convention based on if
    Tree(TreeType _type, TreePtr _condition, TreePtr _left, TreePtr _right) 
        : type(_type)
       , branches{_condition,_left, _right}
    {}

    //naming convention based on function_definition
    Tree(TreeType _type, TreePtr _specifier, TreePtr _declarator, TreePtr _list, TreePtr _statement) 
        : type(_type)
       , branches{_specifier, _declarator, _list, _statement}
    {}
    
    // template<class ...TArgs>
    // Tree(TreeType _type, TArgs ...args)
    //     : type(_type)
    //     , branches{args...}
    // {}


    /*the destructor*/
    ~Tree(){
        for (std::vector<const Tree*>::size_type i = 0; i<branches.size();i++){
            delete branches[i];
        }
    }
    /*for printing the ast with print_conanical*/
    void print(std::ostream &dst) const {
        dst <<"Node "<< type << " " << sval <<" " << dval << "[";
        for (std::vector<const Tree*>::size_type i = 0; i < branches.size(); i++) {
            branches[i]->print(dst);
        }
        dst << "]\n";
}
    TreeType type;
    double dval;
    std::string sval;
    std::vector<TreePtr> branches;
};



extern const Tree *parseAST();

#endif
