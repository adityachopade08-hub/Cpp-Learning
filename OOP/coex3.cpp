// Create a class:
// class Rectangle

// Members:
// length
// breadth

// Functions:
// input();
// area();
// perimeter();

#include<iostream>
using namespace std;

class Rectangle
{
public :
    
    int length;
    int breadth ;

    void input()
    {
        cout << "\nEnter length : ";
        cin >> length ;
        cout << "Enter breadth : " ;
        cin >> breadth ;
    }

    void area()
    {
        cout << "Area of Rectangle is " << length*breadth ;
    }

    void perimeter()
    {
        cout << "\nPerimeter of Rectangle is " << 2*(length + breadth) ;
    }
};

int main()
{
    Rectangle r1, r2 ;

    cout << "\nRectangle 1 ";
    r1.input();
    r1.area();
    r1.perimeter();

    cout << "\n\nRectangle 2 ";
    r2.input();
    r2.area();
    r2.perimeter();

    return 0;
}