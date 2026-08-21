// Given:
// vector<int> v = {5,10,15,20,25};
// Print all elements using:
// for(int x : v)

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={5,10,15,20,25};

    for(int x : v)
    {
        cout << x << "  ";
    }

    return 0;
}