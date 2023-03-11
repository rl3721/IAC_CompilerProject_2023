#ifndef ast_parameterlist_hpp
#define ast_parameterlist_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class parameterList
    : public Tree
{
private:
    
protected:
    TreePtr List;
    TreePtr declaration;
public: 
    parameterList(TreePtr _List, TreePtr _declaration)
        :List(_List),
        declaration(_declaration)
    {}

    virtual ~parameterList()
    {delete declaration;
    delete List;}

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        List->print(dst);
        dst <<", ";
        declaration->print(dst);
        dst<<"\n";
    }
};

class elipsedParameterList
    : public Tree
{
private:
protected:
    TreePtr List;
public:
    elipsedParameterList(TreePtr _List)
        :List(_List)
    {}

    virtual ~elipsedParameterList()
    {
    delete List;}

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        List->print(dst);
        dst <<"...\n ";
    }
};


#endif

