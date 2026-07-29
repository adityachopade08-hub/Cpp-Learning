// Reverse a number.

// Example
// 12345
// Output
// 54321

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

    std::cout << "Reverse Number of " << originalNum << " is " << reverseNum;
}