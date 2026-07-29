// Take two integers from the user and print:
// Sum
// Difference
// Product
// Quotient
// Remainder

#include <iostream>

int main()
{
    int num1, num2, sum, difference, product, quotient, remainder;

    std::cout << "Enter 1st number : ";
    std::cin >> num1;

    std::cout << "Enter 2nd number : ";
    std::cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1*num2;
    quotient = num1/num2;
    remainder = num1%num2;

    std::cout << "Sum = " << sum << "\n";
    std::cout << "Difference = " << difference << "\n";
    std::cout << "Product = " << product << "\n";
    std::cout << "Quotient = " << quotient << "\n";
    std::cout << "Remainder = " << remainder << "\n";

    return 0;
}