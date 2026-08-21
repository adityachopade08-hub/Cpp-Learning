// Take n elements into a vector.
// Then take a number target.
// Use find() to determine whether the target exists.

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30
// Output:
// Found

// Then:

// Input:
// 5
// 10 20 30 40 50
// 99
// Output:
// Not Found

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n{};
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> v;
    int temp{};

    cout << "Enter " << n << " elements :\n";
    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    int target{};
    cout << "\nEnter Target element : ";
    cin >> target;

    auto it = find(v.begin(),v.end(),target);

    if(it != v.end())
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}