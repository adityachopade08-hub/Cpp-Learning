// Create a class
// Employee

// Constructor
// Employee Created

// Destructor
// Employee Destroyed

// Create two objects.
// Display the execution order.

#include<iostream>
using namespace std;

class Employee
{
public:

    Employee()
    {
        cout << "Employee Created " << endl ;
    }

    ~Employee()
    {
        cout << "Employee Destroyed " << endl ;
    }
};

int main()
{
    Employee e1;
    Employee e2;

    return 0;
}