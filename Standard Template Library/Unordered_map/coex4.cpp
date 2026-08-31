// Take n numbers from the user and find the frequency of every number.

// Example:
// Input:
// 8
// 10 20 10 30 20 10 40 30

// Output should contain:
// 10 → 3
// 20 → 2
// 30 → 2
// 40 → 1

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    vector<int> v;

    int n{};
    cout <<"Ente number of element : ";
    cin >> n;

    int temp{};
    cout << "Enter element : \n";
    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    unordered_map<int,int> freq;

     for(int x : v)
    {
        freq[x]++;
    }

    for(auto x : freq)
    {
        cout << x.first << " → " << x.second << endl;
    }

    return 0;
}