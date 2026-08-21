// Use count() to find how many times 10 occurs in:
// vector<int> v = {10,20,10,30,10,40};

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,10,30,10,40};

    int c = count(v.begin(),v.end(),10);

    cout << "10 occurs " << c << " times";

    return 0;
}