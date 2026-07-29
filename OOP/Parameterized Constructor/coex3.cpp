// Create a class:
// class Employee

// Members:
// name
// id
// salary

// Create a parameterized constructor.
// Create three employee objects with different values and display them.

#include<iostream>
using namespace std;

class Employee
{
public :

    string name;
    int id, salary;

    Employee(string n, int i, int sal)
    {
        name = n;
        id = i;
        salary = sal ;
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
    Employee e1("Aditya",103,10000), e2("Sakshi",203,9000), e3("Atharv",404,9500);
    e1.display(), e2.display(), e3.display();

    return 0;
}