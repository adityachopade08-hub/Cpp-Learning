// Given:
// map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"},
//     {103,"Atharv"}
// };

// Erase:
// 102
// Then print the map.
// Expected:
// 101 : Aditya
// 103 : Atharv

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

    students.erase(102);

    for(auto x : students)
    {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}