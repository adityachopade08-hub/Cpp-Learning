// Given:
// unordered_set<int> s = {10,20,30,40,50};

// Search for 30 using:
// s.find(30)

// Print:
// Found

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s = {10,20,30,40,50};

    auto it = s.find(30);

    if(it != s.end())
    {
        cout << "Found \n";
    }
    else
    {
        cout << "Not Found \n";
    }

    return 0;
}