// Write:

// bool isUnique(int arr[], int size);
// Return:
// true if every element is unique.
// false if any duplicate exists.

// Example:
// 1 2 3 4
// ↓
// true

// Example:
// 1 2 3 2
// ↓
// false

#include<iostream>

bool isUnique(int arr[], int size)
{
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            if(i != j)
            {
                if(arr[i] == arr[j])
                {
                    return false ;
                }
            }
        }
    }
    return true ;
}

int main()
{
    int n{};
    std::cout << "Enter number of elements : " ;
    std::cin >> n ;

    std::cout << "Enter elements : \n";
    int arr[n];

    for(int i = 0; i < n ; i++)
    {
        std::cin >> arr[i];
    }

    if(isUnique(arr,n))
    {
        std::cout << "\nEvery element is Unique " ;
    }
    else
    {
        std::cout << "\nEvery element is not Unique " ;
    }

    return 0;
}

//Time Complexity = O(n^2)
//Space Complexity = O(1)