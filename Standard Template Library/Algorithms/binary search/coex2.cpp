// Check whether 35 exists.
// Expected:
// Not Found

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};

    bool is = binary_search(v.begin(),v.end(),35);

    if(is)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}