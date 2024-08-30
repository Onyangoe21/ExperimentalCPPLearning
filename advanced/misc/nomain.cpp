// nomain.cpp
#include <iostream>

// Custom entry point function
extern "C" void my_entry_point() {
    std::cout << "This is the custom entry point!" << std::endl;
}

// compile with g++ -nostartfiles -o nomain nomain.cpp -Wl,-e,_my_entry_point
