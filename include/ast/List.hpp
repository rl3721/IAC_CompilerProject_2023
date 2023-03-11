#ifndef list_hpp
#define list_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class List
    : public Tree
{
private:
    
protected:
    TreePtr left;
    TreePtr right;
public:
    List(TreePtr _left, TreePtr _right)
        :left(_left),
        right(_right)
    {}
    virtual ~List()
    {delete left;
    delete right;}

    //virtual const char *getOpcode() const =0;
    /*virtual int getSize(){
        return left->getSize() + right->getSize();
    }*/
    virtual void print(std::ostream &dst) const override
    {
        left->print(dst);
        dst <<" ";
        right->print(dst);
    }

    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        left->compile(dst,context,destReg);
        right->compile(dst,context,destReg);
    }

    
};

#endif

