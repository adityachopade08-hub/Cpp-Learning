// Write:
// void input(int &x);

// Read a value inside the function and store it in the original variable.

#include<iostream>
using namespace std;

void input(int &x)
{
    cout << "Enter number : "; 
    cin >> x ;
}

int main()
{
    int num{};

    input(num);

    cout << "\nValue is : " << num ;
    return 0;
}