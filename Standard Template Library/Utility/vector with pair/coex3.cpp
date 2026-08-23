// Create:
// vector<pair<int,int>> v = {
//     {10,20},
//     {30,40},
//     {50,60}
// };
// Print the sum of each pair.

// Expected:
// 30
// 70
// 110
// For each pair:
// p.first + p.second

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
    vector<pair<int,int>> v = { {10,20}, {30,40}, {50,60}};

    cout << "Sum of pairs : \n";

    for(auto x : v)
    {
        cout << "Sum is " << x.first + x.second << endl;
    }

    return 0;
}