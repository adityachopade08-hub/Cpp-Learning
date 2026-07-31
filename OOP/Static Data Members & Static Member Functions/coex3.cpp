// Create
// Car

// Members
// company
// model

// static int totalCars;

// Create five cars.

// Create
// static void displayTotal()

// Print
// Total Cars : 5

// Call
// Car::displayTotal();

#include<iostream>
using namespace std;

class Car
{
public :

    string company;
    int model;

    static int totalCars;

    Car()
    {
        totalCars++;
    }

    static void display()
    {
        cout << "Total Cars : " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main()
{
    Car c1, c2, c3, c4, c5;

    Car::display();

    return 0;
}