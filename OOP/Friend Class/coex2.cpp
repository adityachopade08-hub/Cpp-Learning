// Create:
// class BankAccount

// Private:
// int balance;

// Constructor:
// BankAccount(int b);

// Create:
// class BankManager

// Make BankManager a friend class.
// Inside BankManager:
// void showBalance(BankAccount account);

// Print the private balance.

#include<iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    friend class BankManager;
};

class BankManager
{
public:
    void showBalance(BankAccount account)
    {
        cout << "Balance is " << account.balance ;
    }
};

int main()
{
    BankAccount BA1(10000);
    BankManager BM1;

    BM1.showBalance(BA1);

    return 0;
}