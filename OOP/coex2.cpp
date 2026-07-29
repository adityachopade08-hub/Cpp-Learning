// Create this class:

// class Student
// {
// public:
//     string name;
//     int rollNo;
//     int marks;

//     void input();
//     void display();
// };

// Implement:

// input() → Read all details.
// display() → Print all details.

// Create two objects and call:

// s1.input();
// s1.display();

// s2.input();
// s2.display();

#include<iostream>
using namespace std;

class Student 
{
public:
    string name;
    int rollNo ;
    int marks ;

    void input()
    {
        cout << "\nEnter details of Student \n";
        cout << "Name : " ;
        cin >> name ;
        cout << "Roll number : " ;
        cin >> rollNo ;
        cout << "Marks : ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nName : " << name <<"\nRoll number : " << rollNo << "\nMarks : " << marks ;
    }
};

int main()
{
    Student s1, s2;

    s1.input();
    s2.input();

    cout << "\n\nStudent details : " ;
    s1.display();
    s2.display();

    return 0;
}