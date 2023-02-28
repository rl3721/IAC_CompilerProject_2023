#include "ast.hpp"

#include <string>
#include <regex>

static int makeNameUnq=0;

static std::string makeName(std::string base)
{
    return "_"+base+"_"+std::to_string(makeNameUnq++);
}

void CompileRec(
    std::string destReg,    // The name of the register to put the result in
    TreePtr program
){
    std::regex reNum("^-?[0-9]+$");
    std::regex reId("^[a-z][a-z0-9]*$");
    
    if( regex_match( program->type, reNum ) ){
        std::cout<<"const "<<destReg<<" "<<program->type<<std::endl;
        
    }else if( regex_match( program->type, reId ) ){
        std::string zero = makeName("zero");
        std::cout<<"const "<<zero<<" 0"<<std::endl;
        std::cout<<"add "<<destReg<<" "<<program->type<<" "<<zero<<std::endl;

    }else if(program->type=="Param"){
        std::cout<<"param "<<destReg<<" "<<program->value<<std::endl;

    }else if(program->type=="Seq"){
        for(unsigned i=0; i<program->branches.size(); i++){
            CompileRec(destReg, program->branches[i]);
        }
    
    // TODO : handle the others

    }else if(program->type=="Input"){
        std::cout<<"input "<<destReg<<std::endl;
    

    }else if(program->type=="Output"){
        CompileRec(destReg, program->branches[0]);
        std::cout<<"output "<<destReg<<std::endl;

    }else if(program->type=="Add"){
        std::string t1 = makeName("t1");
        std::string t2 = makeName("t2");
        CompileRec(t1, program->branches[0]);
        CompileRec(t2, program->branches[1]);
        std::cout<<"add "<<destReg<<" "<<t1<<" "<<t2<<std::endl;

    }else if(program->type=="Sub"){
        std::string t1 = makeName("t1");
        std::string t2 = makeName("t2");
        CompileRec(t1, program->branches[0]);
        CompileRec(t2, program->branches[1]);
        std::cout<<"sub "<<destReg<<" "<<t1<<" "<<t2<<std::endl;

    }else if(program->type=="LessThan"){
        std::string t1 = makeName("t1");
        std::string t2 = makeName("t2");
        CompileRec(t1, program->branches[0]);
        CompileRec(t2, program->branches[1]);
        std::cout<<"lt "<<destReg<<" "<<t1<<" "<<t2<<std::endl;

    }else if(program->type=="Assign"){
        // std::string tmp = makeName("tmp");
        std::string zero = makeName("zero_f");
        CompileRec(destReg, program->branches[0]);
        std::cout<<"const "<<zero<<" "<<0<<std::endl;
        std::cout<<"add "<<program->value<<" "<<destReg<<" "<<zero<<std::endl;

    }else if(program->type=="If"){
        std::string t1 = makeName("t1");
        std::string t2 = makeName("t2");
        std::string zero = makeName("zero_f");
        std::cout<<"const "<<zero<<" "<<0<<std::endl;
        std::string top_l = makeName("top");
        std::string bottom_l = makeName("bottom");
        CompileRec(destReg, program->branches[0]);
        std::cout<<"beq "<<destReg<<" "<<zero<<" "<<top_l<<std::endl;
        CompileRec(t1, program->branches[1]);  //execute x
        std::cout<<"add "<<destReg<<" "<<t1<<" "<<zero<<std::endl;
        std::cout<<"beq "<<zero<<" "<<zero<<" "<<bottom_l<<std::endl;
        std::cout<<":"<<top_l<<std::endl;
        CompileRec(t2, program->branches[2]);  //execute y
        std::cout<<"add "<<destReg<<" "<<t2<<" "<<zero<<std::endl;
        std::cout<<":"<<bottom_l<<std::endl;

    }else if(program->type=="While"){
        std::string zero = makeName("zero");
        std::string while_loop = makeName("while_loop");
        std::string end_loop = makeName("end");
        std::cout<<":"<<while_loop<<std::endl;
        CompileRec(destReg, program->branches[0]);
        std::cout<<"const "<<zero<<" "<<0<<std::endl;
        std::cout<<"beq "<<destReg<<" "<<zero<<" "<<end_loop<<std::endl;
        CompileRec(destReg, program->branches[1]);
        std::cout<<"bne "<<destReg<<" "<<zero<<" "<<while_loop<<std::endl;
        std::cout<<":"<<end_loop<<std::endl;

        
    }else{
        throw std::runtime_error("Unknown construct '"+program->type+"'");
    }
}

void Compile(
    TreePtr program
){
    // Create a register to hold the final result
    std::string res=makeName("res");
    
    // Compile the whole thing
    CompileRec(res, program);
    
    // Put the result out
    std::cout<<"halt "<<res<<"\n";
}
