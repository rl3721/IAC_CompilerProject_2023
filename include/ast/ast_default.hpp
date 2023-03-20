#ifndef ast_default_hpp
#define ast_default_hpp

#include "ast_base.hpp"
#include "List.hpp"
#include <string>


class defaultStatement
    : public Tree
{
private:
    
protected:
    ListPtr statement;
public:
    defaultStatement(ListPtr _statement)
    :statement(_statement)
    {}
    virtual ~defaultStatement(){
        // delete branches[0];
        // delete branches[1];
    }

    //virtual const char *getOpcode() const =0;
    virtual int getSize(Context &context)const override{
        for(int i = 0; i < statement->size(); i++){
            statement->at(i)->getSize(context);
        }
        // return statement->getSize(context);
    }
    virtual std::string getId()const override{
        std::cerr<<"Error: getting id of case statement";
        exit(1);
    }
    virtual void print(std::ostream &dst) const override
    {
        dst<<"default statement: ";
        dst<<"statement:"<<std::endl;
        for(int i = 0; i < statement->size(); i++){
            statement->at(i)->print(dst);
        }
        // statement->print(dst);
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        // dst<<context.stack.back().startLabel<<":"<<std::endl;
        for(int i = 0; i < statement->size(); i++){
            statement->at(i)->compile(dst,context,destReg);
        }
        // statement->compile(dst,context,destReg);
    }
};

#endif

