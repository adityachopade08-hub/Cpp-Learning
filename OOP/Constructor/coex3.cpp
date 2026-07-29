// Create:
// class Rectangle

// Members:
// length
// breadth

// Constructor should initialize:
// length = 10;
// breadth = 5;

// Create an area() function and display the result.

#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle()
    {
        length = 10;
        breadth = 5;
    }

    void area()
    {
        cout <<"Area is " << length * breadth;
    }
};

int main()
{
    Rectangle r1 ;
    return 0;
}