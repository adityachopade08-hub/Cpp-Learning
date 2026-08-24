// Create:
// map<string,int> marks;

// Store:
// Aditya → 89
// Sakshi → 92
// Atharv → 85

// Print:
// Aditya : 89
// Sakshi : 92
// Atharv : 85
// Notice that this time the key is a string and the value is an integer.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> marks;

    marks["Aditya"] = 89;
    marks["Sakshi"] = 92;
    marks["Atharv"] = 85;

    for(auto x : marks)
    {
        cout << x.first << "  -->  " << x.second << endl;
    }

    return 0;
}