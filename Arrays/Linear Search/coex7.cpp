// Write
// int secondLargest(int arr[], int size);

// Requirements:
// One traversal
// Do not sort
// Return -1 if no second largest exists

// Example

// Input
// 5 5 5 5

// Output
// -1

#include<iostream>

int secondLargest(int arr[], int size)
{
    int largest{arr[0]}, second{arr[0]} ;

    int largest = arr[0];
    int second = -1;

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    int n ;
    std::cout << "Enter number of elements : " ;
    std::cin >> n ;

    int arr[n];

    std::cout << "Enter elements : \n" ;
    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Second Largest element is " << secondLargest(arr,n);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)