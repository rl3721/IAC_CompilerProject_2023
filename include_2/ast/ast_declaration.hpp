#ifndef ast_declaration_hpp
#define ast_declaration_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class declaration
    : public Tree
{
private:
    
protected:
    TreePtr declaration_specifiers;
    TreePtr List;

   
public:
    declaration(
        TreePtr _declaration_specifiers,TreePtr _List)
        :declaration_specifiers(_declaration_specifiers),
        List(_List)
    {}
    virtual ~declaration()
    {delete declaration_specifiers;
    delete List;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"declaration: (";
        declaration_specifiers->print(dst);
        dst<<" ";
        List->print(dst);
        dst<<")\n";
    }
};

class initDeclarator
    : public Tree
{
private:
    
protected:
    TreePtr declarator;
    TreePtr initializer;

   
public:
    initDeclarator(
        TreePtr _declarator,TreePtr _initializer)
        :declarator(_declarator),
        initializer(_initializer)
    {}
    virtual ~initDeclarator()
    {delete declarator;
    delete initializer;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {   
        dst<<"initialize: ";
        declarator->print(dst);
        dst<<" = ";
        initializer->print(dst);
        dst<<"\n";
    }
};







#endif

