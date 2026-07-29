// Write a program that:

// Creates an integer a
// Creates a reference ref
// Prints both
// Changes the value using ref
// Prints a again

#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int &ref = a;

    cout << a << '\n' ;
    cout << ref << '\n';

    ref = 10 ;

    cout << a  ;
    return 0;
}