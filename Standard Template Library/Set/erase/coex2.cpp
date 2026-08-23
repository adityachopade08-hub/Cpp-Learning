// Given:
// set<int> s = {10,20,30,40,50};

// Try to erase:
// 100
// Use the return value of erase().

// Print:
// Element not found

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};
    
    if(s.erase(100))
    {
        cout << "Element erased";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}