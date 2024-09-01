If you were to get into your computer while it runs your code and you are seeing where everything is kept and pulled when needed, what would you see?

Likely determined by speed, persistence and flexibility, you get the following:

### **1. Stack Memory**
- **Location**: The stack is a well-defined area of memory that grows and shrinks as functions are called and return.
- **What You’ll Find**: Local variables, function parameters, and return addresses. Every time a function is called, a new "frame -- portion of stack allocated to specific function" is added to the stack. When the function finishes, this frame is removed. Why is it organized around just functions? Remember functions are the smallest block of code that can return you customized output in c++: if you can execute, keep value, execute, keep and so forth, you can do anything:- and that seems to be what a program really does: Stack for that matter will entail return address, function params, local vars, saved registers, frame pointer and optional return value:

An example might be: 

+---------------------+
| Return Address      | <-- Points back to the instruction in the caller after `add` returns
+---------------------+
| Previous Frame Ptr  | <-- Pointer to the previous stack frame (if any)
+---------------------+
| Parameter b         | <-- Holds the value of `b`
+---------------------+
| Parameter a         | <-- Holds the value of `a`
+---------------------+
| Local Variable sum  | <-- Holds the value of `sum`
+---------------------+

This section in the computer memory when the function is called once and a frame is computed makes use of a specific size of resources only once and can thus be roughly said to be O(1). Recursize function calls the function over and over and the other frames waiting have to stay up so do the math on the runtime:

- **Example**: If you declare `int x = 10;` inside a function, it goes on the stack.

### **2. Heap Memory**
- **Location**: The heap is a large pool of memory available for dynamic allocation. It doesn’t have a fixed size and can grow as needed, depending on system resources-- more specifically RAM and the likes: Remember, CPU is the brain and it has things like MMU which manage memory and can help access every uniquely identified block of memory in your computer, you only need instructions to ask it to:
- **What You’ll Find**: Dynamically allocated memory blocks. This is where variables go when you use `new` in C++ or `malloc` in C.
- **Example**: If you allocate memory using `int* ptr = new int[10];`, this array is stored in the heap.

### **3. Data Segment**
- **Location**: This segment is part of the process's memory that is specifically allocated for initialized global and static variables.
- **What You’ll Find**: Global and static variables that have been initialized before the program starts. These variables are accessible throughout the entire runtime of the program.
- **Example**: If you declare `int globalVar = 42;`, it’s stored in the Data Segment.

### **4. BSS Segment**
- **Location**: The BSS (Block Started by Symbol) Segment is adjacent to the Data Segment but is reserved for uninitialized global and static variables.
- **What You’ll Find**: Uninitialized global and static variables. These are automatically zeroed out by the operating system when the program starts.
- **Example**: If you declare `int uninitializedVar;`, it’s stored in the BSS Segment.

### **5. Text Segment (Code Segment)**
- **Location**: This is where the compiled machine code of the program resides. It’s typically read-only to prevent accidental overwriting of instructions.
- **What You’ll Find**: The actual code, including all the functions and instructions that make up the program. This is where your `main()` function and all other code are located.
- **Example**: All your function definitions, like `void myFunction()`, are stored here.

### **6. Memory-Mapped I/O**
- **Location**: Specific memory addresses that are mapped to hardware devices.
- **What You’ll Find**: Interfaces to hardware components like graphics cards, network cards, or other peripherals. These aren’t typical variables but control registers for hardware.
- **Example**: Memory addresses used for controlling a display or reading from a keyboard.

### **7. Virtual Memory**
- **Location**: An abstraction that extends physical memory onto disk storage, making the system appear to have more RAM than it physically does.
- **What You’ll Find**: Parts of programs or data that aren’t actively used and are swapped out to disk. When needed, they are loaded back into RAM.
- **Example**: Large datasets that exceed the physical memory limit may be partially stored in virtual memory.

### **8. Cache Memory**
- **Location**: Small, fast memory located close to the CPU. There are typically several levels (L1, L2, L3) of cache.
- **What You’ll Find**: Frequently accessed data and instructions that the CPU needs to access quickly. This helps speed up processing.
- **Example**: If a variable is accessed repeatedly in a loop, it might be loaded into the cache to avoid fetching it from main memory repeatedly.

### **9. Registers**
- **Location**: Within the CPU itself, these are the smallest and fastest type of memory.
- **What You’ll Find**: Data currently being processed by the CPU, like the results of calculations or addresses of the next instructions to execute.
- **Example**: When you add two numbers in a program, the CPU might store the result in a register temporarily.

Note: For heap memory new and delete with a few special additions do all the work:

