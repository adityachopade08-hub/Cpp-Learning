// Given:
// map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"}
// };

// Add:
// 103 → Atharv

// using [].
// Then print the map.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> students = {{101,"Aditya"},{102,"Sakshi"}};

    students[103] = "Atharv";

    for(auto x : students)
    {
        cout << x.first << "  :  " << x.second << endl;
    }

    return 0;
}