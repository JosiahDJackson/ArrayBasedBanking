#include "checkingAccount.h"

double checkingAccount::getMinimumBalance() const { return minimumBalance; }

void checkingAccount::setMinimumBalance(double minBalance) { minimumBalance = minBalance; }

double checkingAccount::getInterestRate() const { return interestRate; }

void checkingAccount::setInterestRate(double intRate) { interestRate = intRate; }

double checkingAccount::getServiceCharge() const { return serviceCharge; }

void checkingAccount::setServiceCharge(double servCharge) { serviceCharge = servCharge; }

void checkingAccount::postInterest() { balance += balance * interestRate; }

void checkingAccount::writeCheck(double amount) { withdraw(amount); }

void checkingAccount::withdraw(double amount) {
    if (balance < amount) {
        std::cout << "Warning: Insufficient funds for withdrawal.\n";
    }
    else {
        double newBalance = balance - amount;
        if (newBalance < minimumBalance) {
            double potentialBalance = newBalance - serviceCharge;
            if (potentialBalance < 0) {
                std::cerr << "Error: Insufficient funds. Withdrawal canceled.\n";
            }
            else {
                balance = potentialBalance;
                balance -= fee;
            }
        }
        else {
            balance = newBalance;
        }
    }
}

void checkingAccount::print() const {
    bankAccount::print();
    std::cout << "\nInterest Rate: " << interestRate * 100 << "%";
}

void checkingAccount::createMonthlyStatement() {
    postInterest();
    balance -= fee;
}