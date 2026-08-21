// Create an empty vector.
// Take n from the user.
// Input n integers using:
// push_back()
// Then print all elements.
// Don't use a normal array.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : " ;
    cin >> n;

    cout << "Enter " << n << " elements : \n";
    vector<int> v;
    int temp;

    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    cout << "\nElements : ";
    for(int i=0; i<n ; i++)
    {
        cout << v[i] << "  " ;
    }

    return 0;
}