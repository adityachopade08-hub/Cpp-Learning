// Take n elements into a set.
// Then take a target.
// Erase the target and print:
// Element erased
// or:
// Element not found
// Then print the remaining elements.

// Example:
// Input:
// 6
// 10 20 30 40 50 60
// 30

// Output:
// Element erased
// 10 20 40 50 60

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n{};
    cout << "Enter number of elements : ";
    cin >> n;

    set<int> s;
    cout << "Enter elements : \n";
    int temp{};
    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        s.insert(temp);
    }

    int target;
    cout << "Which element do you want to erase : ";
    cin >> target;

    if(s.erase(target))
    {
        cout << "Element erased\n\n";
    }
    else
    {
        cout << "Element not found\n\n";
    }

    cout << "Elements : \n";
    for(auto x : s)
    {
        cout << x << "  ";
    }

    return 0;
}