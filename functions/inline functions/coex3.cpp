#include<iostream>

inline int maximum(int a, int b)
{
    if(a > b)
    {
        return a ;
    }
    else
    {
        return b ;
    }
}

int main()
{
    int num1{}, num2{};

    std::cout << "Enter two numbers : \n";
    std::cin >> num1 ;
    std::cin >> num2 ;

    std::cout << "Maximum number is " << maximum(num1, num2) ;

    return 0;
}