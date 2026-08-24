// Create:
// map<int,string> students;

// Store:
// 101 → Aditya
// 102 → Sakshi
// 103 → Atharv
// Print them using a range-based loop.

// Expected:
// 101 : Aditya
// 102 : Sakshi
// 103 : Atharv

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> students;

    students[101] = "Aditya";
    students[102] = "Sakshi";
    students[103] = "Atharv";

    for(auto x : students)
    {
        cout << x.first << "  -->  " << x.second << endl;
    }

    return 0;
}