#ifndef ast_binaryOperations_hppue()
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
    virtual int getSize(Context &context) const override{
        return 0; //only declarations have memory declared
        return left->getSize(context) + right->getSize(context);
    };
    virtual std::string getId()const override{
        std::cerr<<"getting Id of binary expression";
        exit(1);
    };

    int DoLeft(std::ostream &dst, Context &context, int destReg) const{
        // int LeftReg = context.RegisterFile.allocate();
        left->compile(dst, context, destReg);
        return destReg;
    }
    
    int DoRight(std::ostream &dst, Context &context, int destReg) const{
        std::cerr<<"allocating reg"<<std::endl;
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
        std::string true_label = context.makeupLabel("logicalOr_TRUE");
        std::string false_label = context.makeupLabel("logicalOR_FALSE");
        std::string end_label = context.makeupLabel("logicalOR_END");
        left->compile(dst, context, destReg);
        dst<<"bne x"<<destReg<<", zero, "<<true_label<<std::endl;
        right->compile(dst, context, destReg);
        dst<<"bne x"<<destReg<<", zero, "<<true_label<<std::endl;
        dst<<"j "<<false_label<<std::endl;
        dst<<true_label<<":"<<std::endl;
        dst<<"addi x"<<destReg<<", zero, 1"<<std::endl;
        dst<<"j "<<end_label<<std::endl;
        dst<<false_label<<":"<<std::endl;
        dst<<"mv x"<<destReg<<", zero"<<std::endl;
        dst<<"j "<<end_label<<std::endl;
        dst<<end_label<<":"<<std::endl;
    }
    int getValue(Context &context) override{
        return left->getValue(context) || right->getValue(context);
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
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        std::string true_label = context.makeupLabel("logicalOr_TRUE");
        std::string false_label = context.makeupLabel("logicalOR_FALSE");
        std::string end_label = context.makeupLabel("logicalOR_END");
        left->compile(dst, context, destReg);
        dst<<"beq x"<<destReg<<", zero, "<<false_label<<std::endl;
        right->compile(dst, context, destReg);
        dst<<"beq x"<<destReg<<", zero, "<<false_label<<std::endl;
        dst<<"j "<<true_label<<std::endl;
        dst<<true_label<<":"<<std::endl;
        dst<<"addi x"<<destReg<<", zero, 1"<<std::endl;
        dst<<"j "<<end_label<<std::endl;
        dst<<false_label<<":"<<std::endl;
        dst<<"mv x"<<destReg<<", zero"<<std::endl;
        dst<<"j "<<end_label<<std::endl;
        dst<<end_label<<":"<<std::endl;
    }
    int getValue(Context &context) override{
        return left->getValue(context) && right->getValue(context);
    }
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
    int getValue(Context &context) override{
        return left->getValue(context) | right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) ^ right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) & right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) == right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) != right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) < right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) > right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) <= right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) >= right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) << right->getValue(context);
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

    int getValue(Context &context) override{
        return left->getValue(context) >> right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) + right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) - right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) * right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) / right->getValue(context);
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
    int getValue(Context &context) override{
        return left->getValue(context) % right->getValue(context);
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
    virtual void compile(std::ostream &dst, Context &context, int destReg)const override{
        //first assume left side is only identifier, we will worry about messier stuff on left side later on. 

        int RightReg = DoRight(dst, context, destReg);
        std::string id = left->getId();
        int offset = context.stack.back().varBindings[id].offset;

        //assignment can only happen in local scope so no need to worry about globals
        dst<<"sw x"<<RightReg<<", "<<offset<<"(s0)"<<std::endl;

        context.RegisterFile.freeReg(RightReg);
    }
};




#endif

