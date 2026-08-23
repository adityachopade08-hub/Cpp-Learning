// Create:
// pair<int, int> p

// Store:
// 10
// 20

// Print:
// First = 10
// Second = 20

#include<iostream>
using namespace std;

int main()
{
    pair<int,int> p = {10,20};

    cout << "First = " << p.first << endl;
    cout << "Second = " << p.second ;

    return 0;
}