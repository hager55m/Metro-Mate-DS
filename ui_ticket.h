/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QWidget *dockWidgetContents;
    QGroupBox *groupBox;
    QGroupBox *manage;
    QPushButton *pushButton_4;
    QLabel *manimg;
    QLabel *label_5;
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
    QGroupBox *manage_2;
    QPushButton *pushButton1;
    QLabel *imghome;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_3;
    QLabel *ticimg;
    QLabel *label_7;
    QPushButton *pushButton_11;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *mail;
    QLineEdit *mail_2;
    QLineEdit *mail_3;
    QPushButton *pushButton_6;

    void setupUi(QDockWidget *Ticket)
    {
        if (Ticket->objectName().isEmpty())
            Ticket->setObjectName("Ticket");
        Ticket->resize(1038, 735);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -20, 450, 731));
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
        manimg->setGeometry(QRect(10, 30, 61, 41));
        manimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
""));
        label_5 = new QLabel(manage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 20, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
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
        subimg->setGeometry(QRect(10, 20, 49, 41));
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
        metroimg->setGeometry(QRect(10, 670, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 690, 131, 31));
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
        manage_2 = new QGroupBox(groupBox);
        manage_2->setObjectName("manage_2");
        manage_2->setGeometry(QRect(0, 200, 451, 80));
        pushButton1 = new QPushButton(manage_2);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(0, 0, 451, 81));
        pushButton1->setFont(font);
        imghome = new QLabel(manage_2);
        imghome->setObjectName("imghome");
        imghome->setGeometry(QRect(20, 20, 49, 41));
        imghome->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_3 = new QLabel(manage_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;\n"
""));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 380, 451, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 0, 451, 81));
        pushButton_3->setFont(font);
        ticimg = new QLabel(groupBox_2);
        ticimg->setObjectName("ticimg");
        ticimg->setGeometry(QRect(10, 20, 49, 41));
        ticimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(240, 680, 191, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(18);
        pushButton_11->setFont(font3);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 40, 241, 61));
        label_2->setFont(font);
        layoutWidget = new QWidget(dockWidgetContents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(490, 220, 216, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        mail = new QLineEdit(dockWidgetContents);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(720, 240, 291, 41));
        QFont font4;
        font4.setPointSize(18);
        mail->setFont(font4);
        mail->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        mail_2 = new QLineEdit(dockWidgetContents);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(720, 320, 291, 41));
        mail_2->setFont(font4);
        mail_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        mail_3 = new QLineEdit(dockWidgetContents);
        mail_3->setObjectName("mail_3");
        mail_3->setGeometry(QRect(720, 410, 291, 41));
        mail_3->setFont(font4);
        mail_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        pushButton_6 = new QPushButton(dockWidgetContents);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(590, 560, 261, 41));
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        Ticket->setWidget(dockWidgetContents);

        retranslateUi(Ticket);

        QMetaObject::connectSlotsByName(Ticket);
    } // setupUi

    void retranslateUi(QDockWidget *Ticket)
    {
        Ticket->setWindowTitle(QCoreApplication::translate("Ticket", "DockWidget", nullptr));
        groupBox->setTitle(QString());
        manage->setTitle(QString());
        pushButton_4->setText(QCoreApplication::translate("Ticket", "Manage Matro", nullptr));
        manimg->setText(QString());
        label_5->setText(QString());
        sub->setTitle(QString());
        pushButton_5->setText(QCoreApplication::translate("Ticket", "Subsctiption", nullptr));
        subimg->setText(QString());
        label_9->setText(QString());
        station->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("Ticket", "Station", nullptr));
        staimg->setText(QString());
        label_11->setText(QString());
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("Ticket", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("Ticket", "Admin", nullptr));
        manage_2->setTitle(QString());
        pushButton1->setText(QCoreApplication::translate("Ticket", "Home Page", nullptr));
        imghome->setText(QString());
        label_3->setText(QString());
        groupBox_2->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("Ticket", "Tickets", nullptr));
        ticimg->setText(QString());
        label_7->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("Ticket", "Log out", nullptr));
        label_2->setText(QCoreApplication::translate("Ticket", "Ticket Cost", nullptr));
        label_4->setText(QCoreApplication::translate("Ticket", "Tire #1 Cost :", nullptr));
        label_6->setText(QCoreApplication::translate("Ticket", "Tire #2 Cost :", nullptr));
        label_8->setText(QCoreApplication::translate("Ticket", "Tire #3 Cost :", nullptr));
        mail->setText(QString());
        mail_2->setText(QString());
        mail_3->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("Ticket", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ticket: public Ui_Ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
