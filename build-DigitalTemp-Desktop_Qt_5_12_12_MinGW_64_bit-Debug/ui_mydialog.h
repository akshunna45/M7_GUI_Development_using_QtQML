/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QLCDNumber *lcdNumber;
    QSlider *verticalSlider;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QProgressBar *progressBar;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QString::fromUtf8("MyDialog"));
        MyDialog->resize(800, 600);
        lcdNumber = new QLCDNumber(MyDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(0, 110, 371, 261));
        verticalSlider = new QSlider(MyDialog);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(520, 120, 101, 471));
        verticalSlider->setMinimum(-50);
        verticalSlider->setMaximum(150);
        verticalSlider->setOrientation(Qt::Vertical);
        dateEdit = new QDateEdit(MyDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(0, 510, 411, 91));
        timeEdit = new QTimeEdit(MyDialog);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(0, 410, 411, 91));
        progressBar = new QProgressBar(MyDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 0, 291, 61));
        progressBar->setMaximum(200);
        progressBar->setValue(24);
        label = new QLabel(MyDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 151, 21));
        label_2 = new QLabel(MyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 380, 61, 21));
        horizontalSlider = new QSlider(MyDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(570, 10, 211, 41));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(MyDialog);
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "MyDialog", nullptr));
        label->setText(QApplication::translate("MyDialog", "H", nullptr));
        label_2->setText(QApplication::translate("MyDialog", "T", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
