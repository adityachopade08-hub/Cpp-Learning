// Given:
// set<int> s = {10,20,30,40,50};

// Find:
// lower_bound(50)
// upper_bound(50)

// What happens?
// For lower_bound(50):
// 50 >= 50
// so it should find 50.

// But for:
// s.upper_bound(50)
// we need:
// element > 50
// There isn't one.

// Therefore:
// s.upper_bound(50) == s.end()

// So your code needs to check:
// if(it != s.end())
// before using:
// *it

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto lower = s.lower_bound(50);
    auto upper = s.upper_bound(50);

    cout << "Lower and Upper bound \n";

    cout << "Lower bound = " << *lower << endl;

    if(upper != s.end())
    {
        cout << "Upper bound = " << *upper << endl;
    }
    else
    {
        cout << "Upper bound Element beyond limit";
    }
    return 0;
}