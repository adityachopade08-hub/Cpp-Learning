// Count how many times the key appears.

// Example:
// Array
// 10 20 10 30 10
// Key
// 10
// Output
// 3

#include<iostream>

int count(int arr[], int size, int key)
{
    int time{};

    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == key)
        {
            time++ ;
        }
    }

    return time ;
}

int main()
{
    int arr[5] = {10,20,10,30,10} , key{};

    std::cout << "Enter key element : " ;
    std::cin >> key ;

    std::cout << "The key element appears " << count(arr,5,key) << " times" ;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)