// Rotate an array one position to the right.

// Example:

// Before
// 10 20 30 40 50

// After:
// 50 10 20 30 40

#include<iostream>

void rotate(int arr[], int size)
{
    int last = arr[(size - 1)];

    int arr1[size];
    for(int i=0 ; i<size ; i++)
    {
        arr1[i] = arr[i];
    }

    for(int i=0 ; i<size ; i++)
    {
        if(i < (size-1))
        {
            arr[i+1] = arr1[i]; 
        }
        else
        {
            arr[0] = last;
        } 
    }

    std::cout << "Rotated array one position to right is ";
    for(int i = 0; i<size ; i++)
    {
        std::cout << arr[i] << ' ' ;
    }
}

int main()
{
    int n{};
    std::cout << "Enter number of element : ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter elements : \n" ;

    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i];
    }
    
    rotate(arr,n);

    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(n)
