// Write:
// void printArray(int arr[], int size);

#include<iostream>

void printArray(int arr[], int size)
{
    for(int i=0; i < size; i++)
    {
        std::cout << arr[i] << '\n';
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5} ;

    printArray(arr,5);

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)