## HashMap in C++

### Overview

A HashMap is a data structure that stores elements in key-value pairs, where each key is mapped to a corresponding value using a hash function. In C++, the `unordered_map` class in the Standard Template Library (STL) is used to implement HashMaps. This container does not maintain any particular order for the elements but provides efficient O(1) time complexity for search, insertion, and deletion operations on average.

### What is `unordered_map`?

`std::unordered_map` is the C++ implementation of a HashMap, designed to store key-value pairs in an efficient manner. Elements in an `unordered_map` are stored in buckets, and the position of an element is determined by its hash value. This allows for fast access using keys.

### Syntax to Declare a HashMap

```cpp
#include <unordered_map>

std::unordered_map<key_type, value_type> hashMap;
```

Where:
- `key_type` represents the type of the key (e.g., `int`, `string`).
- `value_type` represents the type of the value associated with the key.

### Example: Creating and Using a HashMap

Below is an example that demonstrates the use of `unordered_map` as a HashMap in C++:

```cpp
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    // Create an unordered_map (HashMap)
    unordered_map<string, int> hashMap;

    // Insert key-value pairs into the unordered_map
    hashMap["Apple"] = 10;
    hashMap["Mango"] = 20;
    hashMap["Cherry"] = 30;

    // Access and print the key-value pairs
    for (const auto &it : hashMap) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
```

#### Output:
```
Cherry 30
Mango 20
Apple 10
```

### Iterating Over an `unordered_map`

You can iterate over an `unordered_map` using iterators or range-based loops:

1. **Range-based for loop:**
   ```cpp
   for (const auto &pair : hashMap) {
       cout << pair.first << " -> " << pair.second << endl;
   }
   ```

2. **Using Iterators:**
   ```cpp
   for (auto it = hashMap.begin(); it != hashMap.end(); ++it) {
       cout << it->first << " -> " << it->second << endl;
   }
   ```

### Commonly Used Methods in `unordered_map`

#### 1. **Element Access**

- **`at(key)`**: Returns a reference to the value associated with the key.
    ```cpp
    int value = hashMap.at("Apple");
    ```

- **`operator[]`**: Access or insert elements using a key.
    ```cpp
    hashMap["Banana"] = 50;  // If key doesn't exist, it inserts a new pair
    ```

#### 2. **Modifiers**

- **`insert(pair)`**: Inserts a new key-value pair into the `unordered_map`.
    ```cpp
    hashMap.insert({"Grapes", 40});
    ```

- **`erase(key)`**: Removes an element by key.
    ```cpp
    hashMap.erase("Mango");
    ```

- **`clear()`**: Removes all elements from the map.
    ```cpp
    hashMap.clear();
    ```

#### 3. **Capacity**

- **`size()`**: Returns the number of elements in the map.
    ```cpp
    int count = hashMap.size();
    ```

- **`empty()`**: Checks whether the map is empty.
    ```cpp
    bool isEmpty = hashMap.empty();
    ```

#### 4. **Lookup**

- **`find(key)`**: Returns an iterator to the element if the key exists, otherwise returns `end()`.
    ```cpp
    auto it = hashMap.find("Cherry");
    if (it != hashMap.end()) {
        cout << "Key found: " << it->first << " -> " << it->second << endl;
    }
    ```

- **`count(key)`**: Returns the number of elements with the given key (either 0 or 1 for `unordered_map`).
    ```cpp
    if (hashMap.count("Apple")) {
        cout << "Apple exists in the map!" << endl;
    }
    ```

#### 5. **Iterators**

- **`begin()`**: Returns an iterator pointing to the first element in the map.
    ```cpp
    auto it = hashMap.begin();
    ```

- **`end()`**: Returns an iterator pointing past the last element in the map.
    ```cpp
    auto it_end = hashMap.end();
    ```

- **`cbegin()`**: Returns a constant iterator pointing to the first element.
    ```cpp
    auto it_const = hashMap.cbegin();
    ```

- **`cend()`**: Returns a constant iterator pointing past the last element.
    ```cpp
    auto it_const_end = hashMap.cend();
    ```

#### 6. **Buckets**

- **`bucket_count()`**: Returns the number of buckets in the map.
    ```cpp
    cout << "Bucket count: " << hashMap.bucket_count() << endl;
    ```

- **`bucket_size(n)`**: Returns the number of elements in bucket `n`.
    ```cpp
    cout << "Elements in bucket 0: " << hashMap.bucket_size(0) << endl;
    ```

#### 7. **Hash Function**

- **`hash_function()`**: Returns the hash function used by the `unordered_map`.
    ```cpp
    auto hash_func = hashMap.hash_function();
    ```

#### 8. **Rehashing**

- **`rehash(n)`**: Sets the number of buckets in the map to `n` or more.
    ```cpp
    hashMap.rehash(50);
    ```

- **`reserve(n)`**: Increases the number of buckets to accommodate at least `n` elements.
    ```cpp
    hashMap.reserve(100);
    ```

### Performance of `unordered_map`

- **Time Complexity:** On average, operations like insertion, deletion, and access take O(1) time. In the worst case, due to hash collisions, the time complexity can go up to O(n), but such cases are rare with a good hash function.
  
- **Space Complexity:** The space complexity depends on the number of elements and the load factor of the hash table. Each key-value pair consumes extra space for pointers and the hash function.

### Summary of `unordered_map` Functions

| Method                    | Description                                              |
|---------------------------|----------------------------------------------------------|
| `insert()`                 | Inserts a new element in the map.                        |
| `erase()`                  | Removes an element by key.                               |
| `at()`                     | Accesses an element by key with bounds checking.         |
| `operator[]`               | Access or inserts elements using the key.                |
| `find()`                   | Finds the element by key and returns an iterator.        |
| `count()`                  | Checks if a key exists in the map.                       |
| `size()`                   | Returns the number of elements.                          |
| `clear()`                  | Clears all elements from the map.                        |
| `begin()`                  | Iterator to the beginning.                               |
| `end()`                    | Iterator to the end.                                     |
| `cbegin()`                 | Constant iterator to the beginning.                      |
| `cend()`                   | Constant iterator to the end.                            |
| `bucket_count()`           | Returns the number of buckets.                           |
| `bucket_size()`            | Returns the size of a specific bucket.                   |
| `rehash()`                 | Adjusts the number of buckets.                           |
| `reserve()`                | Reserves space to avoid frequent rehashing.              |
| `hash_function()`          | Returns the hash function used by the map.               |

`unordered_map` is one of the most efficient containers for storing key-value pairs in C++. It offers fast average-time operations and is widely used in performance-critical applications.