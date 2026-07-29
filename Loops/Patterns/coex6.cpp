// 12345
// 1234
// 123
// 12
// 1

#include<iostream>

int main()
{
    for(int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= (6 - row); col++)
        {
            std::cout << col ;
        }
        std::cout << '\n';
    }
    return 0;
}