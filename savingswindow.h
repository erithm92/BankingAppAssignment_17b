#ifndef SAVINGSWINDOW_H
#define SAVINGSWINDOW_H

#include <QObject>
#include <QWidget>
#include <QTextEdit>

class SavingsWindow : public QWidget
{
    Q_OBJECT
public:
    explicit SavingsWindow(QWidget *parent = 0);
private:
    QTextEdit *accountNumView;
    QTextEdit *amountNumView;
    QTextEdit *interestView;
    QTextEdit *showUser;
signals:

public slots:
};

#endif // SAVINGSWINDOW_H
