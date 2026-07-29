// Palindrome Number

// Example
// 121
// Output
// Palindrome

// Example
// 123
// Output
// Not Palindrome

#include<iostream>

int main()
{
    int num{}, m{}, reverseNum{}, originalNum{};

    std::cout << "Enter a NUmber : ";
    std::cin >> num ;
    std::cout << '\n';

    originalNum = num;

    while(num != 0)
    {
        m = num % 10;

        reverseNum = reverseNum * 10 + m ;

        num /= 10 ;
    }

    if(reverseNum == originalNum)
    {
        std::cout << originalNum << " is a Palindrome";
    }
    else
    {
        std::cout << originalNum << " is not a Palindrome";
    }
    
    return 0;
}