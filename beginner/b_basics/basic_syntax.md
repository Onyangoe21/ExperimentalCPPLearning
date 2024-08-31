Here is the content formatted in Markdown with all code commented and without the triple backticks:

# C++ Basic Syntax

**Last Updated:** 29 Aug, 2024

C++ is a general-purpose, object-oriented programming language. It was developed in 1979 by Bjarne Stroustrup at AT & T Bell Laboratory. It is a high-level programming language and an advanced version of the C programming language. Compared to other programming languages like Java and Python, it is one of the fastest.

## What is Syntax?
Syntax refers to the rules and regulations for writing statements in a programming language. They can be viewed as the grammatical rules that define the structure of a programming language.

The C++ language also has its syntax for the functionalities it provides. Different statements have different syntax specifying their usage, but C++ programs also have basic syntax rules that are followed throughout all programs.

## Basic Syntax of a C++ Program
We can learn about basic C++ syntax using the following program.

### Structure of a C++ Program
The image above shows a basic C++ program that contains header files, the main function, namespace declaration, etc. Let’s try to understand them one by one.

### 1. Header File
The header files contain the definition of the functions and macros we are using in our program. They are defined at the top of the C++ program.

In line #1, we used the `#include <iostream>` statement to tell the compiler to include the iostream header file library, which stores the definition of the `cin` and `cout` standard input/output streams that we have used for input and output. `#include` is a preprocessor directive using which we import header files.

**Syntax:**

#include <library_name>

To know more about header files, please refer to the article – [Header Files in C/C++](#).

### 2. Namespace
A namespace in C++ is used to provide a scope or a region where we define identifiers. It is used to avoid name conflicts between two identifiers as only unique names can be used as identifiers.

In line #2, we have used the `using namespace std;` statement to specify that we will be using the standard namespace where all the standard library functions are defined.

**Syntax:**

using namespace std;

To know more about namespaces in C++, please refer to the article – [Namespaces in C++](#).

### 3. Main Function
This is all there is to know about syntax of functions in c++:
1. Declaration: int add(int a, int b);
2. Definition: actual implemention is shown below:
3. Calling the function: int result = add(3, 4);
4. 

In line #3, we defined the main function as `int main()`. The main function is the most important part of any C++ program. The program execution always starts from the main function. All other functions are called from the main function. In C++, the main function is required to return some value indicating the execution status.

**Syntax:**

int main() {

    ... code ....
    return 0;
}

### 4. Blocks
Blocks are groups of statements that are enclosed within `{ }` braces. They define the scope of the identifiers and are generally used to enclose the body of functions and control statements.

The body of the main function is from line #4 to line #9 enclosed within `{ }`.

**Syntax:**

{
    // Body of the Function
    return 0;
}

### 5. Semicolons
As you may have noticed by now, each statement in the above code is followed by a `;` semicolon symbol. It is used to terminate each line of the statement of the program. When the compiler sees this semicolon, it terminates the operation of that line and moves to the next line.

**Syntax:**

any_statement ;

### 6. Identifiers
We use identifiers for naming variables, functions, and other user-defined data types. An identifier may consist of uppercase and lowercase alphabetical characters, underscores, and digits. The first letter must be an underscore or an alphabet.

**Example:**

int num1 = 24;
int num2 = 34;

`num1` and `num2` are the identifiers and `int` is the data type.

### 7. Keywords
In the C++ programming language, there are some reserved words that are used for some special meaning in the C++ program. They can’t be used as identifiers.

For example, the words `int`, `return`, and `using` are some keywords used in our program. These all have predefined meanings in the C++ language.

There are a total of 95 keywords in C++. Here are some of them:

- `int`
- `void`
- `if`
- `while`
- `for`
- `auto`
- `bool`
- `break`
- `this`
- `static`
- `new`
- `true`
- `false`
- `case`
- `char`
- `class`

To know more about Identifiers and Keywords in C++, refer to the article [C/C++ Tokens](#).

### 8. Basic Output `cout`
In line #7, we have used the `cout` stream object (declared in the `<iostream>` header file) to print the sum of two numbers to the standard output stream (stdout).

**Syntax:**

cout << result << endl;

To know more about basic input and output in C++, please refer to the article – [Basic Input and Output in C++](#).

Now, we have a better understanding of the basic syntax structure of the above C++ program. Let’s try to execute this program and see if it works correctly.

// C++ program to demonstrate the basic syntax
// Header File Library
#include <iostream>

// Standard Namespace
using namespace std;

// Main Function
int main()
{

    // Body of the Function

    // Declaration of Variable
    int num1 = 24;
    int num2 = 34;

    int result = num1 + num2;

    // Output
    cout << result << endl;

    // Return Statement
    return 0;
}

**Output:**

58

The above program runs correctly and displays the specified output because we have followed the syntax rules of C++. We will learn more about these basic elements later.

## Object-Oriented Programming in C++
C++ programming language supports both procedural-oriented and object-oriented programming. The above example is based on the procedural-oriented programming paradigm. So let’s take another example to discuss Object-Oriented Programming in C++.

### Structure of Object-Oriented Program
#### 1. Class
A class is a template of an object. For example, `Animal` is a class and `Dog` is the object of the `Animal` class. It is a user-defined data type. A class has its attributes (data members) and behavior (member functions). The first letter of the class name is always capitalized, and the `class` keyword is used for creating the class.

In line #3, we have declared a class named `Calculate` and its body expands from line #3 to line #7.

**Syntax:**

class ClassName {
    // class body
};

To know more about classes in C++, please refer to this article.

#### 2. Data Members & Member Functions
The attributes or data in the class are defined by the data members, and the functions that work on these data members are called member functions.

**Example:**

class Calculate {
    public:
        int num1 = 50;    // data member
        int num2 = 30;    // data member

        // member function
        int addition() {
            int result = num1 + num2;
            cout << result << endl;
        }
};

In the above example, `num1` and `num2` are the data members, and `addition()` is a member function that is working on these two data members. There is a keyword here, `public`, which is an access modifier. The access modifier decides who has access to these data members and member functions. The `public` access modifier means these data members and member functions can be accessed by anyone.

#### 3. Object
An object is an instance of a class. The class itself is just a template and is not allocated any memory. To use the data and methods defined in the class, we have to create an object of that class.

Objects are declared in a similar way to variables in C++.

**Syntax:**

ClassName ObjectName;

We use the dot operator (`.`) for accessing data and methods of an object.

To know more about objects in C++, please refer to the article – [C++ Classes and Objects](#).

Now, let’s execute our code to see the output of the program.

#include <iostream>
using namespace std;

class Calculate {
    public:
        // data member
        int num1 = 50;
        int num2 = 30;

        // member function
        int addition() {
            int result = num1 + num2;
            cout << result << endl;
        }
};

int main() {
    // object declaration
    Calculate add;

    // member function calling
    add.addition();

    return 0;
}

**Output:**

80

Three 90 Challenge is back on popular demand! After processing refunds worth INR 1CR+, we are back with the offer if you missed it the first time. Get 90% course fee refund in 90 days. Avail now! Summer-time is here and so is the time to skill-up! More than 5,000 learners have now completed their journey from basics of DSA to advanced level development programs such as Full-Stack, Backend Development, Data Science.

And why go anywhere else when our DSA to Development: Coding Guide will help you master all