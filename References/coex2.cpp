// Write:
// void square(int &num);

// Modify the original variable by squaring it.

#include<iostream>
using namespace std;

void square(int &num)
{
    num *= num ;
}

int main()
{
    int num{};
    cout << "Enter a number : " ;
    cin >> num ;

    square(num);

    cout << "Square is " << num ;
    return 0;
}