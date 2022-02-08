#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    MyDialog(QWidget *parent = nullptr);
    ~MyDialog();

private:
    QPushButton *firstButton;
    QPushButton *secondButton;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLineEdit *textInput1;
    QLineEdit *textInput2;

    QGridLayout *layout;


};
#endif // MYDIALOG_H
