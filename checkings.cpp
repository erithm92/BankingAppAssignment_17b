#include "checkings.h"

Checkings::Checkings()
{
    overdraftFee = 35;
}
double Checkings::getOverdraft(){return overdraftFee;}
void Checkings::openWindow()
{
    myWindow.show();
}
