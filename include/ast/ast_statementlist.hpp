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
    TreePtr statement;
    TreePtr List;
public:
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

class declarationList
    : public Tree
{
private:
    
protected:
    TreePtr declaration;
    TreePtr List;
public:
    declarationList(TreePtr _declaration, TreePtr _List)
        : declaration(_declaration),
        List(_List)
    {}
    virtual ~declarationList()
    {delete  declaration;
    delete List;}

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        List->print(dst);
        dst <<" ";
        declaration->print(dst);
        dst<<"\n";
    }
};


#endif

