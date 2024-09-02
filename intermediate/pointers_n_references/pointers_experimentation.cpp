// 
#include <iostream>
#include <thread>
#include <chrono>

struct TestStruct {
    int x;
    int y;

    void setValues(int a, int b) {
        x = a;
        y = b;
    }
};
struct TestStruct2 {
    double x;
    int y;

    void setValues(double a, int b) {
        x = a;
        y = b;
    }
};

int main () {
    // Integers are way more predictable:
    std::cout<<"|__________________|---------------------|@@@@@@@@@@@@@@@@@@@@|---------------------|____________________"<<std::endl;
    std::cout<<"_________________________________________________ARRAYS__________________________________________________"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Starting the experimentation for arrays:  "<< std::endl;
    std::cout<<"What happens when you try to assign pointer to a variable not declared as a pointer?"<<std::endl;
    // I am going to declare an integer just like any other but when initalizing it, I am going to point to the variable:
    int test1;
    int value = 10;
    int arr[5] = {1,2,3,4,5};
    std::cout<<"The address of value is at "<<&value<< " while the value of test1 is "<<test1<<"Simple and straight forward: "<<std::endl;
    // test1 = &value; // Trying this line will fail: They type has already been set:
    auto *arr_pointer = arr;
    auto dereferenced = *(arr_pointer + 1);
    std::cout<<"The address of array is at "<<arr_pointer<< " and if you add 1 to that pointer, you get "<< arr_pointer + 1 << " which is 4 bytes away from the address we just printed earlier :" <<std::endl;
    std::cout<<"What is even more interesting is that you can try and see the value of what is stored 2 blocks away from this pointer and it should be the number in the array that is 2 addresses away as this proves: " << *(arr_pointer + 2) <<std::endl;
    std::cout<<"This part should not be tried at home but what happens when you try to see something 10 blocks away even though you array is only taking 5 spaces? " << *(arr_pointer + 10) <<std::endl;
    std::cout<<"_________________________________________________________________________________________________________"<<std::endl;
    std::cout<<"#########################################################################################################"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    // 
    TestStruct test_object;

    test_object.setValues(10, 20);

    TestStruct* point_struct = &test_object;
    std::cout<<"|__________________|---------------------|@@@@@@@@@@@@@@@@@@@@|---------------------|____________________"<<std::endl;
    std::cout<<"________________________________________________STRUCTS__________________________________________________"<<std::endl;
    std::cout<< "How do we see the memory address of this one? Does the name here correspond to a pointer too? No: the compiler is here to save the day and makes sure the name is corresponding to exactly what we would expect:"<< std::endl;
    std::cout<< "But we still know deep down that the only way the computer can understand this stuff is when there is memory block allocated and pointed so if we can find that memory address, we can dereference it to pull out what it contains:"<< std::endl;
    std::cout<< "But even after pointing to the memory address holding the struct which is "<< point_struct<< ", we cannot simpy dereference it by *point_struct -- if we could maybe it would spit out the first element of the struct as this is how the memory allocation works"<<std::endl;
    std::cout<< "Think about why c++ might not want to let you do that: easy way to this about might be that in the case of arrays, c++ knows that you are keeping values of the same type -- hence constant space and calculation is straight forward -- here it isnt straight forward and ..."<<std::endl;
    std::cout<< "The memory address where our struct is kept is "<<point_struct<< " and since dereferenging of all object can't work, let's derefernce object:"<< (*point_struct).x<<std::endl;
    std::cout<< "But what happens when we compare address of whole struct: "<<point_struct<< " to the address of first member of the struct: "<< &(test_object.x)<<" ?"<<std::endl;
    std::cout<< "WOW! Does it just return same address for all members? Let's see address of second element y: "<< &(test_object.y)<<std::endl;
    std::cout<< "Look at that!!! Food for thought, what would be the address of this second element if x was a double(8 bytes) -- answer in terms of difference in number of bytes?"<<std::endl;
    int thinking_time;
    std::cout << "Enter thinking time (in seconds): ";
    std::cin >> thinking_time;

    // Countdown loop
    for (int i = thinking_time; i > 0; --i) {
        std::cout << "Time remaining: " << i << " seconds" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second
    }

    std::cout << "Time up:" << std::endl;
    TestStruct2 test_object2;
    test_object2.setValues(10.00, 20);
    TestStruct2* pointer_to_object2 = &test_object2;
    std::cout<< "Address of struct: "<<pointer_to_object2<< " First element address: "<<&(test_object2.x)<<" and second element address is: "<< &(test_object2.y)<<std::endl;
    std::cout<< "Remember to do calculations with hexadecimals: "
    std::cout<<"_________________________________________________________________________________________________________"<<std::endl;
    std::cout<<"#########################################################################################################"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
}