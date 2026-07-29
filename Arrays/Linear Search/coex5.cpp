// Write
// int largest(int arr[], int size);

#include<iostream>

int largest(int arr[], int size)
{
    int max{arr[0]};

    for(int i=0; i<size ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i] ;
        }
    }
    return max ;
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

    std::cout << "Maximum number is " << largest(arr,n) ;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)