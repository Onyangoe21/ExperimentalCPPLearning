/*
 * This portion is written for fun and for those who want to understand what the computer is doing exactly 
 * between command being run to the execution of a c++ program: Feel free to jump onto the code in the lower sections below:
 * 

Your computer is like a clever machine, its heart being the motherboard that runs preloaded software—what we often call the 
operating system (OS). If you're using a Mac, this OS is specially crafted by Apple, and it's constantly managing your hardware 
when you power it on. The way code runs on your hardware involves a lot of intricate processes, but let's break it down simply: 
it all comes down to components that can store information and control the flow of electricity. These components work together 
like a well-choreographed dance, timing their actions precisely, holding instructions, waiting for the right moment to execute, 
or reacting to your inputs. So, when you type a command like `gcc myfile.cpp`, your computer sees this as you trying to use a 
tool called `gcc`. That’s when the `gcc` program steps in, ready to process your file exactly as you've instructed.

Imagine you're working on a C++ program and decide to run it using `gcc` in your terminal. The moment you hit enter, your 
computer jumps into action behind the scenes. If you're using an IDE like VSCode, it’s doing something similar—it’s just 
automating those steps for you. At a fundamental level, what's happening is your C++ file is passed as input to the `gcc` 
compiler. Your computer then allocates the necessary memory for `gcc` to do its job.

Now, `gcc` is a compiler, and its main task is to take the code you wrote and transform it into something your computer can 
actually understand: machine code. This machine code is the only type of code that your computer’s hardware can execute as 
instructions. While other compilers exist, they all share the same goal—to convert your human-readable code into machine code 
that your computer can directly run. In a nutshell, the compiler acts as a bridge, translating your code into binary instructions 
that your computer can execute.

But what really happens with a C++ compiler like `g++`? When you run your C++ code through `g++`, the compiler takes it through 
several stages to turn it into something executable. The first of these stages is preprocessing, and here's why it's so 
important:

To make programming more efficient, the creators of GCC (and C/C++ in general) realized that certain tasks—like handling 
input/output, performing math operations, or using common data structures—are so frequently needed that it would be a hassle 
for programmers to write them from scratch every time. So, they provided pre-written code for these tasks in the form of 
libraries. These libraries are brought into your program with the `#include` directive, which tells the preprocessor to insert 
the contents of the specified header file into your source code before compilation even begins.

Now, your computer doesn’t inherently know what libraries are or where they come from. So, when you include a library, the 
preprocessor replaces the `#include` line with the actual content of the library's header file, effectively pasting that code 
into your file. The result of this preprocessing step is a new version of your source file—often with a `.i` or `.cpp` 
extension—that’s ready for the next stages of compilation.

If you're curious to see your "Hello World" program right after the preprocessing step—before the actual compilation happens—you 
can do that by running: `g++ -E hello_world.cpp -o hello_world_preprocessed.cpp`. This command will give you a version of your 
code where all the preprocessing work has been done.

In this preprocessed file, all the `#include` directives and other special instructions have been expanded or resolved. These 
instructions, known as preprocessor directives, include things like `#include` (for including libraries), `#define` (for defining 
macros), `#undef` (for undefining macros), and conditional compilation directives like `#if`, `#elif`, `#else`, and `#endif`. 
You also have `#ifdef` and `#ifndef` for checking if a macro is defined or not, `#error` for generating error messages during 
preprocessing, `#pragma` for giving special instructions to the compiler, and `#line` for controlling line numbers and filenames 
in compiler messages.

Additionally, you can use certain predefined macros to include information like the filename, line number, date, time, or C++ 
version in your code. For example, `__FILE__` will expand to the name of the current file, `__LINE__` to the current line number, 
`__DATE__` to the date of compilation, `__TIME__` to the time of compilation, and `__cplusplus` to the version of the C++ standard being used. These are powerful tools that the preprocessor handles before your code moves on to the next stages of compilation.

But that’s just the start—a way to show why preprocessing is so essential. Take, for example, the `iostream` library that you 
include with `#include <iostream>`. Those angle brackets tell the compiler to look for the file in the system's standard 
directories, not in your current folder. That one line of code pulls in over 50,000 lines of library code! Imagine having to 
write or even just copy-paste all that yourself—preprocessing makes life a lot easier.

After preprocessing, the code is transformed into an intermediate form, usually assembly language or another low-level language. 
You might wonder, why not just go straight from the original code to machine code? Why do we need to expand macros and include 
files before this step? One reason is optimization. The compiler needs to see the complete picture—fully expanded and 
organized—before it can fine-tune the code and generate efficient assembly instructions. Doing this sort of thing while trying 
to replace all the macros could get pretty messy. If you want to see this stage in action, you can run: `g++ -S hello_world.i -o 
hello_world.s`. This command might throw a warning about C++ output, which is understandable: I mean, how do you expect it to 
know—one level down—whether this code was originally in C or C++?

Once you've got your assembly code, it’s time to turn it into machine code—the binary code that your computer can actually 
execute. Think of this as translating your instructions into a language the computer fully understands, but remember, there is 
no order yet: you still have binary programs, but if you fed them to your computer after this, it would wonder why you have 
binary for C++, another binary for the standard library residing somewhere else, maybe other extra files you want to use. So, 
convert things to binary that your computer can read and then wait for the next stage. You can do this with the command: 
`g++ -c hello_world.s -o hello_world.o`.

Since the binary code you've created might still be scattered in separate pieces, it's missing one crucial thing: an entry 
point—where does the machine actually start? Without this starting line, your code is just a bunch of instructions lounging 
around in a folder, all dressed up with nowhere to go. In C++, every program needs an entry point, usually the `main` function. 
Without it, your code can’t do much—it’s like having all the ingredients but no recipe to follow.

To bring order to this chaos and give your program a proper start, you need to pull everything together and make it executable. 
That’s where the command `g++ hello_world.o -o hello_world` comes in. This command acts like the final puzzle piece, linking 
everything together and bringing your program to life. And hey, if you want to save some time and compile your entire program 
in one go, just use `g++ hello_world.cpp -o hello_world`. This does all the heavy lifting for you, combining, linking, and 
creating your shiny new executable in one smooth move. Now your program is ready to run, with everything in its proper place.

At this stage, your code has been transformed into a binary executable, meaning it's now speaking the computer's 
language—completely unreadable to us mere humans. But that's okay, because your computer knows exactly what to do. All you need 
to do is run it with `./hello_world`, and watch the magic happen.

Imagine it like this: you've handed your computer a full list of instructions, starting with where it needs to begin. The 
computer looks at your instructions and thinks, "Alright, the main function(ENTRY POINT!!) wants me to do task A and task B. To do task A, 
I need to check the special instructions from the standard library—specifically from the iostream section, to figure out how 
to handle `cin`. Now, `cin` tells me I can’t finish until the user hits 'Enter' on the keyboard. Okay, let’s wait for that 
input... Got it! Now that’s done, let’s move on to task B. Task B involves a loop at point D, so I’ll need to set up some 
timing and repetition... Looping, looping... And finally, I’m done!”

Your computer has followed your instructions to the letter, checking in with the standard library when needed, handling input, 
managing loops, and executing everything just as you wrote it. The entire process happens so quickly and smoothly that it’s 
almost like magic—but it’s all just your code, running perfectly, step by step.

And as you work with C++, remember that your code always needs an entry point. The smallest unit you can execute in C++ is a 
function, and at the very least, you need a `main` function. It serves as the gateway to your program, without which your binary 
file would just be a set of inactive instructions. So, keep that in mind, and have fun coding!

 * 
*/
#include <iostream> // This is a preprocessor directive. The #include directive tells the compiler to include the content of a 
// file in the source code.
int main() { // this is our main function and the entry point to our c++ program: more on this down below: a function is a block 
//of code designated to do something very specific.
    std::cout<<"Hello World!!!"<< std::endl; // This is the line with the instruction to print
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
