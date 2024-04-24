/********************************************************************************
** Form generated from reading UI file 'submanage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMANAGE_H
#define UI_SUBMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SubManage
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
    QLineEdit *pass;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *name_2;
    QLabel *label_5;
    QLineEdit *pass_2;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *pass_3;
    QPushButton *signup;
    QPushButton *m1;

    void setupUi(QDialog *SubManage)
    {
        if (SubManage->objectName().isEmpty())
            SubManage->setObjectName("SubManage");
        SubManage->resize(1200, 700);
        SubManage->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(SubManage);
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
        label_19 = new QLabel(SubManage);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(640, 30, 361, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(42);
        label_19->setFont(font3);
        label_4 = new QLabel(SubManage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 220, 211, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(30);
        label_4->setFont(font4);
        pass = new QLineEdit(SubManage);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(840, 230, 291, 41));
        QFont font5;
        font5.setPointSize(18);
        pass->setFont(font5);
        pass->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name = new QLineEdit(SubManage);
        name->setObjectName("name");
        name->setGeometry(QRect(840, 150, 291, 41));
        name->setFont(font5);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_3 = new QLabel(SubManage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 140, 211, 51));
        label_3->setFont(font4);
        name_2 = new QLineEdit(SubManage);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(840, 310, 291, 41));
        name_2->setFont(font5);
        name_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_5 = new QLabel(SubManage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 300, 251, 51));
        label_5->setFont(font4);
        pass_2 = new QLineEdit(SubManage);
        pass_2->setObjectName("pass_2");
        pass_2->setGeometry(QRect(840, 390, 291, 41));
        pass_2->setFont(font5);
        pass_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_6 = new QLabel(SubManage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(530, 380, 231, 51));
        label_6->setFont(font4);
        label_7 = new QLabel(SubManage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(530, 460, 291, 51));
        label_7->setFont(font4);
        pass_3 = new QLineEdit(SubManage);
        pass_3->setObjectName("pass_3");
        pass_3->setGeometry(QRect(840, 470, 291, 41));
        pass_3->setFont(font5);
        pass_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        signup = new QPushButton(SubManage);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(630, 580, 361, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font6.setPointSize(26);
        signup->setFont(font6);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        m1 = new QPushButton(SubManage);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(510, 40, 75, 71));
        m1->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 5;\n"
"border-image: url(:/images/img/left-arrow.png) 0 0 0 0 stretch stretch;\n"
"width: 50px;\n"
"height: 50px;"));

        retranslateUi(SubManage);

        QMetaObject::connectSlotsByName(SubManage);
    } // setupUi

    void retranslateUi(QDialog *SubManage)
    {
        SubManage->setWindowTitle(QCoreApplication::translate("SubManage", "Dialog", nullptr));
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
        label_15->setText(QCoreApplication::translate("SubManage", "History", nullptr));
        label_16->setText(QCoreApplication::translate("SubManage", "User Data", nullptr));
        label_18->setText(QCoreApplication::translate("SubManage", "Home Page", nullptr));
        Metro->setText(QString());
        label_17->setText(QCoreApplication::translate("SubManage", "Egypt Metro", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SubManage", "Log out", nullptr));
        username->setText(QCoreApplication::translate("SubManage", "Userename", nullptr));
        userpic->setText(QString());
        label_19->setText(QCoreApplication::translate("SubManage", "Subscription", nullptr));
        label_4->setText(QCoreApplication::translate("SubManage", "End Date", nullptr));
        label_3->setText(QCoreApplication::translate("SubManage", "Start Date", nullptr));
        label_5->setText(QCoreApplication::translate("SubManage", "Start Station", nullptr));
        label_6->setText(QCoreApplication::translate("SubManage", "End Station", nullptr));
        label_7->setText(QCoreApplication::translate("SubManage", "Remainig Rides", nullptr));
        pass_3->setText(QString());
        signup->setText(QCoreApplication::translate("SubManage", "Renew", nullptr));
        m1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SubManage: public Ui_SubManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMANAGE_H
