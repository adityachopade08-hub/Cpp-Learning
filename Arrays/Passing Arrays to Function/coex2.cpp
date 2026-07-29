// Write:
// int sumArray(int arr[], int size);
// Return the sum.

#include<iostream>

int sumArray(int arr[], int size)
{
    int sum{};

    for(int i=0 ; i<size; i++)
    {
        sum += arr[i] ;
    }

    return sum;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    std::cout << "Sum of all elements is " << sumArray(arr,6);

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)