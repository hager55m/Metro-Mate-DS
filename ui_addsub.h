/********************************************************************************
** Form generated from reading UI file 'addsub.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUB_H
#define UI_ADDSUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addsub
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox;
    QGroupBox *manage;
    QPushButton *pushButton_4;
    QLabel *manimg;
    QLabel *label_5;
    QGroupBox *ticket;
    QPushButton *pushButton_3;
    QLabel *ticimg;
    QLabel *label_7;
    QGroupBox *sub;
    QLabel *imghome;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QLabel *metroimg;
    QLabel *label_13;
    QLabel *adminimg;
    QLabel *label;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_5;
    QLabel *subimg;
    QLabel *label_9;
    QGroupBox *station;
    QPushButton *pushButton_2;
    QLabel *staimg;
    QLabel *label_11;
    QLineEdit *name;
    QLineEdit *rides;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *save;
    QLineEdit *month;

    void setupUi(QDockWidget *addsub)
    {
        if (addsub->objectName().isEmpty())
            addsub->setObjectName("addsub");
        addsub->resize(1200, 700);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 450, 721));
        manage = new QGroupBox(groupBox);
        manage->setObjectName("manage");
        manage->setGeometry(QRect(0, 290, 451, 80));
        pushButton_4 = new QPushButton(manage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 0, 451, 81));
        QFont font;
        font.setPointSize(22);
        pushButton_4->setFont(font);
        manimg = new QLabel(manage);
        manimg->setObjectName("manimg");
        manimg->setGeometry(QRect(20, 20, 51, 41));
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
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
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
        sub->setGeometry(QRect(0, 200, 451, 80));
        imghome = new QLabel(sub);
        imghome->setObjectName("imghome");
        imghome->setGeometry(QRect(20, 20, 49, 41));
        imghome->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_3 = new QLabel(sub);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;\n"
""));
        pushButton_6 = new QPushButton(sub);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 0, 451, 81));
        pushButton_6->setFont(font);
        pushButton_6->raise();
        imghome->raise();
        label_3->raise();
        metroimg = new QLabel(groupBox);
        metroimg->setObjectName("metroimg");
        metroimg->setGeometry(QRect(10, 660, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 680, 131, 31));
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
        label->setGeometry(QRect(150, 160, 101, 21));
        QFont font2;
        font2.setPointSize(14);
        label->setFont(font2);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 470, 451, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 0, 451, 81));
        pushButton_5->setFont(font);
        subimg = new QLabel(groupBox_2);
        subimg->setObjectName("subimg");
        subimg->setGeometry(QRect(20, 20, 49, 41));
        subimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_9 = new QLabel(groupBox_2);
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
        name = new QLineEdit(dockWidgetContents);
        name->setObjectName("name");
        name->setGeometry(QRect(670, 220, 291, 41));
        QFont font3;
        font3.setPointSize(18);
        name->setFont(font3);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        rides = new QLineEdit(dockWidgetContents);
        rides->setObjectName("rides");
        rides->setGeometry(QRect(670, 300, 291, 41));
        rides->setFont(font3);
        rides->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 220, 131, 41));
        QFont font4;
        font4.setPointSize(16);
        label_2->setFont(font4);
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(500, 300, 161, 31));
        label_4->setFont(font4);
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(620, 50, 301, 41));
        label_6->setFont(font4);
        save = new QPushButton(dockWidgetContents);
        save->setObjectName("save");
        save->setGeometry(QRect(650, 540, 231, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font5.setPointSize(18);
        save->setFont(font5);
        save->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        month = new QLineEdit(dockWidgetContents);
        month->setObjectName("month");
        month->setGeometry(QRect(670, 380, 291, 41));
        month->setFont(font3);
        month->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        addsub->setWidget(dockWidgetContents);

        retranslateUi(addsub);

        QMetaObject::connectSlotsByName(addsub);
    } // setupUi

    void retranslateUi(QDockWidget *addsub)
    {
        addsub->setWindowTitle(QCoreApplication::translate("addsub", "DockWidget", nullptr));
        groupBox->setTitle(QString());
        manage->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("addsub", "Manage Matro", nullptr));
        manimg->setText(QString());
        label_5->setText(QString());
        ticket->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("addsub", "Tickets", nullptr));
        ticimg->setText(QString());
        label_7->setText(QString());
        sub->setTitle(QString());
        imghome->setText(QString());
        label_3->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("addsub", "Home Page", nullptr));
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("addsub", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("addsub", "Admin", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_5->setText(QCoreApplication::translate("addsub", "Subscription", nullptr));
        subimg->setText(QString());
        label_9->setText(QString());
        station->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("addsub", "Station", nullptr));
        staimg->setText(QString());
        label_11->setText(QString());
        name->setText(QString());
        rides->setText(QString());
        label_2->setText(QCoreApplication::translate("addsub", "Sub Type :", nullptr));
        label_4->setText(QCoreApplication::translate("addsub", "No_Of_Ride :", nullptr));
        label_6->setText(QCoreApplication::translate("addsub", "Adding subscription........", nullptr));
        save->setText(QCoreApplication::translate("addsub", "Save", nullptr));
        month->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addsub: public Ui_addsub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUB_H
