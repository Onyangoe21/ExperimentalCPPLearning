#include <iostream>
#include <string>
#include <vector>
// This is straight forward and see results end of page: and explore repurcussions of this in perfomance file in a bit more detail
int main() {
    int intVar;
    double doubleVar;
    char charVar;
    std::string stringVar = "Hello";
    std::vector<int> vectorVar(100);

    std::cout << "Size of int: " << sizeof(intVar) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(doubleVar) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(charVar) << " bytes" << std::endl;
    std::cout << "Size of string: " << sizeof(stringVar) << " bytes (excluding dynamic memory)" << std::endl;
    std::cout << "Size of vector: " << sizeof(vectorVar) << " bytes (excluding dynamic memory)" << std::endl;

    return 0;
}
/*
Size of int: 4 bytes
Size of double: 8 bytes
Size of char: 1 bytes
Size of string: 24 bytes (excluding dynamic memory)
Size of vector: 24 bytes (excluding dynamic memory)
*/
