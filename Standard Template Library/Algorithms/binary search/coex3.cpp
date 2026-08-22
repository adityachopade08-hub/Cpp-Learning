// Take n elements from the user.
// Sort the vector first, then take a target and use binary_search().

// Example:

// Input:
// 5
// 50 10 40 20 30
// 30

// Output:
// Found

// Notice the input isn't sorted:
// 50 10 40 20 30

// So first:
// sort(v.begin(), v.end());

// Then:
// binary_search(v.begin(), v.end(), target);

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
    cout << "Enter target element : ";
    cin >> target;

    sort(v.begin(),v.end());

    bool isPresent = binary_search(v.begin(), v.end(), target);

    if(isPresent)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}