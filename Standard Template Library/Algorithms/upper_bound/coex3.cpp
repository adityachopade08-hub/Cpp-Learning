// Find how many times 20 occurs using only:
// lower_bound()
// upper_bound()
// Don't use count().
// Expected:
// 20 occurs 3 times

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,20,20,30,40};

    auto first = lower_bound(v.begin(),v.end(),20);
    auto last = upper_bound(v.begin(),v.end(),20);

    cout << "20 occurs " << last - first << " times.";

    return 0;
}