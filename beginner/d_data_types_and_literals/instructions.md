### C++ Data Types and Literals Cheat Sheet

#### **1. Fundamental Data Types**

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

#### **2. Derived Data Types**

- **Arrays**: Collection of elements of the same type.
  - Example: `int arr[5];`
- **Pointers**: Stores memory addresses.
  - Example: `int* ptr;`: look at the pointers to learn more in this:
- **References**: Acts as an alias for another variable.
  - Example: `int& ref = var;`: will be tackled at intermediate level:
- **Functions**: Blocks of code that perform specific tasks.
  - Example: `int func(int a);` But you already know this: yaaas!
- **User-Defined Data Types**:
    - **Classes**: Blueprint for objects.
    - Example: `class MyClass { /*...*/ };`
    - **Structs**: Similar to classes but default to public access.
    - Example: `struct MyStruct { /*...*/ };`
    - **Unions**: Stores different data types in the same memory location.
    - Example: `union MyUnion { int a; float b; };`
    - **Enums**: Enumeration of named integer constants.
    - Example: `enum Color { RED, GREEN, BLUE };`
    - **Typedefs and Aliases**: Provides an alternative name for a type.
    - Example: `typedef int MyInt;`

#### **3. Literals**

- **Integer Literals:**
  - **Decimal:** `10`, `-42`
  - **Octal:** `012` (Starts with `0`)
  - **Hexadecimal:** `0xA` (Starts with `0x`)
  - **Binary:** `0b1010` (Starts with `0b`, C++14)

- **Floating-Point Literals:**
  - **Without Exponent:** `3.14`, `-0.001`
  - **With Exponent:** `2.5e3` (which is `2.5 * 10^3`)
  - **Long Double:** `3.14L`

- **Character Literals:**
  - **Single Character:** `'a'`, `'1'`
  - **Escape Sequences:** `'\n'`, `'\t'`, `'\''`
  - **Wide Character:** `L'a'`

- **String Literals:**
  - **Normal String:** `"Hello, World!"`
  - **Wide String:** `L"Hello, World!"`
  - **Raw String:** `R"(Hello "World")"`

- **Boolean Literals:**
  - **`true`**, **`false`**

- **Null Pointer Literal:**
  - **`nullptr`** (C++11)

#### **4. Modifiers**

- **Signed/Unsigned:** `signed int`, `unsigned int`
- **Short/Long:** `short int`, `long int`, `long long int`

#### **5. Type Aliases**

- **Using `typedef`:**
  ```cpp
  typedef unsigned long ulong;
  ```
- **Using `using` (C++11):**
  ```cpp
  using ulong = unsigned long;
  ```
