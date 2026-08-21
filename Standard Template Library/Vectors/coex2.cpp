// Create:=
// vector<int> v = {10,20,30,40,50};

// Print:
// First element:
// Last element:
// Size:

// Expected:
// First element: 10
// Last element: 50
// Size: 5

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};

    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << "Size of vector is " << v.size() << endl;

    return 0;
}