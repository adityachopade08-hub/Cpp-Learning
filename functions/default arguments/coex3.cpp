// Write

// void login(
//     std::string username,
//     std::string password = "1234"
// );

// If password matches
// Login Successful
// Otherwise
// Invalid Password

#include<iostream>
#include<string>

void login(std::string username, std::string password = "1234")
{
    //  username = aditya , password = atidya 

    if((username == "aditya") && (password == "atidya"))
    {
        std::cout << "Login Successful \n" ;
    }
    else
    {
        std::cout << "Invalid Username or Password \n" ;
    }
}

int main()
{
    std::string username;
    std::string password;

    std::cout << "Enter Valid Username and Password \n";
    std::cout << "Enter Username : " ;
    std::cin >> username ;
    std::cout << "Enter Password : " ;
    std::cin >> password ;

    login(username);
    login(username, password);

    return 0;
}