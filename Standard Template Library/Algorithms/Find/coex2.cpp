// Search for 100.
// Expected:
// Element Not Found

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};

    auto it = find(v.begin(), v.end(),100);

    if(it != v.end())
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}