#include<iostream>

int main()
{
    int age = 0;
    float CGPA = 0.0;
    char name[35] = "";

    std::cout << "Enter your name : ";
    std::cin >> name;

    std::cout << "Enter your age : ";
    std::cin >> age;

    std::cout << "Enter your CGPA : ";
    std::cin >> CGPA;   

    std::cout << "\n" <<"----- STUDENT DETAILS -----" << "\n";
    std::cout << "Your name is " << name << "\n";                   
    std::cout << "Your age is " << age << "\n";
    std::cout << "Your CGPA is " << CGPA << "\n";
}