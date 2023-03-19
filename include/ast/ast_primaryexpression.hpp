#ifndef ast_primaryexpression_hpp
#define ast_primaryexpression_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class identifier
    : public Tree
{
private:
protected:
public:
    std::string id;
    identifier(std::string _sval)
        :id(_sval)
    {}

    std::string getId()const override{
        return id;
    }
    int getSize(Context &context)const override{
        return 0; //calling variable does not require memoryto be allocated
        // if(context.stack.size() == 0){//if in global scope
        //     if(context.global.varBindings.find(id) == context.global.varBindings.end()){
        //             std::cerr<<" Error: getting size of variable "<<id<<" not declared in global";
        //             exit(1);
        //         }
        //         else{
        //             return context.global.varBindings[id].size;
        //         }
        // }
        // else{
        //     //if in local scope
        //     if(context.stack.back().varBindings.find(id) == context.stack.back().varBindings.end()){
        //         if(context.global.varBindings.find(id) == context.global.varBindings.end()){
        //             std::cerr<<" Error: getting size of variable "<<id<<" not declared in local scope";
        //             exit(1);
        //         }
        //         else{
        //             return context.global.varBindings[id].size;
        //         }
        //     }
        //     else{
        //         return context.stack.back().varBindings[id].size;
        //     }
        // }
    }
    
    void print(std::ostream &dst)const override{
        dst<<id<<std::endl;
    }
    bool isPointer(Context &context)override{
        if (context.stack.size() == 0){
            if (context.global.varBindings[id].is_pointer > 0)
            return true;
        }
        else{
            if (context.stack.back().varBindings[id].is_pointer > 0)
            return true;
        }
        return false;
    }
    
    void compile(std::ostream &dst, Context &context, int destReg)const override{
        if(context.stack.size() == 0){//if in global scope
            if(context.global.varBindings.find(id) == context.global.varBindings.end()){
                if (context.global.enumBindings.find(id) == context.global.enumBindings.end()) {
                    std::cerr << " Error: variable " << id << " not declared in global";
                    exit(1);
                }
                else {
                    dst << "li x" << destReg << ", " << context.global.enumBindings[id] << std::endl;
                }
            }
            else{
                dst<<"lw x"<<destReg<<", "<<context.global.varBindings[id].offset<<"(gp)"<<std::endl;
            }
        }
        else{
            //if in local scope
            if(context.stack.back().varBindings.find(id) == context.stack.back().varBindings.end()){
                if(context.global.varBindings.find(id) == context.global.varBindings.end()){
                    if(context.stack.back().enumBindings.find(id) == context.stack.back().enumBindings.end()){
                        if (context.global.enumBindings.find(id) == context.global.enumBindings.end()) {
                            std::cerr << " Error: variable " << id << " not declared in local scope";
                            exit(1);
                        }
                        else {//priority 4
                            dst << "li x" << destReg << ", " << context.global.enumBindings[id] << std::endl;
                            std::cerr << "using enum " << id << " in global scope" << std::endl;
                        }
                    }
                    else{//priority 3
                        dst<<"li x"<<destReg<<", "<<context.stack.back().enumBindings[id]<<std::endl;
                        std::cerr<<"using enum "<<id<<" in local scope"<<std::endl;
                    }
                }
                else{//priority 2
                    dst<<"lw x"<<destReg<<", "<<context.global.varBindings[id].offset<<"(gp)"<<std::endl;
                }
            }
            else{//priority 1
                dst<<"lw x"<<destReg<<", "<<context.stack.back().varBindings[id].offset<<"(s0)"<<std::endl;
            }
        }
    }
    int getValue(Context &context) override{
        if (context.stack.size() == 0) {//if in global scope
            if (context.global.enumBindings.find(id) == context.global.enumBindings.end()) {
                std::cerr << " Error: variable " << id << " not declared in global";
                exit(1);
            }
            else {
                return context.global.enumBindings[id];
            }
        }
        else {
            if (context.stack.back().enumBindings.find(id) == context.stack.back().enumBindings.end()) {
                if (context.global.enumBindings.find(id) == context.global.enumBindings.end()) {
                    std::cerr << " Error: variable " << id << " not declared in scope";
                    exit(1);
                }
                else {
                    return context.global.enumBindings[id];
                }
            }
            else {
                return context.stack.back().enumBindings[id];
            }
        }
    }
    void leftCompile(std::ostream &dst, Context &context, int destReg)const override{
        if (context.stack.size() == 0){
            if (context.global.varBindings.find(id) == context.global.varBindings.end()){
                exit(1);
            }
            else{
                dst<<"li x"<<destReg<<", "<<context.global.varBindings[id].offset<<std::endl;
                dst<<"add x"<<destReg<<", x"<<destReg<<", gp"<<std::endl;
            }
        }
        else{
            if (context.stack.back().varBindings.find(id) == context.stack.back().varBindings.end()){
                if (context.global.varBindings.find(id) == context.global.varBindings.end()){
                    exit(1);
                }else{
                    dst<<"li x"<<destReg<<", "<<context.global.varBindings[id].offset<<std::endl;
                    dst<<"add x"<<destReg<<", x"<<destReg<<", gp"<<std::endl;
                }
            }
            else{
                dst<<"li x"<<destReg<<", "<<context.stack.back().varBindings[id].offset<<std::endl;
                dst<<"add x"<<destReg<<", x"<<destReg<<",s0"<<std::endl;
            }
        }
    }
};


class intConstant
    : public Tree
{
private:
protected:
public:
    int val;
    intConstant(int _val)
        :val(_val)
    {}
    std::string getId()const override{
        std::cerr<<"Error: Getting Id, of int immediate";
        exit(1);
    }
    int getSize(Context &context)const override{
        return 0;
    }
    void compile(std::ostream &dst, Context &context, int destReg)const override{
        dst<<"li x"<<destReg<<", "<<val<<std::endl;
    }
    void print(std::ostream &dst)const override{
        dst<<val<<std::endl;
    }
    int getValue(Context &context) override{
        return val;
    }
};



#endif

