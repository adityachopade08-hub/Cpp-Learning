// Write a program that:

// Creates an int, float, and char variable.
// Prints both their values and addresses.

#include<iostream>

int main()
{
    int num{};
    std::cout << "Enter an integer : " ;
    std::cin >> num ;
  
    float num1{};
    std::cout << "Enter a float value : " ;
    std::cin >> num1 ;

    char character{};
    std::cout << "Enter a Character : " ;
    std::cin >> character ;

    std::cout << "\nValue = " << num << "\nAddress = " << &num ;
    std::cout << "\n\nValue = " << num1 << "\nAddress = " << &num1 ;
    std::cout << "\n\nValue = " << character << "\nAddress = " << static_cast<void*>(&character) ;

    return 0;
}

//Time Complexity = O(1)
//Space Complexity = O(1)