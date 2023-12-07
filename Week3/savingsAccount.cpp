#include "savingsAccount.h"

double savingsAccount::getInterestRate() const { return interestRate; }

void savingsAccount::setInterestRate(double intRate) { interestRate = intRate; }

void savingsAccount::postInterest() { balance += balance * interestRate; }

void savingsAccount::withdraw(double amount) {
    if (balance < amount) {
        std::cout << "Warning: Insufficient funds for withdrawal.\n";
    }
    else {
        balance -= amount;
    }
}

void savingsAccount::print() const {
    bankAccount::print();
    std::cout << "\nInterest Rate: " << interestRate * 100 << "%";
}

void savingsAccount::createMonthlyStatement() {
    postInterest();
}
