// Given:
// set<int> s = {10,20,30,40,50};

// use:
// *s.begin()
// to get the first element.

// And:
// *prev(s.end())
// to get the last element.

// For:
// 10 20 30 40 50
// these give
// *s.begin()     → 10
// *prev(s.end()) → 50

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    cout << "First element is " << *s.begin() << endl;
    cout << "Last element is " << *prev(s.end());

    return 0;
}