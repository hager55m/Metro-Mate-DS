/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *pushButton1;
    QLabel *imghome;
    QLabel *label_3;
    QGroupBox *manage;
    QPushButton *pushButton_4;
    QLabel *manimg;
    QLabel *label_5;
    QGroupBox *ticket;
    QPushButton *pushButton_3;
    QLabel *ticimg;
    QLabel *label_7;
    QGroupBox *sub;
    QPushButton *pushButton_5;
    QLabel *subimg;
    QLabel *label_9;
    QGroupBox *station;
    QPushButton *pushButton_2;
    QLabel *staimg;
    QLabel *label_11;
    QLabel *metroimg;
    QLabel *label_13;
    QLabel *adminimg;
    QLabel *label;
    QGroupBox *groupBox_3;
    QLabel *label_2;
    QLabel *label_4;
    QGroupBox *groupBox_4;

    void setupUi(QDockWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(984, 754);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 450, 721));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 200, 451, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        pushButton1 = new QPushButton(groupBox_2);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(2, -2, 451, 81));
        QFont font;
        font.setPointSize(22);
        pushButton1->setFont(font);
        imghome = new QLabel(groupBox_2);
        imghome->setObjectName("imghome");
        imghome->setGeometry(QRect(20, 20, 49, 41));
        imghome->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;\n"
""));
        manage = new QGroupBox(groupBox);
        manage->setObjectName("manage");
        manage->setGeometry(QRect(0, 290, 451, 80));
        pushButton_4 = new QPushButton(manage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 0, 451, 81));
        pushButton_4->setFont(font);
        manimg = new QLabel(manage);
        manimg->setObjectName("manimg");
        manimg->setGeometry(QRect(10, 20, 61, 41));
        manimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
""));
        label_5 = new QLabel(manage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        ticket = new QGroupBox(groupBox);
        ticket->setObjectName("ticket");
        ticket->setGeometry(QRect(0, 380, 451, 80));
        pushButton_3 = new QPushButton(ticket);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 0, 451, 81));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("text-allignment:left;"));
        ticimg = new QLabel(ticket);
        ticimg->setObjectName("ticimg");
        ticimg->setGeometry(QRect(20, 20, 49, 41));
        ticimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_7 = new QLabel(ticket);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        sub = new QGroupBox(groupBox);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(0, 470, 451, 80));
        pushButton_5 = new QPushButton(sub);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 0, 451, 81));
        pushButton_5->setFont(font);
        subimg = new QLabel(sub);
        subimg->setObjectName("subimg");
        subimg->setGeometry(QRect(20, 20, 49, 41));
        subimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_9 = new QLabel(sub);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        station = new QGroupBox(groupBox);
        station->setObjectName("station");
        station->setGeometry(QRect(0, 560, 451, 80));
        pushButton_2 = new QPushButton(station);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 451, 81));
        pushButton_2->setFont(font);
        staimg = new QLabel(station);
        staimg->setObjectName("staimg");
        staimg->setGeometry(QRect(20, 20, 49, 41));
        staimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_11 = new QLabel(station);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 10, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        metroimg = new QLabel(groupBox);
        metroimg->setObjectName("metroimg");
        metroimg->setGeometry(QRect(10, 660, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 680, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(16);
        label_13->setFont(font1);
        adminimg = new QLabel(groupBox);
        adminimg->setObjectName("adminimg");
        adminimg->setGeometry(QRect(130, 10, 151, 141));
        adminimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 160, 101, 31));
        QFont font2;
        font2.setPointSize(18);
        label->setFont(font2);
        groupBox_3 = new QGroupBox(dockWidgetContents);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(480, 90, 471, 211));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 25;"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(620, 30, 211, 41));
        label_2->setFont(font2);
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(620, 370, 211, 41));
        label_4->setFont(font2);
        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(490, 470, 471, 211));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 25;"));
        admin->setWidget(dockWidgetContents);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDockWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "DockWidget", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        pushButton1->setText(QCoreApplication::translate("admin", "Home Page", nullptr));
        imghome->setText(QString());
        label_3->setText(QString());
        manage->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("admin", "Manage Matro", nullptr));
        manimg->setText(QString());
        label_5->setText(QString());
        ticket->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("admin", "Tickets", nullptr));
        ticimg->setText(QString());
        label_7->setText(QString());
        sub->setTitle(QString());
        pushButton_5->setText(QCoreApplication::translate("admin", "Subscription", nullptr));
        subimg->setText(QString());
        label_9->setText(QString());
        station->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("admin", "Station", nullptr));
        staimg->setText(QString());
        label_11->setText(QString());
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("admin", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("admin", "Admin", nullptr));
        groupBox_3->setTitle(QString());
        label_2->setText(QCoreApplication::translate("admin", "sign up request", nullptr));
        label_4->setText(QCoreApplication::translate("admin", "user accounts", nullptr));
        groupBox_4->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
