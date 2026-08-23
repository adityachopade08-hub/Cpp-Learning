// Given:
// set<int> s = {10,20,30,40,50};

// Erase:
// 30
// Then print the set.

// Expected:
// 10 20 40 50

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    s.erase(30);

    for(auto i : s)
    {
        cout << i << "  ";
    }
    return 0;
}