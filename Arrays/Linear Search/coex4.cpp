// Find the first occurrence and the last occurrence of a key.

// Example:
// Array
// 5 2 7 2 9 2
// Key
// 2

// Output:
// First = 1
// Last = 5

#include<iostream>

int firstOccur(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int lastOccur(int arr[], int size, int key)
{
    for(int i=(size-1); i >= 0 ; i--)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {5,2,7,2,9,2}, key{};

    std::cout << "Enter a key element : " ;
    std::cin >> key ;

    std::cout << "First Occurance at order " << firstOccur(arr,6,key) << '\n' ;
    std::cout << "Last Occurance at order " << lastOccur(arr,6,key) << '\n' ;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)