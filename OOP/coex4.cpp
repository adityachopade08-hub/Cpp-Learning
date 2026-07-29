// Create a class:
// class Calculator

// Members:
// a
// b

// Functions:
// input()
// add()
// subtract()
// multiply()
// divide()

#include<iostream>
using namespace std;

class Calculator 
{
public :
    int a{}, b{} ;

    void input()
    {
        cout << "Enter Integer 1 : " ;
        cin >> a ;
        cout << "Enter Integer 2 : " ;
        cin >> b ;
    }

    void add()
    {
        cout << "\nAddition of " << a << " and " << b << " is " << a + b ;
    }

    void subtract()
    {
        cout << "\nSubtraction of " << a << " and " << b << " is " << a - b ;
    }

    void multiply()
    {
        cout << "\nMultiplication of " << a << " and " << b << " is " << a * b ;
    }

    void divide()
    {
        cout << "\nDivision of " << a << " and " << b << " is " << a / b ;
    }
};

int main()
{
    Calculator c ;

    c.input();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}