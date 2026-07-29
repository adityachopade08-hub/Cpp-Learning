// *****
// ****
// ***
// **
// *

#include<iostream>

int main()
{
    for(int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= (6 - row); col++)       // 6 - row = 5(n) - row + 1
        {
            std::cout << "*";
        }
        std::cout << '\n';
    }
    return 0;
}