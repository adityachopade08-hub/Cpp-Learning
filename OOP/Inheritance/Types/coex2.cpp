// Create:
// Vehicle
//    ↓
// Car
//    ↓
// SportsCar

// Vehicle
// void start();
// Print:
// Vehicle started

// Car
// void drive();
// Print:
// Car is driving

// SportsCar
// void race();
// Print:
// Sports car is racing

// Create:
// SportsCar s;
// Call all three.

#include<iostream>
using namespace std;

class Vehicle
{
public:
   void start()
   {
      cout << "Vehicle started\n";
   }
};

class Car : public Vehicle
{
public:
   void drive()
   {
      cout << "Car is Driving\n";
   }
};

class SportsCar : public Car
{
public:
   void race()
   {
      cout << "Sports Car is racing\n";
   }
};

int main()
{
   SportsCar s;
   s.start();
   s.drive();
   s.race();

   return 0;
}

