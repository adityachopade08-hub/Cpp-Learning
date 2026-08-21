// Take n elements and a target from the user, then use count() to find how many times the target occurs.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n{};
    cout << "Enter number of element : ";
    cin >> n;
    
    cout << "Enter " << n << " elemnts : \n";
    vector<int> v;
    int temp{};
    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    int target{};
    cout << "Enter a target element : ";
    cin >> target;

    int c = count(v.begin(), v.end(), target);
    cout << target << " appears " << c << " times";

    return 0;
}