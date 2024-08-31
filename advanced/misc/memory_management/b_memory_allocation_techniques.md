You might have already gone through memory management.md and wondering what triggers heap memory allocation and here is the list:

### 1. **`new` (C++ Operator)**
   - **Functionality:** Allocates memory for a single object or an array of objects on the heap and calls the constructor for objects if necessary.
   - **Syntax:**
     - Single object: `Type* ptr = new Type;`
     - Array: `Type* ptr = new Type[size];`
   - **Example:**
     ```cpp
     int* ptr = new int;         // Allocates memory for a single integer
     int* arr = new int[10];     // Allocates memory for an array of 10 integers
     ```

### 2. **`malloc` (C Standard Library)**
   - **Functionality:** Allocates a block of memory on the heap but does not initialize the memory.
   - **Syntax:** `void* malloc(size_t size);`
   - **Example:**
     ```cpp
     int* ptr = (int*)malloc(sizeof(int));  // Allocates memory for a single integer
     int* arr = (int*)malloc(10 * sizeof(int));  // Allocates memory for an array of 10 integers
     ```

### 3. **`calloc` (C Standard Library)**
   - **Functionality:** Allocates memory for an array of elements on the heap and initializes all bytes to zero.
   - **Syntax:** `void* calloc(size_t num, size_t size);`
   - **Example:**
     ```cpp
     int* arr = (int*)calloc(10, sizeof(int));  // Allocates and zero-initializes memory for 10 integers
     ```

### 4. **`realloc` (C Standard Library)**
   - **Functionality:** Resizes a previously allocated block of memory on the heap. It can either expand or shrink the allocated memory block.
   - **Syntax:** `void* realloc(void* ptr, size_t size);`
   - **Example:**
     ```cpp
     int* arr = (int*)malloc(10 * sizeof(int));  // Allocates memory for 10 integers
     arr = (int*)realloc(arr, 20 * sizeof(int)); // Resizes the memory block to hold 20 integers
     ```

### 5. **C++ Standard Library Containers**
   - **Functionality:** Containers like `std::vector`, `std::string`, `std::list`, and `std::map` automatically allocate memory on the heap as needed when elements are added.
   - **Example:**
     ```cpp
     std::vector<int> vec; // Internally allocates memory on the heap as elements are added
     vec.push_back(1);
     ```

### 6. **Custom Allocators**
   - **Functionality:** Allows for custom memory management strategies, including custom heap management, by defining how memory is allocated and deallocated.
   - **Example:** 
     ```cpp
     std::vector<int, MyCustomAllocator<int>> vec; // Uses a custom allocator to manage memory
     ```

### 7. **Placement `new`**
   - **Functionality:** Constructs an object at a specific memory location. It’s used when you’ve already allocated memory (perhaps with `malloc`) and want to place an object there.
   - **Syntax:** `new (pointer) Type(arguments);`
   - **Example:**
     ```cpp
     void* mem = malloc(sizeof(int));
     int* p = new (mem) int(42); // Constructs an integer with value 42 at the location pointed to by mem
     ```

### 8. **Memory Pools**
   - **Functionality:** Memory pools manage a large block of heap memory, subdividing it as needed. This approach is often manually implemented to optimize performance for specific use cases.
   - **Example:** Custom implementations vary, but they involve allocating a large block of memory with `malloc` or `new`, then managing allocations within that block.

### 9. **`operator new` (C++ Operator)**
   - **Functionality:** A low-level function that allocates memory on the heap without calling constructors. It’s rarely used directly but is part of how the `new` keyword is implemented.
   - **Syntax:** `void* operator new(std::size_t size);`
   - **Example:**
     ```cpp
     void* mem = ::operator new(sizeof(int)); // Allocates raw memory for an int
     ```

### 10. **`std::shared_ptr` and `std::unique_ptr`**
   - **Functionality:** Smart pointers that automatically manage memory on the heap. They allocate memory when you create the smart pointer and deallocate it when the pointer goes out of scope.
   - **Example:**
     ```cpp
     std::shared_ptr<int> ptr = std::make_shared<int>(10); // Allocates memory for an integer on the heap
     std::unique_ptr<int> ptr = std::make_unique<int>(20); // Allocates memory for an integer on the heap
     ```

