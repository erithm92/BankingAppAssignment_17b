#include "user.h"

User::User()
{
    myCheckings = new Checkings();
    mySavings = new Savings();
}
void User::setCheckings(Checkings checkings)
{
    myCheckings = checkings;
}
Checkings User::getCheckings()
{
    return myCheckings;
}
void User::setSavings(Savings Savings)
{
    mySavings = Savings;
}
Savings User::getSavings()
{
    return mySavings;
}

void User::openCheckings(){}
void User::openSavings(){}
void User::openTransactions(){}
void User::transferFunds(){}
