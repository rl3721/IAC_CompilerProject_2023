#ifndef ast_directdeclarator_hpp
#define ast_directdeclarator_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class directDeclarator
    : public Tree
{
private:
    
protected:
    directDeclarator(std::string _identifier,
        TreePtr _direct_declarator,TreePtr _content)
        :identifier(_identifier),
        direct_declarator(_direct_declarator),
        content(_content)
    {}
public:

    std::string identifier;
    TreePtr direct_declarator;
    TreePtr content;

    virtual ~directDeclarator()
    {delete direct_declarator;
    delete content;
    }

    virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        //dst<<getOpcode()<<":(";
        if (identifier != "0"){
            dst<<identifier<<" ";
        }
        else{
            direct_declarator->print(dst);
            dst<<" ";
            if(content != NULL){
                content->print(dst);
            }
        }
        dst<<"\n";
    }
};

class identifierDirectDeclarator
    : public directDeclarator
{
private:
protected:
    virtual const char *getOpcode() const override
        { return "round"; }
public:
    identifierDirectDeclarator(std::string _identifier)
        :directDeclarator(_identifier, NULL, NULL)
    {}
};

class squareDirectDeclarator
    : public directDeclarator
{
private:
protected:
    virtual const char *getOpcode() const override
        { return "square"; }
public:
    squareDirectDeclarator(TreePtr _declarator, TreePtr _content)
        :directDeclarator("0", _declarator, _content)
    {}
};

class roundDirectDeclarator
    : public directDeclarator
{
private:
protected:
    virtual const char *getOpcode() const override
        { return "round"; }
public:
    roundDirectDeclarator(TreePtr _declarator, TreePtr _content)
        :directDeclarator("0", _declarator, _content)
    {}
};






#endif

