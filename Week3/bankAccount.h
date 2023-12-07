#include <iostream>
#include <iomanip>
#include <string>

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class bankAccount {
protected:
    int accountNumber;
    std::string name;
    double balance;

public:
    bankAccount(std::string accName, int accNumber, double accBalance)
        : name(accName), accountNumber(accNumber), balance(accBalance) {}

    int getAccountNumber() const;
    double getBalance() const;
    const std::string& getName() const;
    void setName(const std::string& newName);
    virtual void deposit(double amount);
    virtual void withdraw(double amount) = 0;
    virtual void print() const;
    virtual void createMonthlyStatement() = 0;
};

#endif // !BANKACCOUNT_H