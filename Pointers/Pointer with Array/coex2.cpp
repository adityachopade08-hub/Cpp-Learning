// Given:

// int arr[] = {2,4,6,8,10};
// Print the last element using pointer arithmetic only.
// (No arr[4].)

#include<iostream>

int main()
{
    int arr[]= {2,4,6,8,10} ;
    int *ptr = arr ;

    std::cout << *(ptr + 4) ;
    return 0;
}

//Time Complexity = O(1)
//Space Complexity = O(1)