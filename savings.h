#ifndef SAVINGS_H
#define SAVINGS_H

#include "account.h"
#include "savingswindow.h"

class Savings : public Account
{
public:
    Savings();
    double getInterest();
    void setInterest(double);
    void openWindow();
private:
    double annualInterest;
    SavingsWindow myWindow;
};

#endif // SAVINGS_H
