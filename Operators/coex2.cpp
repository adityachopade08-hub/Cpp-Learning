// Take a number.
// Print whether it is:
// Positive
// Negative
// Zero

#include<iostream>

int main()
{
    int num;

    std::cout << "Enter a number : ";
    std::cin >> num;

    std::cout << "\n";

    if(num > 0)
    {
        std::cout << num << " is Positive";
    }

    else if(num < 0)
    {
        std::cout << num << " is Negative";
    }
    
    else
    {
        std::cout << num << " is zero";
    }

    return 0;
}