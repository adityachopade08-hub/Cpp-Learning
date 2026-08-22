// For:
// vector<int> v = {10,20,20,20,30,40};

// Find:
// upper_bound(v.begin(), v.end(), 20);
// Print its index.
// Expected:
// Index = 4

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,20,20,30,40};

    auto it = upper_bound(v.begin(), v.end(), 20);

    cout << "Index = " << it - v.begin();

    return 0;
}