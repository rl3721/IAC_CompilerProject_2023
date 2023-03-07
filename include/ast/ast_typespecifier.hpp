#ifndef ast_typespecifier_hpp
#define ast_typespecifier_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class typeSpecifier
    : public Tree
{
private:
     std::string type;
protected:
public:
    typeSpecifier(std::string _type)
        :type(_type)
    {}

    virtual ~typeSpecifier()
    {}

    virtual void print(std::ostream &dst) const override
    {
        dst<<type;
    }
};

#endif

