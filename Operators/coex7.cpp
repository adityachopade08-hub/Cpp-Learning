// Simple Calculator

// Input
// +
// Input numbers
// 20
// 10

// Output
// 30

// Operations:
// +
// -
// *
// /
// %
// Use switch

#include<iostream>

int main()
{
    int num1{}, num2{}, choice{};

    std::cout << "1.Addition, 2.Sustraction, 3.Multiplication, 4.Division, 5.Remainder" << '\n' << "Note : Use numbers for respective operations" << '\n'<< "Enter Your Choice : " ;
    std::cin >> choice;
    
    std::cout << "Enter numbers : \n";
    std::cin >> num1;
    std::cin >> num2;

    switch(choice)
    {
        case 1 : std::cout << "Addition of " << num1 << " and " << num2 << " is " << num1 + num2 ;
        break;

        case 2 : std::cout << "Sustraction of " << num1 << " and " << num2 << " is " << num1 - num2 ;
        break;

        case 3 : std::cout << "Multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 ;
        break;

        case 4 : std::cout << "Division of " << num1 << " and " << num2 << " is " << num1 / num2 ;
        break;

        case 5 : std::cout << "Remainder of " << num1 << " and " << num2 << " is " << num1 % num2 ;
        break;

        default : std::cout << "Invalid Choice";
        break;
    }

    return 0;
}