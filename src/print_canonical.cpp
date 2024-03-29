#include <cstdio>
#include "ast.hpp"

int main()
{

    const Tree *ast=parseAST();
    freopen("test/ast.log", "w", stdout);
    
    ast->print(std::cout);
      
     freopen("test/output.s", "w", stdout);
     freopen("test/error.log", "w", stderr);

     Context context;
     std::cout<<"addi sp, zero, ffff0000"<<std::endl; //consider this is where the stack pointer starts
     ast->compile(std::cout,context, context.RegisterFile.allocate());


    //   // Close the files
     fclose(stdout);
     fclose(stderr);
}