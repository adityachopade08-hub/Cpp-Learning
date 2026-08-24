// Given:
// map<int,string> students = {
//     {101,"Aditya"},
//     {102,"Sakshi"},
//     {103,"Atharv"}
// };

// Search for roll number 102 using:
// students.find(102)

// If found, print:
// Student Found
// Name = Sakshi

// Remember:
// auto it = students.find(102);
// and:
// it->first
// it->second

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

    auto it = students.find(102) ;

    if(it != students.end())
    {
        cout << "Found\n";
        cout << it->first << "  :  " << it->second << endl; 
        //it->first is equal to (*it).first;
        //it->second is equal to (*it).second;
    }
    else
    {
        cout << "Not Found\n";
    }

    return 0;
}