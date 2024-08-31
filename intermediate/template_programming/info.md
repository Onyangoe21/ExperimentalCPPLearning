### Author credits: Adapted from Geeks for geeks and modified by Edwin Onyango

# Templates in C++ with Examples

_Last Updated: 05 Jul, 2024_

A template is a simple yet powerful tool in C++. The basic idea is to pass the data type as a parameter so that the same code can be used for different data types. For example, a software company might need to implement a `sort()` function for various data types. Instead of writing and maintaining multiple functions, one `sort()` can be written, and the data type can be passed as a parameter.

C++ introduces two new keywords to support templates: `template` and `typename`. The keyword `typename` can always be replaced by the keyword `class`.

## How Do Templates Work?

Templates are expanded at compile time, similar to macros. However, the compiler performs type-checking before template expansion -- you know this from code generation internals. The idea is simple: the source code contains only one function/class, but the compiled code may contain multiple copies of the same function/class for different data types.

## Function Templates

We can write a generic function that works for different data types. Examples of function templates include `sort()`, `max()`, `min()`, and `printArray()`.

To learn more about this topic, refer to [Generics in C++](#).

### Example:

```cpp
// C++ Program to demonstrate the use of template
#include <iostream>
using namespace std;

// One function works for all data types.
// This would work even for user-defined types if operator '>' is overloaded
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

### Example: Implementing Bubble Sort using Templates in C++

```cpp
// C++ Program to implement Bubble sort using a template function
#include <iostream>
using namespace std;

// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> 
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

// Driver Code
int main() {
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);

    // Call the template function
    bubbleSort<int>(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
```

**Output:**

```
Sorted array: 10 20 30 40 50
```

## Class Templates

Class templates, like function templates, are useful when a class defines something independent of the data type. They can be beneficial for classes like `LinkedList`, `BinaryTree`, `Stack`, `Queue`, `Array`, etc.

### Example:

```cpp
// C++ Program to implement template Array class
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
    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();
    return 0;
}
```

**Output:**

```
1 2 3 4 5
```

## Can There Be More Than One Argument for Templates?

Yes, like normal parameters, we can pass more than one data type as arguments to templates. The following example demonstrates this:

### Example:

```cpp
// C++ Program to demonstrate the use of template with multiple arguments
#include <iostream>
using namespace std;

template <class T, class U> 
class A {
    T x;
    U y;

public:
    A() { cout << "Constructor Called" << endl; }
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

## Can We Specify a Default Value for Template Arguments?

Yes, just like normal parameters, we can specify default arguments to templates. The following example demonstrates this:

### Example:

```cpp
// C++ Program to demonstrate the use of template with default arguments
#include <iostream>
using namespace std;

template <class T, class U = char> 
class A {
public:
    T x;
    U y;
    A() { cout << "Constructor Called" << endl; }
};

int main() {
    // This will call A<char, char>
    A<char> a;

    return 0;
}
```

**Output:**

```
Constructor Called
```

## Function Overloading vs. Templates

Both function overloading and templates are examples of polymorphism in C++. Function overloading is used when multiple functions perform similar (but not identical) operations, whereas templates are used when multiple functions perform identical operations.

## What Happens with a Static Member in a Template Class/Function?

Each instance of a template contains its own static variable. For more details, see [Templates and Static Variables](#).

## What Is Template Specialization?

Template specialization allows different codes for a specific data type. For more details, see [Template Specialization](#).

## Can We Pass Non-Type Parameters to Templates?

Yes, we can pass non-type arguments to templates. Non-type parameters are primarily used to specify max or min values or other constant values for a particular instance of a template. These parameters must be `const` because the compiler needs to know the value of non-type parameters at compile time.

### Example:

```cpp
// C++ program to demonstrate working of non-type parameters in templates
#include <iostream>
using namespace std;

template <class T, int max> 
int arrMin(T arr[], int n) {
    int m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];

    return m;
}

int main() {
    int arr1[] = {10, 20, 15, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Second template parameter to arrMin must be a constant
    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2);
  
    return 0;
}
```

**Output:**

```
10
1
```

## Template Argument Deduction

Template argument deduction automatically deduces the data type of the argument passed to the class or function templates, allowing the template to be instantiated without explicitly specifying the data type.

### Example:

```cpp
// Example of Template Argument Deduction
template <typename T>
T multiply (T num1, T num2) { 
    return num1 * num2; 
}

int main() {
    // Explicit type specification
    multiply<int>(25, 5);
    // Implicit type deduction
    multiply(23, 5);
}
```

The same is true for template classes (since C++17 only).

### Example:

```cpp
template<typename T>
class student {
private:
    T total_marks;
public:
    student(T x) : total_marks(x) {}
};

// Usage
student<int> stu1(23);
student stu2(24);  // Deduction works since C++17
```

**Note:** Template argument deduction for classes is only available since C++17. In earlier versions, attempting to use deduction will result in a compiler error.

## Example of Template Argument Deduction

The following example demonstrates how the STL `vector` class template deduces the data type without being explicitly specified.

```cpp
// C++ Program to illustrate template argument deduction in STL
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Creating a vector<float> object without specifying type
    vector v1{1.1, 2.0, 3.9, 4.909};
    cout << "Elements of v1: ";
    for (auto i : v1) {
        cout << i << " ";
    }

    // Creating a vector<int> object without specifying type
    vector v2{1, 2, 3, 

4};
    cout << endl << "Elements of v2: ";
    for (auto i : v2) {
        cout << i << " ";
    }
}
```

**Output:**

```
Elements of v1: 1.1 2 3.9 4.909 
Elements of v2: 1 2 3 4
```

**Note:** The above program will fail compilation in C++14 and below since class template argument deduction was added in C++17.

## Function Template Arguments Deduction

Function template argument deduction has been part of C++ since the C++98 standard. We can skip declaring the type of arguments we want to pass to the function template, and the compiler will automatically deduce the type based on the arguments we pass.

### Example:

```cpp
// C++ program to illustrate the function template argument deduction
#include <iostream>
using namespace std;

// Defining function template
template <typename T> 
T multiply(T first, T second) {
    return first * second;
}

// Driver code
int main() {
    auto result = multiply(10, 20);
    cout << "Multiplication of 10 and 20: " << result << endl;

    return 0;
}
```

**Output:**

```
Multiplication of 10 and 20: 200
```

**Note:** For function templates with the same type for all arguments (e.g., `template<typename T> void function(T a1, T a2){}`), we cannot pass arguments of different types.

## Class Template Arguments Deduction (C++17 Onwards)

Class template argument deduction was added in C++17, allowing us to create class template instances without explicitly defining the types, just like function templates.

### Example:

```cpp
// C++ Program to implement Class Template Arguments Deduction
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// Defining class template
template <typename T> 
class student {
private:
    string student_name;
    T total_marks;

public:
    // Parameterized constructor
    student(string n, T m) : student_name(n), total_marks(m) {}

    void getinfo() {
        // Printing the details of the student
        cout << "STUDENT NAME: " << student_name << endl;
        cout << "TOTAL MARKS: " << total_marks << endl;
        cout << "Type ID: " << typeid(total_marks).name() << endl;
    }
};

int main() {
    student s1("Vipul", 100);   // Deduces student<int>
    student s2("Yash", 98.5);  // Deduces student<double>

    s1.getinfo();
    s2.getinfo();

    return 0;
}
```

**Output:**

```
STUDENT NAME: Vipul
TOTAL MARKS: 100
Type ID: i
STUDENT NAME: Yash
TOTAL MARKS: 98.5
Type ID: d
```

Here, `i` means `int`, and `d` means `double`.
