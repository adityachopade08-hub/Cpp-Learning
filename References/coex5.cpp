// Write:
// void sortAscending(int &a, int &b);

// If a > b, swap them.
// Otherwise, leave them unchanged.

#include<iostream>
using namespace std;

void sortAscending(int &a, int &b)
{
    int t{};
    if( a > b)
    {
        t = b;
        b = a;
        a = t;
    }
}

int main()
{
    int a{}, b{} ;
    
    cout << "Enter two number : \n" ;
    cin >> a ;
    cin >> b ;

    sortAscending(a,b);
    
    cout << "Modified values are : ";
    cout << "\n a = " << a ;
    cout << "\n b = " << b ;

    return 0;
}