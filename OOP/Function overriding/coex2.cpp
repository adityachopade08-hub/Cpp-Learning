// Create:
// Animal
//  /    \
// Dog    Cat

// Animal:
// void sound();
// Print:
// Animal sound

// Dog:
// void sound();
// Print:
// Dog barks

// Cat:
// void sound();
// Print:
// Cat meows

// Create:
// Dog d;
// Cat c;
// Call:
// d.sound();
// c.sound();

#include<iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal Sound\n";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows\n";
    }
};

int main()
{
    Dog d;
    Cat c;
    
    d.sound();
    c.sound();

    return 0;
}