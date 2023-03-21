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
public:
    ListPtr List;

    declaration(TreePtr _declaration_specifiers, ListPtr _List)
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
        dst<<"declaration: "<<std::endl;
        dst<<"(";
        declaration_specifiers->print(dst);
        dst<<" ";
        for (int i = 0; i < List->size(); i++){
            List->at(i)->print(dst);
        }
        dst<<")\n";
    }

    // bool isFunction() const override{
    //     return false;//this declaration is always for variable, enum, struct... not functions!
    // }

    int getSize(Context &context) const override{
        int listSize = 0;
        int declaratorSize = 0;
        for (int i = 0; i< List->size();i++){
            declaratorSize = List->at(i)->getSize(context);
            if (List->at(i)->isPointer(context)){
                listSize += declaratorSize*4;
            }
            else{
                listSize += declaratorSize*declaration_specifiers->getSize(context);
            }
            //listSize += List->at(i)->getSize(context);
        }
        return listSize; //declaration_specifiers->getSize(context)*listSize;
    }
    std::string getId() const override{
        return List->at(0)->getId(); //only returning the id of the first one. used for parameter. Can be buggy for later. Consider seperating
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        declaration_specifiers->compile(dst,context,destReg); //when it is struct or enum. Do these will add to scope, other wise nothing.
        if (List == NULL){
            return;
        }//only adding specifier to scope if we don't have the list, which only does anything if it is enum or struct.
                
        //else we compile the list, aka starting the nightmare
        std::string id;
        int size;
        int ind_size;
        for(int i = 0; i < List->size(); i++){//do each of them declaration
            id = List->at(i)->getId();

            if (List->at(i)->isPointer(context)){
                size = List->at(i)->getSize(context)*4;
            }
            else{
                size = List->at(i)->getSize(context)*declaration_specifiers->getSize(context);
            }
            
            ind_size = declaration_specifiers->getSize(context);

            //adding declared variable to scope, giving it the required memory size in stack
            if (context.stack.size() == 0){ //no stack meaning declaring variable in global
                if (context.global.varBindings.find(id) == context.global.varBindings.end()){
                    context.global.offset -= size;
                    context.global.varBindings[id] = {size, context.global.offset, ind_size, 0};
                    std::cerr<<"global variable "<<id<<" of size "<<size;
                }
                else{
                    
                    std::cerr<<"Error: multiple declaration of the variable "<<id<<" in global scope";
                    exit(1);
                }
            }
            else{//declaring variable in local
                if (context.stack.back().varBindings.find(id) == context.stack.back().varBindings.end()){
                    context.stack.back().offset -= size;
                    context.stack.back().varBindings[id] = {size, context.stack.back().offset, ind_size, 0};
                    std::cerr<<"local variable "<<id<<" of size "<<size<<std::endl;
                }
                else{
                    context.enterScope();
                    context.stack.back().offset -= size;
                    context.stack.back().varBindings[id] = {size, context.stack.back().offset, ind_size, 0};
                    context.stack.back().layer++;
                    std::cerr<<"local variable "<<id<<" of size "<<size<<std::endl;
                    std::cerr<<"warning: multiple declaration of the variable "<<id<<" in local scope";
                    //exit(1);
                }
            }
            List->at(i)->compile(dst, context, destReg);
            std::cerr<<std::endl;
        }
       
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

    int getSize(Context &context)const override{
        return declarator->getSize(context);
    }
    std::string getId() const override{
        return declarator->getId();
    }
    void compile(std::ostream &dst, Context &context, int destReg) const override{
        //case for singular initialization
        std::string id = getId();
        declarator->compile(dst,context,destReg);
        initializer->compile(dst,context,destReg);

        if (context.stack.size() == 0){
            dst<<"sw x"<<destReg<<", "<<context.global.varBindings[id].offset<<"(gp)"<<std::endl;;
        }
        else{
            dst<<"sw x"<<destReg<<", "<<context.stack.back().varBindings[id].offset<<"(s0)"<<std::endl;
        }
        std::cerr<<" and initialized";
        
        //case for array initialization
        /*process each item on right,
        store each in a register
        store the register in the address allocated*/
    }
    bool isPointer(Context &context) override{
        return declarator->isPointer(context);
    }
};







#endif

