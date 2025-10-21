#ifndef INVESTMENT_CALCULATOR_H_
#define INVESTMENT_CALCULATOR_H_

#include <iostream>

class InvestmentCalculator {
public:
    InvestmentCalculator(double t_initialInvestment, double t_monthlyDeposit,
                         double t_interestRate, int t_numberOfYears);

    void calculateWithoutMonthlyDeposit();
    void calculateWithMonthlyDeposit();

private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_interestRate;
    int m_numberOfYears;

    void printDetails(int t_year, double t_yearEndBalance, double t_interestEarned);
};

#endif // INVESTMENT_CALCULATOR_H_
