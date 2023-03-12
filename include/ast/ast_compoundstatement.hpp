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
public:
    compoundStatement(
        TreePtr _statement_list)
        :statement_list(_statement_list)
    {}
    virtual ~compoundStatement()
    {delete statement_list;
    }

    virtual void print(std::ostream &dst) const override
    {
        if (statement_list != NULL){
            statement_list->print(dst);
        }
    }
};

#endif

