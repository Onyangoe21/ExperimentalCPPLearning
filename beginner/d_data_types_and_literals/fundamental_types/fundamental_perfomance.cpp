#include <iostream>
#include <chrono>
#include <string>

// See sample results below the page:
int main() {
    float a = 0.00;
    float b = 1.00;
    double c = 0.00;
    double d = 1.00;
    std::string str1 = "a";
    std::string str2 = "b";
    char a_c = 'a';
    char a_b = 'b';

    // Measure performance of float addition: each float uses 32 bits of memory
    auto start_float_addition = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        a += b;
    }
    auto end_float_addition = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_float_timing = end_float_addition - start_float_addition; // Hope this reminds you of generics
    std::cout << "Float addition took: " << elapsed_float_timing.count() << " seconds" << std::endl;

    // Measure performance of double addition: each double uses 64 bits of memory
    auto start_double_addition = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        c += d;
    }
    auto end_double_addition = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_double_addition = end_double_addition - start_double_addition;
    std::cout << "double concatenation took: " << elapsed_double_addition.count() << " seconds" << std::endl;

    auto start_char_concat = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        char result_char = a_c + a_b;
    }
    auto end_char_concat = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_char_time = end_char_concat - start_char_concat;
    std::cout<< "Char concatenation:: fundamental data type took: " << elapsed_char_time.count() << " seconds" << std::endl;

    auto start_string_concat = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        std::string result = str1 + str2;
    }
    auto end_string_concat = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_string_time = end_string_concat - start_string_concat;
    std::cout<< "String concatenation:: non fundamental data type took: " << elapsed_string_time.count() << " seconds" << std::endl;

    return 0;
}

// Here are sample results: Look at the difference for char and string!!
/*
Float addition took: 0.375178 seconds
double concatenation took: 0.348002 seconds: doubles likely benefit from hardware optimization due to their popularity 
                                            and might explain their faster speed even thought they take more memory
Char concatenation:: fundamental data type took: 0.086923 seconds
String concatenation:: non fundamental data type took: 15.8763 seconds
*/
