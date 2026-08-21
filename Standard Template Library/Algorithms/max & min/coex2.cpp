// Using the same vector, use min_element():
// Minimum = 10

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,50,90,30};

    auto it = min_element(v.begin(), v.end());

    cout << "Minimum element is " << *it;

    return 0;
}