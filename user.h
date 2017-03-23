#ifndef USER_H
#define USER_H

#include "checkings.h"
#include "savings.h"

class User
{
public:
    User();
    User(Checkings &, Savings); // <Tandy> edit to comply with C2248
//    void setSavings(Savings);
//    Savings getSavings();
//    Savings* getSavingsPtr(); // <Tandy> edit to comply with C2248
//    void setCheckings(Checkings);
//    Checkings getCheckings();

    //will call openWindow function in correct account
    void openSavings(); //slot for switchSavings
    void openCheckings(); //slot for switchCheckings

    void openTransactions(); //slot for showTransactions
    void transferFunds(); //slot for transferFunds

private:
    Savings mySavings;
    Checkings myCheckings;
//    static Savings* mySavings; // <Tandy> changing objects to pointers to solve error C2248: "cannot access private member..."
//    static Checkings* myCheckings; // <Tandy> changing objects to pointers to solve error C2248: "cannot access private member..."
};

#endif // USER_H
