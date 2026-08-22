// Given:
// vector<int> v = {1,2,2,2,3,4,4,5};
// Find how many times:
// 2
// 4
// 5
// 6
// occur using lower_bound() and upper_bound().

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v = {1,2,2,2,3,4,4,5};

    auto first2 = lower_bound(v.begin(),v.end(),2);
    auto last2 = upper_bound(v.begin(),v.end(),2);

    auto first4 = lower_bound(v.begin(),v.end(),4);
    auto last4 = upper_bound(v.begin(),v.end(),4);

    auto first5 = lower_bound(v.begin(),v.end(),5);
    auto last5 = upper_bound(v.begin(),v.end(),5);

    auto first6 = lower_bound(v.begin(),v.end(),6);
    auto last6 = upper_bound(v.begin(),v.end(),6);

    cout << "2 occurs " << last2 - first2 << " times.\n";
    cout << "4 occurs " << last4 - first4 << " times.\n";
    cout << "5 occurs " << last5 - first5 << " times.\n";
    cout << "6 occurs " << last6 - first6 << " times.\n";

    return 0;
}