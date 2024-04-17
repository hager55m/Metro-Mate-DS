/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SignupPage
{
public:
    QGroupBox *groupBox;
    QLabel *user;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *pass;
    QPushButton *signup;
    QLabel *label_5;
    QPushButton *login;
    QLabel *label_6;
    QLineEdit *mail;
    QRadioButton *stud;
    QRadioButton *non;
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
        user->setGeometry(QRect(250, 70, 151, 131));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 210, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_2->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 330, 151, 51));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 390, 151, 51));
        label_4->setFont(font);
        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(250, 340, 291, 41));
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pass = new QLineEdit(groupBox);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(250, 400, 291, 41));
        pass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        signup = new QPushButton(groupBox);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(120, 520, 361, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(18);
        signup->setFont(font1);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 610, 221, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font2.setPointSize(16);
        label_5->setFont(font2);
        login = new QPushButton(groupBox);
        login->setObjectName("login");
        login->setGeometry(QRect(310, 610, 191, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(16);
        login->setFont(font3);
        login->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 270, 151, 51));
        label_6->setFont(font);
        mail = new QLineEdit(groupBox);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(250, 280, 291, 41));
        mail->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        stud = new QRadioButton(groupBox);
        stud->setObjectName("stud");
        stud->setGeometry(QRect(90, 460, 131, 41));
        stud->setFont(font);
        non = new QRadioButton(groupBox);
        non->setObjectName("non");
        non->setGeometry(QRect(290, 460, 201, 41));
        non->setFont(font);
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
        signup->setText(QCoreApplication::translate("SignupPage", "Sign up", nullptr));
        label_5->setText(QCoreApplication::translate("SignupPage", "Already a member?", nullptr));
        login->setText(QCoreApplication::translate("SignupPage", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("SignupPage", "Emial", nullptr));
        mail->setText(QString());
        stud->setText(QCoreApplication::translate("SignupPage", "Student", nullptr));
        non->setText(QCoreApplication::translate("SignupPage", "Non-Student", nullptr));
        pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignupPage: public Ui_SignupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
