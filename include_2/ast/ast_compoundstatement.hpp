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
    TreePtr statement_list;
    TreePtr declaration_list;
public:
    compoundStatement(
        TreePtr _declaration_list,TreePtr _statement_list)
        :statement_list(_statement_list),
        declaration_list(_declaration_list)
    {}
    virtual ~compoundStatement()
    {delete statement_list;
    delete declaration_list;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"{ ";
        if (declaration_list != NULL){
            declaration_list->print(dst);
        }
        if (statement_list != NULL){
            statement_list->print(dst);
        }
        dst<<" }\n";
    }
};

#endif

