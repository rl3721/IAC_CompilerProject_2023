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
    virtual ~returnStatement(){
        delete expression;
    }

    int getSize(Context &context)const override{
        //return 0; //comment this once after getSize for expression is fixed
        return expression->getSize(context);
    }
    std::string getId()const override{
        std::cerr<<"Error: getting id of return statement";
        exit(1);
    }
    void print(std::ostream &dst) const override
    {
        dst<<"RETURN ";
        if (expression != NULL){
            expression->print(dst);
        }
        dst<<" \n";
    }
    void compile(std::ostream &dst, Context &context, int destReg) const override{
        if (expression != NULL){
            int returnReg = context.RegisterFile.allocate();
            expression->compile(dst,context,returnReg); //store the result in a0 aka the return register
            if(context.RegisterFile.type == 2){
                dst<<"fcvt.w.s a0, f"<<returnReg<<", rtz"<<std::endl;
            }
            else{
                dst<<"mv a0, x"<<returnReg<<std::endl;
            }
            context.RegisterFile.freeReg(returnReg); 
        }
        std::cerr<<"returning"<<std::endl;
        dst<<"j "<<context.stack.back().returnLabel<<std::endl;
    }
};
class continueStatement 
    : public Tree
{
private:
protected:
public:
    continueStatement()
    {}
    virtual ~continueStatement(){}

    int getSize(Context &context)const override{
        return 0;
    }
    std::string getId()const override{
        std::cerr<<"Error: getting id of continue statement";
        exit(1);
    }
    void print(std::ostream &dst) const override
    {
        dst<<"break ";
        dst<<" \n";
    }
    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::cerr<<"returning"<<std::endl;
        dst<<"j "<<context.stack.back().startLabel<<std::endl;
    }
};

class breakStatement 
    : public Tree
{
private:
protected:
public:
    breakStatement()
    {}
    virtual ~breakStatement(){}

    int getSize(Context &context)const override{
        return 0;
    }
    std::string getId()const override{
        std::cerr<<"Error: getting id of break statement";
        exit(1);
    }
    void print(std::ostream &dst) const override
    {
        dst<<"break ";
        dst<<" \n";
    }
    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::cerr<<"returning"<<std::endl;
        dst<<"j "<<context.stack.back().endLabel<<std::endl;
    }
};


#endif

