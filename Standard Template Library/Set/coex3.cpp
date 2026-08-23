// Take n integers from the user and insert them into a set.
// Example:
// Input:
// 7
// 10 20 10 30 20 40 10

// Output:
// 10 20 30 40
// The purpose is to see how a set automatically removes duplicates.

#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n{},temp{};
    cout << "Enter number of elements : ";
    cin >> n;

    set<int> s;
    cout << "Enter elements : \n";
    for(int i=0; i<n ;i++)
    {
        cin >> temp;
        s.insert(temp);
    }

    cout << "\nElements : \n";
    for(int x : s)
    {
        cout << x << "  " ;
    }

    return 0;
}