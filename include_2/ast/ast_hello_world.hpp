#ifndef ast_hello_world_hpp
#define ast_hello_world_hpp

#include "ast_base.hpp"

#include <string>
#include <iostream>
#include <map>

#include <memory>

class helloWorld 
    : public Tree
{
private:
protected:
public:
    helloWorld()
    {}
    virtual ~helloWorld()
    {}

    //! Tell and expression to print itself to the given stream
    virtual void print(std::ostream &dst) const {
        dst <<"Hello World";
    };

    //! Evaluate the tree using the given mapping of variables to numbers
    virtual double evaluate(
        const std::map<std::string,double> &bindings
    ) const
    { throw std::runtime_error("Not implemented."); }
};


#endif
