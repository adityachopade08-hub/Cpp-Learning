// Take 10 integers.
// Print only the even numbers.

#include<iostream>

int main()
{
    int arr[10];
    std::cout << "Enter 10 numbers : \n" ;

    for(int i=0; i<10; i++)
    {
        std::cin >> arr[i] ;
    }

    std::cout << "Even numbers are : " ;

    for(int i = 0; i<10 ; i++)
    {
        if((arr[i] % 2) == 0)
        {
            std::cout << arr[i] << " " ;
        }
    }

    return 0;
}

// Time complexity = O(n)
// Space complexity = O(n) 