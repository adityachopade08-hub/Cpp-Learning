// Create a class
// Student

// Members
// name
// marks

// Create
// Parameterized constructor
// Copy constructor
// display()

// Create
// Student s1("Aditya",89);
// Student s2=s1;

// Display both.

#include<iostream>
using namespace std;

class Student
{
public:

    string name;
    int marks;

    Student(string n,int m)
    {
        name = n;
        marks = m;
    }

    Student(const Student &s)
    {
        name = s.name;
        marks = s.marks;
    }

    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s1("Aditya",99);
    Student s2 = s1;

    s1.display();
    s2.display();

    return 0;
}