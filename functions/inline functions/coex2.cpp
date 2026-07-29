#include<iostream>

inline bool isPositive(int n)
{
    if((n % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num{};

    std::cout << "Enter a number : ";
    std::cin >> num ;

    if(isPositive(num))
    {
        std::cout << '\n' << num << " is Even" ;
    }
    else
    {
        std::cout << '\n' << num << " is Odd" ;
    }
}