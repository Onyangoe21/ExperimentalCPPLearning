## Vector in C++ STL

### Overview

Vectors in C++ are dynamic arrays that automatically resize themselves when elements are added or removed, managing their own storage internally. Unlike regular arrays, vector elements are stored contiguously, which allows them to be accessed efficiently using iterators. Typically, data is added to the end of a vector, making such operations efficient. However, inserting or erasing elements at the beginning or middle of a vector is more time-consuming.

### What is `std::vector`?

`std::vector` is a class template that represents a dynamic array in C++. It is defined in the `<vector>` header and provides a variety of member functions to interact with and manipulate the vector container.

### Declaring a Vector in C++

To declare a vector, you use the following syntax:
```cpp
std::vector<dataType> vectorName; // maybe the data type portion should say fundamental data type :)
```
Where `dataType` is the type of elements the vector will hold. If you're using the `std` namespace, you can omit the `std::` prefix.

### Initializing a Vector

There are multiple ways to initialize a vector:

1. **Using an Initializer List:**
   ```cpp
   std::vector<int> numbers({1, 2, 3});
   ```

2. **With a Single Value:**
   ```cpp
   std::vector<int> numbers(5, 10); // Creates a vector of size 5 with all elements initialized to 10
   ```

3. **From Another Vector:**
   ```cpp
   std::vector<int> numbersCopy(otherVector); // Copies all elements from otherVector
   ```

### Commonly Used Member Functions

#### Iterators
- `begin()`: Returns an iterator to the first element.
- `end()`: Returns an iterator past the last element.
- `rbegin()`: Returns a reverse iterator to the last element.
- `rend()`: Returns a reverse iterator past the first element.
- `cbegin()`, `cend()`: Return constant iterators to the beginning and end.
- `crbegin()`, `crend()`: Return constant reverse iterators.

#### Capacity
- `size()`: Returns the number of elements in the vector.
- `max_size()`: Returns the maximum possible number of elements.
- `capacity()`: Returns the number of elements the vector can hold before needing to allocate more space.
- `resize(n)`: Resizes the vector to contain `n` elements.
- `empty()`: Checks if the vector is empty.
- `shrink_to_fit()`: Reduces the capacity to match the current size.
- `reserve(n)`: Requests that the vector capacity be at least `n` elements.

#### Element Access
- `operator[]`: Accesses the element at the specified position.
- `at(g)`: Accesses the element at the specified position, with bounds checking.
- `front()`: Accesses the first element.
- `back()`: Accesses the last element.
- `data()`: Returns a direct pointer to the underlying array.

#### Modifiers
- `assign()`: Replaces the contents of the vector with new elements.
- `push_back()`: Adds an element to the end.
- `pop_back()`: Removes the last element.
- `insert()`: Inserts elements at a specified position.
- `erase()`: Removes elements at a specified position or range.
- `swap()`: Swaps the contents with another vector.
- `clear()`: Removes all elements.
- `emplace()`: Constructs and inserts an element at a specified position.
- `emplace_back()`: Constructs and inserts an element at the end.

### Time Complexity of Operations

- **Random access:** O(1) - Constant time.
- **Insertion/removal at the end:** O(1) - Constant time.
- **Insertion/removal at the beginning or middle:** O(n) - Linear time.
- **Resizing the vector:** O(n) - Linear time.
- **Getting the size:** O(1) - Constant time.

### Summary of `std::vector` Functions

Here’s a quick rundown of the primary functions you’ll use with `std::vector`:

| Function            | Description                                               |
|---------------------|-----------------------------------------------------------|
| `push_back()`       | Adds an element to the end of the vector.                 |
| `pop_back()`        | Removes the last element.                                 |
| `size()`            | Returns the current number of elements.                   |
| `capacity()`        | Returns the current capacity.                             |
| `reserve()`         | Requests a change in capacity.                            |
| `shrink_to_fit()`   | Reduces the capacity to fit the size.                     |
| `clear()`           | Clears all elements.                                      |
| `insert()`          | Inserts elements at a given position.                     |
| `erase()`           | Removes elements from a position or range.                |
| `emplace()`         | Constructs and inserts elements at a given position.      |
| `emplace_back()`    | Constructs and inserts elements at the end.               |
| `swap()`            | Swaps the contents with another vector.                   |
| `at()`              | Safe access to an element with bounds checking.           |
| `front()`           | Accesses the first element.                               |
| `back()`            | Accesses the last element.                                |
| `begin()`           | Iterator to the beginning.                                |
| `end()`             | Iterator to the end.                                      |
| `rbegin()`          | Reverse iterator to the end.                              |
| `rend()`            | Reverse iterator to the beginning.                        |
| `data()`            | Pointer to the underlying array.                          |

`std::vector` is one of the most powerful tools in C++ for managing dynamic arrays. Understanding these basic operations and functions will give you a strong foundation for efficient data management in C++.