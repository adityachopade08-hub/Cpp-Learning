// Take n students:
// rollNo name
// Store them in:
// map<int,string>

// Then take a roll number.
// Use:
// students.count(rollNo)
// to determine whether the student exists.

// Example:
// Input:
// 4
// 101 Aditya
// 102 Sakshi
// 103 Atharv
// 104 Rahul
// 103

// Output:
// Student Found

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of element : ";
    cin >> n;

    int roll;
    string name;
    map<int,string> student;

    cout << "Enter RollNo and name : \n";
    for(int i=0 ; i<n ; i++)
    {
        cout << "\nRoll No - ";
        cin >> roll;
        cout << "Name - ";
        cin >> name;

        student.insert({roll,name});
    }

    int rollNo;
    cout << "\nEnter target roll number : ";
    cin >> rollNo;

    auto it = student.count(rollNo);

    if(it != 0)
    {
        cout << "Student Found";
    }
    else
    {
        cout << "Student not found";
    }

    return 0;
}