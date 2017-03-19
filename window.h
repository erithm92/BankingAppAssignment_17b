#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include<QPushButton>
#include<QHBoxLayout>
#include<QTextEdit>
class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);
private:
    QPushButton *switchSavingsButton;
    QPushButton *switchCheckingButton;
    QPushButton *transferFundsButton;
    QPushButton *showTransHistoryButton;

    QTextEdit *savingsAmt;
    QTextEdit *checkingsAmt;
signals:

public slots:
};

#endif // WINDOW_H
