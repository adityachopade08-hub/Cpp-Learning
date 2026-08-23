// Given:
// set<int> s = {10,20,30,40,50};

// Use:
// s.count(30)

// Print:
// Found

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    int f = s.count(30);
    
    if(f == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}