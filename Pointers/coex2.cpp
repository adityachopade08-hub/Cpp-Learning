// Create:

// int a = 10;
// int b = 20;

// Print:
// Value of a
// Address of a
// Value of b
// Address of b

// Observe whether the addresses are the same or different.

#include<iostream>

int main()
{
    int a{10}, b{20};

    std::cout << "Value of a = " << a << "\nAddress of a = " << &a ;
    std::cout << "\nValue of b = " << b << "\nAddress of b = " << &b ;

    return 0;
}

//Time Complexity = O(1)
//Space Complexity = O(1)