// Write a program that stores:

// Name (for now, a single word is fine)
// Age
// Height
// Weight

// Then print them neatly.

#include<iostream>

int main()
{
    char name[35];
    int age;
    float height, weight;

    std::cout << "Enter your name : ";
    std::cin >> name;

    std::cout <<"Enter your age : ";
    std::cin >> age;

    std::cout << "Enter your height : ";
    std::cin >> height;

    std::cout << "Enter your weight : ";
    std::cin >> weight;

    std::cout << "\n" << "----Physical Details----" << "\n";

    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "Weight: " << weight << "\n";
}