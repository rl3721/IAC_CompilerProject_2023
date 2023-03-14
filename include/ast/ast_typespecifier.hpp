#ifndef ast_typespecifier_hpp
#define ast_typespecifier_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class typeSpecifier
    : public Tree
{
private:
protected:
    variable_types type;
public:
    typeSpecifier(variable_types _type)
        :type(_type)
    {}

    virtual ~typeSpecifier()
    {}

    virtual void print(std::ostream &dst) const override
    {
        switch(type){
            case _int:
                dst<<"int";
                break;
            case _void:
                dst<<"void";
                break;
            default:
                dst<<"unknown type";
                break;
        }
    }

    virtual int getSize(Context &context) const override{
        switch(type){
            case _int:
                return 4;
            case _void:
                return 4;//This really shouldn't happen
            default:
                std::cerr<<"tried to get size of something of unknwon type";
                return 0;
        }
    }
    virtual std::string getId()const override{
        return "type_specifier";
    }
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
    }
};

#endif
