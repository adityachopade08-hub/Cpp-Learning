// Find:
// upper_bound(v.begin(), v.end(), 25);
// What index should it return?
// Remember:
// first element > 25

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,20,20,30,40};

    auto it = upper_bound(v.begin(), v.end(), 25);

    cout << "Index = " << it - v.begin();

    return 0;
}