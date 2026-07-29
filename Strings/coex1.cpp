// Write a program to:

// Input a string using getline()
// Print the string
// Print its length

#include<iostream>
#include<string>

int main()
{
    std::cout << "Enter String : " ;
    std::string name ;
    getline(std::cin , name) ;

    std::cout << name ;

    std::cout << "\nLength of String is " << name.length() ;
    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)