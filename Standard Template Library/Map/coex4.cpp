// Given:
// map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"},
//     {103,"Atharv"}
// };

// Print only the name of roll number 102.
// Expected:
// Sakshi

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

    cout << "Name = " << students[102];

    return 0;
}