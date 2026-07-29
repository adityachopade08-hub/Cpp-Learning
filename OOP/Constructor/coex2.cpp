// Create:
// class Student

// Data:
// name
// marks

// Constructor:
// Student()
// {
//     name = "Unknown";
//     marks = 0;
// }

// Display the values.

#include<iostream>
using namespace std;

    class Student
{
public:

    string name;
    int marks;

    Student()
    {
        name = "Unknown";
        marks = 0;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Marks: " << marks;
    }
};

int main()
{
    Student s1, s2 ;

    s1.display();
    s2.display();
    
    return 0;
}


