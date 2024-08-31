### C++ Standard Library Data Types Cheat Sheet

#### 1. **Containers**
Containers store collections of objects and manage the memory allocation and access to these objects.

- **Sequence Containers:**
  - **`std::vector`**: Dynamic array, allows fast random access.
  - **`std::deque`**: Double-ended queue, allows fast insertion and deletion at both ends.
  - **`std::list`**: Doubly linked list, allows fast insertion and deletion anywhere in the list.
  - **`std::forward_list`**: Singly linked list, allows fast insertion and deletion at the front.
  - **`std::array`** (C++11): Fixed-size array, wrapper around C-style array.
  - **`std::string`**: Sequence of characters, essentially a `std::vector<char>` with additional string-specific operations.

- **Associative Containers:**
  - **`std::set`**: Collection of unique keys, sorted by keys.
  - **`std::multiset`**: Collection of keys, sorted by keys, allows duplicates.
  - **`std::map`**: Collection of key-value pairs, sorted by keys, unique keys.
  - **`std::multimap`**: Collection of key-value pairs, sorted by keys, allows duplicate keys.

- **Unordered Associative Containers (C++11):**
  - **`std::unordered_set`**: Collection of unique keys, hashed for fast access.
  - **`std::unordered_multiset`**: Collection of keys, hashed for fast access, allows duplicates.
  - **`std::unordered_map`**: Collection of key-value pairs, hashed for fast access, unique keys.
  - **`std::unordered_multimap`**: Collection of key-value pairs, hashed for fast access, allows duplicate keys.

- **Container Adapters:**
  - **`std::stack`**: Adapts a container to provide stack (LIFO) behavior.
  - **`std::queue`**: Adapts a container to provide queue (FIFO) behavior.
  - **`std::priority_queue`**: Adapts a container to provide priority queue behavior.

#### 2. **Iterators**
Iterators provide a way to access elements in a container sequentially without exposing the underlying representation.

- **`std::iterator`**: Base class template for creating custom iterators.
- **`std::reverse_iterator`**: Adapts an iterator to traverse a range in reverse.
- **`std::istream_iterator`**: Reads input stream as an iterator.
- **`std::ostream_iterator`**: Writes output stream as an iterator.
- **`std::move_iterator`** (C++11): Makes move semantics explicit when iterating.
- **`std::back_insert_iterator`**: Adapts a container to provide back-insertion through an iterator.
- **`std::front_insert_iterator`**: Adapts a container to provide front-insertion through an iterator.
- **`std::insert_iterator`**: Adapts a container to provide generalized insertion through an iterator.

#### 3. **Algorithms**
The Standard Library provides a wide range of algorithms that operate on containers and ranges.

- **Non-Modifying Sequence Algorithms:**
  - **`std::for_each`**: Applies a function to each element.
  - **`std::find`**: Finds the first element equal to a value.
  - **`std::find_if`**: Finds the first element that satisfies a condition.
  - **`std::count`**: Counts elements equal to a value.
  - **`std::mismatch`**: Finds the first position where two ranges differ.
  - **`std::equal`**: Checks if two ranges are equal.

- **Modifying Sequence Algorithms:**
  - **`std::copy`**: Copies elements from one range to another.
  - **`std::transform`**: Applies a function to each element in a range and stores the result in a new range.
  - **`std::fill`**: Assigns the same value to every element in a range.
  - **`std::replace`**: Replaces elements equal to a value with another value.
  - **`std::remove`**: Removes elements equal to a value.

- **Sorting and Related Algorithms:**
  - **`std::sort`**: Sorts elements in a range.
  - **`std::partial_sort`**: Sorts the first part of a range.
  - **`std::stable_sort`**: Sorts elements while preserving relative order of equal elements.
  - **`std::nth_element`**: Partially sorts a range such that the nth element is in its final position.
  - **`std::lower_bound`**: Finds the first position where a value could be inserted to maintain sorted order.
  - **`std::upper_bound`**: Finds the last position where a value could be inserted to maintain sorted order.

#### 4. **Smart Pointers**
Smart pointers manage the lifetime of dynamically allocated objects.

- **`std::unique_ptr`** (C++11): Manages a unique resource, no two `unique_ptr`s can own the same resource.
- **`std::shared_ptr`** (C++11): Manages a shared resource, multiple `shared_ptr`s can own the same resource.
- **`std::weak_ptr`** (C++11): Non-owning reference to an object managed by `std::shared_ptr`.

#### 5. **Utility Components**
Utility components provide various helper classes and functions.

- **Pairs and Tuples:**
  - **`std::pair`**: Combines two values of possibly different types.
  - **`std::tuple`** (C++11): Generalization of `std::pair`, can combine more than two values.

- **Type Traits (C++11):**
  - **`std::is_integral`**, **`std::is_floating_point`**, **`std::is_pointer`**, etc.: Compile-time type introspection.

- **Miscellaneous:**
  - **`std::function`** (C++11): General-purpose polymorphic function wrapper.
  - **`std::bind`** (C++11): Creates a function object by binding arguments to a function.
  - **`std::reference_wrapper`** (C++11): Wraps a reference in a copyable, assignable object.
  - **`std::any`** (C++17): Type-safe container for single values of any type.
  - **`std::optional`** (C++17): Wraps a value that may or may not be present.
  - **`std::variant`** (C++17): Type-safe union that can hold one of several types.

#### 6. **Regular Expressions (C++11)**
Regular expressions support pattern matching in strings.

- **`std::regex`**: Represents a compiled regular expression.
- **`std::smatch`, `std::cmatch`**: Holds results of regex search in strings or C-strings.
- **`std::regex_match`**, **`std::regex_search`**: Functions for matching patterns.

#### 7. **Chrono Library (C++11)**
Provides utilities to work with time and durations.

- **Duration:**
  - **`std::chrono::duration`**: Represents time duration.
  - **`std::chrono::milliseconds`**, **`std::chrono::seconds`**: Predefined durations.
- **Time Points:**
  - **`std::chrono::time_point`**: Represents a point in time.
- **Clocks:**
  - **`std::chrono::system_clock`**: Represents the system-wide real-time clock.
  - **`std::chrono::steady_clock`**: Represents a monotonic clock that is steady.
