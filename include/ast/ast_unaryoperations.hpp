#ifndef ast_unaryOperations_hpp
#define ast_unaryOperations_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class unaryOperations 
//this involves any arithmetic/binary/boolean operations which takes two inputs.
//It doesn't deal with assignments and only deals with "subsets of expressions"
    : public Tree
{
private:
    
protected:
    TreePtr expression;

    unaryOperations( TreePtr _expression)
        :expression(_expression){}
public:
    virtual ~unaryOperations()
    {delete expression;}

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<" "<<getOpcode();
        expression->print(dst);
        dst<<")";
    }

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{}
    virtual int getSize(Context &context) const override{
        return 0; //only declarations have memory declared
        //return left->getSize(context) + right->getSize(context);
    };
    virtual std::string getId()const override{
        std::cerr<<"getting Id of unary expression";
        exit(1);
    };
    virtual void leftCompile(std::ostream &dst, Context &context, int destReg)const override{
        std::cerr<<"unable to compile array offset for the class";
        exit(1); //technically this should be named more like something leftCompile,
        // as it's function sort of diverged after the initial setup
        //it is mainly used to compile the expression on leftside of assignment. 
    }

};

class postIncrement
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "post++"; }
public:
    postIncrement(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset;
        int ind_size = context.stack.back().varBindings[id].ind_size;
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        if (expression->isPointer(context)){
            dst<<"addi x"<<destReg<<", x"<<destReg<<", "<<ind_size<<std::endl;
        }
        else{
            dst<<"addi x"<<destReg<<", x"<<destReg<<", 1"<<std::endl; 
        }
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        if (expression->isPointer(context)){
            dst<<"addi x"<<destReg<<", x"<<destReg<<", -"<<ind_size<<std::endl;
        }
        else{
            dst<<"addi x"<<destReg<<", x"<<destReg<<", -1"<<std::endl;
        }
    }
    bool isPointer(Context &context)override{
        return expression->isPointer(context);
    }
};

class postDecrement
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "post++"; }
public:
    postDecrement(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset;
        int ind_size = context.stack.back().varBindings[id].ind_size;
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        if (expression->isPointer(context)){
            dst<<"addi x"<<destReg<<", x"<<destReg<<", -"<<ind_size<<std::endl;
        }
        else{
            dst<<"addi x"<<destReg<<", x"<<destReg<<", -1"<<std::endl;
        }
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        if (expression->isPointer(context)){
            dst<<"addi x"<<destReg<<", x"<<destReg<<", "<<ind_size<<std::endl;
        }
        else{
            dst<<"addi x"<<destReg<<", x"<<destReg<<", 1"<<std::endl;
        }
    }
    bool isPointer(Context &context)override{
        return expression->isPointer(context);
    }
};

class preIncrement
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "pre++"; }
public:
    preIncrement(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset;
        int ind_size = context.stack.back().varBindings[id].ind_size;
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        if (expression->isPointer(context)){
            dst<<"addi x"<<destReg<<", x"<<destReg<<", "<<ind_size<<std::endl;
        }
        else{
            dst<<"addi x"<<destReg<<", x"<<destReg<<", 1"<<std::endl; 
        }
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
    }
    bool isPointer(Context &context)override{
        return expression->isPointer(context);
    }
};

class preDecrement
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "pre--"; }
public:
    preDecrement(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset;
        int ind_size = context.stack.back().varBindings[id].ind_size;
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        if (expression->isPointer(context)){
            dst<<"addi x"<<destReg<<", x"<<destReg<<", -"<<ind_size<<std::endl;
        }
        else{
            dst<<"addi x"<<destReg<<", x"<<destReg<<", -1"<<std::endl;
        }
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
    }
    bool isPointer(Context &context)override{
        return expression->isPointer(context);
    }
};


class negOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "-"; }
public:
    negOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        expression->compile(dst,context,destReg);
        dst<<"neg x"<<destReg<<", x"<<destReg<<std::endl; //for numbers only, TODO Pointers
    }

    int getValue(Context &context)override{
        return - expression->getValue(context);
    }
};

class sizeOfOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "sizeof: "; }
public:
    sizeOfOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int size = context.stack.back().varBindings[id].size; //TODO: define new function to directly get offset
        dst<<"li x"<<destReg<<", "<<size<<std::endl;
    }
    int getValue(Context &context)override{
        return context.stack.back().varBindings[expression->getId()].size;
    }
};

class sizeOfTypeOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "sizeof: "; }
public:
    sizeOfTypeOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int size = expression->getSize(context); 
        dst<<"li x"<<destReg<<", "<<size<<std::endl;
    }
    int getValue(Context &context)override{
        return context.stack.back().varBindings[expression->getId()].size;
    }
};

class addressOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "address: "; }
public:
    addressOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset; //TODO: define new function to directly get offset
        dst<<"addi x"<<destReg<<", s0, "<<offset<<std::endl; //absolute addess to the variable
    }
    bool isPointer(Context &context)override{
        return true;
    }
};

class dereferenceOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "dereference: "; }
public:
    dereferenceOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset; //TODO: define new function to directly get offset
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
    }
    void leftCompile(std::ostream &dst, Context &context, int destReg)const override{
        std::string id = expression->getId();
        int offset = context.stack.back().varBindings[id].offset; //TODO: define new function to directly get offset
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        std::cerr<<"getting pointer address"<<std::endl;
    }
};

class bwNotOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "!"; }
public:
    bwNotOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        expression->compile(dst,context,destReg);
        dst<<"not x"<<destReg<<", x"<<destReg<<std::endl;
    }

    int getValue(Context &context)override{
        return ~ expression->getValue(context);
    }
};

class notOperator
    : public unaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "logicalNot"; }
public:
    notOperator(TreePtr _expression)
        :unaryOperations(_expression)
    {}

    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        expression->compile(dst, context, destReg);
        dst<<"seqz x"<<destReg<<", x"<<destReg<<std::endl;
    }
    int getValue(Context &context)override{
        return ! expression->getValue(context);
    }
};



#endif
