#include "savings.h"

Savings::Savings()
{

}
double Savings::getInterest()
{
    return annualInterest;
}

void Savings::setInterest(double interest)
{
    annualInterest = interest;
}
