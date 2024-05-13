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
    QLabel *metroimg;
    QLabel *label_13;
    QLabel *adminimg;
    QLabel *label;
    QPushButton *pushButton_6;
    QLabel *imghome;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *ticimg;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QPushButton *logout;
    QLabel *label_9;
    QLineEdit *name;
    QLineEdit *rides;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *save;
    QLineEdit *month;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *m1;

    void setupUi(QDockWidget *addsub)
    {
        if (addsub->objectName().isEmpty())
            addsub->setObjectName("addsub");
        addsub->resize(1200, 700);
        QFont font;
        font.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        addsub->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -10, 450, 721));
        manage = new QGroupBox(groupBox);
        manage->setObjectName("manage");
        manage->setGeometry(QRect(0, 290, 451, 80));
        pushButton_4 = new QPushButton(manage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 0, 451, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font1.setPointSize(22);
        pushButton_4->setFont(font1);
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
        metroimg = new QLabel(groupBox);
        metroimg->setObjectName("metroimg");
        metroimg->setGeometry(QRect(10, 630, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 650, 131, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(16);
        label_13->setFont(font2);
        adminimg = new QLabel(groupBox);
        adminimg->setObjectName("adminimg");
        adminimg->setGeometry(QRect(130, 10, 151, 141));
        adminimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 160, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font3.setPointSize(26);
        label->setFont(font3);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 210, 451, 81));
        pushButton_6->setFont(font1);
        imghome = new QLabel(groupBox);
        imghome->setObjectName("imghome");
        imghome->setGeometry(QRect(20, 230, 49, 41));
        imghome->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 220, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 370, 451, 81));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        ticimg = new QLabel(groupBox);
        ticimg->setObjectName("ticimg");
        ticimg->setGeometry(QRect(20, 390, 49, 41));
        ticimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 380, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 450, 451, 81));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
""));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 530, 451, 81));
        pushButton_2->setFont(font1);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 540, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        logout = new QPushButton(groupBox);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(230, 630, 171, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(18);
        logout->setFont(font4);
        logout->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 460, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        name = new QLineEdit(dockWidgetContents);
        name->setObjectName("name");
        name->setGeometry(QRect(810, 220, 291, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font5.setPointSize(18);
        name->setFont(font5);
        name->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        rides = new QLineEdit(dockWidgetContents);
        rides->setObjectName("rides");
        rides->setGeometry(QRect(810, 300, 291, 41));
        rides->setFont(font5);
        rides->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 220, 131, 41));
        label_2->setFont(font3);
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(500, 300, 201, 31));
        label_4->setFont(font3);
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(690, 50, 311, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font6.setPointSize(32);
        label_6->setFont(font6);
        save = new QPushButton(dockWidgetContents);
        save->setObjectName("save");
        save->setGeometry(QRect(720, 550, 231, 41));
        save->setFont(font4);
        save->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        month = new QLineEdit(dockWidgetContents);
        month->setObjectName("month");
        month->setGeometry(QRect(810, 380, 161, 41));
        month->setFont(font5);
        month->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        label_8 = new QLabel(dockWidgetContents);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(500, 390, 161, 31));
        label_8->setFont(font3);
        label_10 = new QLabel(dockWidgetContents);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(980, 380, 131, 41));
        label_10->setFont(font3);
        m1 = new QPushButton(dockWidgetContents);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(540, 50, 75, 71));
        m1->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 5;\n"
"border-image: url(:/images/img/left-arrow.png) 0 0 0 0 stretch stretch;\n"
"width: 50px;\n"
"height: 50px;"));
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
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("addsub", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("addsub", "Admin", nullptr));
        pushButton_6->setText(QCoreApplication::translate("addsub", "Home Page", nullptr));
        imghome->setText(QString());
        label_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("addsub", "Tickets", nullptr));
        ticimg->setText(QString());
        label_7->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("addsub", "Subscription", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addsub", "Station", nullptr));
        label_11->setText(QString());
        logout->setText(QCoreApplication::translate("addsub", "Log out", nullptr));
        label_9->setText(QString());
        name->setText(QString());
        rides->setText(QString());
        label_2->setText(QCoreApplication::translate("addsub", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("addsub", "NO. of Rides:", nullptr));
        label_6->setText(QCoreApplication::translate("addsub", "Add Subscription", nullptr));
        save->setText(QCoreApplication::translate("addsub", "Save", nullptr));
        month->setText(QString());
        label_8->setText(QCoreApplication::translate("addsub", "Duration:", nullptr));
        label_10->setText(QCoreApplication::translate("addsub", "Month(s)", nullptr));
        m1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addsub: public Ui_addsub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUB_H
