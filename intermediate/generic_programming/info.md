### Credits: Adapted from geeks for geeks and modified by Edwin Onyango
# Generics in C++

_Last Updated: 01 Apr, 2019_

Generics is the concept that allows a type (such as `int`, `string`, etc., and user-defined types) to be a parameter to methods, classes, and interfaces. For example, classes like `array`, `map`, etc., can be used efficiently using generics. We can apply them to any type.

The method of Generic Programming is implemented to increase the efficiency of the code. Generic Programming enables the programmer to write a general algorithm that works with all data types - read that again. It eliminates the need to create different algorithms for different data types like `int`, `string`, or `char`.

### Advantages of Generic Programming

- **Code Reusability**
- **Avoid Function Overloading**
- **Once written, it can be used multiple times and in various cases.**

Generics can be implemented in C++ using **Templates**. A template is a simple yet powerful tool in C++. The idea is to pass the data type as a parameter, so you don’t need to write the same code for different data types. For example, a software company might need a `sort()` function for different data types. Instead of writing and maintaining multiple versions of `sort()`, you can write one `sort()` function and pass the data type as a parameter.

## Generic Functions using Template

We write a generic function that can be used for different data types. Examples of function templates include `sort()`, `max()`, `min()`, and `printArray()`.

```cpp
#include <iostream> 
using namespace std; 
  
// One function works for all data types. 
// This would work even for user-defined types 
// if operator '>' is overloaded 
template <typename T> 
T myMax(T x, T y) { 
    return (x > y) ? x : y; 
} 
  
int main() { 
    // Call myMax for int 
    cout << myMax<int>(3, 7) << endl; 
  
    // Call myMax for double 
    cout << myMax<double>(3.0, 7.0) << endl; 
  
    // Call myMax for char 
    cout << myMax<char>('g', 'e') << endl; 
  
    return 0; 
}
```

**Output:**

```
7
7
g
```

## Generic Class using Template

Like function templates, class templates are useful when a class defines something that is independent of the data type. This can be useful for classes like `LinkedList`, `BinaryTree`, `Stack`, `Queue`, `Array`, etc.

Following is a simple example of a template `Array` class.

```cpp
#include <iostream> 
using namespace std; 
  
template <typename T> 
class Array { 
private: 
    T* ptr; 
    int size; 
  
public: 
    Array(T arr[], int s); 
    void print(); 
}; 
  
template <typename T> 
Array<T>::Array(T arr[], int s) { 
    ptr = new T[s]; 
    size = s; 
    for (int i = 0; i < size; i++) 
        ptr[i] = arr[i]; 
} 
  
template <typename T> 
void Array<T>::print() { 
    for (int i = 0; i < size; i++) 
        cout << " " << *(ptr + i); 
    cout << endl; 
} 
  
int main() { 
    int arr[5] = { 1, 2, 3, 4, 5 }; 
    Array<int> a(arr, 5); 
    a.print(); 
    return 0; 
}
```

**Output:**

```
1 2 3 4 5
```

## Working with Multi-Type Generics

We can pass more than one data type as arguments to templates. The following example demonstrates this:

```cpp
#include <iostream> 
using namespace std; 
  
template <class T, class U> 
class A { 
    T x; 
    U y; 
  
public: 
    A() { 
        cout << "Constructor Called" << endl; 
    } 
}; 
  
int main() { 
    A<char, char> a; 
    A<int, double> b; 
    return 0; 
}
```

**Output:**

```
Constructor Called
Constructor Called
```
