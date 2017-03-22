#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "user.h"

class Account
{
public:
    Account();
    Account(User);
    User getUser();
    void setUser(User);
    double getAmount();
    void setAmount(double);
    int getAccountNumber();
    virtual void openWindow();

private:
    User myUser;
    double amount;
    static const int accountNumber = 0;
};

#endif // ACCOUNT_H
