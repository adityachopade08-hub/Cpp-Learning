// Write:
// int maximum(int arr[], int size);
// Return the largest element.

#include<iostream>

int maximum(int arr[], int size)
{
    int max{arr[0]};

    for(int i=1 ; i<size ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[7] = {23,45,22,43,67,21,34};

    std::cout << "Maximum element is " << maximum(arr, 7) ;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)