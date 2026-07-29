// Print
// 100 99 98 ... 1

#include<iostream>

int main()
{
    int i{};

    for(i = 100; i >= 1; i--)
    {
        std::cout << i << ' ';
    }

    return 0;
}