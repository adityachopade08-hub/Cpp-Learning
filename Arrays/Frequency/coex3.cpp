// Count even and odd numbers.

// Example:
// 2 5 8 9 6
// Output:
// Even = 3
// Odd = 2

#include<iostream>

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

    int even{},odd{} ;

    for(int i=0 ; i< n ; i++)
    {
        if((arr[i]%2)==0)
        {
            even++ ;
        }
        else
        {
            odd++ ;
        }
    }

    std::cout << "\nTotal Odd numbers are " << odd ;
    std::cout << "\nTotal Even number are " << even ;

    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)