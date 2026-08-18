// Create:
// class Animal
// Function:
// void sound();
// Print:
// Animal makes a sound

// Create:
// class Dog : public Animal
// Create another:
// void sound();
// Print:
// Dog barks

// In main():
// Dog d;
// d.sound();

#include<iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes a sound\n";
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

int main()
{
    Dog d;
    d.sound();

    return 0;
}