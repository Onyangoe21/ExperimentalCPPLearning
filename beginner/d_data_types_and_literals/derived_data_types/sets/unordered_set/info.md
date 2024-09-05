# Unordered Sets in C++ Standard Template Library

_Last Updated: 16 Jul, 2024_

An `unordered_set` in C++ is an associative container that stores unique elements in no particular order. It is implemented using a **hash table**, which allows for **constant-time operations (O(1))** on average, though in the worst case, operations can take **linear time (O(n))**. This depends on the quality of the hash function, but `unordered_set` generally offers very efficient performance. 

### Key Characteristics:
- **Random Insertion Order:** Elements are stored based on their hash value, and there is no guaranteed order.
- **Unique Elements:** No duplicate values are allowed.
- **Underlying Structure:** Uses a hash table to manage the elements.
  
### Syntax:
```cpp
std::unordered_set<data_type> setName;
```

## Commonly Used Functions

1. **size()** – Returns the number of elements in the unordered_set.
2. **empty()** – Checks if the set is empty.
3. **find()** – Searches for a specific key in the set.
4. **insert()** – Adds an element to the set.
5. **erase()** – Removes an element from the set.

### Example

```cpp
#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    // Declaring an unordered_set to store strings
    unordered_set<string> stringSet;

    // Inserting elements
    stringSet.insert("code");
    stringSet.insert("in");
    stringSet.insert("c++");
    stringSet.insert("is");
    stringSet.insert("fast");

    // Checking if a key exists
    string key = "slow";
    if (stringSet.find(key) == stringSet.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;

    // Accessing all elements
    cout << "All elements in unordered_set:\n";
    for (auto itr = stringSet.begin(); itr != stringSet.end(); itr++)
        cout << *itr << endl;

    return 0;
}
```

**Output:**
```
slow not found
All elements in unordered_set:
is
fast
c++
in
code
```

Note: The order of the elements is not maintained, as `unordered_set` stores elements based on their hash values.

## Comparison: `std::set` vs. `std::unordered_set`

| Feature                | `std::set`                                     | `std::unordered_set`                               |
|------------------------|------------------------------------------------|---------------------------------------------------|
| **Order**               | Elements are stored in a sorted order.         | Elements are stored in no specific order.         |
| **Underlying Structure**| Balanced tree (usually Red-Black Tree).        | Hash table.                                       |
| **Time Complexity**     | O(log n) for insertion, deletion, and search.  | O(1) average case for insertion, deletion, search.|
| **Worst-case Complexity**| O(log n)                                      | O(n) (if there are many hash collisions).         |

### Use Case Example: Finding Duplicates

Given an array of integers, we can use `unordered_set` to find all duplicates:

```cpp
#include <unordered_set>
#include <iostream>
using namespace std;

void printDuplicates(int arr[], int n) {
    unordered_set<int> intSet;
    unordered_set<int> duplicates;

    for (int i = 0; i < n; i++) {
        if (intSet.find(arr[i]) == intSet.end())
            intSet.insert(arr[i]);
        else
            duplicates.insert(arr[i]);
    }

    cout << "Duplicate items are: ";
    for (auto itr = duplicates.begin(); itr != duplicates.end(); itr++)
        cout << *itr << " ";
}

int main() {
    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printDuplicates(arr, n);
    return 0;
}
```

**Output:**
```
Duplicate items are: 5 2 1
```

### Time Complexity: O(n)
- **Insertions and lookups** are expected to take constant time O(1), making it efficient for finding duplicates.

## Member Methods of `std::unordered_set`

Here’s a list of the primary functions available in the `std::unordered_set` class:

| Function         | Description                                                       |
|------------------|-------------------------------------------------------------------|
| `insert()`       | Insert a new element into the set.                                |
| `begin()`        | Returns an iterator to the first element.                         |
| `end()`          | Returns an iterator to the end of the set.                        |
| `count()`        | Returns the number of occurrences of an element.                  |
| `find()`         | Searches for an element in the set.                               |
| `clear()`        | Removes all elements from the set.                                |
| `cbegin()`       | Returns a constant iterator to the beginning.                     |
| `cend()`         | Returns a constant iterator to the end.                           |
| `bucket_size()`  | Returns the number of elements in a specific bucket.              |
| `erase()`        | Removes an element from the set.                                  |
| `size()`         | Returns the number of elements in the set.                        |
| `swap()`         | Swaps the contents of two sets.                                   |
| `emplace()`      | Inserts a new element in place.                                   |
| `max_size()`     | Returns the maximum number of elements the set can hold.          |
| `empty()`        | Checks if the set is empty.                                       |
| `equal_range()`  | Returns the range of elements matching a given value.             |
| `hash_function()`| Returns the hash function used by the unordered_set.              |
| `reserve()`      | Requests capacity for the set.                                    |
| `bucket()`       | Returns the bucket number where a specific element is stored.     |
| `bucket_count()` | Returns the number of buckets in the set.                         |
| `load_factor()`  | Returns the current load factor of the hash table.                |
| `rehash()`       | Changes the number of buckets in the set.                         |
| `max_load_factor()`| Gets or sets the maximum load factor.                           |
| `emplace_hint()` | Inserts a new element with a hint for the position.               |

