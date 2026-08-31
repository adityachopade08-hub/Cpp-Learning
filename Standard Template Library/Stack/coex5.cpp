// Take n from the user.
// Then take n integers and push them into a stack.
// Finally print them from top to bottom.

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 50 40 30 20 10

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n{};
    cout << "Enter number of elements : ";
    cin >> n;

    int temp{};
    stack<int> s;
    cout << "Enter elements : \n";
    for(int i=0 ; i<n ; i++)
    {
        cin >> temp;
        s.push(temp);
    }

    cout << "\nPrinting from top to bottom : \n";
    while(!s.empty())
    {
        cout << s.top() << "  ";
        s.pop();
    }

    return 0;
}