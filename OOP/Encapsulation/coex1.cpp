// Create:
// class Student

// Private:
// string name;
// int marks;

// Create:
// void setName(string name);
// void setMarks(int marks);
// string getName();
// int getMarks();

// Requirements:
// marks should only accept values from 0 to 100
// If marks are outside that range, don't update them.

// In main():
// Student s1;
// s1.setName("Aditya");
// s1.setMarks(89);
// cout << s1.getName();
// cout << s1.getMarks();

#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    void setName(string name)
    {
        this->name = name;
    }

    void setMarks(int marks)
    {
        this->marks = marks;
    }

    string getName()
    {
        return this->name;
    }

    int getMarks()
    {
        return this->marks;
    }
};

int main()
{
    Student s1;
    s1.setName("Aditya");
    s1.setMarks(99);

    cout << "Name of the student is " << s1.getName() << endl;
    cout << "Marks of the student are " << s1.getMarks() << endl;

    return 0;
}