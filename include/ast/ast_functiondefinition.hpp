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

    int getSize(Context &context) const override{
        std::cerr<<"Error: trying to get Size of function while declaring";
        exit(1);
    }
    std::string getId() const override{
        return declarator->getId();
    }

    virtual void compile(std::ostream &dst, Context &context, int destReg) const override{

        std::string id = getId();
        std::vector<int> paramterOffset;
        int parameterSize = 0;
        int bodySize = compound_statement->getSize(context) + 12; //initialize to 12 to give memory space to store ra and s0 at -4 and -8

        std::cerr<<"declaring function "<<id<<" require size "<<bodySize<<std::endl;
        context.functions[id] = {parameterSize,paramterOffset}; //adding barebone of function definition to context

        dst<<id<<":"<<std::endl; //printing start label of function, used for calls
        
        dst<<"addi sp, sp, "<<-(bodySize)<<std::endl; //shift sp
        dst<<"sw ra, "<<bodySize-4<<"(sp)"<<std::endl; //store previous return addess 4 below the fp
        dst<<"sw s0, "<<bodySize-8<<"(sp)"<<std::endl; //store frame pointer addess 8 below the fp
        dst<<"addi s0, sp, "<<bodySize<<std::endl; //shift s0

        declarator->compile(dst,context,destReg); //this would fill in the context declaration, 
        //Also opens new local scope and store the parameters
        //the declarator should be only functionDeclarator

        std::string returnlabel = context.makeupLabel(id);

        context.stack.back().returnLabel = returnlabel;
        compound_statement->compile(dst,context,destReg);  

        
        dst<<returnlabel<<":"<<std::endl; //print end of function, used for return. 

        dst<<"lw s0, "<<bodySize-8<<"(sp)"<<std::endl; //restore  previous return addess 
        dst<<"lw ra, "<<bodySize-4<<"(sp)"<<std::endl; //restore  previous return addess
        dst<<"addi sp, sp, "<<bodySize<<std::endl; //restore sp
        dst<<"ret"<<std::endl;
        dst<<"nop"<<std::endl;
        dst<<std::endl;

        context.stack.pop_back(); //exit scope opened during compiling declarator
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
    ~functionDeclarator(){
        delete declarator;
        delete list;
    }
    void print(std::ostream &dst)const override{
        dst<<getId();
        if (list!=NULL){
            for (int i = 0; i < list->size(); i++){
                list->at(i)->print(dst);
            }
        }
    }
    int getSize(Context &context)const override{
        std::cerr<<"Warning: trying to get size of function declarator, unexpected behavior may occur"<<std::endl;
        return 1;//default for declarator
    }
    std::string getId()const override{
        return declarator->getId();
    }
    void compile(std::ostream &dst, Context &context, int destReg) const override{
        int parameterOffset=0; 
        int size=0; //initialize offset to be away from s0, only used for more than 8 params

        Scope newScope;
        context.stack.push_back(newScope);
        std::cerr<<"new scope created for function "<<getId()<<std::endl;

        std::string functionId = getId();

        if (list != NULL){
            std::string parameterId;
            int parameterSize;
            for(int i=list->size()-1; i>=0 ;i--){
                //I am not sure why god bolt assign the params in revers order, but I guess I will do it anyway

                //learne about the paramter
                parameterSize = list->at(i)->getSize(context);
                parameterId = list->at(i)->getId(); //temporary solution for getting Id for paramter as using declaration in parser. Consider seperating it later on. 

                if(i > 7){//positive offset
                    context.functions[functionId].paramter_offset.insert(context.functions[functionId].paramter_offset.begin(),size);
                    context.stack.back().varBindings[parameterId] = {parameterSize,size};
                    size += parameterSize;
                }
                else{//negative offset
                    list->at(i)->compile(dst,context,destReg); //this calls declaration and adds the parameters to context
                    dst<<"sw a"<<i<<", "<<context.stack.back().varBindings[parameterId].offset<<"(s0)"<<std::endl;
                }
                
                std::cerr<<"parameter "<<parameterId<<" of size "<<parameterSize<<" declared for function "<<functionId<<" with offset "<<parameterOffset<<std::endl;
             }
             context.functions[functionId].size = size;
             std::cerr<<"function "<<getId()<<" declared with total parameter size "<<size<<std::endl;
        }
        else{
            std::cerr<<"function "<<getId()<<" declared with no paramters"<<std::endl;
        }
        
    }
};

#endif

