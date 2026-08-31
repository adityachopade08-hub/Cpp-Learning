// Create:
// stack<int> s;
// Push:
// 10
// 20
// 30
// 40
// 50

// Then print:
// Top = 50
// Size = 5

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

    cout << "Top = " << s.top() << endl;
    cout << "Size = " << s.size() << endl;

    return 0;
}