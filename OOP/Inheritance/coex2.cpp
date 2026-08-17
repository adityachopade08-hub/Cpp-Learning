// Create:
// class Person
// Members:
// string name;
// Function:
// void displayName();
// Then:

// class Student : public Person
// Members:
// int rollNo;
// Function:
// void displayRollNo();

// Create:
// Student s;
// Call:
// s.displayName();
// s.displayRollNo();

#include<iostream>
using namespace std;

class Person
{
public:
    string name = "Aditya";

    void displayName()
    {
        cout << "Name : " << this->name << endl;
    }
};

class Student : public Person
{
public:
    int rollNo = 07;

    void displayRollNo()
    {
        cout << "Roll Number is " << this->rollNo << endl ;
    }
};

int main()
{
    Student s;
    s.displayName();
    s.displayRollNo();

    return 0;
}