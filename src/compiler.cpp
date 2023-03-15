#include <fstream>
#include <iostream>
#include <unistd.h>

#include "cli.h"
#include "ast.hpp"

void compile(std::ostream &w)
{
    w << ".text" << std::endl;
    //w << ".globl f" << std::endl;
    w << std::endl;

    // w << "f:" << std::endl;
    // w << "addi  t0, zero, 0" << std::endl;
    // w << "addi  t0, t0,   5" << std::endl;
    // w << "add   a0, zero, t0" << std::endl;
    // w << "ret" << std::endl;
    const Tree *ast=parseAST();
    //freopen("test/ast.log", "w", stdout);
    
    //ast->print(std::cout);
      
    // freopen("test/output.log", "w", stdout);
    // freopen("test/error.log", "w", stderr);

    Context context;
    //std::cout<<"addi sp, zero, ffff0000"<<std::endl; //consider this is where the stack pointer starts
    ast->compile(w,context,context.RegisterFile.allocate()); 
    //this takes away t0, should be freed but doesn't matter, confirm the meaning and figure out if there is something better to do. 
    



      // Close the files
//   fclose(stdout);
//   fclose(stderr);
}

// TODO: uncomment the below if you're using Flex/Bison.
 extern FILE *yyin;

int main(int argc, char **argv)
{
    // Parse CLI arguments, to fetch the values of the source and output files.
    std::string sourcePath = "";
    std::string outputPath = "";
    if (parse_command_line_args(argc, argv, sourcePath, outputPath))
    {
        return 1;
    }

    // TODO: uncomment the below lines if you're using Flex/Bison.
    // This configures Flex to look at sourcePath instead of
    // reading from stdin.
    yyin = fopen(sourcePath.c_str(), "r");
    if (yyin == NULL)
    {
        perror("Could not open source file");
        return 1;
    }

    // Open the output file in truncation mode (to overwrite the contents)
    std::ofstream output;
    output.open(outputPath, std::ios::trunc);

    // Compile the input
    std::cout << "Compiling: " << sourcePath << std::endl;
    compile(output);
    std::cout << "Compiled to: " << outputPath << std::endl;

    output.close();
    return 0;
}

