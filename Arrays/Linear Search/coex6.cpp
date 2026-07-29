// Write
// int smallest(int arr[], int size);

#include<iostream>

int smallest(int arr[], int size)
{
    int min{arr[0]};

    for(int i=0 ; i<size ; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min ;
}

int main()
{
    int n{};
    std::cout << "Enter number of elements : " ;
    std::cin >> n ;

    int arr[n];

    std::cout << "Enter elements : \n" ;

    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i] ;
    }

    std::cout << "Minimum number is " << smallest(arr,n) ;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)