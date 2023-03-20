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
    // List expressionList = List();
    // List statementList = List();
public:
    caseStatement(TreePtr _expression, TreePtr _statement)
    :expression(_expression),
    statement(_statement)
    {
        // expressionList.push_back(_expression);
        // statementList.push_back(_statement);
        // branches.push_back(_expression);
        // branches.push_back(_statement);
    }
    virtual ~caseStatement(){
        // delete branches[0];
        // delete branches[1];
        // for(int i = 0; i < expressionList.size(); i++){
        //     delete expressionList[i];
        //     delete statementList[i];
        // }
    }

    //virtual const char *getOpcode() const =0;
    virtual int getSize(Context &context)const override{
        // for(int i = 0; i < statement->size(); i++){
        //     statement->at(i)->getSize(context);
        // }
        return statement->getSize(context);
        // int size = 0;
        // for(int i = 0; i < statementList.size(); i++){
        //     size += statementList[i]->getSize(context);
        // }
        // return branches[1]->getSize(context);
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
        // for(int i = 0; i < statement->size(); i++){
        //     statement->at(i)->print(dst);
        // }
        // statement->print(dst);
        // for(int i = 0; i < expressionList.size(); i++){
        //     expressionList[i]->print(dst);
        //     dst<<"expression:"<<std::endl;
        //     statementList[i]->print(dst);
        //     dst<<"statement:"<<std::endl;
        // }
        // dst<<"expression:"<<std::endl;
        // branches[0]->print(dst);
        // dst<<"statement:"<<std::endl;
        // branches[1]->print(dst);
    }

     virtual void compile(std::ostream &dst, Context &context, int destReg) const override{
        // dst<<context.stack.back().startLabel<<":"<<std::endl;
        int conReg = context.RegisterFile.allocate();
        // expressionList[index]->compile(dst,context,conReg);
        expression->compile(dst,context,conReg);
        std::string nextCase = context.makeupLabel("CASE");
        context.stack.back().startLabel = nextCase;
        dst<<"bne x"<<destReg<<", x"<<conReg<<", "<<nextCase<<std::endl;
        context.RegisterFile.freeReg(conReg);
        // int i = 0;
        // while(statement->at(i)!=nullptr){
        //     statement->at(i)->compile(dst,context,destReg);
        //     i++;
        //     dst<<i<<std::endl;
        // }
        // dst<<"startCase-------------------"<<std::endl;
        // for(int i = 0; i < statementList.size(); i++){
        //     statementList[i]->compile(dst,context,destReg);
        //     dst<<i<<std::endl;
        // }
        // statementList[index]->compile(dst,context,destReg);
        statement->compile(dst,context,destReg);
        // dst<<"endCase----------------------"<<std::endl;
        dst<<context.stack.back().startLabel<<":"<<std::endl;
    }
};

#endif

