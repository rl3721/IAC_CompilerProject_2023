#ifndef ast_binaryOperations_hpp
#define ast_binaryOperations_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class binaryOperations 
//this involves any arithmetic/binary/boolean operations which takes two inputs.
//It doesn't deal with assignments and only deals with "subsets of expressions"
    : public Tree
{
private:
    
protected:
    TreePtr left;
    TreePtr right;
    binaryOperations( TreePtr _left,
        TreePtr _right)
        :left(_left),
        right(_right)
    {}
public:


    virtual ~binaryOperations()
    {delete left;
    delete right;}

    virtual const std::string getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"(";
        left->print(dst);
        dst<<" "<<getOpcode()<<" ";
        right->print(dst);
        dst<<")";
    }
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{}
    virtual unsigned int getSize()const override{};
    virtual std::string getId()const override{};

    int DoLeft(std::ostream &dst, Context &context, int destReg) const{
        // int LeftReg = context.RegisterFile.allocate();
        left->compile(dst, context, destReg);
        return destReg;
    }
    
    int DoRight(std::ostream &dst, Context &context, int destReg) const{
        int RightReg = context.RegisterFile.allocate();
        right->compile(dst, context, RightReg);
        return RightReg;
    }
};

class logicalOrOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "OR"; }
public:
    logicalOrOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string lable1 = context.makeupLabel(getId());
        std::string lable2 = context.makeupLabel(getId());
        dst<<":"<<lable1<<std::endl;
        dst<<":"<<lable2;
        // int LeftReg  = DoLeft(dst, context, destReg);
        // int RightReg = DoRight(dst, context, destReg);
        // dst<<"or x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // // context.RegisterFile.freeReg(LeftReg);
        // context.RegisterFile.freeReg(RightReg);
    }
};

class logicalAndOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "AND"; }
public:
    logicalAndOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
};

class inclusiveOrOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "|"; }
public:
    inclusiveOrOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"or x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class exclusiveOrOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "^"; }
public:
    exclusiveOrOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"xor x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class andOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "&"; }
public:
    andOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"and x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class equalityOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "=="; }
public:
    equalityOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"xor x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        dst<<"seqz x"<<destReg<<", x"<<LeftReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class inequalityOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "!="; }
public:
    inequalityOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"xor x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        dst<<"snez x"<<destReg<<", x"<<LeftReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class ltOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "<"; }
public:
    ltOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"slt x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class gtOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return ">"; }
public:
    gtOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"slt x"<<destReg<<", x"<<RightReg<<", x"<<LeftReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class leOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "<="; }
public:
    leOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"slt x"<<destReg<<", x"<<RightReg<<", x"<<LeftReg<<std::endl;
        dst<<"xori x"<<destReg<<", x"<<destReg<<", 1"<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class geOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return ">="; }
public:
    geOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"slt x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        dst<<"xori x"<<destReg<<", x"<<destReg<<", 1"<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class leftShiftOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "<<"; }
public:
    leftShiftOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"sll x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class rightShiftOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return ">>"; }
public:
    rightShiftOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"sra x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class addOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "+"; }
public:
    addOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"add x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class subOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "-"; }
public:
    subOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"sub x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class mulOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "*"; }
public:
    mulOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"mul x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class divOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "/"; }
public:
    divOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"div x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class modOperator
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "%"; }
public:
    modOperator(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        int LeftReg  = DoLeft(dst, context, destReg);
        int RightReg = DoRight(dst, context, destReg);
        dst<<"rem x"<<destReg<<", x"<<LeftReg<<", x"<<RightReg<<std::endl;
        // context.RegisterFile.freeReg(LeftReg);
        context.RegisterFile.freeReg(RightReg);
    }
};

class assignmentExpression
    : public binaryOperations 
{
private:
protected:
    virtual const std::string getOpcode() const override
        { return "="; }
public:
    assignmentExpression(TreePtr _left,
        TreePtr _right)
        :binaryOperations(_left,_right)
    {}
};




#endif

