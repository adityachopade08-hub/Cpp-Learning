// Create
// Employee

// Members
// name
// id
// salary

// Create
// Parameterized constructor
// Copy constructor

// Create
// Employee e1(...);
// Employee e2=e1;

// Display both.

#include<iostream>
using namespace std;

class Employee
{
public:

    string name;
    int id, salary;

    Employee(string n, int i, int sal)
    {
        name = n;
        id = i;
        salary = sal;
    }

    Employee(const Employee &e)
    {
        name = e.name;
        id = e.id;
        salary = e.salary;
    }

    void display()
    {
        cout << "\nID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee e1("Aditya",102,11000);
    Employee e2 = e1 ;

    e1.display();
    e2.display();

    return 0;
}