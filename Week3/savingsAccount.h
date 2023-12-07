#include "bankAccount.h"

#ifndef SAVINGSACCOUNT_H
#define SAVIGNSACCOUNT_H

class savingsAccount : public bankAccount {
private:
    double interestRate;

public:
    savingsAccount(std::string accName, int accNumber, double accBalance, double intRate)
        : bankAccount(accName, accNumber, accBalance), interestRate(intRate) {}

    double getInterestRate() const;
    void setInterestRate(double intRate);
    void withdraw(double amount) override;
    void postInterest();
    void print() const override;
    void createMonthlyStatement() override;
};

#endif // !SAVINGSACCOUNT_H
