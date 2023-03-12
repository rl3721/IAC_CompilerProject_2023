#ifndef ast_primaryexpression_hpp
#define ast_primaryexpression_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class primaryExpression
    : public Tree
{
private:
    
protected:
    std::string sval;
    double dval;

    primaryExpression(std::string _sval, double _dval)
        :sval(_sval),
        dval(_dval)
    {}
public:
    virtual ~primaryExpression()
    {}

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        if (getOpcode() == "identifier"){
            dst<<sval<<" ";
        }
        else{
            dst<<dval<<" ";
        }
    }
};

class identifier
    : public Tree
{
private:
protected:
public:
    std::string id;
    identifier(std::string _sval)
        :id(_sval)
    {}

    std::string getId()const override{
        return id;
    }
    unsigned int getSize()const override{
        return 1;
    }
    void compile(std::ostream &dst, Context &context, Reg destReg)const override{
        
    }
    void print(std::ostream &dst)const override{
        dst<<id<<std::endl;
    }
};


class intConstant
    : public Tree
{
private:
protected:
public:
    int val;
    intConstant(int _val)
        :val(_val)
    {}
    std::string getId()const override{
        return "";
    }
    unsigned int getSize()const override{
        return 4;
    }
    void compile(std::ostream &dst, Context &context, Reg destReg)const override{
        dst<<"addi "<<destReg<<", zero, "<<val<<std::endl;
    }
    void print(std::ostream &dst)const override{
        dst<<val<<std::endl;
    }
};



#endif

