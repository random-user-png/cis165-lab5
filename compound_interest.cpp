#include <iostream>
#include <cmath>

int main()
{
    double amount, principal, rate, times_compounded, interest_earned;
    std::cout << "What is the principal balance? ";
    std::cin >> principal;
    std::cout << "What is the annual interest rate as a percentage? ";
    std::cin >> rate;
    std::cout << "What is the number of times interest is compounded during one year? ";
    std::cin >> times_compounded;
    rate = rate / 100;
    
    //Calculates the amount of money after applying the annual rate.
    amount = principal * pow(1.0 + rate / times_compounded, times_compounded);

    interest_earned = amount - principal;
    std::cout << "Interest earned: $" << interest_earned << std::endl;
    std::cout << "Amount in savings: $" << amount;

    return 0;
}