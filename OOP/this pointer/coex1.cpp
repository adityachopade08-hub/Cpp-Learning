// Create:
// class Student

// Private:
// string name;
// int marks;

// Constructor:
// Student(string name, int marks)
// Use this-> to initialize both members.

// Create:
// void display();

// Display the details.
// Example:
// Student s1("Aditya", 89);
// s1.display();

#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public: 
    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s1("Aditya", 89);
    Student s2("Sakshi",90);

    s1.display();
    s2.display();

    return 0;
}