// Create:
// class BankAccount

// Private:
// double balance;

// Functions:
// void deposit(double amount);
// void withdraw(double amount);
// double getBalance();

// Rules:
// Deposit must be positive.
// Withdrawal must be positive.
// Withdrawal cannot exceed the balance.

// Example:
// BankAccount account;
// account.deposit(10000);
// account.withdraw(2500);
// cout << account.getBalance();
// Expected:
// 7500

#include<iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void deposit(double amount)
    {
        this->balance = amount;
    }

    void withdraw(double amount)
    {
        this->balance = this->balance - amount;
    }

    double getBalance()
    {
        return this->balance;
    }
};

int main()
{
    BankAccount BA;
    BA.deposit(100000);
    BA.withdraw(35000);
    cout << "Your balance is " << BA.getBalance() ;

    return 0;
}