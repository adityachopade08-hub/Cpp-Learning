// Given:
// set<int> s = {10,20,30,40,50};

// Search for:
// lower_bound(35)
// upper_bound(35)

// Predict the values before coding.
// Then implement both.

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto lower = s.lower_bound(35);
    auto upper = s.upper_bound(35);

    cout << "Lower bound = " << *lower << endl;
    cout << "Upper bound = " << *upper ;

    return 0;
}