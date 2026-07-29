// Without using indexing (arr[i]), print every element of the array using only a pointer.

// Expected output:
// 5
// 10
// 15
// 20

#include<iostream>

int main()
{
    int arr[] = {5,10,15,20};
    int *ptr = arr ;

    std::cout << *ptr <<'\n';
    ptr++;
    std::cout << *ptr <<'\n';
    ptr++;
    std::cout << *ptr <<'\n';
    ptr++;
    std::cout << *ptr <<'\n';

    return 0;
} 

//Time complexity = O(1)
//Space Complexity = O(1)