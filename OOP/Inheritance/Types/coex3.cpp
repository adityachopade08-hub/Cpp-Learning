// Create:
// Teacher       Researcher
//      \          /
//       \        /
//        Professor
// Teacher
// void teach();

// Researcher
// void research();

// Professor
// Inherit from both.
// class Professor : public Teacher, public Researcher
// Add:
// void guide();

// Call all three functions.

#include<iostream>
using namespace std;

class Teacher
{
public: 
     void teach()
     {
          cout << "Teacher is teaching\n";
     }
};

class Researcher
{
public:
     void research()
     {
          cout << "Reseacher is exploring!\n";
     }
};

class Professor : public Teacher, public Researcher
{
public:
     void guide()
     {
          cout << "Professor guides\n";
     }
};

int main()
{
     Professor p;
     p.teach();
     p.research();
     p.guide();

     return 0;
}