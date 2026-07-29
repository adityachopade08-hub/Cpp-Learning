// Write a program:

// int x = 25;
// Create a pointer:
// int *ptr = &x;

// Print:
// Value of x
// Address of x
// Value stored in ptr

#include<iostream>

int main()
{
    int x = 25 ;
    int *ptr = &x ;

    std::cout << "\nValue of x = " << x;
    std::cout << "\nAddress of x = " << ptr ;
    std::cout << "\nValue pointed to the pointer = " << *ptr ;

    return 0;
}

//Time Complexity = O(1) 
//Space Complexity = O(1)

//same for solution for coding exercise 2
// same output = x and *ptr, &x and ptr  