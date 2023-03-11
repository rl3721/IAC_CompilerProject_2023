#ifndef ast_declaration_hpp
#define ast_declaration_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class declaration
    : public Tree
{
private:
    
protected:
    TreePtr declaration_specifiers;
    TreePtr List;

   
public:
    declaration(
        TreePtr _declaration_specifiers,TreePtr _List)
        :declaration_specifiers(_declaration_specifiers),
        List(_List)
    {}
    virtual ~declaration()
    {delete declaration_specifiers;
    delete List;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"declaration: (";
        declaration_specifiers->print(dst);
        dst<<" ";
        List->print(dst);
        dst<<")\n";
    }

    bool isFunction() const override{
        return List->isFunction();
    }

    unsigned int getSize() const override{
        return declaration_specifiers->getSize()*List->getSize();
    }
    std::string getId() const override{
        return List->getId();
    }

    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        std::string id = getId();
        unsigned int size = getSize();

        //adding declared variable to scope, giving it the required memory size in stack
        if (context.stack.size() == 0){ //no stack meaning declaring variable in global
            if (context.global.varBindings.find(id) == context.global.varBindings.end()){
                context.global.varBindings[id] = {size, context.global.offset};
                context.global.offset += size;
            }
            else{
                std::cerr<<"multiple declaration of the variable in global scope";
                exit(1);
            }
        }
        else{//declaring variable in local
            if (context.stack.back().varBindings.find(id) == context.stack.back().varBindings.end()){
                context.stack.back().varBindings[id] = {size, context.stack.back().offset};
                context.stack.back().offset += size;
            }
            else{
                std::cerr<<"multiple declaration of the variable in local scope";
                exit(1);
            }
        }

        //process initialization if exist
        List->compile(dst, context, destReg);



    }

};

class initDeclarator
    : public Tree
{
private:
    
protected:
    TreePtr declarator;
    TreePtr initializer;

   
public:
    initDeclarator(
        TreePtr _declarator,TreePtr _initializer)
        :declarator(_declarator),
        initializer(_initializer)
    {}
    virtual ~initDeclarator()
    {delete declarator;
    delete initializer;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {   
        dst<<"initialize: ";
        declarator->print(dst);
        dst<<" = ";
        initializer->print(dst);
        dst<<"\n";
    }

    unsigned int getSize()const override{
        return declarator->getSize();
    }
    std::string getId() const override{
        return declarator->getId();
    }
    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        //execute right and get it into a register
        dst<<"sw";
    }
};







#endif

