// Write a function:
// void printArray(int *arr, int size);

// Print the array using only:
// *(arr + i)

#include<iostream>

void printArray(int *arr, int size)
{
    std::cout << "Elements are : \n" ;

    for(int i=0 ; i<size ; i++)
    {
        std::cout << *(arr + i) << '\n' ;
    }
}

int main()
{
    int n{} ;
    std::cout << "Enter number of elements : " ;
    std::cin >> n ;

    int arr[n] ;
    std::cout << "Enter Elements : \n";
    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i] ;
    }

    printArray(arr, n) ;
    
    return 0;
}

// Time Complexity = O(n) 
// Space Complexity = O(1) 