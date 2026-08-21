// Create:
// vector<int> v = {10,20,30,40,50};

// Print:
// Size:
// Capacity:

// Then:
// v.pop_back();
// v.pop_back();
// Print them again.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl << endl;

    v.pop_back();
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl << endl;

    v.pop_back();
    cout << "Size = " << v.size() << endl;
    cout << "Capacity = " << v.capacity() << endl << endl;

    return 0;
}

//Size changes but Capacity remains same