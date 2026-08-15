// Create:
// class Rectangle

// Private:
// int length;
// int breadth;

// Constructor:
// Rectangle(int length, int breadth)

// Use:
// this->length
// this->breadth

// Create:
// int area();
// Return the area.

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    int area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle r1(20,10);
    Rectangle r2(40,50);

    cout << "\nArea of rectangle 1 is " << r1.area();
    cout << "\nArea of rectangle 2 is " << r2.area();

    return 0;
}