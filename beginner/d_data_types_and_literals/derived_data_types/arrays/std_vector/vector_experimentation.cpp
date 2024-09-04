#include <iostream>
#include <vector>

#include <iostream>
#include <vector>

// This class is simply used as an example: ignore it for now:
class MyClass {
public:
    int x, y;

    // Regular constructor
    MyClass(int xVal, int yVal) : x(xVal), y(yVal) {
        std::cout << "Constructor called for MyClass(" << x << ", " << y << ")\n";
    }

    // Copy constructor
    MyClass(const MyClass& other) : x(other.x), y(other.y) {
        std::cout << "Copy constructor called for MyClass(" << x << ", " << y << ")\n";
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : x(other.x), y(other.y) {
        std::cout << "Move constructor called for MyClass(" << x << ", " << y << ")\n";
        other.x = 0;
        other.y = 0;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for MyClass(" << x << ", " << y << ")\n";
    }
};

int main() {
    std::cout << "As usual, this is a dummy experimentation of vectors and it starts with declaration and experimentation: \n";
    
    // From here initialization can happen in many different ways:
    std::vector<int> int_array_1({1, 2, 3, 4, 5, 6, 7, 8, 9}); // initialization using a list
    std::vector<int> int_array_2(10, 5); // initialization with single value
    std::vector<int> int_array_3(int_array_1); // initialization from another vector
    
    // For us to move across the list, there are several iterators written for the std vectors which we will explore as we print out values in our arrays:
    // iterate over the first list:
    for (auto element_pointer = int_array_1.begin(); element_pointer != int_array_1.end(); ++element_pointer) {
        std::cout << "The value is: " << *element_pointer << "::";  // Dereferencing the iterator to get the value
    }
    std::cout<<std::endl;
    std::cout<<"Moving onto the third array: \n";
    for (auto element_pointer = int_array_3.rbegin(); element_pointer != int_array_3.rend(); ++element_pointer) {
        std::cout << "The value is: " << *element_pointer << ":::";  // Dereferencing the iterator to get the value
    }
    std::cout<<std::endl;
    std::cout<<"Is the capacity simply the same as length of the vector? Let's see: \n";
    std::cout<<"The length of the first vector is: "<<int_array_1.size()<<" while it's capacity is: "<<int_array_1.capacity()<<":\n";
    std::cout<<"Does anything weird happen when we add a new element to the vector? -- the whole point is that capacity is how much can he held in this contigous block and size talks of how much is already in place: how many elements are already stored: \n";
    int_array_1.push_back(6);
    std::cout<<"The length of the first vector is: "<<int_array_1.size()<<" while it's capacity is: "<<int_array_1.capacity()<<":\n";
    std::cout<<"Notice any difference between capacity and size now? Courtesy of push back doing it's thing to get us a new block of memory big enough: \n\n";
    std::cout<<"You might also be wondering what the deal is with push back and emplace back?? Both of them seem to simply insert object to the vector:: \n";

    std::vector<MyClass> vec;
    vec.reserve(3); // we are reserving space so that none of the processes are judged on their attempt to manage memory:

    std::cout << "Using push_back:\n";
    MyClass temp(10, 20); // Create a temporary object
    vec.push_back(temp);  // Copy or move the temporary object into the vector

    std::cout << "\nUsing emplace_back:\n";
    vec.emplace_back(30, 40);  // Constructs the object directly in the vector: you wouldn't be able to do this with push back:
    std::cout<< "So if you class object took half the memory your computer had and you did not have to create the object copy like you have to in push back, do you see why you would use emplace back instead?\n";
    // emplace simply does the insert role for the emplace:

    std::cout<<"But what is the deal with using [] or just saying at?: The answer is simple, at is more predictable in handling out of bounds and can allow you to do things like below to prevent program from using very general exeptions or crashing all together:: \n\n";
    try {
        int val = int_array_1.at(30);  // This will throw std::out_of_range
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of bounds access: " << e.what() << std::endl;
    }

    // Using operator[] (undefined behavior)
    int val2 = int_array_1[30];  // This may cause unpredictable behavior or a crash
    std::cout<<"Your program my have crashed before getting here or gave you something weird you did not mean to access like: "<<val2<<" \n\n";
    
    std::cout<<"We have to admit the .data is pretty interesting: it would be neat to see if using .data can let us run through vector elements by incrementing the pointer values: \n\n";
    int* internal_array_holding_array_1 = int_array_1.data();
    for (int i=0; i<int_array_1.size(); i++) {
        std::cout<<"Element of array 1 looped internally is: "<<*(internal_array_holding_array_1 + i)<<"::: ";
    }
    std::cout<<"\nIsn't that sick?\n\n";
    return 0;
}
