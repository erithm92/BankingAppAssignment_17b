#ifndef CHECKINGSWINDOW_H
#define CHECKINGSWINDOW_H

#include <QObject>
#include <QWidget>
#include <QTextEdit>

class CheckingsWindow : public QWidget
{
    Q_OBJECT
public:
    explicit CheckingsWindow(QWidget *parent = 0);
private:
    QTextEdit *accountNumView;
    QTextEdit *amountNumView;
    QTextEdit *interestView;
    QTextEdit *showUser;
signals:

public slots:
};

#endif // CHECKINGSWINDOW_H
