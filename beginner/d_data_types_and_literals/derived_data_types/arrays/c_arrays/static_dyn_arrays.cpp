#include <iostream>
#include <chrono>
#include <vector>

/*
A few notes: 

*/
void testStaticArray() {
    const int size = 100000;
    int arr[size];

    // Measure access time
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Static array access time: " << duration.count() << " seconds\n";
}

void testDynamicArray() {
    const int size = 100000;
    int* arr = new int[size];

    // Measure access time
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Dynamic array access time: " << duration.count() << " seconds\n";

    // Clean up the memory
    delete[] arr;
}

void testMemoryAllocation() {
    const int size = 100000;

    // Static array (stack allocation)
    auto start_static = std::chrono::high_resolution_clock::now();
    int static_arr[size];
    auto end_static = std::chrono::high_resolution_clock::now();

    // Dynamic array (heap allocation)
    auto start_dynamic = std::chrono::high_resolution_clock::now();
    int* dynamic_arr = new int[size];
    auto end_dynamic = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration_static = end_static - start_static;
    std::chrono::duration<double> duration_dynamic = end_dynamic - start_dynamic;

    std::cout << "Static array allocation time: " << duration_static.count() << " seconds\n";
    std::cout << "Dynamic array allocation time: " << duration_dynamic.count() << " seconds\n";

    // Clean up the memory
    delete[] dynamic_arr;
}

void tryingStaticArrayUsingUserInput() {
    int array_size; 
    std::cout<<"Please enter the desired array size: "<< std::endl;
    std::cin >> array_size;

    /* Trying to declare static array should fail, however, this might work on some compilers, since this is a 
    Variable Length Array (VLA) at work, a feature that is not part of the C++ standard. VLAs are supported as an 
    extension by some compilers (like GCC) and allow for arrays whose size is determined at runtime, but they are 
    still allocated on the stack, not the heap.:
    */
    int static_array[array_size];
    std::cout<<"Succesfully declared a static array and it's size will be determined during runtime: "<< std::endl;
}

int main() {
    std::cout << "Testing Static vs Dynamic Arrays:\n\n";

    std::cout << "Memory Allocation Test:\n";
    testMemoryAllocation();
    
    std::cout << "\nAccess Time Test:\n";
    testStaticArray();
    testDynamicArray();
    tryingStaticArrayUsingUserInput();

    return 0;
}
