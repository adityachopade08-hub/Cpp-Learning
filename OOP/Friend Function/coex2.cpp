// Create:
// class Student

// Private members:
// string name;
// int marks;

// Create a parameterized constructor.

// Create:
// friend void display(Student s);

// The friend function should display the student's name and marks.

// In main():
// Student s1("Aditya", 89);
// display(s1);

#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public: 
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout << "Name of the student : " << s.name << endl;
    cout << "Marks of the student : " << s.marks << endl;
}

int main()
{
    Student s1("Aditya", 99);

    display(s1);

    return 0;
}