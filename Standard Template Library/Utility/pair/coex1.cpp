// Create:
// pair<int, string> student

// Store:
// Roll No = 101
// Name = Aditya
// Print both values.

#include<iostream>
using namespace std;

int main()
{
    pair<int,string> student = {101,"Aditya"};

    cout << "Roll No = " << student.first << endl;
    cout << "Name = " << student.second;

    return 0;
}