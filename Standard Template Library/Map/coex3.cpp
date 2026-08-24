// Take n students.
// For each student, input:
// rollNo
// name
// Store them in:
// map<int,string>
// Then print all students.

// Example:
// Input:
// 3
// 101 Aditya
// 102 Sakshi
// 103 Atharv
// Output:
// 101 : Aditya
// 102 : Sakshi
// 103 : Atharv

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    map<int,string> student;
    int rollNo{};
    string name;

    cout << "Enter details :- \n";
    for(int i=0 ; i<n ; i++)
    {
        cout << "Roll Number : ";
        cin >> rollNo;
        cout << "Name : ";
        cin >> name;

        student[rollNo] = name;
    }

    cout << "\nDetails :\n";
    for(auto x : student)
    {
        cout << x.first << "  -->  " << x.second << endl;
    }

    return 0;
}