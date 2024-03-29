This repository contains the C90 to risc-V instruction set Assembly compiler produced as part of the second year Compiler Project described by the  [spec](https://github.com/LangProc/langproc-cw). The intent for this repo is for this to be used as a learning tool, **do not copy this code, you will be caught**. This code passed 82% of seen and unseen test. If you have questions, please feel free to email me: rl3721@ic.ac.uk

## Contributors
* Runshen Lu (rl3721)
* Han Jiao (hj1021)

## Repository Structure
* [src](https://github.com/rl3721/IAC_CompilerProject_2023/tree/main/src) contains the source files for parser using Yacc and lexer using Flex. 
* [include](https://github.com/rl3721/IAC_CompilerProject_2023/tree/main/include) contains the ast files used to generate the assembly
* [compiler_tests](https://github.com/rl3721/IAC_CompilerProject_2023/tree/main/compiler_tests) contains the some tests for the compiler, which can be done by running [test.sh](https://github.com/rl3721/IAC_CompilerProject_2023/blob/main/test.sh)

## References
During the development of this project, inspirations were gained from numbers of tools and projects. Including but not limited to:

* [Odyss-C Compiler](https://github.com/simon-staal/Odyssey_C_Compiler)
* [Godbolt](https://godbolt.org/)
* [ANSI C Yacc grammar](https://www.lysator.liu.se/c/ANSI-C-grammar-y.html)
* [ANSI C grammar, Lex specification](https://www.lysator.liu.se/c/ANSI-C-grammar-l.html)

## Historical Relics
The old readme of the project can be found [here](https://github.com/rl3721/IAC_CompilerProject_2023/blob/main/old_readme.md), generated by some broken mind