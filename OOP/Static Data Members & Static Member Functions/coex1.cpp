// Create a class
// Student

// Members
// name

// static int count;

// Constructor should
// count++;

// Create
// Student s1;
// Student s2;
// Student s3;

// Display
// Total Students : 3

#include<iostream>
using namespace std;

class Student
{
public:

    string name;
    static int count;

    Student()
    {
        count++;
    }

    static void display()
    {
        cout << "Total Students : " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    Student::display();

    return 0;
}