#ifndef ast_functioncall_hpp
#define ast_functioncall_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class functionCall
    : public Tree
{
private:
    
protected:
    TreePtr identifier;
    TreePtr arguments;

   
public:
    functionCall(
        TreePtr _identifier,TreePtr _arguments)
        :identifier(_identifier),
        arguments(_arguments)
    {}
    virtual ~functionCall()
    {delete identifier;
    delete arguments;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"functionCall: ";
        identifier->print(dst);
        dst<<" (";
        arguments->print(dst);
        dst<<")\n";
    }
};






#endif

