# Object-Oriented Programming in C++

**Last Updated:** 01 Sep, 2024

Object-oriented programming (OOP) is a programming paradigm that uses objects to represent real-world entities. OOP in C++ focuses on implementing key concepts like inheritance, encapsulation, polymorphism, and more. The primary goal of OOP is to bind data and the functions that operate on them together, ensuring that data can only be accessed through these functions.

## Core Concepts of OOP

### 1. Class
A class is the fundamental building block of Object-Oriented Programming in C++. It is a user-defined data type that encapsulates data members (variables) and member functions (methods). A class serves as a blueprint for creating objects.

**Example:** Consider a `Car` class. Different cars may have unique names and brands, but they share common properties like wheels, speed limits, and mileage. The `Car` class can encapsulate these properties.

- **Data Members:** These are the variables that store the state of an object. For example, `speed_limit` and `mileage` in a `Car` class.
- **Member Functions:** These are the functions that manipulate the data members. For example, `applyBrakes()` and `increaseSpeed()` in a `Car` class.

### 2. Object
An object is an instance of a class. It represents an identifiable entity with characteristics (data) and behavior (functions). When a class is defined, no memory is allocated until an object of that class is created.

Objects take up space in memory and have an associated address. They interact with each other by sending messages (function calls). Each object contains data and functions to manipulate that data, and they can interact without needing to know the details of each other’s data or code.

### 3. Encapsulation
Encapsulation is the process of wrapping data and the functions that manipulate it into a single unit, or class. This ensures that the data is hidden from external access and is only modified through well-defined functions.

**Real-Life Example:** In a company, different departments like finance and sales manage their own data and operations. The finance department cannot directly access sales data; it must request it through an interface, ensuring controlled access.

### 4. Abstraction
Abstraction refers to showing only the essential information while hiding the implementation details. It simplifies complex systems by modeling classes appropriate to the problem domain.

**Example:** A driver knows that pressing the accelerator increases the car’s speed but doesn’t need to understand how the accelerator works internally. Abstraction in C++ is achieved through classes and access specifiers.

### 5. Polymorphism
Polymorphism means "many forms." It allows objects to be treated as instances of their parent class, enabling functions and operators to behave differently based on the context.

- **Operator Overloading:** Allows operators to have different meanings based on the context.
- **Function Overloading:** Allows the same function name to perform different tasks based on the parameters passed.

**Example:** A function named `add` can be overloaded to add two or three integers based on the number of arguments.

### 6. Inheritance
Inheritance is the mechanism by which one class can derive properties and behaviors from another class, promoting code reuse and logical hierarchy.

- **Sub Class:** The class that inherits properties from another class.
- **Super Class:** The class whose properties are inherited.

**Example:** `Dog`, `Cat`, and `Cow` can be derived classes of the `Animal` base class.

### 7. Dynamic Binding
Dynamic binding refers to the code being executed in response to a function call being determined at runtime. C++ supports dynamic binding through virtual functions, allowing for more flexible and dynamic code execution.

**Example:**
In dynamic binding, a base class pointer can call a function that is overridden in a derived class, allowing for behavior to change at runtime.

### 8. Message Passing
Objects in OOP communicate by sending and receiving messages (function calls). A message for an object is a request for the execution of a function, and the object responds by invoking the corresponding function to generate the desired result.

**Example:** A `Car` object can receive a message to display its speed, which would invoke the `displaySpeed()` function.

## Advantages of Object-Oriented Programming (OOP)

1. **Modularity and Reusability:** OOP promotes modularity through classes and objects, allowing code to be reused across different parts of a program.
2. **Data Encapsulation:** OOP encapsulates data within objects, enhancing data security and integrity.
3. **Inheritance:** OOP supports inheritance, reducing redundancy by reusing existing code.
4. **Polymorphism:** OOP allows polymorphism, enabling flexible and dynamic code through method overriding.
5. **Abstraction:** OOP enables abstraction, hiding complex details and exposing only the essential features.


Object-Oriented Programming is a powerful paradigm that helps manage the complexity of software systems, making them easier to design, maintain, and extend.
