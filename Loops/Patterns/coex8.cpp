//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>

int main()
{
    int row{}, space{}, star{}, n{9};
    int mid = n/2;

    for(row = 1; row <= 5; row++,mid--)
    {
        for(space = 1; space <= mid; space++)
        {
            std::cout << ' ';
        }

        for(star = 1; star <= (2*row - 1); star ++)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }

    return 0;
}