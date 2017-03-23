#include "user.h"

User::User()
{

}
User::User(Checkings &checkings, Savings savings)
{
//    myCheckings = checkings;
//    mySavings = savings;
    myCheckings.accountNumber = checkings.getAccountNumber(); // <Tandy> attempted fix of C2248
    mySavings.annualInterest = savings.getInterest(); // <Tandy> attempted fix of C2248

//    myCheckings = new Checkings; // <Tandy> edit to comply with C2248
//    myCheckings = &checkings;

//    mySavings = new Savings; // <Tandy> edit to comply with C2248
//    mySavings = &savings;
}

/*void User::setCheckings(Checkings checkings)
{
    myCheckings = checkings;
//    myCheckings = &checkings; // <Tandy> edit to comply with C2248
}*/
/*Checkings User::getCheckings()
{
    return myCheckings;
//    return *myCheckings; // <Tandy> edit to comply with C2248
}*/
/*void User::setSavings(Savings Savings)
{
    mySavings = Savings;
//    mySavings = &Savings;  // <Tandy> edit to comply with C2248
}*/

/*Savings User::getSavings()
{
    return mySavings;
//    return *mySavings;  // <Tandy> edit to comply with C2248
}*/
/*Savings* User::getSavingsPtr(){ // <Tandy> edit to comply with C2248
    return mySavings;
}*/

void User::openCheckings()
{
    myCheckings.openWindow();
//    myCheckings->openWindow();  // <Tandy> edit to comply with C2248
}
void User::openSavings()
{
    mySavings.openWindow();
//    mySavings->openWindow();  // <Tandy> edit to comply with C2248
}
void User::openTransactions(){}
void User::transferFunds(){}

