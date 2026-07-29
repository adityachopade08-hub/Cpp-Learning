// Input two strings.

// Print:
// First String : ______
// Second String : ______
// Concatenated String : ______

#include<iostream>
#include<string>

int main()
{
    std::string str1, str2 ;
    std::cout << "Enter two strings : \n" ;
    getline(std::cin,str1);
    getline(std::cin,str2);

    std::cout << "Concatenated String is " << str1 + ' ' + str2 ;
    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)