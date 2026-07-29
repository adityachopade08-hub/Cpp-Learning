// Writ
// void swap(int *a, int *b);
// Swap two integers without returning anything.

// Do not use references yet.

#include<iostream>

void swap(int *a, int *b)
{
    int t{};
    t = *a ;
    *a = *b;
    *b = t ;

    std::cout << "\na = " << *a ;
    std::cout << "\nb = " << *b ;
}

int main()
{
    int a{},b{};

    std::cout << "Enter two numbers \n" ;
    std::cout << "a = " ;
    std::cin >> a ;
    std::cout << "b = " ;
    std::cin >> b ;

    swap(&a, &b);

    return 0;
}

//Time complexity = O(1)
//Space Complexity = O(1)