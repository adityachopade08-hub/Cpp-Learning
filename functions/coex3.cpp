// maximum()

#include<iostream>
using namespace std;

int maximum(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;
    }

    else 
    {
         return num2;
    }
}

int main()
{
    int num1{},num2{};

    cout << "Enter two numbers : \n" ;
    cin >> num1 ;
    cin >> num2 ;

    cout << "Maximum number is " << maximum(num1,num2);
    return 0;
}