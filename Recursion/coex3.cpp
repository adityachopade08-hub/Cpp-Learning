#include<iostream>

int power(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    return base * power(base, exponent - 1); 
}

int main()
{
    int base{},exponent{};

    std::cout << "Enter base value : " ;
    std::cin >> base ;

    std::cout << "Enter Power : " ;
    std::cin >> exponent ;

    std::cout << base <<" raised to " << exponent << " is " << power(base,exponent) ;
    return 0;
}