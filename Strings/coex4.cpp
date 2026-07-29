// Check whether two strings are palindromes of each other after reversing one.

// Example:
// abc
// cba

#include<iostream>
#include<string>

bool palindrome(std::string str1, std::string str2)
{
    if(str1.length() != str2.length())
        return false;

    std::string rev;

    for(int i = str1.length() - 1; i >= 0; i--)
    {
        rev.push_back(str1[i]);
    }

    return rev == str2;
}

int main()
{
    std::cout << "Enter two strings \n";
    std::string str1, str2 ;
    std::cout << "Enter string 1 : " ;
    getline(std::cin, str1) ;
    std::cout << "Enter String 2 : " ;
    getline(std::cin, str2);

    if(palindrome(str1,str2))
    {
        std::cout << "\nBoth strings are Palindrome " ;
    }
    else
    {
        std::cout << "\nBoth strings are not Palindrome " ;
    }

    return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(1)