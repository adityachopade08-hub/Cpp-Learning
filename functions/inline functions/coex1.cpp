#include<iostream>

inline int cube(int n)
{
    return n*n*n;
}

int main()
{
    int num{};

    std::cout << "Enter a number : ";
    std::cin >> num ;

    std::cout << "\nCube of " << num << " is " << cube(num);
}