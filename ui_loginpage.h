/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QLabel *pic;
    QGroupBox *groupBox;
    QLabel *user;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *pass;
    QPushButton *login;
    QLabel *label_5;
    QPushButton *signup;

    void setupUi(QWidget *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(1200, 700);
        LoginPage->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        pic = new QLabel(LoginPage);
        pic->setObjectName("pic");
        pic->setGeometry(QRect(-2, 0, 561, 701));
        groupBox = new QGroupBox(LoginPage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(559, -1, 641, 701));
        user = new QLabel(groupBox);
        user->setObjectName("user");
        user->setGeometry(QRect(250, 70, 151, 131));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 210, 151, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 310, 151, 51));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 400, 151, 51));
        label_4->setFont(font);
        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(250, 320, 291, 41));
        QFont font1;
        font1.setPointSize(18);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pass = new QLineEdit(groupBox);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(250, 410, 291, 41));
        pass->setFont(font1);
        pass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        login = new QPushButton(groupBox);
        login->setObjectName("login");
        login->setGeometry(QRect(120, 520, 361, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(18);
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 610, 221, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font3.setPointSize(16);
        label_5->setFont(font3);
        signup = new QPushButton(groupBox);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(310, 610, 191, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(16);
        signup->setFont(font4);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QWidget *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "LoginPage", nullptr));
        pic->setText(QString());
        groupBox->setTitle(QString());
        user->setText(QString());
        label_2->setText(QCoreApplication::translate("LoginPage", "Login Page", nullptr));
        label_3->setText(QCoreApplication::translate("LoginPage", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("LoginPage", "Password", nullptr));
        login->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        label_5->setText(QCoreApplication::translate("LoginPage", "Don't have an account?", nullptr));
        signup->setText(QCoreApplication::translate("LoginPage", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
