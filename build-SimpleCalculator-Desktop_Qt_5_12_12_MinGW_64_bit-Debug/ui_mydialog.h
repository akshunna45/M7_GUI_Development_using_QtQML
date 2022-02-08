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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_13;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_11;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QString::fromUtf8("MyDialog"));
        MyDialog->resize(800, 600);
        widget = new QWidget(MyDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 120, 395, 391));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 0, 3, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 3, 1, 1);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 1, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 2, 2, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 2, 3, 1, 1);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout->addWidget(pushButton_15, 3, 0, 1, 1);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout->addWidget(pushButton_16, 3, 1, 1, 1);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 3, 2, 1, 1);

        pushButton_18 = new QPushButton(widget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        gridLayout->addWidget(pushButton_18, 3, 3, 2, 1);

        pushButton_19 = new QPushButton(widget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout->addWidget(pushButton_19, 4, 0, 1, 2);

        pushButton_20 = new QPushButton(widget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout->addWidget(pushButton_20, 4, 2, 1, 1);

        widget1 = new QWidget(MyDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(110, 40, 391, 71));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(widget1);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(widget1);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(widget1);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        horizontalLayout->addWidget(lcdNumber_3);


        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "MyDialog", nullptr));
        pushButton_7->setText(QApplication::translate("MyDialog", "MC", nullptr));
        pushButton_8->setText(QApplication::translate("MyDialog", "M+", nullptr));
        pushButton_5->setText(QApplication::translate("MyDialog", "\303\267", nullptr));
        pushButton_6->setText(QApplication::translate("MyDialog", "\303\227", nullptr));
        pushButton->setText(QApplication::translate("MyDialog", "7", nullptr));
        pushButton_2->setText(QApplication::translate("MyDialog", "8", nullptr));
        pushButton_4->setText(QApplication::translate("MyDialog", "9", nullptr));
        pushButton_3->setText(QApplication::translate("MyDialog", "-", nullptr));
        pushButton_13->setText(QApplication::translate("MyDialog", "4", nullptr));
        pushButton_9->setText(QApplication::translate("MyDialog", "5", nullptr));
        pushButton_10->setText(QApplication::translate("MyDialog", "6", nullptr));
        pushButton_12->setText(QApplication::translate("MyDialog", "+", nullptr));
        pushButton_15->setText(QApplication::translate("MyDialog", "1", nullptr));
        pushButton_16->setText(QApplication::translate("MyDialog", "2", nullptr));
        pushButton_11->setText(QApplication::translate("MyDialog", "3", nullptr));
        pushButton_18->setText(QApplication::translate("MyDialog", "=", nullptr));
        pushButton_19->setText(QApplication::translate("MyDialog", "0", nullptr));
        pushButton_20->setText(QApplication::translate("MyDialog", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
