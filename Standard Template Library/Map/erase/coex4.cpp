// Given:
// map<int,int> frequency = {
//     {10,3},
//     {20,5},
//     {30,2}
// };

// Remove the key 20.
// Expected:
// 10 → 3
// 30 → 2

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> frequency = {
        {10,3},
        {20,5},
        {30,2}
    };

    frequency.erase(20);

    for(auto x : frequency)
    {
        cout << x.first << " --> " << x.second << endl;
    }

    return 0;
}