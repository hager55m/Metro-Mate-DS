/********************************************************************************
** Form generated from reading UI file 'userdata.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATA_H
#define UI_USERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserData
{
public:
    QGroupBox *groupBox;
    QLabel *holder;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *history;
    QLabel *userdata;
    QLabel *homepic;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *Metro;
    QLabel *label_17;
    QPushButton *pushButton_6;
    QLabel *username;
    QLabel *userpic;
    QLabel *label_19;
    QLabel *label_4;
    QLineEdit *mail;
    QLineEdit *name;
    QLineEdit *pass;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *signup;
    QLabel *label_7;
    QLineEdit *card;
    QLabel *label_8;
    QLineEdit *sub;
    QLabel *label_9;
    QLineEdit *card_2;

    void setupUi(QDialog *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName("UserData");
        UserData->resize(1200, 708);
        UserData->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(UserData);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 450, 710));
        holder = new QLabel(groupBox);
        holder->setObjectName("holder");
        holder->setGeometry(QRect(130, 30, 191, 181));
        holder->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 300, 451, 81));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(0, 380, 451, 81));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(0, 460, 451, 81));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 470, 61, 61));
        label_14->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 390, 61, 61));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 310, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        history = new QLabel(groupBox);
        history->setObjectName("history");
        history->setGeometry(QRect(30, 480, 49, 41));
        history->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        userdata = new QLabel(groupBox);
        userdata->setObjectName("userdata");
        userdata->setGeometry(QRect(30, 400, 49, 41));
        userdata->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        homepic = new QLabel(groupBox);
        homepic->setObjectName("homepic");
        homepic->setGeometry(QRect(30, 320, 49, 41));
        homepic->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 480, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_15->setFont(font);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(90, 400, 171, 41));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(90, 320, 171, 41));
        label_18->setFont(font);
        Metro = new QLabel(groupBox);
        Metro->setObjectName("Metro");
        Metro->setGeometry(QRect(20, 630, 61, 51));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(90, 650, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(16);
        label_17->setFont(font1);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(110, 580, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(18);
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        username = new QLabel(groupBox);
        username->setObjectName("username");
        username->setGeometry(QRect(140, 230, 171, 41));
        username->setFont(font);
        userpic = new QLabel(groupBox);
        userpic->setObjectName("userpic");
        userpic->setGeometry(QRect(150, 50, 151, 141));
        userpic->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_19 = new QLabel(UserData);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(700, 40, 281, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(42);
        label_19->setFont(font3);
        label_4 = new QLabel(UserData);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 310, 211, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(30);
        label_4->setFont(font4);
        mail = new QLineEdit(UserData);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(820, 160, 291, 41));
        QFont font5;
        font5.setPointSize(18);
        mail->setFont(font5);
        mail->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name = new QLineEdit(UserData);
        name->setObjectName("name");
        name->setGeometry(QRect(820, 240, 291, 41));
        name->setFont(font5);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pass = new QLineEdit(UserData);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(820, 320, 291, 41));
        pass->setFont(font5);
        pass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_6 = new QLabel(UserData);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(550, 150, 151, 51));
        label_6->setFont(font4);
        label_3 = new QLabel(UserData);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(550, 230, 211, 51));
        label_3->setFont(font4);
        signup = new QPushButton(UserData);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(640, 620, 361, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font6.setPointSize(26);
        signup->setFont(font6);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_7 = new QLabel(UserData);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(550, 390, 231, 51));
        label_7->setFont(font4);
        card = new QLineEdit(UserData);
        card->setObjectName("card");
        card->setGeometry(QRect(820, 400, 291, 41));
        card->setFont(font5);
        card->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_8 = new QLabel(UserData);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(550, 530, 231, 51));
        label_8->setFont(font4);
        sub = new QLineEdit(UserData);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(820, 540, 291, 41));
        sub->setFont(font5);
        sub->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        sub->setReadOnly(true);
        label_9 = new QLabel(UserData);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(550, 460, 231, 51));
        label_9->setFont(font4);
        card_2 = new QLineEdit(UserData);
        card_2->setObjectName("card_2");
        card_2->setGeometry(QRect(820, 470, 291, 41));
        card_2->setFont(font5);
        card_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));

        retranslateUi(UserData);

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QDialog *UserData)
    {
        UserData->setWindowTitle(QCoreApplication::translate("UserData", "Dialog", nullptr));
        groupBox->setTitle(QString());
        holder->setText(QString());
        pushButton_7->setText(QString());
        pushButton_9->setText(QString());
        pushButton_8->setText(QString());
        label_14->setText(QString());
        label_13->setText(QString());
        label_11->setText(QString());
        history->setText(QString());
        userdata->setText(QString());
        homepic->setText(QString());
        label_15->setText(QCoreApplication::translate("UserData", "History", nullptr));
        label_16->setText(QCoreApplication::translate("UserData", "User Data", nullptr));
        label_18->setText(QCoreApplication::translate("UserData", "Home Page", nullptr));
        Metro->setText(QString());
        label_17->setText(QCoreApplication::translate("UserData", "Egypt Metro", nullptr));
        pushButton_6->setText(QCoreApplication::translate("UserData", "Log out", nullptr));
        username->setText(QCoreApplication::translate("UserData", "Userename", nullptr));
        userpic->setText(QString());
        label_19->setText(QCoreApplication::translate("UserData", "User Data", nullptr));
        label_4->setText(QCoreApplication::translate("UserData", "Password", nullptr));
        mail->setText(QString());
        mail->setPlaceholderText(QCoreApplication::translate("UserData", "Enter Your Email", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("UserData", "Enter Username", nullptr));
        pass->setPlaceholderText(QCoreApplication::translate("UserData", "Enter Password", nullptr));
        label_6->setText(QCoreApplication::translate("UserData", "Emial", nullptr));
        label_3->setText(QCoreApplication::translate("UserData", "Username", nullptr));
        signup->setText(QCoreApplication::translate("UserData", "Change", nullptr));
        label_7->setText(QCoreApplication::translate("UserData", "Credit Card", nullptr));
        card->setText(QString());
        card->setPlaceholderText(QCoreApplication::translate("UserData", "Enter Your Credit Card", nullptr));
        label_8->setText(QCoreApplication::translate("UserData", "Subscription", nullptr));
        sub->setText(QString());
        label_9->setText(QCoreApplication::translate("UserData", "Balance", nullptr));
        card_2->setText(QString());
        card_2->setPlaceholderText(QCoreApplication::translate("UserData", "Enter balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H
/********************************************************************************
** Form generated from reading UI file 'userdata.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATA_H
#define UI_USERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_UserData
{
public:
    QGroupBox *groupBox;
    QLabel *holder;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *history;
    QLabel *userdata;
    QLabel *homepic;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *Metro;
    QLabel *label_17;
    QPushButton *pushButton_6;
    QLabel *username;
    QLabel *userpic;
    QLabel *label_19;
    QRadioButton *stud;
    QPushButton *login;
    QLabel *label_4;
    QLineEdit *mail;
    QLineEdit *name;
    QRadioButton *non;
    QLineEdit *pass;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *signup;
    QLabel *label_7;
    QLineEdit *mail_2;

    void setupUi(QDialog *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName("UserData");
        UserData->resize(1200, 700);
        UserData->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(UserData);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 450, 710));
        holder = new QLabel(groupBox);
        holder->setObjectName("holder");
        holder->setGeometry(QRect(130, 30, 191, 181));
        holder->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 300, 451, 81));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(0, 380, 451, 81));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(0, 460, 451, 81));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 470, 61, 61));
        label_14->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 390, 61, 61));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 310, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        history = new QLabel(groupBox);
        history->setObjectName("history");
        history->setGeometry(QRect(30, 480, 49, 41));
        history->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        userdata = new QLabel(groupBox);
        userdata->setObjectName("userdata");
        userdata->setGeometry(QRect(30, 400, 49, 41));
        userdata->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        homepic = new QLabel(groupBox);
        homepic->setObjectName("homepic");
        homepic->setGeometry(QRect(30, 320, 49, 41));
        homepic->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 480, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_15->setFont(font);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(90, 400, 171, 41));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(90, 320, 171, 41));
        label_18->setFont(font);
        Metro = new QLabel(groupBox);
        Metro->setObjectName("Metro");
        Metro->setGeometry(QRect(20, 630, 61, 51));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(90, 650, 131, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(16);
        label_17->setFont(font1);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(110, 580, 231, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(18);
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        username = new QLabel(groupBox);
        username->setObjectName("username");
        username->setGeometry(QRect(140, 230, 171, 41));
        username->setFont(font);
        userpic = new QLabel(groupBox);
        userpic->setObjectName("userpic");
        userpic->setGeometry(QRect(150, 50, 151, 141));
        userpic->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_19 = new QLabel(UserData);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(700, 40, 281, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(42);
        label_19->setFont(font3);
        stud = new QRadioButton(UserData);
        stud->setObjectName("stud");
        stud->setGeometry(QRect(570, 470, 201, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(32);
        stud->setFont(font4);
        login = new QPushButton(UserData);
        login->setObjectName("login");
        login->setGeometry(QRect(680, 630, 291, 41));
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_4 = new QLabel(UserData);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 310, 211, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font5.setPointSize(30);
        label_4->setFont(font5);
        mail = new QLineEdit(UserData);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(820, 160, 291, 41));
        QFont font6;
        font6.setPointSize(18);
        mail->setFont(font6);
        mail->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name = new QLineEdit(UserData);
        name->setObjectName("name");
        name->setGeometry(QRect(820, 240, 291, 41));
        name->setFont(font6);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        non = new QRadioButton(UserData);
        non->setObjectName("non");
        non->setGeometry(QRect(820, 470, 291, 41));
        non->setFont(font4);
        pass = new QLineEdit(UserData);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(820, 320, 291, 41));
        pass->setFont(font6);
        pass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_6 = new QLabel(UserData);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(550, 150, 151, 51));
        label_6->setFont(font5);
        label_3 = new QLabel(UserData);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(550, 230, 211, 51));
        label_3->setFont(font5);
        signup = new QPushButton(UserData);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(640, 560, 361, 51));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font7.setPointSize(26);
        signup->setFont(font7);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_7 = new QLabel(UserData);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(550, 390, 231, 51));
        label_7->setFont(font5);
        mail_2 = new QLineEdit(UserData);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(820, 400, 291, 41));
        mail_2->setFont(font6);
        mail_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));

        retranslateUi(UserData);

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QDialog *UserData)
    {
        UserData->setWindowTitle(QCoreApplication::translate("UserData", "Dialog", nullptr));
        groupBox->setTitle(QString());
        holder->setText(QString());
        pushButton_7->setText(QString());
        pushButton_9->setText(QString());
        pushButton_8->setText(QString());
        label_14->setText(QString());
        label_13->setText(QString());
        label_11->setText(QString());
        history->setText(QString());
        userdata->setText(QString());
        homepic->setText(QString());
        label_15->setText(QCoreApplication::translate("UserData", "History", nullptr));
        label_16->setText(QCoreApplication::translate("UserData", "User Data", nullptr));
        label_18->setText(QCoreApplication::translate("UserData", "Home Page", nullptr));
        Metro->setText(QString());
        label_17->setText(QCoreApplication::translate("UserData", "Egypt Metro", nullptr));
        pushButton_6->setText(QCoreApplication::translate("UserData", "Log out", nullptr));
        username->setText(QCoreApplication::translate("UserData", "Userename", nullptr));
        userpic->setText(QString());
        label_19->setText(QCoreApplication::translate("UserData", "User Data", nullptr));
        stud->setText(QCoreApplication::translate("UserData", "Student", nullptr));
        login->setText(QCoreApplication::translate("UserData", "Manage Subscription", nullptr));
        label_4->setText(QCoreApplication::translate("UserData", "Password", nullptr));
        mail->setText(QString());
        non->setText(QCoreApplication::translate("UserData", "Non-Student", nullptr));
        label_6->setText(QCoreApplication::translate("UserData", "Emial", nullptr));
        label_3->setText(QCoreApplication::translate("UserData", "Username", nullptr));
        signup->setText(QCoreApplication::translate("UserData", "Change", nullptr));
        label_7->setText(QCoreApplication::translate("UserData", "Credit Card", nullptr));
        mail_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H
