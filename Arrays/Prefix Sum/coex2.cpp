// Write:
// int rangeSum(int prefix[], int left, int right);
// Return the sum from index left to right using the prefix array.

#include<iostream>

void buildPrefixSum(int arr[], int prefix[],int size)
{
    prefix[0] = arr[0];

    for(int i=1 ; i<size ; i++)
    {
        prefix[i] = prefix[i-1] + arr[i] ;
    }
}

int rangeSum(int prefix[], int left, int right)
{
    if(left == 0)
    {
        return prefix[right];
    }
    return (prefix[right] - prefix[left - 1]);
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

    int prefix[n], left{}, right{} ;
    buildPrefixSum(arr,prefix,n);

    std::cout << "Enter Queries \nLeft : ";
    std::cin >> left ;
    std::cout << "Right : " ;
    std::cin >> right ;

    if((right < n) && (left >= 0))
    std::cout << "Sum of range is " << rangeSum(prefix,left, right) ;

    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)