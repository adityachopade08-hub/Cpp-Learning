// Take n integers from the user and insert them into a set.
// Then take a target.

// Use:
// s.count(target)
// to determine whether the target exists.

// Example:
// Input:
// 7
// 10 20 30 20 40 50 10
// 20
// Output:
// Found

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

    int target{};
    cout << "\nEnter target : ";
    cin >> target;

    auto check = s.count(target);

    if(check == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}