// Create:
// vector<pair<int,int>> v;
// Take n pairs from the user.

// Example:
// Input:
// 3
// 10 20
// 30 40
// 50 60

// Store them using:
// push_back()

// Then print all pairs.
// Expected:
// 10 20
// 30 40
// 50 60

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    vector<pair<int,int>> v;

    int n{};
    cout << "Enter number of pairs : ";
    cin >> n;

    cout << "Enter pairs : \n";
    int num1{},num2{};
    for(int i=0 ; i<n ; i++)
    {
        cin >> num1 >> num2;
        v.push_back({num1,num2});
        cout << endl;
    }

    cout << "Pairs of Elements : \n";
    for(auto x : v)
    {
        cout << x.first << "  " << x.second << endl;
    }

    return 0;
}