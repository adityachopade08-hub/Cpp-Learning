// Create a class Student (outside main()) with:
// name
// rollNo
// marks

// Inside main():
// Create two objects: s1 and s2
// Input data for both
// Display the details of both

#include<iostream>
using namespace std;

class Student 
{
public : 
    string name;
    int rollNo;
    int marks;
};

int main()
{
    Student s1, s2 ;

    cout << "Enter details for Student 1 \n" ;
    cout << "Enter your name : " ;
    cin >> s1.name ;

    cout << "Enter your Roll number : " ;
    cin >> s1.rollNo;

    cout << "Enter your marks : " ;
    cin >> s1.marks ;

    cout<< "Enter details for Student 2\n";
    cout << "Enter your name : " ;
    cin >> s2.name ;

    cout << "Enter your Roll number : " ;
    cin >> s2.rollNo;

    cout << "Enter your marks : " ;
    cin >> s2.marks ;

    cout << "-------- Student Details --------\n" ;
    cout << "Roll No. |   Name   |  Marks \n";
    cout << "  " << s1.rollNo << "         " << s1.name << "     " << s1.marks ;
    cout << "\n  " << s2.rollNo << "        " << s2.name << "     " << s2.marks ;

    return 0;
}
