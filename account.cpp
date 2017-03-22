#include "account.h"

Account::Account()
{
    accountNumber++;
}
Account::Account(User user)
{
    accountNumber++;
    myUser = user;
}

User Account::getUser(){return myUser;}
void Account::setUser(User)
{
    myUser = user;
}
double Account::getAmount(){return amount;}
void Account::setAmount(double amount)
{
    this->amount = amount;
}
int Account::getAccountNumber(){return accountNumber;}

virtual void Account::openWindow(){}
