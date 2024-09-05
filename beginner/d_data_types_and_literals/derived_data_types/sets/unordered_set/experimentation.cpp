//
#include <unordered_set>
#include <iostream>

int main() {
    // Let's first create and slowly populate:
    // some common initialization methods are: std::set<int> my_set(my_vector.begin(), my_vector.end());, std::set<int> copy_set(original_set);
    // std::set<int> moved_set(std::move(original_set));, my_set.insert({10, 20, 30});
    std::unordered_set<int> unordered_set = {1,2,3,4,5};

    unordered_set.insert(9);

    for (auto element = unordered_set.begin(); element != unordered_set.end(); element++){ // remember, no order here so notice the != in the iterator:
        std::cout<<"Element of set:: "<<*element<<"\n";
    }
    std::cout<<"\n\n\n";

    // we can also find it and erase it:
    auto num = unordered_set.find(9);
    unordered_set.erase(num);
    for (auto element = unordered_set.begin(); element != unordered_set.end(); element++){ // remember, no order here so notice the != in the iterator:
        std::cout<<"Element of set:: "<<*element<<"\n";
    }
    std::cout<<"\n\n\n";

    auto num = unordered_set.find(2);
    unordered_set.erase(num);
    for (auto element = unordered_set.begin(); element != unordered_set.end(); element++){ // remember, no order here so notice the != in the iterator:
        std::cout<<"Element of set:: "<<*element<<"\n";
    }
    std::cout<<"\n\n\n";
}