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
        void useReg(Reg i){
            usedReg[i] = 1;
        }
        void freeReg(Reg i){
            usedReg[i] = 0;
        }
        int allocate(){
            for(int i = 5; i < 32; i++){ //starting from 5 as first 5 non allocatable by program
                if(!usedReg[i]){
                    return i;
                }
                else{
                    return -1; //no registers allocatable
                }
            }
        }
};

struct variable{
    unsigned int size;
    int offset;             //used to store offset from stack pointer for local
                            //for global store the "absolute address" (offset relating to program)
};
struct function{ //I am just going to assume that the 
    unsigned int size; 
    std::vector<unsigned int> paramter_size;
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

    void pushStack(std::ostream &dst){ //used when entering function
        if (stack.size()==0){

        }
        else{

        }
    }
    void popStack(std::ostream &dst){ //used when exiting function

    }
    void enterScope(){//used when entering loops or ifs

    }
    void exitScope(){//used when exiting loops or ifs

    }

};

#endif