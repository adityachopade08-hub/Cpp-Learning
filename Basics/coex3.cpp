// Price = 499.99
// GST = 18%

// Calculate:

// GST Amount
// Final Price

// Formula:

// GST Amount = Price × GST / 100
// Final Price = Price + GST Amount

#include<iostream>

int main()
{
    float Price = 499.99;
    int GST = 18;

    float GST_Amount ;
    float Final_Price ;

    GST_Amount = Price * GST / 100;
    Final_Price = Price + GST_Amount;

    std::cout << "GST Amount = " << GST_Amount << "\n";
    std::cout << "Final Price = " << Final_Price << "\n";

    return 0;
}