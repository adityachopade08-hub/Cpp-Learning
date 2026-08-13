// Create:
// class Rectangle

// Private members:
// int length;
// int breadth;

// Create a parameterized constructor.

// Create a friend function:
// friend int area(Rectangle r);

// The function should return the rectangle's area.

// Use:
// Rectangle r1(10, 5);

// cout << area(r1);

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    friend int area(Rectangle r);
};

int area(Rectangle r)
{
    return r.length*r.breadth;
}

int main()
{
    Rectangle r1(10,5);
    cout << "Area of rectangle is " << area(r1);
    return 0;
}