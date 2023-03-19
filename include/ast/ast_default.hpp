// #ifndef ast_default_hpp
// #define ast_default_hpp

// #include "ast_base.hpp"
// #include "List.hpp"
// #include <string>


// class defaultStatement
//     : public Tree
// {
// private:
    
// protected:
//     TreePtr expression;
//     TreePtr statement;
// public:
//     defaultStatement(TreePtr _expression, TreePtr _statement)
//     :expression(_expression),
//     statement(_statement)
//     {}
//     virtual ~defaultStatement(){
//         // delete branches[0];
//         // delete branches[1];
//     }

//     //virtual const char *getOpcode() const =0;
//     virtual int getSize(Context &context)const override{
//         return statement->getSize(context);
//     }
//     virtual std::string getId()const override{
//         std::cerr<<"Error: getting id of case statement";
//         exit(1);
//     }
//     virtual void print(std::ostream &dst) const override
//     {
//         dst<<"default statement: ";
//         dst<<"expression:"<<std::endl;
//         expression->print(dst);
//         dst<<"statement:"<<std::endl;
//         statement->print(dst);
//         dst<<"end of case"<<std::endl;
//     }

//     void compile(std::ostream &dst, Context &context, int destReg) const override{
//         dst<<context.stack.back().startLabel<<":"<<std::endl;
//         int conReg = context.RegisterFile.allocate();
//         expression->compile(dst,context,conReg);
//         std::string nextCase = context.makeupLabel("endCASE");
//         dst<<"bne x"<<destReg<<", x"<<conReg<<", "<<context.stack.back().endLabel<<std::endl;
//         context.RegisterFile.freeReg(conReg);
//         context.stack.back().startLabel = nextCase;
//         statement->compile(dst,context,destReg);
//     }
// };

// #endif

