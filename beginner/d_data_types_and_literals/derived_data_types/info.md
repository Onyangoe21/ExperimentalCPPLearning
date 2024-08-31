As you might remember, here are the derived data types: 

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

#### Additional
- **Lambda Expressions**: Anonymous functions that can capture variables from their surrounding scope.
  - Example: `auto add = [](int a, int b) { return a + b; };`

- **Bit Fields**: Allows the allocation of a specific number of bits for a variable, useful for memory-efficient programming.
  - Example: `struct MyStruct { unsigned int x : 4; };`

- **Scoped Enumerations (`enum class`)**: Provides stronger type-safety and prevents implicit conversion of enum values to integers.
  - Example: `enum class Color { RED, GREEN, BLUE };`

- **Pointers to Functions**: Stores the address of a function, allowing for dynamic function calls.
  - Example: `void (*funcPtr)(int) = &myFunction;`


**Tips:**
When dealing with most derived data types, here are the major questions:
1. **Declaration:** How do you specify the data type?
2. **Initialization:** How do you populate it initially?
3. **Adding Elements:** What’s the runtime and process?
4. **Removing Elements:** What’s the runtime and process?
5. **Accessing Elements:** How do you retrieve or modify them?
6. **Memory Layout:** How is data stored in memory?
7. **Memory Management:** How is memory allocated/deallocated?
8. **Supported Operations:** What functions or operators are available?
9. **Handling Edge Cases:** How does it manage capacity or errors?
10. **Type Safety:** Does it enforce type safety?
11. **Common Pitfalls:** What are typical errors to avoid?
12. **Interoperability:** How does it interact with other types?
13. **Special Features:** Are there unique methods or behaviors?