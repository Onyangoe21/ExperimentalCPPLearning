#include <iostream>

template <typename T>
class MyArray {
private:
    T* data;          // Pointer to the array memory
    size_t size;      // Number of elements in the array
    size_t capacity;  // Allocated memory capacity

    void resize(size_t new_capacity) {
        T* new_data = new T[new_capacity];   // Allocate new memory
        for (size_t i = 0; i < size; i++) {
            new_data[i] = data[i];           // Copy existing elements
        }
        delete[] data;                       // Free old memory
        data = new_data;                     // Update to new memory
        capacity = new_capacity;
    }

public:
    // Constructor
    MyArray() : size(0), capacity(1) {
        data = new T[capacity];
    }

    // Destructor
    ~MyArray() {
        delete[] data;
    }

    // Add an element to the array
    void push_back(const T& value) {
        if (size >= capacity) {
            resize(2 * capacity);            // Double the capacity if needed
        }
        data[size++] = value;
    }

    // Access an element at a given index
    T& operator[](size_t index) {
        return data[index];
    }

    // Get the size of the array
    size_t get_size() const {
        return size;
    }

    // Get the capacity of the array
    size_t get_capacity() const {
        return capacity;
    }
};

int main() {
    MyArray<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    for (size_t i = 0; i < arr.get_size(); i++) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << "Size: " << arr.get_size() << std::endl;
    std::cout << "Capacity: " << arr.get_capacity() << std::endl;

    return 0;
}
