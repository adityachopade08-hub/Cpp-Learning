// Create:
// class Rectangle

// Private:
// int length;
// int breadth;

// Create setters:
// void setLength(int length);
// void setBreadth(int breadth);

// Create getters:
// int getLength();
// int getBreadth();

// Rules:
// Length must be greater than 0.
// Breadth must be greater than 0.

// Create:
// int area();
// Return the area.

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length{};
    int breadth{};

public:
    void setLength(int length)
    {
        if(length > 0){
            this->length = length;
        }
        else{
            cout << "Enter valid length";
        }
    }
    void setBreadth(int breadth)
    {
        if(breadth > 0){
            this->breadth = breadth;
        }
        else{
            cout << "Enter valid breadth" ;
        }
    }

    int getLength()
    {
        return this->length;
    }
    int getBreadth()
    {
        return this->breadth;
    }

    int area()
    {
        return this->length*this->breadth;
    }
};

int main()
{
    Rectangle r;
    r.setLength(20);
    r.setBreadth(10);

    cout << "Area of rectangle is " << r.area();

    return 0;
}