#ifndef ast_specifierqualifierlist_hpp
#define ast_specifierqualifierlist_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class specifierQualifierList
    : public Tree
{
private:
    
protected:
    specifierQualifierList(TreePtr _SpecifierQualifier, TreePtr _List)
        :SpecifierQualifier(_SpecifierQualifier),
        List(_List)
    {}
public:
    TreePtr SpecifierQualifier;
    TreePtr List;
    
    virtual ~specifierQualifierList()
    {delete SpecifierQualifier;
    delete List;}

    virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<getOpcode()<<":(";
        SpecifierQualifier->print(dst);
        dst <<" ";
        List->print(dst);
        dst<<")\n";
    }
};

class specifierList
    : public specifierQualifierList
{
private:
protected:
    virtual const char *getOpcode() const override
        { return "specifier list"; }
public:
    specifierList(TreePtr _Specifier, TreePtr _List)
        : specifierQualifierList(_Specifier, _List)
    {}
};


class qualifierList
    : public specifierQualifierList
{
private:
protected:
    virtual const char *getOpcode() const override
        { return "qualifier list"; }
public:
    qualifierList(TreePtr _Qualifier, TreePtr _List)
        : specifierQualifierList(_Qualifier, _List)
    {}
};


#endif

