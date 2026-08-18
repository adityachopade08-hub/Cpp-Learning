// Create:
//         Shape
//        /     \
//    Circle   Rectangle

// Shape
// void display();

// Circle
// void circle();

// Rectangle
// void rectangle();

// Create one object of each derived class and call the inherited function plus their own function.

#include<iostream>
using namespace std;

class Shape
{
public:
    void display()
    {
        cout << "shape\n";
    }
};

class Circle : public Shape
{
public:
    void circle()
    {
        cout << "circle\n";
    }
};

class Rectangle : public Shape
{
public:
    void rectangle()
    {
        cout << "rectangle\n";
    }
};

int main()
{
    Circle c;
    c.circle();
    c.display();

    cout << endl;

    Rectangle r;
    r.rectangle();
    r.display();

    return 0;
}