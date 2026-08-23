// Given:
// set<int> s = {10,20,30,40,50};

// Remove all elements using:
// s.clear();

// Then print:
// s.size()

// Expected:
// Size = 0

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    s.clear();

    cout << "Size = " << s.size();

    return 0;
}