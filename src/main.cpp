#include <iostream>
#include "InvestmentCalculator.h"

int main() {
    double initialInvestment;
    double monthlyDeposit;
    double interestRate;
    int numberOfYears;

    std::cout << "**********************************" << std::endl;
    std::cout << "********** Data Input ************" << std::endl;
    std::cout << "Initial Investment Amount: ";
    std::cin >> initialInvestment;
    std::cout << "Monthly Deposit: ";
    std::cin >> monthlyDeposit;
    std::cout << "Annual Interest: ";
    std::cin >> interestRate;
    std::cout << "Number of years: ";
    std::cin >> numberOfYears;

    std::cout << "**********************************" << std::endl;
    std::cout << "Press any key to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();

    InvestmentCalculator calculator(initialInvestment, monthlyDeposit, interestRate, numberOfYears);

    std::cout << "\nBalance and Interest Without Additional Monthly Deposits" << std::endl;
    std::cout << "Year\t\tYear End Balance\t\tYear End Earned Interest" << std::endl;
    calculator.calculateWithoutMonthlyDeposit();

    std::cout << "\nBalance and Interest With Additional Monthly Deposits" << std::endl;
    std::cout << "Year\t\tYear End Balance\t\tYear End Earned Interest" << std::endl;
    calculator.calculateWithMonthlyDeposit();

    return 0;
}
