//     *
//    **
//   ***
//  ****
// *****

#include<iostream>

int main()
{
    int row{}, space{}, star{};

    for(row = 1; row <= 5 ; row++)
    {
        for(space = 1; space <= (5 - row) ; space++)
        {
            std::cout << ' ';
        }

        for(star = 1; star <= row ; star++)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }
    
    return 0;
}