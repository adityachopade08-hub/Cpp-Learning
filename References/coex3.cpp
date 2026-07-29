// Rewrite your pointer-based swap using references:

// void swap(int &a, int &b);

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t{};
    t = b ;
    b = a;
    a = t;
}

int main()
{
    int a{},b{};
    cout << "Enter two numbers : \n"; 
    cin >> a ;
    cin >> b ;

    swap(a,b) ;

    cout << "Swapped values are : \n" ;
    cout << "a = " << a ;
    cout <<"\nb = " << b ;

    return 0;
}