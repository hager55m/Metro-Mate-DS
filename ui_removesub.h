/********************************************************************************
** Form generated from reading UI file 'removesub.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVESUB_H
#define UI_REMOVESUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removesub
{
public:
    QWidget *dockWidgetContents;
    QPushButton *pushButton;
    QLabel *label_6;
    QPushButton *m1;
    QGroupBox *groupBox;
    QGroupBox *sub;
    QPushButton *pushButton1;
    QLabel *imghome;
    QLabel *label_3;
    QLabel *metroimg;
    QLabel *label_13;
    QLabel *adminimg;
    QLabel *label;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QLabel *label_2;
    QComboBox *start;

    void setupUi(QDockWidget *removesub)
    {
        if (removesub->objectName().isEmpty())
            removesub->setObjectName("removesub");
        removesub->resize(1200, 700);
        QFont font;
        font.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        removesub->setFont(font);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(750, 540, 231, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(660, 50, 411, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font2.setPointSize(36);
        label_6->setFont(font2);
        m1 = new QPushButton(dockWidgetContents);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(480, 30, 75, 71));
        m1->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 5;\n"
"border-image: url(:/images/img/left-arrow.png) 0 0 0 0 stretch stretch;\n"
"width: 50px;\n"
"height: 50px;"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, -10, 450, 721));
        sub = new QGroupBox(groupBox);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(0, 200, 451, 80));
        pushButton1 = new QPushButton(sub);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(0, 0, 451, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font3.setPointSize(22);
        pushButton1->setFont(font3);
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
        metroimg = new QLabel(groupBox);
        metroimg->setObjectName("metroimg");
        metroimg->setGeometry(QRect(10, 630, 61, 51));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(80, 650, 131, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(16);
        label_13->setFont(font4);
        adminimg = new QLabel(groupBox);
        adminimg->setObjectName("adminimg");
        adminimg->setGeometry(QRect(130, 10, 151, 141));
        adminimg->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 160, 101, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font5.setPointSize(14);
        label->setFont(font5);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 280, 451, 81));
        pushButton_4->setFont(font3);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 290, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 360, 451, 81));
        pushButton_3->setFont(font3);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 370, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 440, 451, 81));
        pushButton_5->setFont(font3);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 450, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 520, 451, 81));
        pushButton_2->setFont(font3);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 530, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 220, 271, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font6.setPointSize(24);
        label_2->setFont(font6);
        start = new QComboBox(dockWidgetContents);
        start->setObjectName("start");
        start->setGeometry(QRect(860, 220, 291, 41));
        start->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));
        removesub->setWidget(dockWidgetContents);

        retranslateUi(removesub);

        QMetaObject::connectSlotsByName(removesub);
    } // setupUi

    void retranslateUi(QDockWidget *removesub)
    {
        removesub->setWindowTitle(QCoreApplication::translate("removesub", "DockWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("removesub", "remove", nullptr));
        label_6->setText(QCoreApplication::translate("removesub", "Remove Subscription", nullptr));
        m1->setText(QString());
        groupBox->setTitle(QString());
        sub->setTitle(QString());
        pushButton1->setText(QCoreApplication::translate("removesub", "Home Page", nullptr));
        imghome->setText(QString());
        label_3->setText(QString());
        metroimg->setText(QString());
        label_13->setText(QCoreApplication::translate("removesub", "Egypt Metro", nullptr));
        adminimg->setText(QString());
        label->setText(QCoreApplication::translate("removesub", "Admin", nullptr));
        pushButton_4->setText(QCoreApplication::translate("removesub", "Manage Matro", nullptr));
        label_5->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("removesub", "Tickets", nullptr));
        label_7->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("removesub", "Subscription", nullptr));
        label_9->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("removesub", "Station", nullptr));
        label_11->setText(QString());
        label_2->setText(QCoreApplication::translate("removesub", "Subscription name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removesub: public Ui_removesub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVESUB_H
