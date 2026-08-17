// Create:
// class Employee
// with:
// protected:
//     int salary;

// Create:
// class Manager : public Employee

// Inside Manager, create:
// void setSalary(int s);
// void displaySalary();

// The derived class should directly access:
// salary

// In main():
// Manager m;
// m.setSalary(50000);
// m.displaySalary();

// But don't try:
// m.salary = 50000;
// because salary is protected.

#include<iostream>
using namespace std;

class Employee
{
protected:
    int salary;

};

class Manager : public Employee
{
public:
    void setSalary(int s)
    {
        this->salary = s;
    }

    void displaySalary()
    {
        cout << "Salary is " << this->salary << endl;
    }
};

int main()
{
    Manager m;
    m.setSalary(50000);
    m.displaySalary();

    return 0;
}