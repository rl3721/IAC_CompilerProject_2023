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

    unsigned int getSize(Context &context) const override{
        std::cerr<<"Error: trying to get Size of function while declaring";
        exit(1);
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
        dst<<"nop"<<std::endl;
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
    unsigned int getSize(Context &context)const override{
        std::cerr<<"Warning: trying to get size of function declarator, unexpected behavior may occur"<<std::endl;
        return 1;//default for declarator
    }
    std::string getId()const override{
        return declarator->getId();
    }
    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        int parameterOffset=-4; //initialize offset to be away from sp
        unsigned int size=0;
        Scope newScope;
        newScope.startLabel = getId();
        std::string functionId = getId();
        if (list != NULL){
            std::cerr<<"creating params"<<std::endl;
            std::string parameterId;
            for(int i=0; i<list->size();i++){

                 parameterSize -= list->at(i)->getSize(context);
                 parameterId = list->at(i)->getId(); //temporary solution for getting Id for paramter as using declaration in parser. Consider seperating it later on. 

                  context.functions[functionId].paramter_offset.push_back(parameterSize);
                  size += parameterSize;
                  newScope.varBindings[parameterId] = {parameterSize,newScope.offset};
                  newScope.offset -= parameterSize;
                  std::cerr<<"parameter "<<parameterId<<" of size "<<parameterSize<<" declared for function "<<functionId<<std::endl;
             }
             context.functions[functionId].size = size;
             std::cerr<<"function "<<getId()<<" declared with total parameter size "<<size<<std::endl;
        }
        else{
            std::cerr<<"function "<<getId()<<" declared with no paramters"<<std::endl;
        }
        context.stack.push_back(newScope);
        std::cerr<<"new scope created for function "<<getId()<<std::endl;
    }
};






#endif

