// Write
// int sum(int *arr, int size);

// Return the sum of an array.

#include<iostream>

int sum(int *arr, int size)
{
    int add{};

    for(int i=0 ; i<size ; i++)
    {
        add += *arr;
        arr++ ;
    }

    return add ;
}

int main()
{
    int n{};
    std::cout << "Enter number of element : " ;
    std::cin >> n ;

    int arr[n];
    std::cout << "Enter elements : \n" ;

    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Addition of all elements of array is " << sum(arr,n);

    return 0;
}

//Time complexity = O(n)
//Space Complexity = O(1)