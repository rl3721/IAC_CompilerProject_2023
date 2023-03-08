#ifndef ast_functiondefinition_hpp
#define ast_functiondefinition_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class functionDefinition
    : public Tree
{
private:
    
protected:
    TreePtr declaration_specifiers;
    TreePtr declarator;
    TreePtr declaration_list;
    TreePtr compound_statement;
    functionDefinition( TreePtr _declaration_specifiers,
        TreePtr _declarator,TreePtr _declaration_list,TreePtr _compound_statement)
        :declaration_specifiers(_declaration_specifiers),
        declarator(_declarator),
        declaration_list(_declaration_list),
        compound_statement(_compound_statement)
    {}
public:
    virtual ~functionDefinition()
    {delete declaration_specifiers;
    delete declarator;
    delete declaration_list;
    delete compound_statement;}

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"function definition:(";
        if (getOpcode() == "ds_d_dl_cs" || getOpcode() == "ds_d_cs"){
            declaration_specifiers->print(dst);
            dst<<" ";
        }
        declarator->print(dst);
        dst<<" ";
        if (getOpcode() == "ds_d_dl_cs" || getOpcode() == "d_dl_cs"){
            declaration_list->print(dst);
            dst<<" ";
        }
        compound_statement->print(dst);
        dst<<")\n";
    }
};
class fullFunctionDefinition
    : public functionDefinition
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "ds_d_dl_cs"; }
public:
    fullFunctionDefinition( TreePtr _declaration_specifiers,
        TreePtr _declarator,TreePtr _declaration_list,TreePtr _compound_statement)
        :functionDefinition(_declaration_specifiers,_declarator,_declaration_list,_compound_statement)
    {}
};


class noSpecifierFunctionDefinition
    : public functionDefinition
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "d_dl_cs"; }
public:
    noSpecifierFunctionDefinition(
        TreePtr _declarator,TreePtr _declaration_list,TreePtr _compound_statement)
        :functionDefinition(NULL,_declarator,_declaration_list,_compound_statement)
    {}
};

class noListFunctionDefinition
    : public functionDefinition
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "ds_d_cs"; }
public:
    noListFunctionDefinition( TreePtr _declaration_specifiers,
        TreePtr _declarator,TreePtr _compound_statement)
        :functionDefinition(_declaration_specifiers,_declarator,NULL,_compound_statement)
    {}
};

class simpleFunctionDefinition
    : public functionDefinition
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "d_cs"; }
public:
    simpleFunctionDefinition(
        TreePtr _declarator,TreePtr _compound_statement)
        :functionDefinition(NULL,_declarator,NULL,_compound_statement)
    {}
};






#endif

