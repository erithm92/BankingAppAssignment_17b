#include "savings.h"

Savings::Savings()
{
    annualInterest = .02;
}
double Savings::getInterest()
{
    return annualInterest;
}

void Savings::setInterest(double interest)
{
    annualInterest = interest;
}
void Savings::openWindow()
{
    myWindow.show();
}
