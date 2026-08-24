// Given:
// map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"},
//     {103,"Atharv"}
// };

// Use:
// students.count(102)

// Print:
// Found

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

    auto it = students.count(102);

    if(it != 0)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}