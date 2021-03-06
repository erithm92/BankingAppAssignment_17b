#include "window.h"
#include<QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{

        switchSavingsButton = new QPushButton("Savings");
        switchCheckingButton = new QPushButton("Checking");
        transferFundsButton = new QPushButton("Transfer Funds");
        showTransHistoryButton = new QPushButton("Transaction History");

         QHBoxLayout *buttonlayout = new QHBoxLayout;
         buttonlayout->addWidget(switchSavingsButton);
         buttonlayout->addWidget(switchCheckingButton);
         buttonlayout->addWidget(transferFundsButton);
         buttonlayout->addWidget(showTransHistoryButton);

         savingsAmt = new QTextEdit("Savings Account Total:\n$1");
         checkingsAmt = new QTextEdit("Checking Account Total:\n$999");

         QSize savingsSize = savingsAmt->document()->size().toSize();
         savingsSize.setWidth(QWIDGETSIZE_MAX);
         savingsSize.setHeight(25);
         savingsAmt->setMaximumSize(savingsSize);

         QSize checkingsSize = checkingsAmt->document()->size().toSize();
         checkingsSize.setWidth(QWIDGETSIZE_MAX);
         checkingsSize.setHeight(25);
         checkingsAmt->setMaximumSize(checkingsSize);


         savingsAmt->setReadOnly(true);
         checkingsAmt->setReadOnly(true);

         QHBoxLayout *textlayout = new QHBoxLayout;
         textlayout->addWidget(savingsAmt);
         textlayout->addWidget(checkingsAmt);




         QVBoxLayout *mainLayout = new QVBoxLayout();
         mainLayout->addLayout(textlayout);
         mainLayout->addLayout(buttonlayout);
         setLayout(mainLayout);
}
