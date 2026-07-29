// Take n elements.
// Print them in reverse order.

#include<iostream>

int main()
{
    int n;
    std::cout << "How many elements do you want ? \n" << "Ans. = " ;
    std::cin >> n ;

    int arr[n];

    std::cout << "Enter elements : \n" ;

    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Elements in Reverse Order are : ";

    for(int i=(n-1) ; i >= 0; i--)
    {
        std::cout << arr[i] << ' ' ;
    }

    return 0;
}

//Time complexity = O(n)
//Space complexity = O(n)