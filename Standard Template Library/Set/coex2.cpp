// Create:
// set<int> s;
// Insert:
// 50
// 20
// 40
// 20
// 10
// 50
// 30

// Print all elements.
// Expected:
// 10 20 30 40 50

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(50);
    s.insert(20);
    s.insert(40);
    s.insert(20);
    s.insert(10);
    s.insert(50);
    s.insert(30);

    cout << "Elements of Set : ";

    for(int x : s)
    {
        cout << x << "  ";
    }

    return 0;
}