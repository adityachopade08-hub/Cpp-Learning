// Write:
// void reverseArray(int arr[], int size);
// Reverse the array in place.

#include<iostream>

void reverseArray(int arr[], int size)
{
    int left{}, right{size - 1};

    while(left < right)
    {
        int t ;
        t = arr[left];
        arr[left] = arr[right];
        arr[right] = t ;

        left++;
        right--;
    }

    std::cout << "Reverse In-place array is " ;

    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ' ;
    }
}

int main()
{
    int n{};
    std::cout << "Enter number of element : " ;
    std::cin >> n ;

    int arr[n];
    std::cout << "Enter elements : \n";
    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i] ;
    }

    reverseArray(arr,n);

    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)

//One solution for Exerise 1 and 2