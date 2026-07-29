// Input a string.

// Count:
// Uppercase letters
// Lowercase letters
// Digits
// Spaces

// Example
// Input :
// Hello 123 World
// Output :
// Uppercase : 2
// Lowercase : 8
// Digits : 3
// Spaces : 2

// Hint: You can compare characters:
// if(ch >= 'A' && ch <= 'Z')

#include<iostream>
#include<string>

int countUpper(std::string str)
{
    int count{};
    int len = str.length() ;

    for(int i=0 ; i<len ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            count++ ;
        }
    }
    return count ;
}

int countLower(std::string str)
{
    int count{};
    int len = str.length() ;

    for(int i=0; i< len ; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count++ ;
        }
    }
    return count ;
}

int countDigits(std::string str)
{
    int count{};
    int len = str.length() ;

    for(int i=0 ; i<len ;i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count++ ;
        }
    }
    return count ;
}

int countSpaces(std::string str)
{
    int count{};
    int len = str.length() ;

    for(int i=0 ; i<len ; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    return count ;
}

int main()
{
    std::string str;
    std::cout << "Enter a string : " ;
    getline(std::cin, str) ;

    std::cout <<"\nThe number of \n" ;
    std::cout << "\nUppercase : " << countUpper(str) ;
    std::cout << "\nLowercase : " << countLower(str) ;
    std::cout << "\nDigits : " << countDigits(str) ;
    std::cout << "\nSpaces : " << countSpaces(str) ;

    return 0 ;
}

//Time Complexity = O(n)
//Space Complexity = O(1)