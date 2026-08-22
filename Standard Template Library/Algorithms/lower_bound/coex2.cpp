// Same vector.
// Find:
// lower_bound(25)
// What index will you get?
// Remember:
// first element ≥ 25

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,20,20,30,40};

    auto it = lower_bound(v.begin(),v.end(),25);

    cout << "Index = " << it - v.begin();

    return 0;
}

//Output : Index = 4 