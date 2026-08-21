// Given:
// vector<int> v = {5, 2, 9, 1, 7};
// Sort it in descending order.
// Hint:
// sort(v.begin(), v.end(), greater<int>());
// Expected:
// 9 7 5 2 1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {5,2,9,1,7};
    
    sort(v.begin(),v.end(), greater<int>());

    for(int x : v)
    {
        cout << x << "  ";
    }
    return 0;
}