/********************************************************************************
** Form generated from reading UI file 'AdminHomeBage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOMEBAGE_H
#define UI_ADMINHOMEBAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QGroupBox *groupBox;
    QLabel *holder_2;
    QLabel *homepic_2;
    QLabel *Metro_2;
    QLabel *label_20;
    QPushButton *pushButton_11;
    QLabel *username_2;
    QLabel *userpic_2;
    QLabel *label_19;
    QLabel *label_25;
    QLabel *label_27;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_10;
    QPushButton *pushButton_25;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_13;
    QLabel *ManageMetro;
    QLabel *label_34;
    QLabel *label_37;
    QLabel *Subscribtion;
    QLabel *label_38;
    QLabel *label_35;
    QLabel *Ticket;
    QLabel *Station;
    QGroupBox *groupBox_2;
    QLabel *label_26;
    QLabel *label_28;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_36;
    QPushButton *pushButton_12;
    QLabel *homepic_3;
    QLineEdit *name;
    QLineEdit *name_2;
    QLineEdit *name_3;
    QLineEdit *name_4;
    QLineEdit *name_5;
    QToolButton *toolButton;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(1200, 700);
        Admin->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 3, 3);"));
        groupBox = new QGroupBox(Admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 450, 715));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        holder_2 = new QLabel(groupBox);
        holder_2->setObjectName("holder_2");
        holder_2->setGeometry(QRect(130, 7, 181, 161));
        holder_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        homepic_2 = new QLabel(groupBox);
        homepic_2->setObjectName("homepic_2");
        homepic_2->setGeometry(QRect(20, 250, 40, 38));
        homepic_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        Metro_2 = new QLabel(groupBox);
        Metro_2->setObjectName("Metro_2");
        Metro_2->setGeometry(QRect(10, 640, 61, 51));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(70, 650, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(16);
        label_20->setFont(font);
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(210, 645, 191, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(18);
        pushButton_11->setFont(font1);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        username_2 = new QLabel(groupBox);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(170, 180, 171, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(22);
        username_2->setFont(font2);
        userpic_2 = new QLabel(groupBox);
        userpic_2->setObjectName("userpic_2");
        userpic_2->setGeometry(QRect(160, 20, 141, 121));
        userpic_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(80, 250, 171, 41));
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(80, 320, 211, 41));
        label_25->setFont(font2);
        label_27 = new QLabel(groupBox);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(80, 450, 171, 41));
        label_27->setFont(font2);
        pushButton_21 = new QPushButton(groupBox);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(0, 310, 451, 71));
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        pushButton_22 = new QPushButton(groupBox);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(0, 380, 451, 71));
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        pushButton_23 = new QPushButton(groupBox);
        pushButton_23->setObjectName("pushButton_23");
        pushButton_23->setGeometry(QRect(0, 440, 451, 71));
        pushButton_23->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(0, 230, 451, 71));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        pushButton_25 = new QPushButton(groupBox);
        pushButton_25->setObjectName("pushButton_25");
        pushButton_25->setGeometry(QRect(0, 500, 451, 71));
        pushButton_25->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_29 = new QLabel(groupBox);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(80, 520, 171, 41));
        label_29->setFont(font2);
        label_30 = new QLabel(groupBox);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(80, 390, 171, 41));
        label_30->setFont(font2);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 240, 60, 55));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        ManageMetro = new QLabel(groupBox);
        ManageMetro->setObjectName("ManageMetro");
        ManageMetro->setGeometry(QRect(20, 320, 40, 38));
        ManageMetro->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_34 = new QLabel(groupBox);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(10, 310, 60, 55));
        label_34->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_37 = new QLabel(groupBox);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(10, 450, 60, 55));
        label_37->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        Subscribtion = new QLabel(groupBox);
        Subscribtion->setObjectName("Subscribtion");
        Subscribtion->setGeometry(QRect(20, 460, 40, 38));
        Subscribtion->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_38 = new QLabel(groupBox);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 520, 60, 55));
        label_38->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_35 = new QLabel(groupBox);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(10, 380, 60, 55));
        label_35->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        Ticket = new QLabel(groupBox);
        Ticket->setObjectName("Ticket");
        Ticket->setGeometry(QRect(20, 390, 40, 38));
        Ticket->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        Station = new QLabel(groupBox);
        Station->setObjectName("Station");
        Station->setGeometry(QRect(20, 530, 40, 38));
        Station->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        pushButton_21->raise();
        label_34->raise();
        pushButton_10->raise();
        label_13->raise();
        pushButton_23->raise();
        pushButton_22->raise();
        holder_2->raise();
        homepic_2->raise();
        Metro_2->raise();
        label_20->raise();
        pushButton_11->raise();
        username_2->raise();
        userpic_2->raise();
        label_19->raise();
        label_25->raise();
        label_27->raise();
        pushButton_25->raise();
        label_29->raise();
        label_30->raise();
        ManageMetro->raise();
        label_37->raise();
        Subscribtion->raise();
        label_38->raise();
        label_35->raise();
        Ticket->raise();
        Station->raise();
        groupBox_2 = new QGroupBox(Admin);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(450, 0, 751, 701));
        QFont font3;
        font3.setPointSize(22);
        groupBox_2->setFont(font3);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(40, 110, 211, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(22);
        label_26->setFont(font4);
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(40, 190, 211, 51));
        label_28->setFont(font4);
        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(40, 270, 211, 51));
        label_31->setFont(font4);
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(40, 350, 211, 51));
        label_32->setFont(font4);
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(40, 430, 211, 51));
        label_33->setFont(font4);
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(260, 30, 231, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(36);
        font5.setBold(false);
        label_36->setFont(font5);
        pushButton_12 = new QPushButton(groupBox_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(180, 570, 191, 41));
        pushButton_12->setFont(font1);
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        homepic_3 = new QLabel(groupBox_2);
        homepic_3->setObjectName("homepic_3");
        homepic_3->setGeometry(QRect(60, 30, 51, 51));
        homepic_3->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        name = new QLineEdit(groupBox_2);
        name->setObjectName("name");
        name->setGeometry(QRect(220, 110, 421, 51));
        QFont font6;
        font6.setPointSize(18);
        name->setFont(font6);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name_2 = new QLineEdit(groupBox_2);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(220, 190, 421, 51));
        name_2->setFont(font6);
        name_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name_3 = new QLineEdit(groupBox_2);
        name_3->setObjectName("name_3");
        name_3->setGeometry(QRect(220, 270, 421, 51));
        name_3->setFont(font6);
        name_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name_4 = new QLineEdit(groupBox_2);
        name_4->setObjectName("name_4");
        name_4->setGeometry(QRect(220, 350, 421, 51));
        name_4->setFont(font6);
        name_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        name_5 = new QLineEdit(groupBox_2);
        name_5->setObjectName("name_5");
        name_5->setGeometry(QRect(220, 430, 421, 51));
        name_5->setFont(font6);
        name_5->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(0, 0, 0, 100));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        holder_2->setText(QString());
        homepic_2->setText(QString());
        Metro_2->setText(QString());
        label_20->setText(QCoreApplication::translate("Admin", "Egypt Metro", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Admin", "Log out", nullptr));
        username_2->setText(QCoreApplication::translate("Admin", "Admin", nullptr));
        userpic_2->setText(QString());
        label_19->setText(QCoreApplication::translate("Admin", "Home Page", nullptr));
        label_25->setText(QCoreApplication::translate("Admin", "Manage Metro", nullptr));
        label_27->setText(QCoreApplication::translate("Admin", "Subscription", nullptr));
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        pushButton_23->setText(QString());
        pushButton_10->setText(QString());
        pushButton_25->setText(QString());
        label_29->setText(QCoreApplication::translate("Admin", "Stations", nullptr));
        label_30->setText(QCoreApplication::translate("Admin", "Tickets", nullptr));
        label_13->setText(QString());
        ManageMetro->setText(QString());
        label_34->setText(QString());
        label_37->setText(QString());
        Subscribtion->setText(QString());
        label_38->setText(QString());
        label_35->setText(QString());
        Ticket->setText(QString());
        Station->setText(QString());
        groupBox_2->setTitle(QString());
        label_26->setText(QCoreApplication::translate("Admin", "Username:", nullptr));
        label_28->setText(QCoreApplication::translate("Admin", "Email:", nullptr));
        label_31->setText(QCoreApplication::translate("Admin", "Password", nullptr));
        label_32->setText(QCoreApplication::translate("Admin", "State:", nullptr));
        label_33->setText(QCoreApplication::translate("Admin", "Credit Card:", nullptr));
        label_36->setText(QCoreApplication::translate("Admin", "User Data", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Admin", "View History", nullptr));
        homepic_3->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOMEBAGE_H
