#ifndef USER_H
#define USER_H

#include "checkings.h"
#include "savings.h"

class User
{
public:
    User();

    void setSavings(Savings);
    Savings getSavings();
    void setCheckings(Checkings);
    Checkings getCheckings();

    //will call openWindow function in correct account
    void openSavings(); //slot for switchSavings
    void openCheckings(); //slot for switchCheckings

    void openTransactions(); //slot for showTransactions
    void transferFunds(); //slot for transferFunds

private:
    Savings mySavings;
    Checkings myCheckings;
};

#endif // USER_H
