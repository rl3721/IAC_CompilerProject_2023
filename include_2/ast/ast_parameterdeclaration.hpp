#ifndef ast_parameterdeclaraion_hpp
#define ast_parameterdeclaraion_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class parameterDeclaration
    : public Tree
{
private:
    
protected:
    TreePtr specifiers;
    TreePtr declarator;
    parameterDeclaration( TreePtr _specifiers,
        TreePtr _declarator)
        :specifiers(_specifiers),
        declarator(_declarator)   
    {}
public:


    virtual ~parameterDeclaration()
    {delete specifiers;
    delete declarator;
    }

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<getOpcode()<<" ( ";
        specifiers->print(dst);
        dst<<"  ";
        declarator->print(dst);
        dst<<")\n";
    }
};

class abstractParameterDeclaration
    : public parameterDeclaration
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "abstract"; }
public:
    abstractParameterDeclaration( TreePtr _specifiers,
        TreePtr _declarator)
        :parameterDeclaration(_specifiers,_declarator)
    {}
};

class nonAbstractParameterDeclaration
    : public parameterDeclaration
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "nonabstract"; }
public:
    nonAbstractParameterDeclaration( TreePtr _specifiers,
        TreePtr _declarator)
        :parameterDeclaration(_specifiers,_declarator)
    {}
};

#endif

