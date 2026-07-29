// Find both largest and smallest in one traversal.
// Don't use two separate loops.

#include<iostream>

void largeSmall(int arr[], int size)
{
    int max{arr[0]}, min{arr[0]} ;

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i] ;
        }

        if(arr[i] < min)
        {
            min = arr[i] ;
        }
    }

    std::cout << "Largest number is " << max <<"\nSmallest number is " << min ;
}

int main()
{
    int n;
    std::cout << "Enter number of elements : ";
    std::cin >> n ;

    int arr[n];
    std::cout << "Enter elements : \n" ;
    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i] ;
    }

    largeSmall(arr,n);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)