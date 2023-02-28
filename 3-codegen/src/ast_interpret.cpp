#include "ast.hpp"

#include <regex>

int32_t Interpret(
    InterpretContext &context, // Contains the parameters and variable bindings
    TreePtr program
){
    std::regex reNum("^-?[0-9]+$");
    std::regex reId("^[a-z][a-z0-9]*$");
    
    if( regex_match(program->type, reNum) ){       //decimalNumber
        return std::atol(program->type.c_str());
        
    // TODO : Check for things matching reId

    }else if( regex_match(program->type, reId) ){  //variable
        int32_t val = context.bindings[program->type];
        return val;
        
    }else if(program->type=="Param"){
        unsigned index=atol(program->value.c_str());
        auto value=context.params.at(index);
        return value;
        
    }else if(program->type=="Output"){
        int32_t val=Interpret(context, program->branches.at(0));
        std::cout<<val<<std::endl;
        return val;
        
    // TODO: Handle other constructs

    }else if(program->type=="Input"){
        int32_t val;
        std::cin>>val;
        return val;

    }else if(program->type=="Add"){
        int32_t a=Interpret(context, program->branches.at(0));
        int32_t b=Interpret(context, program->branches.at(1));
        return a + b;

    }else if(program->type=="Sub"){
        int32_t a=Interpret(context, program->branches.at(0));
        int32_t b=Interpret(context, program->branches.at(1));
        return a - b;

    }else if(program->type=="LessThan"){
        int32_t a=Interpret(context, program->branches.at(0));
        int32_t b=Interpret(context, program->branches.at(1));
        return (a < b);

    }else if(program->type=="Seq"){
        int32_t val;
        int32_t size = program->branches.size();
        for (int i = 0; i < size; i++){
            val=Interpret(context, program->branches.at(i));
        }
        // val=Interpret(context, program->branches.at(0));
        return val; 

    }else if(program->type=="Assign"){
        int32_t val=Interpret(context, program->branches.at(0));
        context.bindings[program->value] = val;
        return val;
        
    }else if(program->type=="While"){
        // int32_t con=Interpret(context, program->branches.at(0));
        while(Interpret(context, program->branches.at(0))){
            Interpret(context, program->branches.at(1));
        }
        return 0;

    }else if(program->type=="If"){
        int32_t con=Interpret(context, program->branches.at(0));
        int32_t result;
        if(con){
            result=Interpret(context, program->branches.at(1));
        }
        else{
            result=Interpret(context, program->branches.at(2));
        }
        return result;


    }else{
        throw std::runtime_error("Unknown construct '"+program->type+"'");
    }
}
