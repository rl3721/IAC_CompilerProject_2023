#ifndef ast_base_hpp
#define ast_base_hpp

#include <string>
#include <iostream>
#include <map>

#include <memory>

#include "context.hpp"

class Tree;

typedef const Tree *TreePtr;

class Tree //The most basic tree, the root for everything
{
public:
    //destructor
    virtual ~Tree() {};

    //! Tell and expression to print itself to the given stream //used fo debugging
    virtual void print(std::ostream &dst) const =0;

    //godegen
    //virtual void compile(std::ostream &dst, Context &context, registers destReg) const=0;

    //used in codeGen
    //virtual int getSize()const =0;

};

#endif