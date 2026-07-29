// Take marks.
// Print: Pass
// if marks ≥ 40
// otherwise Fail
// using the ternary operator only.

#include<iostream>

int main()
{
    int marks;

    std::cout << "Enter marks : ";
    std::cin >> marks;

    std::cout << "\n";

    std::cout << ((marks >= 40) ? "Pass" : "Fail") ;

    return 0;
}