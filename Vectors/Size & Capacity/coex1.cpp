// Create:
// vector<int> v;
// Add 5 elements using push_back().
// After every insertion, print:
// Size:
// Capacity:
// Observe how they change.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    cout << "Element 1";
    cout << "\nSize = " << v.size();
    cout << "\nCapacity = " << v.capacity();

    v.push_back(20);
    cout << "\n\nElement 2";
    cout << "\nSize = " << v.size();
    cout << "\nCapacity = " << v.capacity();

    v.push_back(30);
    cout << "\n\nElement 3";
    cout << "\nSize = " << v.size();
    cout << "\nCapacity = " << v.capacity();

    v.push_back(40);
    cout << "\n\nElement 4";
    cout << "\nSize = " << v.size();
    cout << "\nCapacity = " << v.capacity();

    v.push_back(50);
    cout << "\n\nElement 5";
    cout << "\nSize = " << v.size();
    cout << "\nCapacity = " << v.capacity();

    return 0;
}