#ifndef ast_array_hpp
#define ast_array_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>
#include "List.hpp"

class arrayDeclarator
    : public Tree
{
private:
protected:
public:
    TreePtr declarator;
    TreePtr expression;

    arrayDeclarator(TreePtr _declarator, TreePtr _expression)
        :declarator(_declarator),
        expression(_expression)
    {}

    virtual ~arrayDeclarator()
    {delete declarator;
    delete expression;
    }
    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"array declarator"<<std::endl;
    }

    // bool isFunction() override{
    //     return false;//this declaration is always for variable, enum, struct... not functions!
    // }

    int getSize(Context &context)const override{
        return expression->getValue(context); //size of declarator equals to the value in square brackets
        // actuall memory declared in declaration
    }

    std::string getId() const override{
        return declarator->getId();
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::cerr<<" array declared"<<std::endl;
    }

};

class arrayIndex
    : public Tree
{
    private:
    protected:
    public:
        TreePtr identifier; //this is not nececarrily the identfier, it can be anothe "array" (multidimensional array)
        TreePtr expression;
        arrayIndex(TreePtr _identifier, TreePtr _expression)
            :identifier(_identifier),
            expression(_expression)
        {}

        ~arrayIndex(){
            delete identifier;
            delete expression;
        }

        virtual void print(std::ostream &dst) const override
        {
            dst<<"array index"<<std::endl;
        }

        int getSize(Context &context) const override{
            return 0;
        }
        std::string getId()const  override{
            return identifier->getId();
        }
        void compileArrayOffset(std::ostream &dst, Context &context, int destReg)const override{
            identifier->compileArrayOffset(dst, context,destReg);
            int newReg = context.RegisterFile.allocate();
            expression->compile(dst,context,newReg);
            dst<<"slli x"<<newReg<<", x"<<newReg<<", "<<2<<std::endl; //equialent to multiply by 4. for double and multi dimensional arrays, more features needed. 
            dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<newReg<<std::endl;
            context.RegisterFile.freeReg(newReg);
        }
        void compile(std::ostream &dst, Context &context, int destReg) const override{
            compileArrayOffset(dst, context,destReg);
            dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
        }
};    




#endif

