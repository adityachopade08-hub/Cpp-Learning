// Use:
// students.count(105)

// Print:
// Not Found


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

    auto it = students.count(105);

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