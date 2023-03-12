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
    std::string getId() const override{
        return declarator->getId();
    }

    virtual void compile(std::ostream &dst, Context &context, Reg destReg) const override{

        std::string id = getId();
        std::vector<unsigned int> paramterSize;
        unsigned int totalSize = 0;
        std::cerr<<"declaring function "<<id<<std::endl;
        context.functions[id] = {totalSize,paramterSize}; //adding barebone of function definition to context
        
        declarator->compile(dst,context,destReg); //this would fill in the context declaration, 
        //the declarator should be only functionDeclarator

        dst<<id<<":"<<std::endl; //printing start label of function

        compound_statement->compile(dst,context,destReg);   

        dst<<"ret"<<std::endl;
        context.stack.pop_back();
        std::cerr<<"scope closed for function "<<id<<std::endl;     
    }
};

class functionDeclarator
    : public Tree
{
private:
protected:
public:
    TreePtr declarator;
    ListPtr list;

    functionDeclarator(TreePtr _declarator, ListPtr _list)
        :declarator(_declarator),
        list(_list)
    {}
    void print(std::ostream &dst)const override{
        dst<<getId();
        if (list!=NULL){
            for (int i = 0; i < list->size(); i++){
                list->at(i)->print(dst);
            }
        }
    }
    unsigned int getSize()const override{
        return 1;
    }
    std::string getId()const override{
        return declarator->getId();
    }
    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        unsigned int parameterSize=0;
        unsigned int size=0;
        Scope newScope;
        newScope.startLabel = getId();
        if (list != NULL){
            std::cerr<<"creating params"<<std::endl;
            // for(int i=0; i<list->size();i++){
            //     parameterSize = list->at(i)->getSize();
            //     context.functions[getId()].paramter_size.push_back(parameterSize);
            //     size += parameterSize;
            //     newScope.varBindings[list->at(i)->getId()] = {parameterSize,newScope.offset};
            //     newScope.offset -= parameterSize;
            //     std::cerr<<"parameter "<<list->at(i)->getId()<<" of size "<<parameterSize<<" declared for function "<<getId()<<std::endl;
            // }
            // context.functions[getId()].size = size;
            // std::cerr<<"function "<<getId()<<" declared with total parameter size "<<size<<std::endl;
        }
        else{
            std::cerr<<"function "<<getId()<<" declared with no paramters"<<std::endl;
        }
        context.stack.push_back(newScope);
        std::cerr<<"new scope created for function "<<getId()<<std::endl;
    }
};






#endif

