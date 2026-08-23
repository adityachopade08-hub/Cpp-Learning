// Create:
// vector<pair<int,int>> points;

// Add:
// (10,20)
// (30,40)
// (50,60)

// Print them using a range-based loop.
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
    vector<pair<int,int>> points;

    points.push_back({10,20});
    points.push_back({30,40});
    points.push_back({50,60});

    for(auto p : points)
    {
        cout << p.first << "  " << p.second << endl;
    }

    return 0;
}