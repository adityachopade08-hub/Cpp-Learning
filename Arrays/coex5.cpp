// Find:
// Largest element
// Smallest element

// Do not sort the array.

#include<iostream>

int main()
{
    int n;
    std::cout << "Enter the number of elements : ";
    std::cin >> n ;

    int arr[n], max{arr[0]},min{};

    std::cout << "Enter Elements : \n" ;

    for(int i=0 ; i<n; i++)
    {
        std::cin >> arr[i];
    }

    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        } 
    }

    min = max ;

    for(int i = 1; i<n ; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    std::cout << "Largest Element is "<< max <<'\n';
    std::cout << "Smallest Element is "<< min ;

    return 0;
}

//Time complexity = O(n)
//Space complexity = O(n)