// Factorial

// Example:
// 5
// Output
// 120

#include<iostream>

int main()
{
    int i{}, n{}, factorial{1};

    std::cout << "Enter a number : ";
    std::cin >> n;

    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " is " << factorial;

    return 0;
}