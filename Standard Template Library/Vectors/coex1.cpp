// Create:
// vector<int> v;

// Add:
// 10
// 20
// 30
// 40
// 50

// Then print:
// Elements:
// 10
// 20
// 30
// 40
// 50

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "Elements : \n";
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    return 0;
}