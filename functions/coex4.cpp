// isEven()

#include<iostream>
using namespace std;

void isEven(int n)
{
    if((n % 2)== 0)
    {
        cout << n << " is Even number";
    }
    
    else
    {
        cout << n << " is Odd number";
    }
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num ;

    isEven(num);

    return 0;
}