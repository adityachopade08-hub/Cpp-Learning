// Create:
// class Person
// Function:
// void speak();
// Print:
// Person speaks

// Create:
// class Student : public Person
// Function:
// void study();
// Print:
// Student studies

// Create a Student object and call both functions.

#include<iostream>
using namespace std;

class Person
{
public:
    void speak()
    {
        cout << "Person speaks\n";
    }
};

class Student : public Person
{
public:
    void study()
    {
        cout << "Student studies\n";
    }
};

int main()
{
    Student s;
    s.speak();
    s.study();

    return 0;
}