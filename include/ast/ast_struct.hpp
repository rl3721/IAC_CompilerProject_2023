#ifndef ast_struct_hpp
#define ast_struct_hpp

#include "ast_base.hpp"
#include "List.hpp"

#include <cmath>


class structDefinition
    : public Tree
{
private:
protected:

public:
    std::string identifier;
    ListPtr expression;

    structDefinition(std::string _identifier, ListPtr _expression)
        :identifier(_identifier),
        expression(_expression)
    {}

    // structDefinition(std::string _identifier)
    //     :identifier(_identifier),
    // {}

    virtual ~structDefinition()
    {delete expression;;
    }

    virtual void print(std::ostream &dst) const override
    {
        std::cerr<<"compiling struct definition"<<std::endl;
        dst<<"struct: "<<identifier<<std::endl;
        if(expression == NULL){
            dst<<"finish struct def"<<std::endl;
            return;
        }
        for(int i = 0; i < expression->size(); i++){
            expression->at(i)->print(dst);
            dst<<std::endl;
        }
        dst<<"finish struct def"<<std::endl;

    }


    int getSize(Context &context) const override{
        int size = 0;
        if(expression == NULL){
            return context.global.structIndex.size()*4;
        }
        for(int i = 0; i < expression->size(); i++){
            size += expression->at(i)->getSize(context);
        }
        return size;

    }

    std::string getId() const override{
        return identifier; //only returning the id of the first one. used for parameter. Can be buggy for later. Consider seperating
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        std::cerr<<"compiling struct definition"<<std::endl;
        if(expression == NULL){
            return;
        }
        for(int i = 0; i < expression->size(); i++){
            expression->at(i)->compile(dst, context, destReg);
        }
    }

};

// class structSpecifier
//     : public Tree
// {
// private:
// protected:
// public:
//     std::string identifier;
//     ListPtr list;

//     structSpecifier(
//         std::string _identifier, ListPtr _list)
//         :identifier(_identifier),
//         list(_list)
//     {}
//     structSpecifier(
//         ListPtr _list
//     ): list(_list){}

//     virtual ~structSpecifier()
//     { delete list;
//     }

//     virtual void print(std::ostream &dst) const override
//     {   
//         dst<<"structSpecifier"<<std::endl;
//     }

//     int getSize(Context &context)const override{
//         int size = 0;
//         for(int i = 0; i < list->size(); i++){
//             size += list->at(i)->getSize(context);
//         }
//     }
//     std::string getId() const override{
//         return identifier;
//     }
//     void compile(std::ostream &dst, Context &context, int destReg) const override{
//         if (list == NULL){//not definition but only serves as declaration specifier. 
//             //you can do what ever you want
//             return;
//         }
//         else{//we start our nightmare
//             if (context.stack.size() == 0){ //if the enum type has been declared
//                 if (context.global.enumSets.find(identifier) != context.global.enumSets.end()){
//                     std::cerr<<"repeated definition of enum in global";
//                     exit(1);
//                 }
//             }
//             else{
//                 if (context.stack.back().enumSets.find(identifier) != context.stack.back().enumSets.end()){
//                     context.enterScope();
//                     context.stack.back().layer++;
//                 }
//             }
//             std::vector<int> enumset;
//             int value = -1; //initialize the value of the first one to be 
            

//             for(int i = 0; i < list->size(); i++){
                
//                 std::string id = list->at(i)->getId();
//                 std::cerr<<"declaring enum token"<<id<<" for enum class "<<identifier<<std::endl;
//                 if (list->at(i)->enumValueExist()){
//                     value = list->at(i)->getValue(context);
//                 }
//                 else{
//                     value++;
//                 }
//                 enumset.push_back(value);

//                 if(context.stack.size() == 0){//declaring in global
//                     if(context.global.enumBindings.find(id) == context.global.enumBindings.end()){ //if enum "token" declared
//                         context.global.enumBindings[id] = value;
//                     }
//                     else{
//                         std::cerr<<"Error: repeated definition of enum in global";
//                         exit(1);
//                     }
//                 }
//                 else{//declaring in local
//                     if(context.global.enumBindings.find(identifier) == context.global.enumBindings.end()){
//                         context.stack.back().enumBindings[identifier] = value;
//                     }
//                     else{
//                         context.enterScope();
//                         context.stack.back().enumBindings[identifier] = value;
//                         context.stack.back().layer++;
//                     }
//                 }
//             }
//             if (context.stack.size() == 0){
//                 context.global.enumSets[identifier] = enumset;
//             }
//             else{
//                 context.stack.back().enumSets[identifier] = enumset;
//             }
//         }
//     }
// };

class structDeclaration
    : public Tree
{
private:
protected:

public:
    TreePtr identifier;
    ListPtr expression;

    structDeclaration(TreePtr _identifier, ListPtr _expression)
        :identifier(_identifier),
        expression(_expression)
    {}

    virtual ~structDeclaration()
    {delete expression;
    }

    virtual void print(std::ostream &dst) const override
    {
        std::cerr<<"compiling struct declaration"<<std::endl;
        dst<<"struct member:"<<expression->at(0)->getId();
    }

    int getSize(Context &context) const override{
        return identifier->getSize(context);
    }
    std::string getId() const override{
        // return identifier;
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
         std::cerr<<"compiling struct declaration"<<std::endl;
         std::string id = expression->at(0)->getId(); //name of the struct member
         int index = -4 * context.global.structIndex.size(); //index of the struct member
         context.global.structIndex[id] = index;        //add the index to the map
         std::cerr<<"add struct member: "<<id<<" has index "<<index<<std::endl;

    }

};

class structMember
    : public Tree
{
private:
protected:

public:
    TreePtr identifier;
    std::string member;

    structMember(TreePtr _identifier, std::string _member)
        :identifier(_identifier),
        member(_member)
    {}

    virtual ~structMember()
    {
        delete identifier;
    }

    virtual void print(std::ostream &dst) const override
    {
        std::cerr<<"calling struct member"<<std::endl;
        dst<<"member: "<<member;
    }

    int getSize(Context &context) const override{
        return 4; //dentifier->getSize(context);
    }
    std::string getId() const override{
        // return identifier;
    }

    void leftCompile(std::ostream &dst, Context &context, int destReg) const override{
        identifier->leftCompile(dst, context, destReg);
        int memberIndex = context.global.structIndex[member];
        dst<<"addi x"<<destReg<<", x"<<destReg<<", "<<memberIndex<<std::endl;
        
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        leftCompile(dst, context, destReg);
        dst<<"lw x"<<destReg<<", 0(x"<<destReg<<")"<<std::endl;
    }


};






#endif

