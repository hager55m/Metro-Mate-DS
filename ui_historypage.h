/********************************************************************************
** Form generated from reading UI file 'historypage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYPAGE_H
#define UI_HISTORYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HistoryPage
{
public:
    QGroupBox *groupBox;
    QLabel *holder;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *history;
    QLabel *homepic;
    QLabel *label_18;
    QLabel *Metro;
    QLabel *label_17;
    QPushButton *pushButton_6;
    QLabel *username;
    QLabel *userpic;
    QLabel *label_16;
    QPushButton *pushButton_9;
    QLabel *label_13;
    QLabel *userdata;
    QLabel *label_15;

    void setupUi(QDialog *HistoryPage)
    {
        if (HistoryPage->objectName().isEmpty())
            HistoryPage->setObjectName("HistoryPage");
        HistoryPage->resize(1200, 700);
        HistoryPage->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(HistoryPage);
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
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(0, 380, 451, 81));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 390, 61, 61));
        label_14->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 310, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        history = new QLabel(groupBox);
        history->setObjectName("history");
        history->setGeometry(QRect(30, 400, 49, 41));
        history->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        homepic = new QLabel(groupBox);
        homepic->setObjectName("homepic");
        homepic->setGeometry(QRect(30, 320, 49, 41));
        homepic->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(90, 320, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
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
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(90, 400, 171, 41));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        pushButton_9 = new QPushButton(HistoryPage);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(0, 460, 451, 81));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 1;"));
        label_13 = new QLabel(HistoryPage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 470, 61, 61));
        label_13->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        userdata = new QLabel(HistoryPage);
        userdata->setObjectName("userdata");
        userdata->setGeometry(QRect(30, 480, 49, 41));
        userdata->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        label_15 = new QLabel(HistoryPage);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(90, 480, 171, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));

        retranslateUi(HistoryPage);

        QMetaObject::connectSlotsByName(HistoryPage);
    } // setupUi

    void retranslateUi(QDialog *HistoryPage)
    {
        HistoryPage->setWindowTitle(QCoreApplication::translate("HistoryPage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        holder->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label_14->setText(QString());
        label_11->setText(QString());
        history->setText(QString());
        homepic->setText(QString());
        label_18->setText(QCoreApplication::translate("HistoryPage", "Home Page", nullptr));
        Metro->setText(QString());
        label_17->setText(QCoreApplication::translate("HistoryPage", "Egypt Metro", nullptr));
        pushButton_6->setText(QCoreApplication::translate("HistoryPage", "Log out", nullptr));
        username->setText(QCoreApplication::translate("HistoryPage", "Userename", nullptr));
        userpic->setText(QString());
        label_16->setText(QCoreApplication::translate("HistoryPage", "User Data", nullptr));
        pushButton_9->setText(QString());
        label_13->setText(QString());
        userdata->setText(QString());
        label_15->setText(QCoreApplication::translate("HistoryPage", "History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryPage: public Ui_HistoryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYPAGE_H
