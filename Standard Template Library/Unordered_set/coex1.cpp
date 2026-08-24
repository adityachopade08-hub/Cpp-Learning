// Create:
// unordered_set<int> s;

// Insert:
// 10
// 20
// 30
// 20
// 40
// 10

// Print all elements.
// Observe that duplicates disappear.
// Don't worry about the order.

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(10);

    for(auto x : s)
    {
        cout << x << "  ";
    }

    return 0;
}

//40  30  20  10  