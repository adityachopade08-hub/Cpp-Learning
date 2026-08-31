// Create:
// stack<int> s;
// Push:
// 10 20 30 40 50
// Then use:
// while(!s.empty())
// to print all elements.

// Expected:
// 50 40 30 20 10

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty())
    {
        cout << s.top() << "  " ;
        s.pop();
    }

    return 0;
}