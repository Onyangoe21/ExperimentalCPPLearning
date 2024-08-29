/*
 * This portion is written for fun and for those who want to understand what the computer is doing exactly 
 * between command being run to the execution of a c++ program.
 * 
 * Your computer is basically robotic motherboard with preloaded code that for simplicity, we will say is the operating system
 * code and so if you use a mac, this code is hardware code written by Macintosh company and continuously runs on your specific 
 * hardware when you turn your computer on: the process of how exactly code can actually run on hardware that's turned on is very
 * long because you would need to understand that at the very basic level, it only matters that most of these components can 
 * store information and some of them are only specifying electric flow patterns. As a result, your computer can have the little 
 * hardware components changing what they do at specific times, keeping instructions, waiting for some time before execution ... 
 * with your computer understaning time using a vibrator that oscilates electrical flow from on to off at specific stable frequency.
 * Ok ok, forget all of that and just know your computer can be complex enough to keep some instructions and the underlying code 
 * can thus tell it when you are typing something in: assuming you type gcc myfile.cpp -- there is a program saying 'hey, this human
 * is tryng to access the instructions kept in a tool called gcc -- gcc comes in to the rescue and takes your file as input.
 *
 * Now that the file with your code has gone in as input, your computer is giving gcc the amount of memory it needs to run given that
 * specific input and all it will need to do is capture the output: gcc -- in this case the compiler -- there are other compilers out
 * there --does something interesting and in a nut shell, it knows that the final output needs to be in machine code as that is the 
 * only sort of output your computer understands and can actually run as 'instructions'. 
 * 
 * To make programming more efficient, the designers of GCC (and C/C++ in general) recognized that certain functionalities are used 
 * very frequently, such as standard input/output operations, mathematical functions, and data structures. To simplify the use of 
 * these common functionalities, they provided pre-written code in the form of libraries. These libraries can be easily included 
 * in a program using the #include directive, which tells the preprocessor to insert the contents of the specified header file 
 * (which declares the functions and data structures) into the source code before compilation: As you can already imagine, however,
 * your computer knows nothing about any existing libraries so the include is replaced: the output can be in .i or .cpp
 * 
 * If you wish to see your hello world program right after the pre-processing -- that's what that step is called, run the command:
 * g++ -E hello_world.cpp -o hello_world_preprocessed.cpp: copy of the output in included here: the instructions expanded at this 
 * level are known us preprocessor directives and here is the full list: include, define, undef, (if,elif,else,endif), (ifdef, ifndef),
 * (error, pragma, line): you can also use define for file name, line number, date and c++ version like: #define __FILE__ and 
 * #define __LINE__, #define __DATE__, #define __TIME__, #define __cplusplus:
 *
 * But that is not the point, that is just to give a clean illustration on why this process might be necessary: for example, the iostream
 * used with #include <iostream> (angle brackets just mean search from the system not the current folder), is replaced with over 50000 lines.
 * you wouldn't want to try implement things like that.
 *
 * After pre-processing, the next intermediate code form is assembly language or some other lower level language: FFT: why don't we want the 
 * non-expanded micros to make it here? Why can't we go straight from code to machine code?
 * 
 * As for why we need the preprocessed code turned into assembly code, assume that one of the major things could be to be able to optimize 
 * the code before feeding it into the machine: to change it to compiled assembly code, run: g++ -S hello_world.i -o hello_world.s: it might 
 * throw a warning regarding c++ output because as you can imagine, how can it tell if you are in C++ or C?
 *  
 * Now it's time to finally get your code to a stage where it can be converted to executable: think of this part as putting your instructions 
 * into binary that the computer understands:  Run: g++ -c hello_world.s -o hello_world.o:
 * 
 * Remember, this binary could still be split up into many sections and thus, we need the linker:
 * Additionally, all c++ programs need an entry point and all you have given now is just the instructions: To dot all the i's and put 
 * everything together, run: g++ hello_world.o -o hello_world: remember, provided your output is the final binary, this command stays the same: 
 * i.e: running to fully compiled biary from your .cpp file is g++ hello_world.cpp -o hello_world
 * 
 * At this stage, unfortunately the code is now in binary and you cannot read it: go ahead and do ./hello_world to run the code.
 * As you start thinking more about the code, remember that your code will always need an entry point and in c++, the smallest unit you can 
 * run is a function. At least main function is required and will act as entry point to your code -- otherwise you simply have some binary 
 * resting in your computer folder but cannot do anything. Have fun!
 * 
*/
#include <iostream>
int main() {
    std::cout<<"Hello World!!!"<< std::endl;
}


/**
    * Some things that might be handy to remember to learn faster:
    *
    * Object-Oriented Programming: C++ is an object-oriented programming language, which means that it allows you to define classes and 
      objects to model real-world entities and their behavior.
    * Strong Type System: C++ has a strong type system, which means that variables have a specific type and that type must be respected 
     in all operations performed on that variable.
    * Low-level Access: C++ provides low-level access to system resources, which makes it a suitable choice for system programming and 
     writing efficient code.
    * Standard Template Library (STL): The STL provides a large set of pre-written algorithms and data structures that can be used to 
     simplify your code and make it more efficient.
    * Cross-platform Compatibility: C++ can be compiled and run on multiple platforms, including Windows, MacOS, and Linux, making it a 
     versatile language for developing cross-platform applications.
    * Performance: C++ is a compiled language, which means that code is transformed into machine code before it is executed. This can 
     result in faster execution times and improved performance compared to interpreted languages like Python.
    * Memory Management: C++ requires manual memory management, which can lead to errors if not done correctly. However, this also provides 
     more control over the program’s memory usage and can result in more efficient memory usage.
    * Syntax: C++ has a complex syntax that can be difficult to learn, especially for beginners. However, with practice and experience, 
     it becomes easier to understand and work with so do not give up!!!
    *

    * Recommended books

    “The C++ Programming Language” by Bjarne Stroustrup
    “Effective C++: 55 Specific Ways to Improve Your Programs and Designs” by Scott Meyers
    “C++ Primer Plus” by Stephen Prata
    “C++ For Dummies” by Stephen R. Davis
    “Data Structures and Algorithm Analysis in C++” by Mark Allen Weiss
 */