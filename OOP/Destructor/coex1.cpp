// Create a class
// Student

// Constructor prints
// Student Created

// Destructor prints
// Student Destroyed

// Create one object.

#include<iostream>
using namespace std;

class Student
{
public :

    Student()
    {
        cout << "Student Created\n";
    }

    ~Student()
    {
        cout << "Student Destroyed\n";
    }
};

int main()
{
    Student s1;
    Student s2;
    Student s3;
    
    return 0;
}