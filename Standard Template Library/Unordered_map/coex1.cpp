// Create:
// unordered_map<int,string> students;

// Store:
// 101 → Aditya
// 102 → Sakshi
// 103 → Atharv

// Print all key-value pairs.

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,string> students;

    students[101] = "Aditya";
    students[102] = "Sakshi";
    students[103] = "Atharv";

    for(auto x : students)
    {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}