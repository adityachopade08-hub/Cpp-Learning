// Write
// void studentDetails(
//     std::string name = "Unknown",
//     int age = 18,
//     double cgpa = 0.0
// );

// Test these calls:

// studentDetails();
// studentDetails("Aditya");
// studentDetails("Aditya",20);
// studentDetails("Aditya",20,8.75);

#include<iostream>

void studentDetails (std::string name = "Unkown", int age = 18 , double cgpa = 0.0)
{
    std::cout << "\nName is " << name ;
    std::cout << "\nAge is " << age ;
    std::cout <<"\nCGPA is " << cgpa ;
}

int main()
{
    studentDetails();
    std::cout << '\n' ;

    studentDetails("Aditya");
    std::cout << '\n' ;

    studentDetails("Aditya",20);
    std::cout << '\n' ;

    studentDetails("Aditya",20,8.75);
    std::cout << '\n' ;

    return 0;
}
