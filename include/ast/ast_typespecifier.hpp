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
            case _unsigned:
                dst<<"unsigned";
                break;
            case _char:
                dst<<"char";
                break;
            case _float:
                dst<<"float";
                break;
            case _double:
                dst<<"double";
                break;
            default:
                dst<<"unknown type";
                break;
        }
    }

    virtual int getSize(Context &context) const override{
        switch(type){
            case _char:
                return 1;
            case _int:
                return 4;
            case _unsigned:
                return 4;
            case _void:
                return 4;//This really shouldn't happen
            case _float:
                return 4;
            case _double:
                return 8;
            default:
                std::cerr<<"tried to get size of something of unknwon type";
                return 0;
        }
    }
    virtual std::string getId()const override{
        return std::to_string(type);
    }
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        if(stoi(getId()) > context.RegisterFile.type){
            context.RegisterFile.type = stoi(getId());
            std::cerr<<"!!!!!current type: "<<context.RegisterFile.type<<std::endl;
        }
    }
};

#endif
