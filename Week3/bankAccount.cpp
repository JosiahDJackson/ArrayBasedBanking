#include "bankAccount.h"

int bankAccount::getAccountNumber() const { return accountNumber; }
double bankAccount::getBalance() const { return balance; }
const std::string& bankAccount::getName() const { return name; }
void bankAccount::setName(const std::string& newName) { name = newName; }
void bankAccount::deposit(double amount) { balance += amount; }
void bankAccount::print() const {
    std::cout << "\nAccount Number: " << accountNumber << "\nBalance: $" << balance;
}