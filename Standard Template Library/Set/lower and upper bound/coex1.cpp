// Given:
// set<int> s = {10,20,30,40,50};

// Find:
// s.lower_bound(25)

// Print the value.
// Expected:
// 30

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto find = s.lower_bound(25);

    cout << "Value = " << *find;

    return 0;
}