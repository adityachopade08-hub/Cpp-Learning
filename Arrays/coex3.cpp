// Take 10 integers.

// Count:
// Positive
// Negative
// Zero

#include<iostream>

int main()
{
    int arrNum[10] ;
    std::cout << "Enter 10 numbers : \n";

    for(int i=0 ; i < 10; i++)
    {
        std::cin >> arrNum[i] ;
    }

    int positiveNum{}, negativeNum{}, zeroNum{} ;

    for(int i = 0; i<10 ; i++)
    {
        if(arrNum[i] > 0)
        {
            positiveNum++;
        }

        else if (arrNum[i] < 0 )
        {
            negativeNum++ ;
        }
        
        else
        {
            zeroNum++ ;
        }
    }

    std::cout << "Positive numbers are " << positiveNum <<'\n' ;
    std::cout << "Negative numbers are " << negativeNum <<'\n' ;
    std::cout << "zeros are " << zeroNum <<'\n' ;
}

//Time complexity = O(n)
//Space complexity = O(n)
