// Largest among 3 numbers

#include<iostream>

int main()
{
    int a{}, b{}, c{};

    std::cout << "Enter three numbers : \n" ;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << '\n' ;

    if((a > b)&&(a > c))
        {
            std::cout << a << " is largest number";
        }
    else if(b > c)
        {
            std::cout << b << " is largest number";
        }
    else
        { 
            std::cout << c << " is largest number";
        }
    return 0;
}