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
    : public primaryExpression
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "identifier"; }
public:
    identifier(std::string _sval)
        :primaryExpression(_sval,0)
    {}
};


class intConstant
    : public primaryExpression
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "int"; }
public:
    intConstant(double _dval)
        :primaryExpression("int",_dval)
    {}
};

class floatConstant
    : public primaryExpression
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "double"; }
public:
    floatConstant(double _dval)
        :primaryExpression("double",_dval)
    {}
};



#endif

