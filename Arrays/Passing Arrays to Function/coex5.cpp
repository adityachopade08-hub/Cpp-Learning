// Write:
// bool contains(int arr[], int size, int key);

// Return:
// true if the element exists,
// false otherwise.

#include<iostream>

bool contains(int arr[], int size, int key)
{
    for(int i=0 ; i<size ; i++)
    {
        if(key == arr[i])
        {
            return true ;
        }
    }
    return false ;
}

int main()
{
    int arr[5]={1,2,3,4,5}, key{} ;

    std::cout << "Enter Key value : " ;
    std::cin >> key ;

    if(contains(arr,5,key))
    {
        std::cout << "Element exists" ;
    }
    else
    {
        std::cout << "Element doesn't exists";
    }

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)