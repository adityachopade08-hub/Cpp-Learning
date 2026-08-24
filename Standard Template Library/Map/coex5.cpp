// Given:
// map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"},
//     {103,"Atharv"}
// };

// Change:
// 102 → Sakshi
// to:
// 102 → Priya
// Then print the entire map.

// Expected:
// 101 : Aditya
// 102 : Priya
// 103 : Atharv

// Hint:
// students[102] = "Priya";

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> students = {
        {101,"Aditya"},
        {102,"Sakshi"},
        {103,"Atharv"}
    };

    students[102] = "Priya";

    for(auto x : students)
    {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}