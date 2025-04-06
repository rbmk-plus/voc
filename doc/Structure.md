## Structure of the compiler

*OP means Oberon Portable*

- Modules in `/src/compiler/`
    - Compiler - entry point
    - OPS - Scanner
    - OPP - Parser 
    - OPB - Build parse tree
    - OPV - parse tree traverser
    - OPT - Symbol Table
    - OPC - C source code generator version
    - OPM - C code generation constants
    - extTools  

dependency tree as of   
> commit 71488ffe850fa01832ef94fa14af777b2c7a917a  
Fri Apr 4 18:13:57 2025 +0000


