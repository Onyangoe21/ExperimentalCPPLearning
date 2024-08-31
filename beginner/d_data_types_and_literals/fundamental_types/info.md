### Author: Edwin Onyango
### Date: August 31st

As you already know, these are the fundamental data types: 

Fundamental data types in C++ are the basic building blocks of the language. They are directly supported by the hardware (like the CPU) and have a fixed size and behavior defined by the language itself.

Think of it like this: when you say datatype a, does your computer have to go into doing a lot more work to accomodate this data type? One important element of a computer is the registers --basically responsible for storing 1s and 0s. Computer talks in 1s and 0s and anything that basically requires your computer to set aside memory (register) bits big enough to store and then come back and read it is a fundamental type. As you can guess, the simple of act of using a fundamental data type when you can could mean the world to your computer in terms of reducing things like "resize".... while dealing with memory.

Every type you will ever see is somehow tied to these fundamentals: there is no magic in coding:

- **Integer Types:**
  - **`int`**: Basic integer type.
    - **Range**: Typically `-2,147,483,648` to `2,147,483,647` (on 32-bit systems).
  - **`short`**: Short integer.
    - **Range**: Typically `-32,768` to `32,767`.
  - **`long`**: Long integer.
    - **Range**: At least `-2,147,483,648` to `2,147,483,647`.
  - **`long long`**: Extended integer.
    - **Range**: At least `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807`.
  - **`unsigned`**: Non-negative integer.
    - **Range**: Starts from `0` up to the maximum of the corresponding signed type.

- **Character Types:**
  - **`char`**: Character type, usually 1 byte.
    - **Range**: `-128` to `127` (signed) or `0` to `255` (unsigned).
  - **`unsigned char`**: Unsigned character.
    - **Range**: `0` to `255`.
  - **`wchar_t`**: Wide character type.
  - **`char16_t`**: UTF-16 character type.
  - **`char32_t`**: UTF-32 character type.

- **Floating-Point Types:**
  - **`float`**: Single precision floating-point.
    - **Range**: ~`1.2E-38` to `3.4E+38`.
  - **`double`**: Double precision floating-point.
    - **Range**: ~`2.3E-308` to `1.7E+308`.
  - **`long double`**: Extended precision floating-point.

- **Boolean Type:**
  - **`bool`**: Boolean type.
    - **Values**: `true` or `false`.

- **Void Type:**
  - **`void`**: Represents the absence of type.
    - Used majorly as function return type
    - Used with pointers before casting those pointers back:
    - Used with functions like this to discard the function return type: (void)func();
    - Used in template programming and variadic functions which you will see later

Beware:
The **auto** keyword in C++ is a type specifier that tells the compiler to automatically deduce the type of a variable based on its initializer. It was introduced in C++11 as part of the effort to make C++ more modern, convenient, and less error-prone and you will see it as well.

Beyond just seeing how to declare these types -- which is the simplest part -- we will add a few files to give a bit more insight into how the computer is treating these types compared to other types:

1. One way is examining assembly code -- check out assembly code file.
2. Examining memory usage:
3. Measuring perfomance against non-fundamental types: