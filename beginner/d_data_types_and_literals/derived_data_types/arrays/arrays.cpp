// arrays come in to store multiple values of SIMILAR data types in a contiguous memory location

// Using the tips we talked about:
/*
**Tips:**
When dealing with most derived data types, here are the major questions:
1. **Declaration:** How do you specify the data type?
2. **Initialization:** How do you populate it initially?
3. **Adding Elements:** What’s the runtime and process?
4. **Removing Elements:** What’s the runtime and process?
5. **Accessing Elements:** How do you retrieve or modify them?
6. **Memory Layout:** How is data stored in memory?
7. **Memory Management:** How is memory allocated/deallocated?
8. **Supported Operations:** What functions or operators are available?
9. **Handling Edge Cases:** How does it manage capacity or errors?
10. **Type Safety:** Does it enforce type safety?
11. **Common Pitfalls:** What are typical errors to avoid?
12. **Interoperability:** How does it interact with other types?
13. **Special Features:** Are there unique methods or behaviors?
*/

// DECLARATION

// static: fixed size:
int one_dimensional_array_static[5];

// dynamic: 
int* one_dimensional_array_dynamic = new int[5];
// dynamic initialization at declaration:
int* one_dim_with_initialization = new int[5]{1,2,3,4,5};
