// Take marks.
// 90-100 → A
// 80-89  → B
// 70-79  → C
// 60-69  → D
// 40-59  → E
// Below 40 → Fail

#include<iostream>

int main()
{
    int marks{};

    std::cout << "Enter marks : ";
    std::cin >> marks;

    if(marks > 100)
    {
        std::cout << "Invalid marks";
    }
    else if(marks >= 90)
    {
        std::cout << "Grade : A";
    }
    else if(marks >= 80)
    {
        std::cout << "Grade : B";
    }            
    else if(marks >= 70)
    {
         std::cout << "Grade : C";
    }               
    else if(marks >= 60)
    {
        std::cout << "Grade : D";
    }                    
    else if(marks >= 40)
    {
        std::cout << "Grade : E";
    }                        
    else
    {
        std::cout << "Fail";
    }        

    return 0;
}