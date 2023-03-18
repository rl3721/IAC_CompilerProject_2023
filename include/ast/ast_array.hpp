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

    virtual void print(std::ostream &dst) override
    {
        dst<<"array declarator"<<std::endl;
    }

    // bool isFunction() override{
    //     return false;//this declaration is always for variable, enum, struct... not functions!
    // }

    int getSize(Context &context) override{
        return expression->getValue(context); //size of declarator equals to the value in square brackets
        // actuall memory declared in declaration
    }

    std::string getId() override{
        return declarator->getId();
    }

    void compile(std::ostream &dst, Context &context, int destReg) override{
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

        virtual void print(std::ostream &dst) override
        {
            dst<<"array index"<<std::endl;
        }

        int getSize(Context &context) override{
            return 0;
        }
        std::string getId() override{
            return identifier->getId();
        }
        void compileArrayOffset(std::ostream &dst, Context &context, int destReg)override{
            identifier->compileArrayOffset(dst, context,destReg);
            int newReg = context.RegisterFile.allocate();
            expression->compile(dst,context,newReg);
            dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<newReg<<std::endl;
        }
        void compile(std::ostream &dst, Context &context, int destReg) override{
            compileArrayOffset(dst, context,destReg);
        }
        




#endif

