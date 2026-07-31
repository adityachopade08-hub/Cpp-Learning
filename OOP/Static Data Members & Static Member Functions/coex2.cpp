// Create
// Employee

// Members
// name

// static int employees;

// Every constructor increases
// employees

// Create four objects.
// Display
// Total Employees : 4

#include<iostream>
using namespace std;

class Employee
{
public :

    string name;
    static int emlpoyees;

    Employee()
    {
        emlpoyees++;
    }

    static void display()
    {
        cout << "Total employees : " << emlpoyees << endl;
    }
};

int Employee::emlpoyees = 0;

int main()
{
    Employee e1, e2, e3, e4;

    Employee::display();

    return 0;
}