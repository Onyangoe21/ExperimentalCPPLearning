Using pointers to represent non-fundamental data types, such as arrays, structs, or classes, is a common practice in C++ that allows for dynamic memory management and efficient handling of complex data structures. To understand how this works, it’s important to grasp how the computer sees and manipulates memory under the hood.

### 1. **Arrays and Pointers**

#### a. **Array Basics**

When you declare an array in C++, such as:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

The compiler allocates a contiguous block of memory to store the elements of the array. Each element in the array is stored in a sequence in memory, with each element occupying space according to its data type (`int` typically takes 4 bytes on most systems): until this point, envision some hardware registers keeping integers using 32bits - 4bytes for each of the integers: 4bytes * 5: These integers don't even know they belong together: the compiler is your friend here because it's going to be the person making sure that this memory allocated is continuous ...: it will even go to the level of calculating by offset where the elements you are trying to access are if it's not the initial element: if you think about it, it only needs to know that the next 2 blocks have integers in them as well and you are now trying to access the next one.

#### b. **Array and Pointer Relationship**

First off, that name you use for the array, for example `arr` acts as a pointer to the first element of the array. This means that `arr` is of type `int*` and all it knows is a single address and that address is of your `arr[0]`.

```cpp
int* p = arr;  // p points to arr[0]
```

Under the hood, this is how the computer sees it:

- Suppose `arr` starts at memory address `0x1000`.
- `arr[0]` is stored at `0x1000`, `arr[1]` at `0x1004`, `arr[2]` at `0x1008`, and so on.

When you write `int* p = arr;`, `p` holds the value `0x1000`, the address of the first element.

#### c. **Pointer Arithmetic**

Pointer arithmetic allows you to traverse the array using the pointer:

```cpp
p + 1;  // Points to arr[1], i.e., 0x1004
*(p + 1);  // Dereferences to get the value 20 at address 0x1004
```

The computer calculates these addresses by adding the size of the data type (4 bytes for `int`) to the base address (`0x1000` in this example).

#### d. **How the Computer Evaluates It**

When you access an element using a pointer, like `*(p + 1)`, the computer:

1. Takes the base address `p` (which is `0x1000`).
2. Adds `1 * sizeof(int)` to it (`0x1000 + 4` = `0x1004`).
3. Fetches the value stored at that address, which is `20`.

Check out the pointers_experimentation.cpp and see how you can even dereference memory you did not allocate and see some weird numbers:

### 2. **Structs and Pointers**
So what do they do with structs?

#### a. **Struct Basics**

Consider the following structure:

```cpp
struct Point {
    int x;
    int y;
};

Point p = {10, 20};
```

Here, `p` is a variable of type `Point`, which contains two `int` members: `x` and `y`. The memory layout of `p` is as follows:

- `p.x` is stored at the base address (say `0x2000`).
- `p.y` is stored immediately after `p.x`, at `0x2004`.

#### b. **Pointer to Struct**

You can create a pointer to a struct:

```cpp
Point* pPtr = &p;
```

Here, `pPtr` holds the address of the struct `p`, i.e., `0x2000`.

This address is the same as address of the first member of the struct: What is happening under the hood is a lot similar to the case of arrays from the experimentation file: It uses the address of the first member to hold the address of the struct as a whole: from there, everything is calculated to keep all the remaining members but the memory block it occupies is till a continous block, enough to hold everything:

#### c. **Accessing Members via Pointer**

You access struct members through the pointer using the arrow operator (`->`):

```cpp
int xValue = pPtr->x;  // Equivalent to (*pPtr).x
```

Under the hood:

- The computer dereferences `pPtr` to get the base address `0x2000`.
- It then accesses `x` by retrieving the value at `0x2000` (which is `10`).
- Similarly, `pPtr->y` retrieves the value at `0x2004` (which is `20`).

### 3. **Classes and Pointers**

#### a. **Class Basics**

Classes are similar to structs but can include member functions. Here’s an example:

```cpp
class Point {
public:
    int x, y;

    Point(int a, int b) : x(a), y(b) {}

    void print() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

Point p(10, 20);
```

In this case, `p` is an object of class `Point`, and it occupies memory for `x`, `y`, and possibly additional overhead for class management (like virtual tables if polymorphism is involved).

#### b. **Pointer to Class Object**

You can have a pointer to a class object:

```cpp
Point* pPtr = &p;
```

Here, `pPtr` holds the address of the object `p`.

Just like in structs, the memory block used to store a class is contigous: Everything about how things are stored is the same: It is important that while it is a reasonable assumption to make in C++ that things will occupy this continuous memory in the order in which they are declared, things like extra space padding, optimization re-ordering are things that could end up happening and it's good to use this assumption just for good understanding as it's close enough to how the computer see this: From this, you can tell that object oriented programming is generally more compute intensive but it gives a lot of good trade offs that make it worthwhile because of the reusability of code:

#### c. **Accessing Members and Methods**

Accessing data members or methods via a pointer is done using the arrow operator:

```cpp
pPtr->print();  // Calls the print method on the object pointed to by pPtr
```

### 4. **Dynamic Memory and Pointers**

#### a. **Dynamic Allocation**

C++ allows dynamic memory allocation using pointers, where memory is allocated at runtime:

For better understanding, it might be good to think of this as similar to the way the stack memory we have described is worked on with the exection that this is on the heap and is controlled by you: The memory is still addressed just the same way:

```cpp
int* dynamicArr = new int[5];  // Dynamically allocate an array of 5 integers
```

This allocates memory in the heap rather than the stack. The pointer `dynamicArr` holds the base address of this dynamically allocated array.

#### b. **Memory Management**

The computer manages this memory by tracking allocations in a memory table or similar structure. When you use `delete[] dynamicArr;`, the computer knows to free the entire block of memory starting from the address held by `dynamicArr`.

### 5. **Summary on how the Computer Sees It**

When using pointers with non-fundamental types:

- **Memory Allocation:** The computer allocates memory in a contiguous block, with each element or member laid out sequentially according to its type and size.
- **Addressing:** Pointers store memory addresses. Arithmetic on pointers adjusts these addresses based on the data type’s size.
- **Dereferencing:** When a pointer is dereferenced, the computer accesses the memory location pointed to and retrieves or modifies the value stored there.
- **Dynamic Allocation:** Memory is allocated on the heap, and pointers manage these allocations. The computer tracks this memory for proper allocation and deallocation.
