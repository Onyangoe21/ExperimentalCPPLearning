Remember how we hinted to a very short process in code generation that starts with preprocessing --> generation of assembly code ---> generation of machine code ----> linking the binaries: well, turns out there is even more under the hood:

The C++ compiler goes through several stages to transform your source code into an executable program. Here is a summary of the typical order of events during the compilation process:

### 1. **Preprocessing**
   - **Macro Expansion**: The preprocessor expands all macros defined with `#define`.
   - **File Inclusion**: The contents of header files included with `#include` are inserted into the source file.
   - **Conditional Compilation**: Preprocessor directives like `#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, and `#endif` are processed, and sections of code may be included or excluded based on the conditions.
   - **Line Control**: Directives like `#line` adjust line numbers and filenames for error messages.
   - **Removal of Comments**: All comments in the code are removed.

   **Output**: A single, large source file where all the directives have been expanded.

### 2. **Lexical Analysis**
   - **Tokenization**: The preprocessed source code is broken down into tokens, which are the smallest units of meaning (keywords, identifiers, literals, operators, etc.).
   - **Symbol Table Generation**: The compiler starts building a symbol table that holds information about variables, functions, objects, etc., in the program.

### 3. **Syntax Analysis (Parsing)**
   - **Grammar Check**: The sequence of tokens is checked against the grammar rules of C++ to ensure the code is syntactically correct.
   - **Abstract Syntax Tree (AST) Construction**: The compiler constructs an abstract syntax tree (AST), which is a hierarchical representation of the program structure.

### 4. **Semantic Analysis**
   - **Type Checking**: The compiler checks that the types of variables and expressions are consistent with their usage.
   - **Template Instantiation**: If the code uses templates, the compiler performs template instantiation here. It expands the template into concrete code for each type it’s instantiated with. During this process, the compiler checks that the template is used correctly and that the types are appropriate.
   - **Scope Resolution**: The compiler ensures that identifiers (variables, functions, classes) are used within their correct scope.
   - **Static Checks**: Various other checks are performed, such as ensuring that functions are called with the correct number of arguments and that variables are initialized before use.

### 5. **Intermediate Code Generation**
   - **Intermediate Representation (IR)**: The compiler translates the AST into an intermediate representation, which is a lower-level code that is easier to optimize but still not specific to the target machine architecture.
   - **Optimization**: The compiler performs optimizations on the intermediate code to improve performance, such as eliminating redundant calculations or reordering instructions.

### 6. **Code Generation**
   - **Assembly Code Generation**: The intermediate code is translated into assembly language specific to the target CPU architecture.
   - **Further Optimization**: The compiler may perform additional, target-specific optimizations at this stage.

### 7. **Assembly**
   - **Machine Code Generation**: The assembler translates the assembly code into machine code, which is a binary representation of the program that the CPU can execute.
   - **Object File Creation**: The machine code is stored in an object file (`.o` or `.obj`), along with additional information needed for linking.

### 8. **Linking**
   - **Symbol Resolution**: The linker resolves symbols (functions and variables) across multiple object files and libraries.
   - **Relocation**: The linker adjusts addresses in the machine code so that all parts of the program fit together in memory.
   - **Executable Creation**: The linker combines all the object files and any needed libraries into a single executable file. This is the final binary that can be run on the target system.

### 9. **Loading (When the Program is Run)**
   - **Loading into Memory**: When the program is executed, the operating system loads the executable file into memory.
   - **Dynamic Linking**: If the program uses shared libraries (e.g., DLLs or `.so` files), the OS loads these libraries into memory and links them with the program.
   - **Execution Start**: The program starts executing, beginning at the `main()` function or a custom entry point if specified.
