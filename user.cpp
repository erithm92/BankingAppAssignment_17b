#include "user.h"

User::User()
{
    myCheckings = new Checkings();
    mySavings = new Savings();
}
User::User(Checkings checkings, Savings savings)
{
    myCheckings = checkings;
    mySavings = savings;
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

void User::openCheckings()
{
    myCheckings.openWindow();
}
void User::openSavings()
{
    mySavings.openWindow();
}
void User::openTransactions(){}
void User::transferFunds(){}
