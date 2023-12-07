#include "bankAccount.h"

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class checkingAccount : public bankAccount {
private:
    double interestRate;
    double minimumBalance;
    double serviceCharge;
    double fee;

public:
    checkingAccount(std::string accName, int accNumber, double accBalance,
        double minBalance, double intRate, double servCharge, double monthlyFee)
        : bankAccount(accName, accNumber, accBalance),
        interestRate(intRate), minimumBalance(minBalance), serviceCharge(servCharge), fee(monthlyFee) {}

    double getMinimumBalance() const;
    void setMinimumBalance(double minBalance);
    double getInterestRate() const;
    void setInterestRate(double intRate);
    double getServiceCharge() const;
    void setServiceCharge(double servCharge);
    void postInterest();
    void writeCheck(double amount);
    void withdraw(double amount) override;
    void print() const override;
    void createMonthlyStatement() override;
};

#endif // !CHECKINGACCOUNT_H
