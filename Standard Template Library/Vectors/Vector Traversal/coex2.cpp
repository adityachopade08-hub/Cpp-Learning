// Given:
// vector<int> v = {1,2,3,4,5};
// Use:
// for(int &x : v)
// to multiply every element by 2.
// Expected:
// 2 4 6 8 10

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    for(int &x : v)
    {
        x = x*2;
        cout << x << "  ";
    }
    
    return 0;
}