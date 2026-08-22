// Given:
// vector<int> v = {10,20,20,20,30,40};

// Use:
// lower_bound()
// to find the first occurrence of 20.
// Print:
// Index = 1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,20,20,30,40};

    auto it = lower_bound(v.begin(),v.end(),20);

    cout << "Index = " << it - v.begin();

    return 0;
}

//Output : Index = 4