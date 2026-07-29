#include<iostream>

int sum(int n)
{
    if(n == 0)
        return 0;
    
    return n + sum(n - 1);
}

int main()
{
    int num{} ;
    std::cout << "Enter a number : " ;
    std::cin >> num ;

    std::cout << "Sum of " << num << " is " << sum(num) ;

    return 0 ;
}