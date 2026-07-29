// Check whether an array is a palindrome.

// Example:
// 1 2 3 2 1

// Output:
// Palindrome

// Example:
// 1 2 3 4 5

// Output:
// Not Palindrome

// Hint: The same two-pointer technique works here—compare elements from both ends moving toward the center.

#include<iostream>

bool isPalindrome(int arr[], int size)
{
    int left{}, right{size - 1};
    
    while(left < right)
    {
        if(arr[left] != arr[right])
        {
            return false;
        }

        left++;
        right--;
    }
    return true ;
}

int main()
{
    int n{};
    std::cout << "Enter number of element : ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter elements : \n" ;

    for(int i=0 ; i<n ; i++)
    {
        std::cin >> arr[i];
    }

    bool result = isPalindrome(arr,n);

    if(result)
    {
        std::cout << "\nThe Array is a Palindrome" ;
    }
    else
    {
        std::cout << "\nThe Array is not a Palindrome" ;
    }
    return 0;
}

//Time Complexity = O(n)
//Time Complexity = O(1)
