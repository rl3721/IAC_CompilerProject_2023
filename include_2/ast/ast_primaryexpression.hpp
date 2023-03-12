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
        if (getOpcode() == "string"){
            dst<<sval<<" ";
        }
        else{
            dst<<dval<<" ";
        }
    }
};

class identifierPrimaryExpression
    : public primaryExpression
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "string"; }
public:
    identifierPrimaryExpression(std::string _sval)
        :primaryExpression(_sval,0)
    {}
};


class stringPrimaryExpression
    : public primaryExpression
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "string"; }
public:
    stringPrimaryExpression(std::string _sval)
        :primaryExpression(_sval,0)
    {}
};


class constantPrimaryExpression
    : public primaryExpression
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "constant"; }
public:
    constantPrimaryExpression(double _dval)
        :primaryExpression("double",_dval)
    {}
};


#endif

