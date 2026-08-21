// Given:
// vector<int> v = {10, 50, 20, 90, 30};
// Use max_element() and print:
// Maximum = 90

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,50,20,90,30};

    auto it = max_element(v.begin(), v.end());

    cout << "Maximum element is " << *it;

    return 0;
}