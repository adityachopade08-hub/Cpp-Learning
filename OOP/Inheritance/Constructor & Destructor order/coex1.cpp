// Create:
// class Parent

// Constructor:
// Parent()
// {
//     cout << "Parent Constructor\n";
// }

// Destructor:
// ~Parent()
// {
//     cout << "Parent Destructor\n";
// }

// Then create:
// class Child : public Parent
// with its own constructor and destructor.
// Create:
// Child c;

#include<iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent Constructor\n";
    }
    ~Parent()
    {
        cout << "Parent Destructor\n";
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child Constructor\n";
    }
    ~Child()
    {
        cout << "Child Destructor\n";
    }
};

int main()
{
    Child c;
    return 0;
}