// Instead of returning the index,
// return how many comparisons were performed.

// Example:
// Array:
// 10 20 30 40 50
// Search:
// 40
// Comparisons:
// 4

#include<iostream>

int comparisons(int arr[], int size, int key)
{
    int compare{};

    for(int i=0 ; i< size; i++)
    {
        compare++ ;
        
        if(arr[i] == key)
        {
            return compare ;
        }
    }
    return compare;
}

int main()
{
    int arr[10] = {2,4,6,8,10,12,14,16,18,20},key{};

    std::cout << "Enter a key element : ";
    std::cin >> key ;

    std::cout << "Total number of comparisons performed : " << comparisons(arr,10,key) ;

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)