// Implement:
// int linearSearch(int arr[], int size, int key);
// Return the index.
// Return -1 if not found.

#include<iostream>

int linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size ; i++)
    {
        if(arr[i] == key)
        {
            return i ;
        }
    }
    return -1 ;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10} , key{};

    std::cout << "Enter the key element : ";
    std::cin >> key ;

    std::cout << "The index of the key element in array is " << linearSearch(arr,10,key) ;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)