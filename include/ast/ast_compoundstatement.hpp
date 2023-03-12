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
    unsigned int getSize()const override{
        std::cerr<<"Error: getting size of statement";
        //exit(1);
    }
    std::string  getId()const override{
        std::cerr<<"Error: getting id of statement";
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
    virtual void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        if (list != NULL){
            for(int i=0; i<list->size();i++){
                list->at(i)->compile(dst,context,destReg);
            }
        }

    }
};

#endif

