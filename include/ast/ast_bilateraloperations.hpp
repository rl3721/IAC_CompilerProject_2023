#ifndef ast_bilateralOperations_hpp
#define ast_bilateralOperations_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class bilateralOperations 
//this involves any arithmetic/binary/boolean operations which takes two inputs.
//It doesn't deal with assignments and only deals with "subsets of expressions"
    : public Tree
{
private:
    
protected:
    TreePtr left;
    TreePtr right;
    bilateralOperations( TreePtr _left,
        TreePtr _right)
        :left(_left),
        right(_right)
    {}
public:


    virtual ~bilateralOperations()
    {delete left;
    delete right;}

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        left->print(dst);
        dst<<" "<<getOpcode()<<" ";
        right->print(dst);
    }
};

class addOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "+"; }
public:
    addOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};


#endif

