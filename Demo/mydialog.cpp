#include "mydialog.h"

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
{
    label1 = new QLabel("Login Page",this);
    label2 = new QLabel("UserID:",this);
    textInput1 = new QLineEdit(this);
    label3 = new QLabel("Password:",this);
    textInput2 = new QLineEdit(this);
    firstButton = new QPushButton("LogIn",this);
    secondButton = new QPushButton("SignUp",this);



    //this->setMinimumWidth(600);
    //this->setMinimumHeight(400);


    layout=new QGridLayout(this);
    layout->addWidget(label1,0,1,0);
    layout->addWidget(label2,1,0,0);
    layout->addWidget(textInput1,1,1,0);
    layout->addWidget(label3,2,0,0);
    layout->addWidget(textInput2,2,1,0);
    layout->addWidget(firstButton,3,1,0);
    layout->addWidget(secondButton,4,1,0);




    /*
    textInput->setGeometry(200,200,80,30);
    firstButton->setGeometry(100,100,80,30);
    secondButton->setGeometry(200,100,80,30);
    label->setGeometry(100,200,80,30);

    */
}

MyDialog::~MyDialog()
{

}
