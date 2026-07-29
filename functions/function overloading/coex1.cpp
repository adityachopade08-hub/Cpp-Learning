// Overload a function named area().

// Support:
// Rectangle : area(length, breadth)
// Circle : area(radius)

// Use: 3.14159

#include<iostream>

int area(int length, int breadth)
{
    return length*breadth;
}

double area(int radius)
{
    return 3.14159*radius*radius ;
}

int main()
{
    int choice{};
    std::cout << "Choose the shape of which you want to find out Area \n1.Rectangle\n2.Circle\nEnter your choice : ";
    std::cin >> choice; 

    std::cout << '\n' ;
    int length{}, breadth{}, radius{};

    switch(choice)
    {
        case 1 :
                {
                    std::cout << "Enter Length and Breadth of Rectangle : \n" ;
                    std::cin >> length ;
                    std::cin >> breadth ;

                    std::cout << "Area of Rectangle is "<< area(length,breadth) ;
                } 
                break;
                
        case 2 :
                {
                    std::cout << "Enter radius of Circle : ";
                    std::cin >> radius ;

                    std::cout << "Area of Circle is " << area(radius) ;
                }
                break;

        default :
                std::cout << "Invalid Choice" ;
                break;
    }

    return 0;
}