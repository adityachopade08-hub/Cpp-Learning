// Given:
// unordered_map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"},
//     {103,"Atharv"}
// };

// Access the value of key 102 using:
// students[102]

// Expected:
// Sakshi

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,string> students = {
        {101, "Aditya"},
        {102, "Sakshi"},
        {103, "Atharv"}
    };

    cout << "Name = " << students[102];

    return 0;
}