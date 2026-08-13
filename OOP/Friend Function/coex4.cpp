// Create:
// class Number

// Private:
// int value;

// Constructor:
// Number(int v);

// Friend function:
// friend int maximum(Number n1, Number n2);
// Return the larger value.

// Example:
// Number n1(50);
// Number n2(80);

// cout << maximum(n1, n2);
// Expected:
// 80

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

    friend int maximum(Number n1, Number n2);
};

int maximum(Number n1, Number n2)
{
    if(n1.value > n2.value)
    {
        return n1.value;
    }
    else
    {
        return n2.value;
    }
}

int main()
{
    Number num1(50);
    Number num2(80);

    cout << "Maximum number is " << maximum(num1, num2);
    return 0;
}