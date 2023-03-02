#ifndef ast_node_hpp
#define ast_node_hpp

#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <memory>


typedef const Tree *TreePtr;

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
    Tree(TreeType _type, TArgs ...args)
        : type(_type)
        , branches{args...}
    {}

    /*the destructor*/
    ~Tree(){
        for (int i = 0; i<branches.size();i++){
            delete branches[i];
        }
    }
    /*for printing the ast with print_conanical*/
    void print(std::ostream &dst){
        dst<<type<<":"<<value<<"[";
        for (int i = 0; i<branches.size();i++){
            branches[i]->print(dst);
        }
        dst<<"]\n";
    }


    TreeType type;
    std::string value;
    std::vector<TreePtr> branches;
};

enum TreeType{
    Identifier, //value = NAME
    Int_constant, Float_constant, //_value = CONSTANT
    Unary_operator, //_value = Operator
    While, For, If, 
    /*....*/
};


#endif
