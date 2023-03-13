#ifndef ast_functioncall_hpp
#define ast_functioncall_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class functionCall
    : public Tree
{
private:
    
protected:
    TreePtr identifier;
    ListPtr arguments;

   
public:
    functionCall(
        TreePtr _identifier,ListPtr _arguments)
        :identifier(_identifier),
        arguments(_arguments)
    {}
    virtual ~functionCall()
    {delete identifier;
    delete arguments;
    }

    std::string getId() const override{
        return identifier->getId();
    }
    unsigned int getSize(Context &context) const override{
        std::string id = getId();
        if(context.functions.find(id) == context.functions.end()){
            std::cerr<<"Error: getting size of function "<<id<<" but undeclared";
            exit(1);
        }
        else{
            return context.functions[id].size;
        }
    }
   

    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        std::string id = getId();
        if(context.functions.find(id) == context.functions.end()){
            std::cerr<<"Error: calling of function "<<id<<" but undeclared";
            exit(1);
        }
        else{
            std::cerr<<"calling function "<<id<<std::endl;
            context.pushStack(dst); //this changes the p and stores ra.

            //really this should happen in function definition and not function call. 
            //you should find how much memory the function body is expected to use and then 
            //declare it by shifting the stack pointer. Now i am doing it in call and just shifting
            //the stack pointer to the next available slot. Which is bad as it technically allows the data to 
            //grow infinitely in the stack. 
            //This would also make the compiled code longer as in any program you should expect more calls
            //than function definitions. 

            //However I am lazy to implement finding the size of the body of a function
            //and I do not think we will have to worry about overflowing memory
            //so this is what i will do.
            if(arguments ==NULL){
                //do nothing
            }
            else{//loading in arguments to memory
                for (int i = 1; i<arguments->size();i++){
                    if (i<8){
                        //destReg = destReg + 10; //a0-a7 = x10-x17 //correct this by changing destReg to int and not Reg!
                        arguments->at(i)->compile(dst,context,destReg);
                        dst<<"sw x"<<destReg<<", "<<context.functions[id].paramter_offset[i]<<"(sp)"<<std::endl;
                    }
                    

                }
                arguments->at(0)->compile(dst,context,destReg);
            }
            dst<<"call "<<id<<std::endl;
            dst<<"nop"<<std::endl;
            context.popStack(dst);
        }
       
    }

    virtual void print(std::ostream &dst) const override
    {
        dst<<"functionCall: ";
        identifier->print(dst);
        dst<<" (";
        //arguments->print(dst);
        dst<<")\n";
    }
    
};






#endif

