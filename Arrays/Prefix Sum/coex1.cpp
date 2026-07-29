// Write:

// void buildPrefixSum(int arr[], int prefix[], int size);
// Build the prefix sum array.

#include<iostream>

void buildPrefixSum(int arr[], int prefix[],int size)
{
    prefix[0] = arr[0];

    for(int i=1 ; i<size ; i++)
    {
        prefix[i] = prefix[i-1] + arr[i] ;
    }
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

    int prefix[n] ;
    buildPrefixSum(arr,prefix,n);

    std::cout << "Prefix Sum array : \n" ;
    for(int i=0 ; i < n; i++)
    {
        std::cout << prefix[i] << '\n' ;
    }
    return 0;
}

//Both Exercise 1 and 2
//Time Complexity = O(n)
//Space Complexity = O(n)