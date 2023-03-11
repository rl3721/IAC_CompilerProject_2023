#ifndef ast_base_hpp
#define ast_base_hpp

#include <string>
#include <iostream>
#include <map>

#include <memory>

class Tree;

typedef const Tree *TreePtr;

class Tree //The most basic tree, the root for everything
{
public:
    virtual ~Tree()
    {}

    //! Tell and expression to print itself to the given stream //used fo debugging
    virtual void print(std::ostream &dst) const =0;

    //! Evaluate the tree using the given mapping of variables to numbers, not needed for full compiler
    // virtual double evaluate(
    //     const std::map<std::string,double> &bindings
    // ) const
    // { throw std::runtime_error("Not implemented."); }
};

#endif