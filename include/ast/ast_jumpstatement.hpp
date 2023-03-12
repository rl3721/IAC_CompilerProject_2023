#ifndef ast_jumpstatement_hpp
#define ast_jumpstatement_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class jumpStatement
    : public Tree
{
private:
    
protected:
    std::string identifier;
    TreePtr expression;

    jumpStatement(std::string _identifier, TreePtr _expression)
        :identifier(_identifier),
        expression(_expression)
    {}
public:
    virtual ~jumpStatement()
    {
    delete expression;
    }

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<getOpcode()<<" ";
        if (getOpcode() == "RETURN" && expression != NULL){
            expression->print(dst);
        }
        dst<<" \n";
    }
};


class continueJumpStatement
    : public jumpStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "CONTINUE"; }
public:
    continueJumpStatement()
        :jumpStatement("CONTINUE", NULL)
    {}
};

class breakJumpStatement
    : public jumpStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "BREAK"; }
public:
    breakJumpStatement()
        :jumpStatement("BREAK", NULL)
    {}
};
class returnJumpStatement
    : public jumpStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "RETURN"; }
public:
    returnJumpStatement(TreePtr _expression)
        :jumpStatement("RETURN", _expression)
    {}
};






#endif

