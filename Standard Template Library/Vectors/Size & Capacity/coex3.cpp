// Create:
// vector<int> v;
// Take n from the user.
// Before inserting anything, do:
// v.reserve(n);
// Then insert n elements.

// Print:
// Size:
// Capacity:
// This will introduce you to reserve(), which is useful for understanding vector performance.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    int n{};
    cout << "Enter number of element : ";
    cin >> n;
    
    v.reserve(n);

    cout << "Enter " << n << " elements : \n";
    int temp;
    for(int i=0; i<n ; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    cout << "\nSize : " << v.size();
    cout << "\nCapacity : " << v.capacity();

    return 0;
    
}