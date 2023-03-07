#ifndef ast_expression_hpp
#define ast_expression_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class expression
    : public Tree
{
private:
    
protected:
public:
    TreePtr assignment_expression;
    TreePtr List;
    
    expression(TreePtr _List, TreePtr _assignment_expression)
        :List(_List),
        assignment_expression(_assignment_expression)
    {}

    virtual ~expression()
    {delete assignment_expression;
    delete List;}

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        List->print(dst);
        dst <<", ";
        assignment_expression->print(dst);
        dst<<"\n";
    }
};


#endif

