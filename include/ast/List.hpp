#ifndef list_hpp
#define list_hpp

#include "ast_base.hpp"

#include <cmath>
#include <string>

typedef std::vector<TreePtr> List;
typedef List *ListPtr;

inline ListPtr initList(TreePtr _TreePtr){
    ListPtr _ListPtr =  new List();
    _ListPtr->push_back(_TreePtr);
    return _ListPtr;
}

inline ListPtr concatList(ListPtr _ListPtr, TreePtr _TreePtr){
    _ListPtr->push_back(_TreePtr);
    return _ListPtr;
}

class translationUnit
    : public Tree
{
private:
    
protected:
    ListPtr list;
public:

    translationUnit(ListPtr _list)
        :list(_list)
    {}
    virtual ~translationUnit()
    {}

    //virtual const char *getOpcode() const =0;
    virtual unsigned int getSize()const override{}
    virtual std::string getId()const override{}
    virtual void print(std::ostream &dst) const override
    {
        for (int i=0;i<list->size();i++){
            list->at(i)->print(dst);
        }
    }

    void compile(std::ostream &dst, Context &context, Reg destReg) const override{
        for (int i=0;i<list->size();i++){
            list->at(i)->compile(dst,context,destReg);
        }
    }
};

#endif

