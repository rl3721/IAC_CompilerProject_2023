#ifndef ast_iteration_statement
#define ast_iteration_statement

#include "ast_base.hpp"
#include <string>

class iterationStatement //involves if and while 
    : public Tree
{
private:
    
protected:
    TreePtr firstExpression;
    TreePtr secondExpression;
    TreePtr thirdExpression;
    TreePtr iterationBody;
    iterationStatement(TreePtr _firstExpression, TreePtr _secondExpression, TreePtr _thirdExpression, TreePtr _iterationBody)
        :firstExpression(_firstExpression),
        secondExpression(_secondExpression),
        thirdExpression(_thirdExpression),
        iterationBody(_iterationBody)
    {}
public:
    virtual ~iterationStatement()
    {
    delete firstExpression;
    delete secondExpression;
    delete thirdExpression;
    delete iterationBody;
    }

    virtual int getSize(Context &context) const override{
        // if (secondExpression != NULL && thirdExpression != NULL){
        //     return statementTrue->getSize(context) + statementFalse->getSize(context);
        // }
        return iterationBody->getSize(context);
        //if there are any declarations
    };
    virtual std::string getId()const override{
        std::cerr<<"Error: getting Id of selection statement";
        exit(1);
    };
    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"doing ieration"<<std::endl;
        dst<<"first expression:"<<std::endl;
        firstExpression->print(dst);
        if (secondExpression!=NULL){
            dst<<"second expression:"<<std::endl;
            secondExpression->print(dst);
        }
        if (thirdExpression!=NULL){
            dst<<"third expression:"<<std::endl;
            thirdExpression->print(dst);
        }
        dst<<"iteration body:"<<std::endl;
        iterationBody->print(dst);
    }

};

class forStatement
    : public iterationStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "FOR"; }
public:
    forStatement(TreePtr _firstExpression, TreePtr _secondExpression, TreePtr _thirdExpression, TreePtr _iterationBody)
        :iterationStatement(_firstExpression, _secondExpression, _thirdExpression, _iterationBody)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        firstExpression->compile(dst, context, destReg);
        std::string for_head = context.makeupLabel("for_head");
        std::string for_inner = context.makeupLabel("for_inner");
        std::string for_body = context.makeupLabel("for_body");
        std::string for_end = context.makeupLabel("for_end");
        dst<<for_head<<":"<<std::endl;
        secondExpression->compile(dst, context, destReg);
        dst<<"beq x"<<destReg<<", zero, "<<for_end<<std::endl;  //if condition does not hold go to for_end
        dst<<"j "<<for_body<<std::endl;                 //if condition holds, go to iteration body
        dst<<for_body<<":"<<std::endl;
        iterationBody->compile(dst, context, destReg); //do iteration body
        dst<<"j "<<for_inner<<std::endl;             
        dst<<for_inner<<":"<<std::endl;
        thirdExpression->compile(dst, context, destReg);
        dst<<"j "<<for_head<<std::endl; 
        dst<<for_end<<":"<<std::endl;
    }
};



class whileStatement
    : public iterationStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "WHILE"; }
public:
    whileStatement(TreePtr _firstExpression, TreePtr _secondExpression, TreePtr _thirdExpression, TreePtr _iterationBody)
        :iterationStatement(_firstExpression, _secondExpression, _thirdExpression, _iterationBody)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string while_head_Label = context.makeupLabel("while_head");
        std::string while_body_Label = context.makeupLabel("while_body");
        std::string while_end_Label = context.makeupLabel("while_end");
        context.stack.back().endLabel = while_end_Label;
        context.stack.back().startLabel = while_head_Label;
        dst<<"j "<<while_head_Label<<std::endl;
        dst<<while_head_Label<<":"<<std::endl;
        firstExpression->compile(dst, context, destReg);
        dst<<"beq x"<<destReg<<", zero, "<<while_end_Label<<std::endl;
        dst<<"j "<<while_body_Label<<std::endl;
        dst<<while_body_Label<<":"<<std::endl;
        iterationBody->compile(dst, context, destReg);
        dst<<"j "<<while_head_Label<<std::endl;
        dst<<while_end_Label<<":"<<std::endl;
    }
};


#endif
