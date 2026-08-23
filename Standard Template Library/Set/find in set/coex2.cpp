// Search for 35. (same set as last coex)
// Expected:
// Not Found

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto f = s.find(35);
    
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