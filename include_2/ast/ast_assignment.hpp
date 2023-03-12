#ifndef ast_assignment_hpp
#define ast_assignment_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class assignmentOperator
    : public Tree
{
private:
protected:
    std::string type;
public:
    assignmentOperator(std::string _type)
        :type(_type)
    {}

    virtual ~assignmentOperator()
    {}

    virtual void print(std::ostream &dst) const override
    {
        dst<<type;
    }
};

class assignmentExpression
    : public Tree
{
private:
protected:
    TreePtr left;
    TreePtr token;
    TreePtr right;
public:
    assignmentExpression(TreePtr _left, TreePtr _operator,  TreePtr _right)
        :left(_left),
        token(_operator),
        right(_right)
    {}

    virtual ~assignmentExpression()
    {delete left;
    delete token;
    delete right;}

    virtual void print(std::ostream &dst) const override
    {
        dst<<"assignment: (";
        left->print(dst);
        token->print(dst);
        right->print(dst);
        dst<<")\n";
    }
};

#endif

