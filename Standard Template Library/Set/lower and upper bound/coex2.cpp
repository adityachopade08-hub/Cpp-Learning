// Find:
// s.upper_bound(30)

// Print the value.
// Expected:
// 40

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto find = s.upper_bound(30);

    cout << "Value = " << *find;

    return 0;
}