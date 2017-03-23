#ifndef CHECKINGS_H
#define CHECKINGS_H

#include "account.h"
#include "checkingswindow.h"

class Checkings
{
public:
    Checkings();
    double getOverdraft();
    //void openWindow();
private:
    double overdraftFee;
    CheckingsWindow myWindow;
};

#endif // CHECKINGS_H
