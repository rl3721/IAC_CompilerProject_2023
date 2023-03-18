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
    _int, //to be extended
};



class registers{
    private:
        bool usedReg[32] = { //determining which registers are free to use
            1, //zero
            1, //ra
            1, //sp
            1, //gp
            1, //tp
            1,1,1, //t-reg, I don't want them to mess up recur, so lets's just not use them
            1,0, //fp, another one
            1,1,1,1,1,1,1,1,
            0,0,0,0,0,0,0,0,0,0,
            1,1,1,1 //t-reg
        };
    public:
        void useReg(int i){
            usedReg[i] = 1;
        }
        void freeReg(int i){
            usedReg[i] = 0;
            std::cerr<<"free register index: "<<i<<std::endl;
        }
        int allocate(){
            for(int i = 5; i < 32; i++){ //starting from 5 as first 5 non allocatable by program
                if(usedReg[i]==0){
                    usedReg[i] = 1;
                    std::cerr<<"return unused register index: "<<i<<std::endl;
                    return i;
                }
            }
            std::cerr<<"Error:no register available";
            exit(1);
                //return -1; //no registers allocatable
    
        }
};

struct variable{
    int size; //the total memory size required by the variable
    int offset;             //used to store offset from stack pointer for local
            //for global store the "absolute address" (offset relating to program)
    int ind_size; //determines the size of each element if is an array, also equivalent to increment of pointer
    int is_pointer; //determines if the variable is a pointer,
    //currently I will just use it as bool, but I will change it to int if I want to support multilayer pointer
};
struct function{ //I am just going to assume that the 
    int size; //store the size of the parameter that is not enough to fit inside the argument regs. 
    //equivalent to the size of memory need to be assigned when calling the function. 
    std::vector<int> paramter_offset; //stores offset of the more than 8 params(positive offset)
};


struct Scope{
    std::map<std::string, variable> varBindings; //track the available variables in scope
    int offset = -52; //tracks the next last declared word from fp/s0-11.
    //-4 reserved for ra
    //-8 reserved for s0 ....
    int layer = 1; //used for repeated definition in subscope, know how many layers to scover when exiting scope
    //labels initialised to undefined, as they are only used in loops
    //define them when entering loop
    //if called when undefined, then error
    std::string returnLabel = "undefined"; //used for return
    std::string startLabel = "undefined"; //used for continue
    std::string endLabel = "undefined"; //used for break

    std::map<std::string, int> enumBindings = {}; //stores all available enums in the scope
    std::map<std::string, std::vector<int>> enumSets = {}; //stores the availble enum sets in scope the available values to that scope. 
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

    // void pushStack(std::ostream &dst){ //used when entering function
    //     if (stack.size()==0){//calling function in global
    //         dst<<"addi sp, sp, "<<0; 
    //     }
    //     else{
    //         dst<<"addi sp, sp, "<<stack.back().offset<<std::endl; 
    //     }
    //     dst<<"sw ra (sp)"<<std::endl;
    // }
    // void popStack(std::ostream &dst){ //used when exiting function
    //     dst<<"lw ra (sp)"<<std::endl;
    //     if (stack.size()==0){//calling function in global
    //         dst<<"addi sp, sp, "<<0; 
    //     }
    //     else{
    //         dst<<"addi sp, sp, "<<-(stack.back().offset)<<std::endl; 
    //     }

    // }
    void enterScope(){//used when entering loops
        stack.push_back(stack.back()); //this does not change the labels, so for ifs, the continue and break labels will be the same
        //when entering iterations, make sure to change labels seperately
    }
    void exitScope(){//used when exiting loops
        int layer = stack.back().layer;
        for (int i = 0; i < layer; i++){
            stack.pop_back();
        }

    }
    std::string makeupLabel(std::string id){
        // std::vector<Label> ExistedLabel;
        if (ExistedLabel.find(id) != ExistedLabel.end()){        //if the id label already exist
            int index = ExistedLabel[id];   
            std::cerr<<"make up "<<id<< " label_"<<index<<std::endl;                     //get the index of that id
            return "__"+id+"_"+"Label"+"__"+std::to_string(index+1); //returen label
        }
        else{                                            //if the id label does not exist
            ExistedLabel[id] = 0;  
            std::cerr<<"make up new "<<id<< " label_0"<<std::endl;                      //insert that label into ExistedLabel
            return "__"+id+"_"+"Label"+"__0";              //return label
        }
    }

};

#endif