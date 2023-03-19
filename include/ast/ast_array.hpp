#ifndef ast_array_hpp
#define ast_array_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>
#include "List.hpp"

/* For arrys, it is only done such it passes the test, but it is not fully implemented
Multidimensional arrays not supported
Unary Operator not supported
Initialization not supported*/
// class arrayDeclarator //unchanged grammar
//     : public Tree
// {
// private:
// protected:
// public:
//     TreePtr declarator;
//     TreePtr expression;

//     arrayDeclarator(TreePtr _declarator, TreePtr _expression)
//         :declarator(_declarator),
//         expression(_expression)
//     {}

//     virtual ~arrayDeclarator()
//     {delete declarator;
//     delete expression;
//     }
//     //virtual const char *getOpcode() const =0;

//     virtual void print(std::ostream &dst) const override
//     {
//         dst<<"array declarator"<<std::endl;
//     }

//     // bool isFunction() override{
//     //     return false;//this declaration is always for variable, enum, struct... not functions!
//     // }

//     int getSize(Context &context)const override{
//         return expression->getValue(context); //size of declarator equals to the value in square brackets
//         // actuall memory declared in declaration
//     }

//     std::string getId() const override{
//         return declarator->getId();
//     }

//     void compile(std::ostream &dst, Context &context, int destReg) const override{
//         std::cerr<<" array declared"<<std::endl;
//     }

// };

class arrayDeclarator
    : public Tree
{
private:
protected:
public:
    TreePtr declarator;
    ListPtr expression;

    arrayDeclarator(TreePtr _declarator, ListPtr _expression)
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
        int size = 1;
        for (int i = 0; i < expression->size(); i++){
            size *= expression->at(i)->getValue(context);
        } //total size of memory required for this array
        return size;
    }

    std::string getId() const override{
        return declarator->getId();
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::cerr<<" array declared"<<std::endl;
        for (int i = 0; i < expression->size(); i++){
            int dimension = expression->at(i)->getValue(context);
            if (context.stack.size() == 0){
                context.global.varBindings[declarator->getId()].arrayIndex.push_back(dimension);
            }
            else{
                context.stack.back().varBindings[declarator->getId()].arrayIndex.push_back(dimension);
            }
        }
    }

};

class arrayIndex
    : public Tree
{
    private:
    protected:
    public:
        TreePtr identifier; //this is not nececarrily the identfier, it can be anothe "array" (multidimensional array)
        ListPtr expression;
        arrayIndex(TreePtr _identifier, ListPtr _expression)
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
        // void leftCompile(std::ostream &dst, Context &context, int destReg)const override{
        //     identifier->leftCompile(dst, context,destReg);
        //     int newReg = context.RegisterFile.allocate();
        //     expression->compile(dst,context,newReg); //
        //     dst<<"slli x"<<newReg<<", x"<<newReg<<", "<<2<<std::endl; //equialent to multiply by 4. for double structs and multi dimensional arrays, more features needed.
        //     //should also add individual size of each dimension to the context, and multiply by that. 
        //     /* I think for multidimensional array, I can change the void to int, the base return zero and each layer ontop returns +1. 
        //     This determines the power you need to multiply it by. I will leave this for now cuz I am lazy.*/
        //     dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<newReg<<std::endl;
        //     context.RegisterFile.freeReg(newReg);
        // }
         
        // void compile(std::ostream &dst, Context &context, int destReg) const override{
            

        //     if(identifier->isPointer(context)){
        //         std::string id = identifier->getId();
        //         int offset = context.stack.back().varBindings[id].offset;
        //         dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
        //         int newReg = context.RegisterFile.allocate();
        //         expression->compile(dst,context,newReg);

        //         dst<<"slli x"<<newReg<<", x"<<newReg<<", "<<2<<std::endl; //fix this later when doing string

        //         dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<newReg<<std::endl;
        //         dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
        //         context.RegisterFile.freeReg(newReg);
        //     }
        //     else{
        //     leftCompile(dst, context,destReg);
        //     dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
        //     }

        // }
        void leftCompile(std::ostream &dst, Context &context, int destReg) const override{
            
            int scale = 1;
            std::vector<int> scale_vector;
            if (context.stack.size() == 0){
                scale *= context.global.varBindings[identifier->getId()].ind_size;
                scale_vector = context.global.varBindings[identifier->getId()].arrayIndex;
            }
            else {
                scale *= context.stack.back().varBindings[identifier->getId()].ind_size;
                scale_vector = context.stack.back().varBindings[identifier->getId()].arrayIndex;
            } //determine the base size of the array, and multiplier for each dimension

            //I guess here you can use the t-regs as function calls won't happen during the process, maybe do it later
            //make reg allocation smarter. 
            int offsetReg = context.RegisterFile.allocate(); //get a new register to store the offset
            int scaleReg = context.RegisterFile.allocate(); //get a new register to store the scale
            
            identifier->leftCompile(dst, context,destReg); //get the base addess of the array in destReg
            
            if (identifier->isPointer(context)){
                dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
            }

            for (int i = expression->size() -1; i > -1; i--){
                expression->at(i)->compile(dst,context,offsetReg);
                dst<<"li x"<<scaleReg<<", "<<scale<<std::endl;
                dst<<"mul x"<<offsetReg<<", x"<<offsetReg<<", x"<<scaleReg<<std::endl;
                if (!identifier->isPointer(context)){
                    //don't think we will ever have an array of pointers
                    //so duh, just don't bother with this
                    scale *= scale_vector[i];
                }
                dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<offsetReg<<std::endl;
            }
            context.RegisterFile.freeReg(offsetReg);
            context.RegisterFile.freeReg(scaleReg);
        }

        void compile(std::ostream &dst, Context &context, int destReg) const override{
            leftCompile(dst,context,destReg);
            dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
            
        }
            
};    

// class arrayIndex
//     : public Tree
// {
//     private:
//     protected:
//     public:
//         TreePtr identifier; //this is not nececarrily the identfier, it can be anothe "array" (multidimensional array)
//         TreePtr expression;
//         arrayIndex(TreePtr _identifier, TreePtr _expression)
//             :identifier(_identifier),
//             expression(_expression)
//         {}

//         ~arrayIndex(){
//             delete identifier;
//             delete expression;
//         }

//         virtual void print(std::ostream &dst) const override
//         {
//             dst<<"array index"<<std::endl;
//         }

//         int getSize(Context &context) const override{
//             return 0;
//         }
//         std::string getId()const  override{
//             return identifier->getId();
//         }
//         void leftCompile(std::ostream &dst, Context &context, int destReg)const override{
//             identifier->leftCompile(dst, context,destReg);
//             int newReg = context.RegisterFile.allocate();
//             expression->compile(dst,context,newReg); //
//             dst<<"slli x"<<newReg<<", x"<<newReg<<", "<<2<<std::endl; //equialent to multiply by 4. for double structs and multi dimensional arrays, more features needed.
//             //should also add individual size of each dimension to the context, and multiply by that. 
//             /* I think for multidimensional array, I can change the void to int, the base return zero and each layer ontop returns +1. 
//             This determines the power you need to multiply it by. I will leave this for now cuz I am lazy.*/
//             dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<newReg<<std::endl;
//             context.RegisterFile.freeReg(newReg);
//         }
//         void compile(std::ostream &dst, Context &context, int destReg) const override{
//             if(identifier->isPointer(context)){
//                 std::string id = identifier->getId();
//                 int offset = context.stack.back().varBindings[id].offset;
//                 dst<<"lw x"<<destReg<<", "<<offset<<"(s0)"<<std::endl;
//                 int newReg = context.RegisterFile.allocate();
//                 expression->compile(dst,context,newReg);

//                 dst<<"slli x"<<newReg<<", x"<<newReg<<", "<<2<<std::endl; //fix this later when doing string

//                 dst<<"add x"<<destReg<<", x"<<destReg<<", x"<<newReg<<std::endl;
//                 dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
//                 context.RegisterFile.freeReg(newReg);
//             }
//             else{
//             leftCompile(dst, context,destReg);
//             dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
//             }

//         }
// };    




#endif

