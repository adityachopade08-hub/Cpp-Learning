// Calculator using Functions

#include<iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1+num2;
}

int subtract(int num1, int num2)
{
    return num1-num2;
}

int multiply(int num1, int num2)
{
    return num1*num2;
}

int divide(int num1, int num2)
{
    if(num2 != 0)
    {
        return num1/num2;
    }
    else
    {
        cout << "Not possible" ;
    }
}

int main()
{
    int num1{}, num2{}, choice{};

    cout << "Enter two numbers : \n" ;
    cin >> num1 ;
    cin >> num2 ;

    cout << "Select the number of operation, you want to perform : ";
    cout << "\n 1. Addition \n 2. Sutraction \n 3.Muliplication \n 4. Division \n ";
    cin >> choice ;

    switch(choice) 
    {
        case 1 : cout << "Addition of " << num1 <<" and " << num2 << " is " << add(num1,num2) ;
        break;

        case 2 : cout << "Subtraction of " << num1 <<" and " << num2 << " is " << subtract(num1,num2) ;
        break;

        case 3 : cout << "Multiplcation of " << num1 <<" and " << num2 << " is " << multiply(num1,num2) ;
        break;

        case 4 : cout << "Division of " << num1 <<" and " << num2 << " is " << divide(num1,num2) ;
        break;

        default : cout << "Invalid Choice" ;
        break;
    }

    return 0;
}