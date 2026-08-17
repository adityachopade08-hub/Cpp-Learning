// Create:
// class Animal
// Function:
// void eat();
// Print:
// Animal is eating

// Then create:
// class Dog : public Animal
// Function:
// void bark();
// Print:
// Dog is barking

// In main():
// Dog d;
// d.eat();
// d.bark();

#include<iostream>
using namespace std;

class Animal
{
public:
     
    void eat()
    {
        cout << "Animal is eating\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is Barking\n";
    }
};

int main()
{
    Dog d;
    d.bark();
    d.eat();

    return 0;
}