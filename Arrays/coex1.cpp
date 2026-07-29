// Take 5 integers as input.
// Print them in the same order.

#include<iostream>

int main()
{
    int arr[5] ;
    
    std::cout << "Enter 5 numbers : \n" ;

    for(int i=0; i < 5; i++)
    {
        std::cin >> arr[i] ;
    }

    std::cout << "The 5 numbers are : " ;

    for(int i=0; i < 5; i++)
    {
        std::cout << arr[i] << " " ;
    }

    return 0;

}

// Time complexity = O(n)
// Space complexity = O(n)