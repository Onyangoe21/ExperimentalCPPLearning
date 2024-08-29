/*
 * This portion is written for fun and for those who want to understand what the computer is doing exactly 
 * between command being run to the execution of a c++ program: Feel free to jump onto the code in the lower sections below:
 * 

Your computer is like a smart machine with a motherboard that runs preloaded software, which we can think of as the operating 
system (OS). If you're using a Mac, this OS is specifically designed by Apple and constantly manages your hardware when you 
power it on. The way code actually runs on your hardware involves a lot of complex processes, but at the simplest level, it 
comes down to components that can store information and control the flow of electricity. These components work together, 
timing their actions precisely, and can keep instructions, delay execution, or react to your inputs. For example, when you 
type a command like `gcc myfile.cpp`, your computer recognizes this as you trying to use a tool called `gcc`. The `gcc` 
program then steps in and processes your file as you’ve instructed.

Imagine you're working on a C++ program and you decide to run it using a command like `gcc` in your terminal. When you do this, 
your computer gets to work behind the scenes. If you're using an IDE like VSCode, it’s doing something similar—it’s just automating 
those same steps for you. At a basic level, what's happening is that your C++ file is being passed as input to the `gcc` compiler. 
Your computer allocates the necessary memory for `gcc` to do its job. 

Now, `gcc` is a type of compiler, and its main task is to take the code you wrote and transform it into something your computer 
can actually understand: machine code. This is the only type of code that your computer’s hardware can execute as instructions. 
There are other compilers out there too, but they all have the same goal—to turn your high-level code into machine code that can 
run directly on your computer. In a nutshell, the compiler's job is to bridge the gap between your human-readable code and the 
binary instructions that your computer can execute.

But what really happens with a C++ compiler like `g++`? When you run your C++ code through `g++`, the compiler takes it through 
several stages to transform it into something your computer can execute. The first stage is preprocessing, and here’s a bit of 
background on why that’s important:

To make programming more efficient, the creators of GCC (and C/C++ in general) realized that certain tasks—like handling input/output, 
performing math operations, or using common data structures—are so frequently needed that it would be tedious for programmers to 
write them from scratch every time. So, they provided pre-written code for these tasks in the form of libraries. These libraries 
are brought into your program with the `#include` directive, which tells the preprocessor to insert the contents of the specified 
header file into your source code before it even starts being compiled.

Now, your computer doesn’t inherently understand what libraries are or where they come from. So, when you include a library, the 
preprocessor replaces the `#include` line with the actual content of the library's header file, effectively pasting that code into 
your file. The result of this preprocessing step is a new version of your source file—often with a `.i` or `.cpp` extension—that’s 
ready for the next stages of compilation.

If you want to see your "Hello World" program right after the preprocessing step—before the actual compilation happens—you can do 
that by running the command: `g++ -E hello_world.cpp -o hello_world_preprocessed.cpp`. This will give you a version of your code 
where all the preprocessing work has been done. 

In this preprocessed file, all the `#include` directives and other special instructions have been expanded or resolved. These 
instructions, known as preprocessor directives, include things like `#include` (for including libraries), `#define` (for defining 
macros), `#undef` (for undefining macros), and conditional compilation directives like `#if`, `#elif`, `#else`, and `#endif`. 
You also have `#ifdef` and `#ifndef` for checking if a macro is defined or not, `#error` for generating error messages during 
preprocessing, `#pragma` for giving special instructions to the compiler, and `#line` for controlling line numbers and filenames 
in compiler messages.

Additionally, you can use certain predefined macros to include information like the filename, line number, date, time, or C++ 
version in your code. For example, `__FILE__` will expand to the name of the current file, `__LINE__` to the current line number, 
`__DATE__` to the date of compilation, `__TIME__` to the time of compilation, and `__cplusplus` to the version of the C++ standard 
being used. These are powerful tools that the preprocessor handles before your code moves on to the next stages of compilation.

But that's just the beginning—a way to illustrate why preprocessing is so important. Take, for example, the `iostream` library that you     include with `#include <iostream>`. Those angle brackets tell the compiler to look for the file in the system's standard directories,       not in your current folder. That single line pulls in over 50,000 lines of code! Imagine trying to write all of that yourself—clearly,     preprocessing makes things a lot easier.

After preprocessing, the code is transformed into an intermediate form, usually assembly language or another low-level language. You    might wonder, why not just go straight from the original code to machine code? Why do we need to expand macros and include files before this step? One reason is optimization. The compiler needs to see the complete picture—fully expanded and organized—before it can fine-tune the code and generate efficient assembly instructions. If you want to see this stage in action, you can run: `g++ -S hello_world.i -o hello_world.s`. This command might throw a warning about C++ output, which is understandable since the compiler sometimes needs to guess whether it's dealing with C++ or C.

Once you've got your assembly code, it’s time to turn it into machine code, which is the binary code that your computer can actually execute. Think of this as translating your instructions into a language the computer fully understands. You can do this with the command: `g++ -c hello_world.s -o hello_world.o`.

But we're not done yet! The binary code you've created might still be in separate pieces, and it lacks a key component: an entry point. In C++, every program needs an entry point, usually the `main` function. Without it, your code is just a collection of instructions sitting in a folder, unable to do anything. To pull everything together and make your program executable, you run: `g++ hello_world.o -o hello_world`. This command links everything together, finalizing your program. And by the way, if you want to compile your entire program in one go, just run: `g++ hello_world.cpp -o hello_world`.

At this stage, your code has been fully compiled into a binary executable, which means you can't read it anymore—it’s in the computer’s language now. Go ahead and run it with `./hello_world`. And as you work with C++, remember that your code always needs an entry point. The smallest unit you can execute in C++ is a function, and at the very least, you need a `main` function. It serves as the gateway to your program, without which your binary file would just be a set of inactive instructions. So, keep that in mind, and have fun coding!

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
