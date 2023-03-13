#ifndef context_hpp
#define context_hpp

#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <utility>

enum Reg {
    zero,
    ra, //x1 return address
    sp, //x2: it is mar 11, and I believe I will hate this thing
    gp, //x3: unallocatable
    tp, //x4: unallocatable
    t0,t1,t2, //x5-7: temp registers, 
    s0,s1, //x8-9: mainatained across calls
    a0,a1,a2,a3,a4,a5,a6,a7, //x10-17: argument registers
    s2,s3,s4,s5,s6,s7,s8,s9,s10,s11, //x18-27: maintained across calls
    t3,t4,t5,t6 //x28-31
};

enum variable_types {
    _void,
    _int //to be extended
};

class registers{
    private:
        bool usedReg[32] = { //determining which registers are free to use
            1,
            1,
            1,
            1,
            1,
            0,0,0,
            1,1,
            1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            0,0,0,0
        };
    public:
        void useReg(int i){
            usedReg[i] = 1;
        }
        void freeReg(int i){
            usedReg[i] = 0;
        }
        int allocate(){
            for(int i = 5; i < 32; i++){ //starting from 5 as first 5 non allocatable by program
                if(usedReg[i]==0){
                    usedReg[i] = 1;
                    return i;
                }
            }
            std::cerr<<"Error:no register available";
            exit(1);
                //return -1; //no registers allocatable
    
        }
};

struct variable{
    unsigned int size;
    int offset;             //used to store offset from stack pointer for local
                            //for global store the "absolute address" (offset relating to program)
};
struct function{ //I am just going to assume that the 
    unsigned int size; 
    std::vector<int> paramter_offset;
};
struct Scope{
    std::map<std::string, variable> varBindings; //track the available variables in scope
    int offset = -4; //tracks the next available word from sp. the sp itself is used store ra.
    std::string startLabel; //used for continue
    std::string endLabel; //used for break
};

struct Context{
    std::vector<Scope> stack; //stores local variables and previous scopes
    //this really should not be called stack as it doesn't actually relate to the sp,
    //and is only a compile time concept, but I am too lazy to change it across however many files. 

    //global declarations
    Scope global; 
    std::map<std::string, function> functions;
    registers RegisterFile;
    std::map<std::string, int> ExistedLabel;

    void pushStack(std::ostream &dst){ //used when entering function
        if (stack.size()==0){//calling function in global
            dst<<"addi sp, sp, "<<0; 
        }
        else{
            dst<<"addi sp, sp, "<<stack.back().offset<<std::endl; 
        }
        dst<<"sw ra (sp)"<<std::endl;
    }
    void popStack(std::ostream &dst){ //used when exiting function
        dst<<"lw ra (sp)"<<std::endl;
        if (stack.size()==0){//calling function in global
            dst<<"addi sp, sp, "<<0; 
        }
        else{
            dst<<"addi sp, sp, "<<-(stack.back().offset)<<std::endl; 
        }

    }
    void enterScope(){//used when entering loops
        stack.push_back(stack.back()); //this does not change the labels, so for ifs, the continue and break labels will be the same
        //when entering iterations, make sure to change labels seperately
    }
    void exitScope(){//used when exiting loops
        stack.pop_back();
    }
    std::string makeupLabel(std::string id){
        // std::vector<Label> ExistedLabel;
        if (ExistedLabel.find(id) != ExistedLabel.end()){        //if the id label already exist
            int index = ExistedLabel[id];   
            std::cerr<<"make up "<<id<< " label_"<<index<<std::endl;                     //get the index of that id
            return "_"+id+"_"+"Label"+"_"+std::to_string(index+1); //returen label
        }
        else{                                            //if the id label does not exist
            ExistedLabel[id] = 0;  
            std::cerr<<"make up new "<<id<< " label_0"<<std::endl;                      //insert that label into ExistedLabel
            return "_"+id+"_"+"Label"+"_0";              //return label
        }
    }

};

#endif