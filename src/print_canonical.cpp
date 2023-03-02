#include "ast_tree.hpp"

int main()
{
    const Tree *ast=parseAST();

    ast->print(std::cout);
    std::cout<<std::endl;

    return 0;
}
