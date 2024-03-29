#ifndef ast_enum_hpp
#define ast_enum_hpp

#include "ast_base.hpp"
#include "List.hpp"

#include <cmath>


class Enumerator
    : public Tree
{
private:
protected:

public:
    std::string identifier;
    TreePtr expression;

    Enumerator(std::string _identifier, TreePtr _expression)
        :identifier(_identifier),
        expression(_expression)
    {}

    virtual ~Enumerator()
    {delete expression;;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {
        dst<<"enum:";
    }

    // bool isFunction() const override{
    //     return false;//this declaration is always for variable, enum, struct... not functions!
    // }

    int getSize(Context &context) const override{
        return 0;
    }
    std::string getId() const override{
        return identifier; //only returning the id of the first one. used for parameter. Can be buggy for later. Consider seperating
    }
    bool enumValueExist()override{
        if(expression == NULL){
            return false;
        }
        else{
            return true;
        }
    }
    int getValue(Context &context)override{
        if(expression == NULL){
            return -1;
        }
        else{
            return expression->getValue(context);
        }
    }

    void compile(std::ostream &dst, Context &context, int destReg) const override{
        // if(context.stack.size() == 0){//declaring in global
        //     if(context.global.enumBindings.find(identifier) == context.global.enumBindings.end()){
        //         context.global.enumBindings[identifier] = expression->getValue();
        //     }
        //     else{
        //         std::cerr<<"Error: repeated definition of enum in global";
        //         exit(1);
        //     }
        // }
        // else{//declaring in local
        //     if(context.global.enumBindings.find(identifier) == context.global.enumBindings.end()){
        //         context.stack.back().enumBindings[identifier] = expression->getValue();
        //     }
        //     else{
        //         context.enterScope();
        //         context.stack.back().enumBindings[identifier] = expression->getValue();
        //         context.stack.back().layer++;
        //     }
        // }
    }

};

class enumSpecifier
    : public Tree
{
private:
protected:
public:
    std::string identifier;
    ListPtr list;

    enumSpecifier(
        std::string _identifier, ListPtr _list)
        :identifier(_identifier),
        list(_list)
    {}
    enumSpecifier(
        ListPtr _list
    ): list(_list){}

    virtual ~enumSpecifier()
    { delete list;
    }

    //virtual const char *getOpcode() const =0;

    virtual void print(std::ostream &dst) const override
    {   
        dst<<"enumSpecifier"<<std::endl;
    }

    int getSize(Context &context)const override{
        return 4; // the same as int
    }
    std::string getId() const override{
        return identifier;
    }
    void compile(std::ostream &dst, Context &context, int destReg) const override{//I will assume the definition of enum will always happen before they are used.
        std::cerr<<"enumSpecifier"<<std::endl;
        if (list == NULL){//not definition but only serves as declaration specifier. 
            //you can do what ever you want
            return;
        }
        else{//we start our nightmare
            if (context.stack.size() == 0){ //if the enum type has been declared
                if (context.global.enumSets.find(identifier) != context.global.enumSets.end()){
                    std::cerr<<"repeated definition of enum in global";
                    exit(1);
                }
            }
            else{
                if (context.stack.back().enumSets.find(identifier) != context.stack.back().enumSets.end()){
                    context.enterScope();
                    context.stack.back().layer++;
                }
            }
            std::vector<int> enumset;
            int value = -1; //initialize the value of the first one to be 
            

            for(int i = 0; i < list->size(); i++){
                
                std::string id = list->at(i)->getId();
                std::cerr<<"declaring enum token"<<id<<" for enum class "<<identifier<<std::endl;
                if (list->at(i)->enumValueExist()){
                    value = list->at(i)->getValue(context);
                }
                else{
                    value++;
                }
                enumset.push_back(value);

                if(context.stack.size() == 0){//declaring in global
                    if(context.global.enumBindings.find(id) == context.global.enumBindings.end()){ //if enum "token" declared
                        context.global.enumBindings[id] = value;
                    }
                    else{
                        std::cerr<<"Error: repeated definition of enum in global";
                        exit(1);
                    }
                }
                else{//declaring in local
                    if(context.global.enumBindings.find(identifier) == context.global.enumBindings.end()){
                        context.stack.back().enumBindings[identifier] = value;
                    }
                    else{
                        context.enterScope();
                        context.stack.back().enumBindings[identifier] = value;
                        context.stack.back().layer++;
                    }
                }
            }
            if (context.stack.size() == 0){
                context.global.enumSets[identifier] = enumset;
            }
            else{
                context.stack.back().enumSets[identifier] = enumset;
            }
        }
    }
};







#endif

