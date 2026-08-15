// Create:
// class Number

// Private:
// int value;

// Constructor:
// Number(int value)
// {
//     this->value = value;
// }

// Create:
// void display();

// Inside display(), print:
// this->value

// Create two objects:
// Number n1(10);
// Number n2(20);
// Observe that this points to a different object for each call.

#include<iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int value)
    {
        this->value = value;
    }

    void display()
    {
        cout << "Value is " << this->value << endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    n1.display();
    n2.display();

    return 0;
}