#include <iostream>

int a = 10;
int* pointer_to_a = &a;
int** pointer_to_pointer_to_a = &pointer_to_a;
int& ref = a;
int copy_of_a = a;

bool func1(int a) {
    a += 1;
    a *= 10;

    return true;
}

bool func2(int& a) {
    a += 1;
    a *= 10;

    return true;
}

bool print_pointer_1(int* a) {
    std::cout<<"Printed from within print_pointer_1 function: "<<std::endl<<std::endl;
    std::cout<<"The pointer used within the function is: "<<a<<" and the address used to point to this pointer is: "<<&a<<std::endl;
    return true;
}

bool print_pointer_2(int*& a) {
    std::cout<<"Printed from within print_pointer_2 function: "<<std::endl<<std::endl;
    std::cout<<"The pointer used within the function is: "<<a<<" and the address used to point to this pointer is: "<<&a<<std::endl;
    return true;

    return true;
}

int main() {
    // Take note that c++ is creating a new address when doing a=b
    std::cout<<"The address of a is: "<<&a<<" and the address of it's reference is: "<<&ref<<" whereas the address of it's copy is at: "<<&copy_of_a<<std::endl;
    std::cout<<"The address of variable a is "<< pointer_to_a <<"and the pointer keeping this address is: "<< pointer_to_pointer_to_a<<" whose reference is: "<< ref<<std::endl;

    std::cout<<"Now that we have seen the preliminary introduction to a reference, let us use it with details in a function and see what really happens: "<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    int test_reference = 10;
    std::cout<<"You have created a variable called test_reference and it is kept at address: "<<&test_reference<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"If you want to call a function to add 1 and multiply by 10 on the variable and you don't want to have to"
        <<" return the new added value maybe because you simply want a boolean return back on whether the operation worked or not,"
        <<"you would need to be able to edit this value in place while passing it to the function but remember that "
        <<"from how the stack frames work, a new copy is created with every instance of the function that runs and so if we called"
        <<" func1, we would simply be creating a copy and updating it as you can see:"<<std::endl;
    std::cout<<"value of test_reference before calling function is: "<<test_reference;
    func1(test_reference);
    std::cout<< " and the value after calling the function is "<<test_reference<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Your solution is func2"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"While calling func2, the value before calling the function is: "<<test_reference;
    func2(test_reference);
    std::cout<<" and the value after calling the second function which actually passed the inference is: "<< test_reference<<std::endl;
    std::cout<<std::endl;
    std::cout<<"How can we give you a simple example to help brainstorm through how you would be able to brainstorm this effect on using references to pointers??"<<std::endl;
    std::cout<<std::endl;
    int* pointer_for_test = &test_reference; // We have to do this because when passing values to a function needs temporary address for reference: you can't have an alias to a non-existent variable:
    std::cout<<"When we pass the address" << pointer_for_test<< " stored at: "<<&pointer_for_test<< " to print_pointer_1, this is what happens from within the function: "<<std::endl;
    print_pointer_1(pointer_for_test);
    std::cout<<"Yet when we pass" << pointer_for_test<< " stored at: "<<&pointer_for_test<< " to print_pointer_2, this is what happens from within the function: "<<std::endl;
    print_pointer_2(pointer_for_test);
    std::cout<<"Pause for a second and see what is going on with the addresses given as this is key to understanding references to pointers:: "<<std::endl;
    return 0;
}

/*
// SAMPLE OUTPUT

The address of a is: 0x1048e0000 and the address of it's reference is: 0x1048e0000 whereas the address of it's copy is at: 0x1048e0018
The address of variable a is 0x1048e0000and the pointer keeping this address is: 0x1048e0008 whose reference is: 10
Now that we have seen the preliminary introduction to a reference, let us use it with details in a function and see what really happens: 


You have created a variable called test_reference and it is kept at address: 0x16b527048


If you want to call a function to add 1 and multiply by 10 on the variable and you don't want to have to return the new added value maybe because you simply want a boolean return back on whether the operation worked or not,you would need to be able to edit this value in place while passing it to the function but remember that from how the stack frames work, a new copy is created with every instance of the function that runs and so if we called func1, we would simply be creating a copy and updating it as you can see:
value of test_reference before calling function is: 10 and the value after calling the function is 10


Your solution is func2

While calling func2, the value before calling the function is: 10 and the value after calling the second function which actually passed the inference is: 110

How can we give you a simple example to help brainstorm through how you would be able to brainstorm this effect on using references to pointers??

When we pass the address0x16b527048 stored at: 0x16b527040 to print_pointer_1, this is what happens from within the function: 
Printed from within print_pointer_1 function: 

The pointer used within the function is: 0x16b527048 and the address used to point to this pointer is: 0x16b526fe8
Yet when we pass0x16b527048 stored at: 0x16b527040 to print_pointer_2, this is what happens from within the function: 
Printed from within print_pointer_2 function: 

The pointer used within the function is: 0x16b527048 and the address used to point to this pointer is: 0x16b527040
Pause for a second and see what is going on with the addresses given as this is key to understanding references to pointers:: 
*/