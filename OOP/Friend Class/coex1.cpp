// Create:
// class Student

// Private:
// string name;
// int marks;

// Create a parameterized constructor.

// Then create:
// class Teacher
// Make Teacher a friend of Student.
// Inside Teacher, create:
// void display(Student s);

// It should print:
// Name : Aditya
// Marks : 89

// Hint:
// friend class Teacher;

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

    friend class Teacher;
};

class Teacher
{
public:
    void display(Student S)
    {
        cout << "Name : " << S.name << endl;
        cout << "Marks : " << S.marks;
    }
};

int main()
{
    Student s1("Aditya", 89);
    Teacher t;

    t.display(s1);

    return 0;
}