// Create a class
// Rectangle

// Constructor
// Rectangle Created

// Destructor
// Rectangle Destroyed

// Create
// Rectangle r1;
// Rectangle r2;
// Rectangle r3;

#include<iostream>
using namespace std;

class Rectangle
{
public :

    Rectangle()
    {
        cout << "Rectangle created\n";
    }

    ~Rectangle()
    {
        cout << "Rectangle Destroyed\n";
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2;
    Rectangle r3;

    return 0;
}