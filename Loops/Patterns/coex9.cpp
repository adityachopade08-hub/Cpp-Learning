//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>

int main()
{
    for (int row = 1; row <= 9; row++)
    {
        int spaces;
        int stars;

        if (row <= 5)
        {
            spaces = 5 - row;
            stars = 2 * row - 1;
        }
        else
        {
            spaces = row - 5;
            stars = 19 - 2 * row;
        }

        for (int i = 1; i <= spaces; i++)
        {
            std::cout << ' ';
        }

        for (int i = 1; i <= stars; i++)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }

    return 0;
}