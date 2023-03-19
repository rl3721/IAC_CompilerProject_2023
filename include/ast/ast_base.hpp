#ifndef ast_base_hpp
#define ast_base_hpp

#include <string>
#include <iostream>
#include <map>

#include <memory>

#include "context.hpp"

class Tree;

typedef Tree *TreePtr;

class Tree //The most basic tree, the root for everything
{
protected:
    std::vector<TreePtr> branches;
public:
    //destructor
    virtual ~Tree(){};

    //! Tell and expression to print itself to the given stream //used fo debugging
    virtual void print(std::ostream &dst) const =0;

    //godegen
    virtual void compile(std::ostream &dst, Context &context, int destReg) const=0;

    //used in codeGen
    virtual int getSize(Context &context)const =0;
    virtual std::string getId()const =0;
    virtual int getValue(Context &context){
        std::cerr<<"unable to get value for the class";
        exit(1);
    }
    virtual bool enumValueExist(){
        std::cerr<<"unable to get enum value exist for the class";
        exit(1);
    }
    virtual void compileArrayOffset(std::ostream &dst, Context &context, int destReg)const{
        std::cerr<<"unable to compile array offset for the class";
        exit(1); //technically this should be named more like something leftCompile,
        // as it's function sort of diverged after the initial setup
        //it is mainly used to compile the expression on leftside of assignment. 
    }
    virtual bool isPointer(Context &context){
        return false;
    }
};



#endif