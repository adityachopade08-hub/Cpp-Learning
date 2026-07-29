// Create
// Rectangle

// Members
// length
// breadth

// Create
// Parameterized constructor
// Copy constructor

// Create
// Rectangle r1(10,5);
// Rectangle r2=r1;

// Display
// Area
// Perimeter

// for both objects.

#include<iostream>
using namespace std;

class Rectangle
{
public:

    int length, breadth;

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void area()
    {
        cout << "\nArea of Rectangle is " << length*breadth << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Rectangle is " << 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1(15,10);
    Rectangle r2 = r1;

    r1.area();
    r1.perimeter();

    r2.area();
    r2.perimeter();

    return 0;
}