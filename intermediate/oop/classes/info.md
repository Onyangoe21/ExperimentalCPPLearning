# C++ Classes and Objects

**Last Updated:** 15 Jul, 2024

In C++, classes and objects are the foundational elements that enable Object-Oriented Programming (OOP). This page explores the concept of classes and objects in C++, how they function, and how they can be implemented in your C++ programs.

## What is a Class in C++?

A class is a user-defined data type that encapsulates its own data members and member functions. These can be accessed and utilized by creating an instance of the class, known as an object. Essentially, a class acts as a blueprint for an object: think about why you need objects in programming:

### Example:
Consider a `Car` class. Different cars may have unique names and brands, but they share common properties like four wheels, speed limits, and mileage. Here, `Car` is the class, and the wheels, speed limits, and mileage are its properties.

- **Data Members:** Variables such as `speed_limit` and `mileage` that define the properties of the class.
- **Member Functions:** Functions like `applyBrakes()` and `increaseSpeed()` that define the behavior of the class.

To use a class, you must first create an object of that class, as a class alone does not allocate memory. Memory is allocated only when an object is instantiated.

## Defining a Class in C++

A class in C++ is defined using the `class` keyword followed by the class name. The general syntax is as follows:

```cpp
class ClassName {
    access_specifier:
    // Body of the class
};
```

Here, the access specifier determines the accessibility of the class’s data members: Usually in 3 main types: public(accessible everywhere the object shows), private(not accessible outside of class), protected(private but can be accessed by derived classes).

### Example:

```cpp
class ThisClass {
    public:
        int var;  // Data member
        void print() {  // Member function
            cout << "Hello";
        }
};
```

## What is an Object in C++?

An object is an instance of a class. When a class is defined, it only specifies the structure of the object; no memory is allocated. To use the data and functions defined in the class, you need to create an object.

### Syntax to Create an Object:
You can create an object of a class in the same way you declare variables of built-in data types.

```cpp
ClassName ObjectName;
```

### Example:
```cpp
MyClass obj;
```
In this example, an object `obj` of the class `MyClass` is created.

## Accessing Data Members and Member Functions

The data members and member functions of a class can be accessed using the dot (`.`) operator with the object. For example, if you have an object named `obj` and want to access the member function `printName()`, you would write:

```cpp
obj.printName();
```

### Example of Class and Object in C++

```cpp
#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        int age;

        void introduce() {
            cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
        }
};

int main() {
    Person person1;
    person1.name = "Alice";
    person1.age = 30;
    person1.introduce();
    return 0;
}
```

**Output:**
```
Hi, my name is Alice and I am 30 years old.
```

## Access Modifiers

In C++, access to class members is controlled using access specifiers, also known as access modifiers. These keywords define the level of access that class members have:

- **Public:** Members are accessible from outside the class.
- **Private:** Members are accessible only within the class itself.
- **Protected:** Members are accessible within the class and by derived classes.

If no access specifier is defined, the `private` specifier is applied by default.

### Example of Access Specifiers:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Geeks {
    private:
        string geekname;

    public:
        void setName(string name) { geekname = name; }
        void printname() { cout << "Geekname is: " << geekname; }
};

int main() {
    Geeks obj1;
    obj1.setName("Abhi");
    obj1.printname();
    return 0;
}
```

**Output:**
```
Geekname is: Abhi
```

In the above example, the data member `geekname` cannot be accessed outside the class. Attempting to access it directly using `obj1.geekname` would result in a compilation error.

## Member Functions in C++ Classes

There are two ways to define a member function in C++:

1. **Inside the class definition:** Directly within the class.
2. **Outside the class definition:** Declared within the class but defined outside using the scope resolution operator `::`.

### Example of Member Function Definition:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Geeks {
    public:
        string geekname;
        int id;

        void printname();
        void printid() { cout << "Geek id is: " << id; }
};

void Geeks::printname() {
    cout << "Geekname is: " << geekname;
}

int main() {
    Geeks obj1;
    obj1.geekname = "xyz";
    obj1.id = 15;

    obj1.printname();
    cout << endl;
    obj1.printid();
    return 0;
}
```

**Output:**
```
Geekname is: xyz
Geek id is: 15
```

Note that all member functions defined inside the class are inline by default, which means the compiler attempts to expand the function code at each point where the function is called.

## Constructors

Constructors are special class members that are called whenever an object of the class is instantiated. They share the same name as the class and can be defined inside or outside the class.

### Types of Constructors:

- **Default Constructors:** Take no arguments.
- **Parameterized Constructors:** Take arguments to initialize data members.
- **Copy Constructors:** Create an object by copying another object.
- **Move Constructors:** Create an object by moving resources from another object.

### Example of Constructors:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Geeks {
    public:
        int id;

        Geeks() {
            cout << "Default Constructor called" << endl;
            id = -1;
        }

        Geeks(int x) {
            cout << "Parameterized Constructor called" << endl;
            id = x;
        }
};

int main() {
    Geeks obj1;
    cout << "Geek id is: " << obj1.id << endl;

    Geeks obj2(21);
    cout << "Geek id is: " << obj2.id << endl;

    return 0;
}
```

**Output:**
```
Default Constructor called
Geek id is: -1
Parameterized Constructor called
Geek id is: 21
```

If the programmer does not define a constructor, the compiler automatically generates a default, copy, and move constructor.

## Destructors

A destructor is a special member function that is invoked when the scope of an object ends. It deallocates memory used by the object, preventing memory leaks. A destructor shares the same name as the class but is prefixed with a tilde (`~`).

### Example of Destructors:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Geeks {
    public:
        int id;

        ~Geeks() {
            cout << "Destructor called for id: " << id << endl;
        }
};

int main() {
    Geeks obj1;
    obj1.id = 7;
    int i = 0;
    while (i < 5) {
        Geeks obj2;
        obj2.id = i;
        i++;
    }

    return 0;
}
```

**Output:**
```
Destructor called for id: 0
Destructor called for id: 1
Destructor called for id: 2
Destructor called for id: 3
Destructor called for id: 4
Destructor called for id: 7
```

## Interesting Fact

Why do we need a semicolon at the end of a class definition? The semicolon allows the compiler to check if the user intends to create an instance of the class at the end. Like structures and unions, you can create an instance of a class just before the semicolon.

### Example:

```cpp
#include <iostream>
using namespace std;

class Demo {
    int a, b;

    public:
        Demo() {
            cout << "Default Constructor" << endl;
        }

        Demo(int a, int b) : a(a), b(b) {
            cout << "Parameterized Constructor - values: " << a << " " << b << endl;
        }

} instance;

int main() {
    return 0;
}
```

**Output:**
```
Default Constructor
```

You can also invoke the parameterized constructor just before the semicolon:

```cpp
#include <iostream>
using namespace std;

class Demo {
    public:
        int a, b;

        Demo() {
            cout << "Default Constructor" << endl;
        }

        Demo(int a, int b) : a(a), b(b) {
            cout << "Parameterized Constructor - values: " << a << " " << b << endl;
        }

} instance(100, 200);

int main() {
    return 0;
}
```

**Output:**
```
Parameterized Constructor - values: 100 200
```

By creating an instance just before the semicolon, you can instantiate a class and allocate memory to it immediately.