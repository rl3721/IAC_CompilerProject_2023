#ifndef ast_directdeclarator_hpp
#define ast_directdeclarator_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


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
    unsigned int getSize(Context &context)const override{
        return 1; //default for declarator, total size calculated with specifier in declaration
    }
    std::string getId()const override{
        return id;
    }
    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        std::cerr<<" declared";
    }
};

// class arrayDeclarator
//     : public directDeclarator
// {
// private:
// protected:
// public:
//     arrayDeclarator(TreePtr _declarator, TreePtr _content)
//         :directDeclarator("0", _declarator, _content)
//     {}
// };







#endif

