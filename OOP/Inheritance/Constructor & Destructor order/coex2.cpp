// Create:
// class Animal

// Constructor:
// Animal Created

// Destructor:
// Animal Destroyed

// Then:
// class Dog : public Animal

// Constructor:
// Dog Created

// Destructor:
// Dog Destroyed

// Create two Dog objects:
// Dog d1;
// Dog d2;

#include<iostream>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal Created\n";
    }
    ~Animal()
    {
        cout << "Animal Destroyed\n";
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog Created\n";
    }
    ~Dog()
    {
        cout << "Dog Destroyed\n\n";
    }
};

int main()
{
    Dog d1;
    cout << endl;
    Dog d2;
    cout << endl;

    return 0;
}