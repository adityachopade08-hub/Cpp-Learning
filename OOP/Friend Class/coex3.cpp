// Create:
// class Number

// Private:
// int value;

// Constructor:
// Number(int v);

// Create:
// class Calculator

// Make Calculator a friend of Number.
// Inside Calculator, implement:
// void add(Number n1, Number n2);

// Print the sum of their private values.
// Example:
// Number n1(20);
// Number n2(30);

// Calculator c;
// c.add(n1, n2);

// Expected:
// Sum = 50

#include<iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    friend class Calculator;
};

class Calculator
{
public:
    void add(Number num1, Number num2)
    {
        cout << "Addition is " << num1.value + num2.value ;
    }
};

int main()
{
    Number num1(50);
    Number num2(100);

    Calculator c;

    c.add(num1, num2);

    return 0;
}