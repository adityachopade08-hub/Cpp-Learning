// Overload a function called maximum().

// Support:
// Two integers
// Three integers

#include<iostream>

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

int maximum(int num1, int num2, int num3)
{
    if((num1 > num2) && (num1 > num3))
    {
        return num1;
    }
    else if(num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int addingNum{}, num1{}, num2{}, num3{};
    std::cout << "Enter, Of how many number do you want to find maximum number (2 or 3) : " ;
    std::cin >> addingNum ;
    std::cout << '\n' ;

    if(addingNum == 2)
    {
        std::cout << "Enter number : \n" ;
        std::cin >> num1 ;
        std::cin >> num2 ;
        std::cout << '\n';

        std::cout << "Maximum of "<< num1 << " and "<< num2 << " is " << maximum(num1, num2);
    }

    else
    {
        std::cout << "Enter number : \n" ;
        std::cin >> num1 ;
        std::cin >> num2 ;
        std::cin >> num3 ;
        std::cout << '\n';
        
        std::cout << "Maximum of "<< num1 << " , "<< num2 << " and "<< num3 << " is " << maximum(num1, num2, num3);
    }

    return 0;
}