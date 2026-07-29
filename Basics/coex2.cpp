// Write a program that stores:
// Length = 15
// Breadth = 10

// Calculate:
// Area
// Perimeter

#include<iostream>

int main()
{
    int length = 15;
    int breadth = 10;

    float area = length*breadth;
    float perimeter = 2*(length+breadth);

    std::cout << "Area = " << area << "\n";
    std::cout << "Perimeter = " << perimeter << "\n";

    return 0;
}