#ifndef ast_statementlist_hpp
#define ast_statementlist_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class statementList
    : public Tree
{
private:
    
protected:
public:
    TreePtr statement;
    TreePtr List;
    
    statementList(TreePtr _statement, TreePtr _List)
        :statement(_statement),
        List(_List)
    {}
    virtual ~statementList()
    {delete statement;
    delete List;}

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        List->print(dst);
        dst <<" ";
        statement->print(dst);
        dst<<"\n";
    }
};


#endif

