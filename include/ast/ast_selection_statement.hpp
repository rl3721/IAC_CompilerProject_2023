#ifndef ast_selection_statement
#define ast_selection_statement

#include "ast_base.hpp"
#include <string>

class selectStatement //involves if and while 
    : public Tree
{
private:
    
protected:
    TreePtr condition;
    TreePtr statementTrue;
    TreePtr statementFalse;
    selectStatement(TreePtr _condition, TreePtr _statementTrue, TreePtr _statementFalse)
        :condition(_condition),
        statementTrue(_statementTrue),
        statementFalse(_statementFalse)
    {}
public:
    virtual ~selectStatement()
    {
    delete condition;
    delete statementTrue;
    delete statementFalse;
    }

    virtual int getSize(Context &context) const override{
        return condition->getSize(context) + statementTrue->getSize(context) + statementFalse->getSize(context);
    };
    virtual std::string getId()const override{};
    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"doing selection"<<"\n ";
    }

    // int doCondition(std::ostream &dst, Context &context, int destReg) const{
    //     // int LeftReg = context.RegisterFile.allocate();
    //     condition->compile(dst, context, destReg);
    //     return destReg;
    // }

    // int d(std::ostream &dst, Context &context, int destReg) const{
    //     // int LeftReg = context.RegisterFile.allocate();
    //     condition->compile(dst, context, destReg);
    //     return destReg;
    // }
};


class ifElseStatement
    : public selectStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "IF"; }
public:
    ifElseStatement(TreePtr _condition, TreePtr _statementTrue, TreePtr _statementFalse)
        :selectStatement(_condition, _statementTrue, _statementFalse)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        if (statementFalse != NULL){ //for statement has both if and else
            std::cerr<<"do if with else"<<std::endl;
            std::string if_Lable = context.makeupLabel("IF_TRUE");
            std::string else_Lable = context.makeupLabel("ELSE");
            std::string end_Lable = context.makeupLabel("IF_END");
            condition->compile(dst, context, destReg);                 //get the result of the condition      
            dst<<"beq x"<<destReg<<", zero, "<<else_Lable<<std::endl; //if the condition is zero go to else
            dst<<"j "<< if_Lable<<std::endl; //if condition is 1 go to if true 
            dst<<if_Lable<<":"<<std::endl; //output if true label
            statementTrue->compile(dst, context, destReg); //compile statement true
            dst<<"j "<< end_Lable<<std::endl; //if ends go to end
            dst<<else_Lable<<":"<<std::endl; //output label for else
            statementFalse->compile(dst, context, destReg); //complie statement false
            dst<<"j "<< end_Lable<<std::endl; //if ends go to end
            dst<<end_Lable<<":"<<std::endl; //output label for end
        }
        else{ //for statement only has if'
            std::cerr<<"do if without else"<<std::endl;
            std::string if_Lable = context.makeupLabel("IF_TRUE");
            std::string end_Lable = context.makeupLabel("IF_END");
            condition->compile(dst, context, destReg);                 //get the result of the condition      
            dst<<"beq x"<<destReg<<", zero, "<<end_Lable<<std::endl; //if the condition is zero go to end
            dst<<"j "<< if_Lable<<std::endl; //if condition is 1 go to if true 
            dst<<if_Lable<<":"<<std::endl; //output if true label
            statementTrue->compile(dst, context, destReg); //compile statement true
            dst<<"j "<< end_Lable<<std::endl; //if ends go to end
            dst<<end_Lable<<":"<<std::endl; //output label for end 
        }
    }
};






class whileStatement
    : public selectStatement
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "IF"; }
public:
    whileStatement(TreePtr _condition, TreePtr _statementTrue, TreePtr _statementFalse)
        :selectStatement(_condition, _statementTrue, _statementFalse)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        
    }
};


#endif