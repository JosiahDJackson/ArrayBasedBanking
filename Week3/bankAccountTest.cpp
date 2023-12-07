#include <iostream>
#include <iomanip>
#include <string>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "savingsAccount.h"

int main() {
    bankAccount* accountsList[6];

    accountsList[0] = new checkingAccount(std::string("Bill"), 10200, 25000, 100, 0.012, 10.00, 25.00);
    accountsList[1] = new checkingAccount(std::string("Bob"), 10210, 10000, 100, 0.0099, 15.00, 25.00);
    accountsList[2] = new savingsAccount(std::string("Susan"), 90001, 20000, 0.031);
    accountsList[3] = new savingsAccount(std::string("Steve"), 90002, 50000, 0.041);
    accountsList[4] = new checkingAccount(std::string("Sally"), 10220, 4999, 100, 0.0079, 20.00, 25.00);
    accountsList[5] = new savingsAccount(std::string("Frad"), 90003, 2000, 0.011);

    std::cout << "January:\n-------------" << std::endl;
    for (int i = 0; i < 6; i++) {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        std::cout << std::endl;
    }

    std::cout << "\nFebruary:\n-------------" << std::endl;
    for (int i = 0; i < 6; i++) {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        std::cout << std::endl;
    }

    for (int i = 0; i < 6; i++) {
        accountsList[i]->withdraw(500);
    }

    std::cout << "\nMarch:\n-------------" << std::endl;
    for (int i = 0; i < 6; i++) {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        std::cout << std::endl;
    }

    // Cleanup
    for (int i = 0; i < 6; i++) {
        delete accountsList[i];
    }

    return 0;
}