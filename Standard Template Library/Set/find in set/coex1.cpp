// Given:
// set<int> s = {10,20,30,40,50};

// Search for 30 using:
// s.find(30)

// Print:
// Found

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto f = s.find(30);
    
    if(f != s.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}