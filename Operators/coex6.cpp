// Leap Year Checker

#include<iostream>

int main()
{
    int year{};

    std::cout << "Enter year : ";
    std::cin >> year;

    std::cout << '\n';

    if(((year % 400)==0) || (((year % 4)==0) && ((year % 100)!=0)))
        {    
            std::cout << year << " is a leap year";
        }
    else
        {
            std::cout << year << " is not a leap year";
        }
        
    return 0;
}