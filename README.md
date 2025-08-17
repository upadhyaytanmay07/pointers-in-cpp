# Pointers-in-Cpp
# Aim
To understand and implement pointer operations in C++, including:

    Pointer Arithmetic (Addition/Increment)
    
    Array Reversal using Pointers
    
    Pointer-based String Operations
    
    Palindrome Checking using Pointers
# Software Used
    Compiler: GNU GCC (g++)
    
    IDE: Visual Studio Code
    
    Operating System: Windows/Linux
# Theory
# 1. Introduction to Pointers
Pointers are variables that store memory addresses rather than values. They enable:

    Direct memory access for efficient data manipulation
    
    Dynamic memory allocation using new and delete
    
    Array traversal through pointer arithmetic
    
    String operations without index variables

    Passing arguments by reference to functions

# 2. Key Pointer Concepts
Pointer Arithmetic

    Addition/Subtraction: Works with the size of the data type
    cpp
    
    int *ptr; 
    ptr++;  // Moves 4 bytes ahead (for 32-bit int)
    
    Comparison: Can compare addresses (>, <, ==)
Pointers vs Arrays

    Array names are constant pointers to first elements
    
    Pointer notation (*(arr+i)) is equivalent to array notation (arr[i])
   
Pointer Safety
    
    Always initialize pointers (int *ptr = nullptr;)
    
    Check for nullptr before dereferencing
    
    Avoid dangling pointers (pointers to deleted memory)
# 3. Practical Applications

        String Manipulation: Pointers efficiently traverse C-style strings
    
        Dynamic Structures: Essential for linked lists, trees, and graphs
    
        Memory Efficiency: Reduce data copying in function calls
    
        Hardware Access: Used in embedded systems programming

# 4. Common Pitfalls

       Memory leaks (forgetting delete)
    
        Dangling pointers (using pointers after memory is freed)
    
        Buffer overflows (incorrect pointer arithmetic)

        Type mismatches (assigning wrong pointer types)

# Algorithms & Implementation
1. Pointer Arithmetic (pointer_add_diff.cpp)

       Declare two integers a, b
      
       Initialize pointers aptr = &a, bptr = &b
      
       Perform addition (*aptr + *bptr)
      
       Perform subtraction (*aptr - *bptr)

2. Pointer Increment (pointer_increment.cpp)

       Declare variables of different types (int, float, double, bool)
      
       Initialize pointers to each variable
      
       Print memory addresses before and after increment (aptr++)

3. Array Reversal (pointer_arr_Reverse.cpp)

       Input array size arr_len
      
       Initialize arrptr to the last element (&arr[arr_len-1])
      
       Traverse array backwards using arrptr--

3. String Display (pointer_string_disp.cpp)
      
       Declare a string a[7] = "Tanmay"
      
       Initialize pointer aptr = &a[0]
      
       Traverse string using aptr++ and print characters

3. Palindrome Check (pointer_palindrome.cpp)

       Declare string a[6] = "madam"
      
       Initialize two pointers:
      
           aptr at start (&a[0])
      
           aptr1 at end (&a[4])
      
       Compare characters while moving pointers towards center (aptr++, aptr1--)
      
       If all match, string is a palindrome

# Conclusion

This experiment successfully demonstrated key pointer operations in C++:

    ✔ Pointer arithmetic (addition, subtraction, increment)
    ✔ Array reversal using pointer traversal
    ✔ String manipulation with pointers
    ✔ Efficient palindrome checking using two-pointer technique
