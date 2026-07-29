// Write a program:

// int x = 10;
// int *ptr = &x;
// *ptr = 30;

// Print both:
// x
// *ptr

#include<iostream>

int main()
{
    int x = 10;
    int *ptr = &x ;
    *ptr = 30 ;

    std::cout << "x = " << x ;
    std::cout << "\n*ptr = " << *ptr ;

    return 0;
}

//Time Complexity = O(1)
//Space Complexity = O(1)