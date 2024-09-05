// 
#include <unordered_map>
#include <iostream>

int main() {
    std::cout<<"Beginning the experimentation with hash maps in c++\n";
    std::unordered_map<std::string, int> test_map = {{"c++", 1}, {"python",2}, {"java", 3}};
    for (auto it=test_map.begin(); it != test_map.end(); it++) {
        std::cout<<"Element at:: "<<it->first <<":"<< test_map.at(it->first)<<std::endl;
    }

    std::cout<<"\n\n";
    std::cout<<"Using first and second pointer attributes: \n";
    for (auto it=test_map.begin(); it != test_map.end(); it++) {
        std::cout<<"Element at:: "<<it->first <<":"<< it->second<<std::endl;
    }
}