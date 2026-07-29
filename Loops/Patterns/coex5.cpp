// 1
// 22
// 333
// 4444
// 55555

#include<iostream>

int main()
{
    for(int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            std::cout << row ;
        }
        std::cout << '\n';
    }
    return 0;
}