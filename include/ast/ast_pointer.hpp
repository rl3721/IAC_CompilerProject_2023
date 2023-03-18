#ifndef ast_pointer_hpp
#define ast_pointer_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>



class Pointer
    : public Tree
{
private:
    
protected:

public:
    PointerPtr subPointer;

    Pointer( PointerPtr _subPointer
        )
        :subPointer(_subPointer)
    {}
    virtual ~Pointer()
    {delete subPointer;}

    virtual void print(std::ostream &dst) override
    {
        dst<<"*";
    }

    int getSize(Context &context) override{
        std::cerr<<"Error: trying to get Size of pointer type";
        exit(1);
    }
    std::string getId() override{
        std::cerr<<"Error: trying to get Size of pointer type";
    }
    int getLayer(){
        if (subPointer == NULL){
            return 1;
        }
        return 1+ subPointer->getLayer();
    }

    virtual void compile(std::ostream &dst, Context &context, int destReg) override{
        ;
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
    void print(std::ostream &dst)override{
        dst<<getId();
        if (list!=NULL){
            for (int i = 0; i < list->size(); i++){
                list->at(i)->print(dst);
            }
        }
    }
    int getSize(Context &context)override{
        //std::cerr<<"Warning: trying to get size of function declarator, unexpected behavior may occur"<<std::endl;
        if (list == NULL){
            return 0;
        }
        else{
            int size = 0;
            for(int i = 0; i< list->size() && i < 8 ;i++){ //params above 8 is stored with positive offset
                size += list->at(i)->getSize(context);
            }
            std::cerr<<"declarator size:"<<size;
            return size;
        }
    }
    std::string getId()override{
        return declarator->getId();
    }
    void compile(std::ostream &dst, Context &context, int destReg) override{
        int parameterOffset=0; 
        int size=0; //initialize offset to be away from s0, only used for more than 8 params

        Scope newScope;
        context.stack.push_back(newScope);
        std::cerr<<"new scope created for function "<<getId()<<std::endl;

        std::string functionId = getId();

        if (list != NULL){
            std::string parameterId;
            int parameterSize;
            for(int i=0; i<list->size() ;i++){//TODO: fix the order up according to godbolt
                //I am not sure why god bolt assign the params in revers order, but I guess I will do it anyway

                //learne about the paramter
                parameterSize = list->at(i)->getSize(context);
                parameterId = list->at(i)->getId(); //temporary solution for getting Id for paramter as using declaration in parser. Consider seperating it later on. 

                if(i > 7){//positive offset
                    context.functions[functionId].paramter_offset.push_back(size);
                    context.stack.back().varBindings[parameterId] = {parameterSize,size};
                    std::cerr<<"parameter "<<parameterId<<"not in a register declared and stored at offset"<<size<<std::endl;
                    size += parameterSize;
                    
                }
                else{//negative offset
                    list->at(i)->compile(dst,context,destReg); //this calls declaration and adds the parameters to context
                    //destReg should not do anything
                    dst<<"sw a"<<i<<", "<<context.stack.back().varBindings[parameterId].offset<<"(s0)"<<std::endl;
                    std::cerr<<"parameter "<<parameterId<<"at register a"<<i<<"declared and stored at offset"<<context.stack.back().varBindings[parameterId].offset<<std::endl;
                }
                
                
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

