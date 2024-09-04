# C++ Arrays Cheat Sheet

## 1. Array Declaration

**Note**: Please note that arrays are part of the c++ language and not part of extensions like STL added to make your work easier.

- **Single-Dimensional Array**: Declares an array of a specific size to hold elements of the same type.

  ```cpp
  int arr[10];        // Declares an array of 10 integers
  float grades[5];    // Declares an array of 5 floats
  ```

- **Multi-Dimensional Array**: Declares an array with multiple dimensions, such as 2D or 3D arrays.

  ```cpp
  int matrix[3][4];   // Declares a 2D array (3 rows, 4 columns)
  int cube[2][3][4];  // Declares a 3D array (2x3x4)
  ```

## 2. Array Initialization

- **Static Initialization**: Initialize an array with specific values or set all elements to a default value.

  ```cpp
  int arr[5] = {1, 2, 3, 4, 5};       // Initialize with specific values
  int arr[5] = {0};                   // All elements initialized to 0
  int arr[] = {1, 2, 3};              // Size inferred from initializer (3 elements)
  ```

- **Dynamic Initialization**: Allocate an array dynamically on the heap and remember to free the memory when done.

  ```cpp
  int* arr = new int[10];             // Dynamically allocate an array of 10 integers
  delete[] arr;                       // Remember to free the memory
  ```

## 3. Accessing Array Elements

- **Indexing**: Access or modify an element using its index.

  ```cpp
  arr[0] = 10;           // Assigns value to the first element
  int value = arr[2];    // Accesses the third element
  ```

- **Multi-Dimensional Access**: Access elements in a multi-dimensional array using multiple indices.

  ```cpp
  matrix[1][2] = 5;      // Accesses the element at row 1, column 2
  int val = cube[0][1][3]; // Accesses the element at (0, 1, 3)
  ```

## 4. Array Iteration

- **Using Loops**: Iterate over elements using traditional for loops.

  ```cpp
  for (int i = 0; i < 5; i++) {
      std::cout << arr[i] << std::endl;
  }
  ```

- **Range-Based for Loop**: Iterate over elements using the range-based for loop (C++11 and later).

  ```cpp
  for (int x : arr) {
      std::cout << x << std::endl;
  }
  ```

## 5. Array Size

- **Get the Number of Elements**: Calculate the size of an array (only works for statically declared arrays).

  ```cpp
  int size = sizeof(arr) / sizeof(arr[0]);  // Works only for statically declared arrays
  ```

## 6. Passing Arrays to Functions

- **Passing by Pointer**: Pass an array to a function as a pointer.

  ```cpp
  void printArray(int* arr, int size) {
      for (int i = 0; i < size; i++) {
          std::cout << arr[i] << " ";
      }
  }
  ```

- **Passing by Reference**: Pass an array by reference to maintain its size information (C++11 and later).

  ```cpp
  template<size_t N>
  void printArray(const int (&arr)[N]) {
      for (int i = 0; i < N; i++) {
          std::cout << arr[i] << " ";
      }
  }
  ```

## 7. Common Operations

- **Copying Arrays**: Copy elements from one array to another.

  ```cpp
  std::copy(std::begin(arr1), std::end(arr1), arr2);
  ```

- **Sorting Arrays**: Sort the elements in an array.

  ```cpp
  std::sort(arr, arr + size);
  ```

## 8. Multi-Dimensional Array Initialization

- **Initialization**: Initialize a multi-dimensional array with values.

  ```cpp
  int matrix[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}
  };
  ```

- **Dynamic Allocation**: Dynamically allocate memory for a multi-dimensional array.

  ```cpp
  int** matrix = new int*[3];
  for (int i = 0; i < 3; i++) {
      matrix[i] = new int[4];
  }
  ```

## 9. Array Pitfalls

- **Out-of-Bounds Access**: Avoid accessing elements outside the valid range, which leads to undefined behavior.
- **Memory Management**: Ensure proper deallocation of dynamically allocated arrays to prevent memory leaks.

## 10. Best Practices

- **Use `std::array` or `std::vector` when possible**: Prefer using these STL containers for better safety and flexibility.

  ```cpp
  std::array<int, 5> arr = {1, 2, 3, 4, 5};  // Fixed-size array
  std::vector<int> vec = {1, 2, 3, 4, 5};    // Dynamic array
  ```

