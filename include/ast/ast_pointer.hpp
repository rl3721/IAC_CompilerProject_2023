#ifndef ast_pointer_hpp
#define ast_pointer_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>



class pointerDeclarator //I don't think we need to worry about multilayer pointer, so I am just assume there is only one. 
    : public Tree //Cuz I don't know how to do it.
    //also I won't do functions that return pointers, cuz I don't know how to do it.
    //copilot is not helping me with this one. (copilot wrote this)
{
private:
/* possible ways to have multilayer pointer:
define the pointer make a function called getLayer
if its NULL, return 1, other wise 1+previous,
I guess you would then need to add this pointer layer as another element of variable in context
which I don't want to do. 

Just some random ideas that maybe, just maybe I will try out if I have time, which I prob won't*/

    
protected:

public:
    TreePtr declarator;

    pointerDeclarator(TreePtr _declarator)
        :declarator(_declarator)
    {}
    ~pointerDeclarator(){
        delete declarator;
    }

    virtual void print(std::ostream &dst)const override
    {
        dst<<"*";
    }

    int getSize(Context &context) const override{
        return 1; //default size of decalrator is 1
    }
    std::string getId() const override{
        return declarator->getId();
    }

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        //change previously declare variable to 
        std::string id = declarator->getId();
        if (context.stack.size() == 0){
            context.global.varBindings[id].is_pointer = 1;
            //context.global.varBindings[id].size  = context.global.varBindings[id].size*4 / context.global.varBindings[id].ind_size;
        }
        else{
           context.stack.back().varBindings[id].is_pointer = 1;
           //context.stack.back().varBindings[id].size  = context.stack.back().varBindings[id].size*4 / context.stack.back().varBindings[id].ind_size;
        }
        std::cerr<<"pointer declared"<<std::endl;
    }
    bool isPointer(Context &context) override{
        return true;
    }
};



#endif

