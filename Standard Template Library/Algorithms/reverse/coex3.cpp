// Given:
// vector<int> v = {10, 20, 30, 40, 50};
// Use:
// reverse(v.begin(), v.end());
// Expected:
// 50 40 30 20 10

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};

    reverse(v.begin(),v.end());

    for(int x : v)
    {
        cout << x << "  ";
    }
    return 0;
}