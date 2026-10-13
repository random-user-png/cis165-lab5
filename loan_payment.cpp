#include <iostream>
#include <cmath>

int main()
{
    double loan_amount, annual_rate, number_of_payments, monthly_rate, monthly_payment, amount_paid_back, interest_paid;
    std::cout << "What is the loan amount? ";
    std::cin >> loan_amount;
    std::cout << "What is the annual interest rate as a percentage? ";
    std::cin >> annual_rate;
    std::cout << "What is the number of monthly payments? ";
    std::cin >> number_of_payments;
    monthly_rate = annual_rate / 100 / 12;

    //Calculates the monthly payment using the formula given in the assignment.
    monthly_payment = (((monthly_rate * pow(1 + monthly_rate, number_of_payments))) / (pow(1 + monthly_rate, number_of_payments) - 1)) * loan_amount;

    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;
    std::cout << "Loan amount: $" << loan_amount << std::endl;
    std::cout << "Monthly interest rate: " << monthly_rate << std::endl;
    std::cout << "Number of payments: " << number_of_payments << std::endl;
    std::cout << "Monthly payment: " << monthly_payment << std::endl;
    std::cout << "Amount paid back: $" << amount_paid_back << std::endl;
    std::cout << "Interest paid: $" << interest_paid;

    return 0;
}