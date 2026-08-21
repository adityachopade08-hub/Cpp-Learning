// Take n and n elements into a vector.
// Then find the sum of all elements using a range-based loop.

// Example:
// Input:
// 5
// 10 20 30 40 50
// Output:
// Sum = 150

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    cout << "Enter " << n << " elements : \n";
    int temp{}, sum{};
    vector<int> v;
    for(int i=0; i<n ; i++)
    {
        cin >> temp;
        sum += temp;
        v.push_back(temp);
    }
    cout << "\nSum = " << sum ;
    
    return 0;
}