#ifndef ast_functiondefinition_hpp
#define ast_functiondefinition_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class functionDefinition
    : public Tree
{
private:
    
protected:
    TreePtr declaration_specifiers;
    TreePtr declarator;
    TreePtr compound_statement;
    
public:
    functionDefinition( TreePtr _declaration_specifiers,
        TreePtr _declarator,TreePtr _compound_statement)
        :declaration_specifiers(_declaration_specifiers),
        declarator(_declarator),
        compound_statement(_compound_statement)
    {}
    virtual ~functionDefinition()
    {delete declaration_specifiers;
    delete declarator;
    delete compound_statement;}

    virtual void print(std::ostream &dst) const override
    {
        dst<<"function definition:";
        declaration_specifiers->print(dst);
        dst<<" ";
        declarator->print(dst);
        dst<<"{";
        compound_statement->print(dst);
        dst<<"}";
    }

    unsigned int getSize() const override{
        return declaration_specifiers->getSize()+ declarator->getSize()+compound_statement->getSize(); 
    }

    virtual void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        unsigned int return_size = declaration_specifiers->getSize();
        unsigned int parameter_size = declarator->getSize();
        unsigned int local_size = compound_statement->getSize();
        unsigned int size = getSize();

        std::string id = declarator->getId();

        context.functions[id] = {};
        dst<<id<<":"<<std::endl;
        dst<<"addi sp, sp, "<<size<<std::endl;
        dst<<"sw ra, sp"<<std::endl;
        

        dst<<"lw ra, sp"<<std::endl;
        dst<<"addi sp, sp, "<<-size<<std::endl;
    }
};





#endif

