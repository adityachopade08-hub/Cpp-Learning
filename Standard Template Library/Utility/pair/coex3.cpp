// Take two integers from the user and store them in:
// pair<int, int>
// Then print their sum.

// Example:
// Input:
// 10 20

// Output:
// Sum = 30

#include<iostream>
using namespace std;

int main()
{
    int num1{}, num2{};

    cout << "Enter two numbers : \n";
    cin >> num1;
    cin >> num2;

    pair<int,int> p = {num1,num2};

    cout << "Sum = " << p.first + p.second ;

    return 0;
}