// Take n students:
// rollNo name
// Store them in:
// map<int,string>
// Then take a roll number.
// Erase that student.

// Print:
// Student removed
// or:
// Student not found
// Then print the remaining students.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cout << "Enter numbe of students : ";
    cin >> n;

    int roll;
    string name;
    map<int,string> student;
    for(int i=0 ; i<n ; i++)
    {
        cout << "\nRoll No - ";
        cin >> roll;
        cout << "Name - ";
        cin >> name;

        student[roll] = name;
    }

    int rollNo;
    cout << "\nEnter a target roll number : ";
    cin >> rollNo;

    auto it = student.erase(rollNo);

    if(it != 0)
    {
        cout << "Student removed";
    }
    else
    {
        cout << "Student not found";
    }

    return 0;
}