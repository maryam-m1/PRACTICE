
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>

using namespace std;

class Account
{
private:
    double balance;
    static double interestRate;
    static int totalAccounts;

public:
    Account();
    Account(double bal);

    Account(const Account& acc);

    static void setInterestRate(double rate);
    static double getInterestRate();
    static int getTotalAccounts();

    
    void deposit(double amount);
    void withdraw(double amount);
    void display() const;
    double getBalance() const;
};

class Customer 
{
private:
    string name;
    Account account;

public:
   
    Customer(string n, double bal);

    
    void display() const;

   
    Account& getAccount();
};

#endif  


