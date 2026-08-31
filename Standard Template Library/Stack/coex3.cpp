// Given:
// stack<int> s;
// s.push(10);
// s.push(20);
// s.push(30);

// Do:
// s.pop();
// Then print the top.

// Expected:
// Top = 20

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    cout << "Top = " << s.top();

    return 0;
}