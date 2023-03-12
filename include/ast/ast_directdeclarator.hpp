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
    std::string identifier;
    TreePtr direct_declarator;
    TreePtr content;

    directDeclarator(std::string _identifier,
        TreePtr _direct_declarator,TreePtr _content)
        :identifier(_identifier),
        direct_declarator(_direct_declarator),
        content(_content)
    {}
public:
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

class variableDeclarator
    : public Tree
{
private:
protected:
public:
    std::string id;
    variableDeclarator(std::string _id)
        :id(_id)
    {}
    void print(std::ostream &dst)const override{
        dst<<id;
    }
    unsigned int getSize()const override{
        return 1;
    }
    std::string getId()const override{
        return id;
    }
    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        std::cerr<<" declared";
    }
};

class arrayDeclarator
    : public directDeclarator
{
private:
protected:
public:
    arrayDeclarator(TreePtr _declarator, TreePtr _content)
        :directDeclarator("0", _declarator, _content)
    {}
};







#endif

