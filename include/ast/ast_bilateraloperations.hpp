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
        dst<<"(";
        left->print(dst);
        dst<<" "<<getOpcode()<<" ";
        right->print(dst);
        dst<<")";
    }
};

class logicalOrOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "OR"; }
public:
    logicalOrOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class logicalAndOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "AND"; }
public:
    logicalAndOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class inclusiveOrOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "|"; }
public:
    inclusiveOrOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class exclusiveOrOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "^"; }
public:
    exclusiveOrOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class andOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "&"; }
public:
    andOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class equalityOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "=="; }
public:
    equalityOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class inequalityOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "!="; }
public:
    inequalityOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class ltOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "<"; }
public:
    ltOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class gtOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return ">"; }
public:
    gtOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class leOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "<="; }
public:
    leOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class geOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return ">="; }
public:
    geOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class leftShiftOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "<<"; }
public:
    leftShiftOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class rightShiftOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return ">>"; }
public:
    rightShiftOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
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

class subOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "-"; }
public:
    subOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class mulOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "*"; }
public:
    mulOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class divOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "/"; }
public:
    divOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};

class modOperator
    : public bilateralOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "%"; }
public:
    modOperator(TreePtr _left,
        TreePtr _right)
        :bilateralOperations(_left,_right)
    {}
};




#endif

