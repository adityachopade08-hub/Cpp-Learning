// Create a class:
// class Student

// Members:
// name
// marks

// Create a parameterized constructor:
// Student(string n, int m)
// Store the values and display them.

#include<iostream>
using namespace std;

class Student
{
public:
    
    string name;
    int marks;

    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s1("Aditya",89);
    s1.display();

    return 0;
}