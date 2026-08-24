// Take n integers from the user.
// Insert them into an unordered_set.
// Then take a target and use:
// s.count(target)
// to determine whether it exists.

// Example:
// Input:
// 7
// 10 20 10 30 20 40 10
// 20
// Output:
// Found

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    unordered_set<int> s;
    int temp{};
    cout << "Enter elements : \n";
    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        s.insert(temp);
    }

    int target{};
    cout << "Enter target value = ";
    cin >> target;

    auto is = s.count(target);

    if(is != 0)
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }

    return 0;
}