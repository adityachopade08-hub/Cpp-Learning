//Find lower_bound(35).
//Think carefully about which element is the first one:
// ≥ 35

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {10,20,20,20,30,40};

    auto it = lower_bound(v.begin(),v.end(),35);

    cout << "Index = " << it - v.begin();

    return 0;
}

//Output : Index = 5      