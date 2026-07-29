// Write
// int largest(int *arr, int size);

// Return the largest element using pointer arithmetic only.

#include<iostream>

int largest(int *arr, int size)
{
    int large{*arr};

    for(int i=0 ; i<size ; i++)
    {
        if(*arr > large)
        {
            large = *arr ;
        }
        arr++ ;
    }
    return large;
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

    std::cout << "Largest of all elements of array is " << largest(arr,n);

    return 0;
}

//Time complexity = O(n)
//Space Complexity = O(1)