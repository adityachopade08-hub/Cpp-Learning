// Overload display().

// display(int)
// display(double)
// display(char)
// display(std::string)

// Each function should print the type and value.

// Example:
// Integer : 10
// Double : 3.14
// Character : A
// String : Aditya

#include<iostream>
#include<string>

void display(int n)
{
    std::cout << "\nInteger : " << n ;
}

void display(double n)
{
    std::cout << "\nDouble : " << n ;
}

void display(char n)
{
    std::cout << "\nCharacter : " << n ;
}

void display(std::string n)
{
    std::cout << "\nString : " << n ;
}

int main()
{
    int integer{},choice{};
    double doubleNum{};
    char character{};
    char string{};

    std::cout << "Enter the thing of which do you want to find out the datatype : \n" ;
    std::cout << "1.Integer \n2.Double \n3.Character \n4.String \n";
    std::cout << "Enter your choice : ";
    std::cin >> choice ;
    
    switch(choice)
    {
        case 1 : 
                {
                    std::cout << "Enter an Integer : " ;
                    std::cin >> integer ;

                    display(integer);
                }
                break;

        case 2 : 
                {
                    std::cout << "Enter a double sized number : " ;
                    std::cin >> doubleNum ;

                    display(doubleNum);
                }
                break;

        case 3 : 
                {
                    std::cout << "Enter a character : " ;
                    std::cin >> character ;

                    display(character);
                }
                break;

        case 4 : 
                {
                    std::cout << "Enter a string name : " ;
                    std::cin >> string ;

                    display(string);
                }
                break;

        default :
                {
                    std::cout << "Invalid Choice" ;
                }
                break;
    }
    return 0;
}