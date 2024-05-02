/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignupPage
{
public:
    QGroupBox *groupBox;
    QLabel *user;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *mail;
    QLineEdit *pass;
    QPushButton *signup;
    QLabel *label_5;
    QPushButton *login;
    QLabel *label_6;
    QLineEdit *name;
    QPushButton *choose;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *card;
    QLineEdit *balance;
    QLabel *pic;

    void setupUi(QDialog *SignupPage)
    {
        if (SignupPage->objectName().isEmpty())
            SignupPage->setObjectName("SignupPage");
        SignupPage->resize(1200, 700);
        SignupPage->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(SignupPage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(561, -1, 641, 711));
        user = new QLabel(groupBox);
        user->setObjectName("user");
        user->setGeometry(QRect(240, 30, 151, 131));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 180, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 300, 151, 51));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 350, 151, 51));
        label_4->setFont(font);
        mail = new QLineEdit(groupBox);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(240, 250, 291, 41));
        QFont font1;
        font1.setPointSize(18);
        mail->setFont(font1);
        mail->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pass = new QLineEdit(groupBox);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(240, 350, 291, 41));
        pass->setFont(font1);
        pass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        signup = new QPushButton(groupBox);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(120, 570, 361, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(18);
        signup->setFont(font2);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 630, 221, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font3.setPointSize(16);
        label_5->setFont(font3);
        login = new QPushButton(groupBox);
        login->setObjectName("login");
        login->setGeometry(QRect(310, 640, 191, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(16);
        login->setFont(font4);
        login->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 250, 151, 51));
        label_6->setFont(font);
        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(240, 300, 291, 41));
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        choose = new QPushButton(groupBox);
        choose->setObjectName("choose");
        choose->setGeometry(QRect(190, 520, 221, 41));
        choose->setFont(font2);
        choose->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 400, 151, 51));
        label_7->setFont(font);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 450, 151, 51));
        label_8->setFont(font);
        card = new QLineEdit(groupBox);
        card->setObjectName("card");
        card->setGeometry(QRect(240, 400, 291, 41));
        card->setFont(font1);
        card->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        card->setMaxLength(22);
        balance = new QLineEdit(groupBox);
        balance->setObjectName("balance");
        balance->setGeometry(QRect(240, 450, 291, 41));
        balance->setFont(font1);
        balance->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pic = new QLabel(SignupPage);
        pic->setObjectName("pic");
        pic->setGeometry(QRect(0, 0, 561, 701));

        retranslateUi(SignupPage);

        QMetaObject::connectSlotsByName(SignupPage);
    } // setupUi

    void retranslateUi(QDialog *SignupPage)
    {
        SignupPage->setWindowTitle(QCoreApplication::translate("SignupPage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        user->setText(QString());
        label_2->setText(QCoreApplication::translate("SignupPage", "Signup Page", nullptr));
        label_3->setText(QCoreApplication::translate("SignupPage", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("SignupPage", "Password", nullptr));
        mail->setPlaceholderText(QCoreApplication::translate("SignupPage", "Enter Your Emial", nullptr));
        pass->setPlaceholderText(QCoreApplication::translate("SignupPage", "Enter Password", nullptr));
        signup->setText(QCoreApplication::translate("SignupPage", "Sign up", nullptr));
        label_5->setText(QCoreApplication::translate("SignupPage", "Already a member?", nullptr));
        login->setText(QCoreApplication::translate("SignupPage", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("SignupPage", "Emial", nullptr));
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("SignupPage", "Enter Username", nullptr));
        choose->setText(QCoreApplication::translate("SignupPage", "Choose Subscription", nullptr));
        label_7->setText(QCoreApplication::translate("SignupPage", "Credt Card", nullptr));
        label_8->setText(QCoreApplication::translate("SignupPage", "Balance", nullptr));
        card->setPlaceholderText(QCoreApplication::translate("SignupPage", "Enter Your Credt Card", nullptr));
        balance->setPlaceholderText(QCoreApplication::translate("SignupPage", "Enter Your Balance", nullptr));
        pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignupPage: public Ui_SignupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
