// Take n elements from the user into a vector.

// Print:
// Maximum = ...
// Minimum = ...

// Use only:
// max_element()
// min_element()
// Don't manually find the maximum/minimum using a loop.

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

    auto itmax = max_element(v.begin(),v.end());
    auto itmin = min_element(v.begin(),v.end());

    cout << "Maximum element is " << *itmax << endl;
    cout << "Minimum element is " << *itmin << endl;

    return 0;
}