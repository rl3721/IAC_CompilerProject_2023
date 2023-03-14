#include "ast.hpp"
#include <cstdio>

int main()
{

    const Tree *ast=parseAST();
    freopen("test/ast.log", "w", stdout);
    
    ast->print(std::cout);
      
    freopen("test/output.log", "w", stdout);
    freopen("test/error.log", "w", stderr);

    Context context;
    std::cout<<"addi sp, zero, ffff0000"<<std::endl; //consider this is where the stack pointer starts
    ast->compile(std::cout,context,context.RegisterFile.allocate());


      // Close the files
  fclose(stdout);
  fclose(stderr);
}
