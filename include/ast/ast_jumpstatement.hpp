#ifndef ast_jumpstatement_hpp
#define ast_jumpstatement_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>

class returnStatement //a0 aka x10 will be used as the result register, will worry about 
//more registers later. we don't need to care about long and I think double will probably use
//float registers, so let's only worry about a0 for now. 
    : public Tree
{
private:
protected:
public:
    TreePtr expression;
    returnStatement(TreePtr _expression)
        :expression( _expression)
    {}
    ~returnStatement(){
        delete expression;
    }
    
    unsigned int getSize(Context &context)const override{
        std::cerr<<"Error: getting size of return statement";
        exit(1);
    }
    std::string getId()const override{
        std::cerr<<"Error: getting id of return statement";
        exit(1);
    }
    void 
};

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







#endif

