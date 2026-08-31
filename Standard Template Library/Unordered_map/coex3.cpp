// Given:
// 10 20 10 30 20 10

// Create:
// unordered_map<int,int> freq;

// and calculate the frequency using:
// freq[x]++;

// Expected frequencies:
// 10 → 3
// 20 → 2
// 30 → 1

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    vector <int> v = {10,20,10,30,20,10};

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