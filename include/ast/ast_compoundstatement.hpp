#ifndef ast_compoundstatement_hpp
#define ast_compoundstatement_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class compoundStatement
    : public Tree
{
private:
protected:
    ListPtr list;
public:
    compoundStatement(
        ListPtr _statement_list)
        :list(_statement_list)
    {}
    virtual ~compoundStatement()
    {delete list;
    }
    int getSize(Context &context)const override{
        int size = 0;
        if (list == NULL){
            return 0;
        }
        else{
            for (int i = 0; i < list->size();i++){
                size += list->at(i)->getSize(context);
                //std::cerr<<"size"<<size;
            }
            return size;
        }
    }
    std::string  getId()const override{
        std::cerr<<"Error: getting id of compound statement";
        //exit(1);
    }

    virtual void print(std::ostream &dst) const override
    {
        if (list != NULL){
            for(int i=0; i<list->size();i++){
                list->at(i)->print(dst);
            }
        }
    }
    virtual void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::cerr<<"entering subscope"<<std::endl;
        context.enterScope();
        if (list != NULL){
            for(int i=0; i<list->size();i++){
                list->at(i)->compile(dst,context,destReg);
            }
        }
        context.exitScope();
        std::cerr<<"exiting subscope"<<std::endl;
    }
};

#endif

