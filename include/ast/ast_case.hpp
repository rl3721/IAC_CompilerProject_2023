#ifndef ast_case_hpp
#define ast_case_hpp

#include "ast_base.hpp"
#include "List.hpp"
#include <string>


class caseStatement
    : public Tree
{
private:
    
protected:
    TreePtr expression;
    TreePtr statement;
public:
    caseStatement(TreePtr _expression, TreePtr _statement)
    :expression(_expression),
    statement(_statement)
    {}
    virtual ~caseStatement(){
        // delete branches[0];
        // delete branches[1];
    }

    //virtual const char *getOpcode() const =0;
    virtual int getSize(Context &context)const override{
        return statement->getSize(context);
    }
    virtual std::string getId()const override{
        std::cerr<<"Error: getting id of case statement";
        exit(1);
    }
    virtual void print(std::ostream &dst) const override
    {
        dst<<"case statement: ";
        dst<<"expression:"<<std::endl;
        expression->print(dst);
        dst<<"statement:"<<std::endl;
        statement->print(dst);
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        dst<<context.stack.back().startLabel<<":"<<std::endl;
        int conReg = context.RegisterFile.allocate();
        expression->compile(dst,context,conReg);
        std::string nextCase = context.makeupLabel("CASE");
        dst<<"bne x"<<destReg<<", x"<<conReg<<", "<<nextCase<<std::endl;
        context.RegisterFile.freeReg(conReg);
        context.stack.back().startLabel = nextCase;
        statement->compile(dst,context,destReg);
    }
};

#endif

