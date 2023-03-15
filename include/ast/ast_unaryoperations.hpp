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
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"addi x"<<destReg<<", x"<<destReg<<", 1"<<std::endl; //for numbers only, TODO Pointers
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"addi x"<<destReg<<", x"<<destReg<<", -1"<<std::endl;
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
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"addi x"<<destReg<<", x"<<destReg<<", -1"<<std::endl; //for numbers only, TODO Pointers
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"addi x"<<destReg<<", x"<<destReg<<", 1"<<std::endl;
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
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"addi x"<<destReg<<", x"<<destReg<<", 1"<<std::endl; //for numbers only, TODO Pointers
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
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
        dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        dst<<"addi x"<<destReg<<", x"<<destReg<<", -1"<<std::endl; //for numbers only, TODO Pointers
        dst<<"sw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
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
        dst<<"addi x"<<destReg<<", sp"<<offset<<std::endl; //absolute addess to the variable
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
        dst<<'not x'<<destReg<<", x"<<destReg<<std::endl;
    }
};





#endif

