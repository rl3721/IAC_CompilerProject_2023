#ifndef ast_switch_hpp
#define ast_switch_hpp

#include "ast_base.hpp"
#include "List.hpp"
#include <string>


class switchStatement
    : public Tree
{
private:
    
protected:
    TreePtr expression;
    TreePtr statement;
public:

    switchStatement(TreePtr _expression, TreePtr _statement)
        :expression(_expression),
        statement(_statement)
    {}
    virtual ~switchStatement()
    {}

    //virtual const char *getOpcode() const =0;
    virtual int getSize(Context &context)const override{
        return statement->getSize(context);
    }
    virtual std::string getId()const override{
        std::cerr<<"Error: getting id of translation unit";
        exit(1);
    }
    virtual void print(std::ostream &dst) const override
    {
        dst<<"switch statement: ";
        dst<<"expression:"<<std::endl;
        expression->print(dst);
        dst<<"statement:"<<std::endl;
        statement->print(dst);
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::string nextCase = context.makeupLabel("CASE");
        std::string endLabel = context.makeupLabel("switchEnd");
        context.stack.back().startLabel = nextCase;
        context.stack.back().endLabel = endLabel;
        expression->compile(dst,context,destReg);
        dst<<"j "<<nextCase<<std::endl;
        dst<<context.stack.back().startLabel<<":"<<std::endl;

        statement->compile(dst,context,destReg);
        dst<<endLabel<<":"<<std::endl;
    }
};

#endif

