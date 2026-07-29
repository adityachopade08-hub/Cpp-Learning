// Create:
// class Test

// Constructor:

// Test()
// {
//     cout << "Constructor Called";
// }

// Create three objects.

#include<iostream>
using namespace std;

class Test
{
public :

    Test()
    {
        cout << "Constructor Called\n" ;
    }
};

int main()
{
    Test t1, t2, t3 ;
    return 0;
}