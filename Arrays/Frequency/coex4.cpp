// Find the element with the maximum frequency.

// Example:
// 5 2 5 3 2 5
// Output:
// Element = 5
// Frequency = 3

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

    int count{}, arrCount[n] ;

    for(int i=0 ; i<n ; i++)
    {
        count = 0;
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i]==arr[j])
            {
                count++ ;
            }
        }
        arrCount[i] = count ;
    }

    int max{};
    for(int i=0 ; i < n ; i++)
    {
        if(arrCount[i] > max)
        {
            max = arrCount[i] ;
        }
    }

    for(int i=0 ; i < n; i++)
    {
        if(arrCount[i] == max)
        {
            std::cout << "\nElement : " << arr[i] << "\nFrequency : " << arrCount[i] ;
            break;
        }
    }
    return 0;
}

//Time Complexity = O(n^2)
//Space Complexity = O(n)