// Take n numbers from the user and store them in a set.
// Then take a target.

// Use:
// s.find(target)
// to determine whether it exists.

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

    auto check = s.find(target);

    if(check != s.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}