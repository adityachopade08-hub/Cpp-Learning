// Write
// void increment(int *num);

// Increase the value by 1.

#include<iostream>

void increment(int *num)
{
    *num += 1 ;
    std::cout << *num ;
}

int main()
{
    int num;
    std::cout << "Enter a number : " ;
    std::cin >> num ;

    increment(&num);
    return 0;
}

//Time Complexity = O(1)
//Space Complexity = O(1)