// Write

// double simpleInterest(
//     double principal,
//     double rate = 8.5,
//     int years = 1
// );

// Formula
// (P × R × T)/100

// Test

// simpleInterest(10000);
// simpleInterest(10000,10);
// simpleInterest(10000,10,3);

#include<iostream>

double simpleInterest(double principal, double rate = 8.5, int years = 1)
{
    return (principal*rate*years)/100 ;
}

int main()
{
    std::cout << "Interest is " << simpleInterest(10000);
    std::cout << '\n' ;

     std::cout << "Interest is " << simpleInterest(10000,10);
    std::cout << '\n' ;
    
     std::cout << "Interest is " << simpleInterest(10000,10,3);
    std::cout << '\n' ;

    return 0;
}
