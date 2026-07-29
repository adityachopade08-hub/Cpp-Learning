// Input:
// n
// Output:
// Sum of first n natural numbers.

// Example:
// n = 10
// Output = 55

#include<iostream>

int main()
{
    int n{}, i{}, sum{0};

    std::cout << "Enter number : ";
    std::cin >> n;

    for(i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << "Sum of " << n << " natural numbers is " << sum ;

    return 0;
}