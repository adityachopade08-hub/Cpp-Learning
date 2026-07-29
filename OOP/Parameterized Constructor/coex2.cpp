// Create a class:
// class Rectangle

// Members:
// length
// breadth

// Parameterized constructor:
// Rectangle(int l, int b)

// Create:
// Rectangle r1(10, 5);

// Display:
// Area
// Perimeter

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

    void area()
    {
        cout << "Area of Rectangle is " << length*breadth << endl;
    }

    void perimeter()
    {
        cout << "Perimeter of Rectangle is " << 2*(length + breadth) << endl;
    }
};

int main()
{
    Rectangle r1(20,10), r2(30,15);

    r1.area(), r1.perimeter();
    r2.area(), r2.perimeter();

    return 0;
}