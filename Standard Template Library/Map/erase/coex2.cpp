// Try to erase:
// 105
// Use the return value.
// Expected:
// Student not found

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

    auto it = students.erase(105);

    if(it != 0)
    {
        cout << "Student found";
    }
    else
    {
        cout << "Student not found";
    }

    return 0;
}