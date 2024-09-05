//
#include <iostream>

int main() {
    // Most of the concepts from here overlap with the std::vector and will not be repeated: we will only explore the parts that make these unique:
    // The biggest difference is the restrictions in the modifications and as we can see, here there are only 2 methods: fill, swap -- FFT; why we would not have clear here? -- clear doesn;t help if it doesn't reduce size to 0 right?
    std::array<int, 5> int_array = {1,2,3,4,5};
    for (auto e =int_array.begin(); e<int_array.end(); e++) {
        std::cout<<"value in int array:: "<<*e<<":: ";
    }
    std::cout<<std::endl;
    int_array.fill(9);
    for (auto e =int_array.begin(); e<int_array.end(); e++) {
        std::cout<<"value after filling:: "<<*e<<":: ";
    }
    std::cout<<std::endl;
    int_array.at(1) = 20;
    for (auto e =int_array.begin(); e<int_array.end(); e++) {
        std::cout<<"value after changing index 1:: "<<*e<<":: ";
    }
}