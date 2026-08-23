// Use:
// s.count(35)

// Print:
// Not Found

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    int f = s.count(35);
    
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