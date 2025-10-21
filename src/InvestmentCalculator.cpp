#include "InvestmentCalculator.h"
#include <iomanip>

InvestmentCalculator::InvestmentCalculator(double t_initialInvestment, double t_monthlyDeposit,
                                           double t_interestRate, int t_numberOfYears) {
    m_initialInvestment = t_initialInvestment;
    m_monthlyDeposit = t_monthlyDeposit;
    m_interestRate = t_interestRate;
    m_numberOfYears = t_numberOfYears;
}

void InvestmentCalculator::printDetails(int t_year, double t_yearEndBalance, double t_interestEarned) {
    std::cout << t_year << "\t\t$" << std::fixed << std::setprecision(2) << t_yearEndBalance
              << "\t\t$" << std::fixed << std::setprecision(2) << t_interestEarned << std::endl;
}

void InvestmentCalculator::calculateWithoutMonthlyDeposit() {
    double balance = m_initialInvestment;
    double monthlyRate = (m_interestRate / 100.0) / 12.0;
    double monthlyInterest;

    for (int year = 1; year <= m_numberOfYears; year++) {
        double interestEarnedThisYear = 0.0;

        for (int month = 1; month <= 12; month++) {
            monthlyInterest = balance * monthlyRate;
            balance += monthlyInterest;
            interestEarnedThisYear += monthlyInterest;
        }

        printDetails(year, balance, interestEarnedThisYear);
    }
}

void InvestmentCalculator::calculateWithMonthlyDeposit() {
    double balance = m_initialInvestment;
    double monthlyRate = (m_interestRate / 100.0) / 12.0;
    double monthlyInterest;

    for (int year = 1; year <= m_numberOfYears; year++) {
        double interestEarnedThisYear = 0.0;

        for (int month = 1; month <= 12; month++) {
            monthlyInterest = balance * monthlyRate;
            balance += monthlyInterest;
            interestEarnedThisYear += monthlyInterest;

            balance += m_monthlyDeposit;
        }

        printDetails(year, balance, interestEarnedThisYear);
    }
}
