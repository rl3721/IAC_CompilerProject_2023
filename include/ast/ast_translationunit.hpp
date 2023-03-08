#ifndef ast_translationunit_hpp
#define ast_translationunit_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>


class translationUnit
    : public Tree
{
private:
    
protected:
    TreePtr List;
    TreePtr external_declaration;
public:
    translationUnit(TreePtr _List, TreePtr _external_declaration)
        :List(_List),
        external_declaration(_external_declaration)
    {}

    virtual ~translationUnit()
    {delete external_declaration;
    delete List;}

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        List->print(dst);
        dst <<", ";
        external_declaration->print(dst);
        dst<<"\n";
    }
};


#endif

