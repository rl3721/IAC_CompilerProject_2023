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
    int getSize(Context &context) const override{
        return 0; //if function call require memory to process additional args, it decalres itself. 
        // std::string id = getId();
        // if(context.functions.find(id) == context.functions.end()){
        //     std::cerr<<"Error: getting size of function "<<id<<" but undeclared";
        //     exit(1);
        // }
        // else{
        //     return 0; //return memory space required store additional params. 
        // }
    }
   

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::string id = getId();
        int additional_arg_size = context.functions[id].size;
        if(context.functions.find(id) == context.functions.end()){
            std::cerr<<"Error: calling of function "<<id<<" but undeclared";
            exit(1);
        }
        else{
            std::cerr<<"calling function "<<id<<std::endl;

            if(arguments == NULL){
                std::cerr<<"no arguments loaded"<<std::endl;
            }
            else{//loading in arguments to memory
                std::cerr<<"loading total of "<<arguments->size()<<" arguments"<<std::endl;

                
                if(additional_arg_size!= 0){ //allocate memory when the call requires additional memory to store arguments
                    std::cerr<<"argument of size "<<additional_arg_size<<" cannot be stored in register, memory declared to store them"<<std::endl;
                    dst<<"addi sp, sp, "<<-additional_arg_size<<std::endl;
                }

                int argReg = 0;
                for (int i = arguments->size()-1; i>= 0 ; i--){
                    std::cerr<<"loading arguments"<<std::endl;
                    if (i>7){
                        argReg = 17;
                        arguments->at(i)->compile(dst,context,argReg); //process all the rest of arguments through a7
                        dst<<"sw a7, "<<context.functions[id].paramter_offset[i-8]<<"(sp)"<<std::endl;
                    }
                    else{
                        argReg = i + 10; //a0-a7 = x10-x17
                        arguments->at(i)->compile(dst,context,argReg);
                    }
                    std::cerr<<i<<"th argument loaded"<<std::endl;
                //     if (context.stack.size() == 0){
                //         dst<<"sw x"<<argReg<<", "<<context.functions[id].paramter_offset[i]<<"(sp)"<<std::endl;
                //     }
                //     else{
                //         dst<<"sw x"<<argReg<<", "<<context.functions[id].paramter_offset[i]+context.stack.back().offset<<"(sp)"<<std::endl;
                //     }
                 }
            }

            //context.pushStack(dst); //this changes the p and stores ra.
            std::cerr<<id<<" called"<<std::endl;
            dst<<"call "<<id<<std::endl;
            dst<<"nop"<<std::endl;
            //context.popStack(dst);

            if(additional_arg_size!= 0){//in compound with previous shift
                    std::cerr<<"restoring stack declared to store additional arguments of total size"<<additional_arg_size<<std::endl;
                    dst<<"addi sp, sp, "<<additional_arg_size<<std::endl;

                    //This declares the additional size required by the function call. 
                    //I believe that theoretically this memory should also be declared when defining the function
                    //but I don't know how to calculate the memory required by function calls in an expression
                    //and pass it out, so I will just do this. 

                    //Also I don't think this will be really tested as we prob won't have anything with more than 8 arguments
                    //as they haven't updated the tests from mips which only had 4 a-regs and they were testing with 5 args given
            }

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

