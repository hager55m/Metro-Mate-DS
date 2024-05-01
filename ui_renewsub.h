/********************************************************************************
** Form generated from reading UI file 'renewsub.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENEWSUB_H
#define UI_RENEWSUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RenewSub
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *home;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *ticket;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QLabel *label_12;
    QLabel *sub;
    QLabel *label_13;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_5;
    QLabel *label_14;
    QLabel *state;
    QLabel *label_15;
    QFrame *line;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_6;
    QLabel *label_16;
    QLabel *user;
    QLabel *label_17;
    QPushButton *pushButton;
    QLabel *metro;
    QLabel *label_18;
    QPushButton *pushButton_7;
    QLabel *searchicon;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *type;
    QPushButton *change;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *start;
    QComboBox *end;
    QLabel *label_9;
    QRadioButton *month1;
    QRadioButton *month6;
    QRadioButton *year;
    QRadioButton *month3;
    QLabel *label_6;
    QLineEdit *money;

    void setupUi(QDialog *RenewSub)
    {
        if (RenewSub->objectName().isEmpty())
            RenewSub->setObjectName("RenewSub");
        RenewSub->resize(1200, 700);
        RenewSub->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(RenewSub);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 450, 710));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 110, 451, 80));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 451, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 61, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
""));
        home = new QLabel(groupBox_2);
        home->setObjectName("home");
        home->setGeometry(QRect(30, 20, 49, 41));
        home->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(0, 190, 451, 80));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 0, 451, 81));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 10, 61, 61));
        label_10->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
""));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(100, 20, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        label_11->setFont(font);
        ticket = new QLabel(groupBox_3);
        ticket->setObjectName("ticket");
        ticket->setGeometry(QRect(30, 20, 49, 41));
        ticket->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 130, 171, 41));
        label_2->setFont(font);
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(0, 270, 451, 80));
        groupBox_4->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 10, 61, 61));
        label_12->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 12;"));
        sub = new QLabel(groupBox_4);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(30, 20, 49, 41));
        sub->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(100, 20, 251, 41));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(0, 350, 451, 81));
        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 0, 451, 81));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 10, 61, 61));
        label_14->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        state = new QLabel(groupBox_5);
        state->setObjectName("state");
        state->setGeometry(QRect(30, 20, 49, 41));
        state->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(100, 20, 171, 41));
        label_15->setFont(font);
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 440, 421, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(0, 470, 451, 81));
        pushButton_6 = new QPushButton(groupBox_6);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 0, 451, 81));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 1;"));
        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 10, 61, 61));
        label_16->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        user = new QLabel(groupBox_6);
        user->setObjectName("user");
        user->setGeometry(QRect(30, 20, 49, 41));
        user->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(100, 20, 171, 41));
        label_17->setFont(font);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 570, 231, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        metro = new QLabel(groupBox);
        metro->setObjectName("metro");
        metro->setGeometry(QRect(10, 640, 61, 51));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(80, 660, 131, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(16);
        label_18->setFont(font2);
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 40, 411, 41));
        QFont font3;
        font3.setPointSize(20);
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;\n"
"color: black;\n"
"text-align: left;"));
        searchicon = new QLabel(groupBox);
        searchicon->setObjectName("searchicon");
        searchicon->setGeometry(QRect(370, 40, 51, 41));
        searchicon->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_7 = new QLabel(RenewSub);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(710, 30, 311, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(26);
        label_7->setFont(font4);
        label_8 = new QLabel(RenewSub);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(550, 110, 261, 51));
        label_8->setFont(font);
        type = new QComboBox(RenewSub);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName("type");
        type->setGeometry(QRect(880, 120, 181, 31));
        change = new QPushButton(RenewSub);
        change->setObjectName("change");
        change->setGeometry(QRect(710, 620, 261, 41));
        change->setFont(font1);
        change->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_3 = new QLabel(RenewSub);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(550, 260, 141, 31));
        label_3->setFont(font);
        label_4 = new QLabel(RenewSub);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 200, 141, 31));
        label_4->setFont(font);
        start = new QComboBox(RenewSub);
        start->addItem(QString());
        start->addItem(QString());
        start->setObjectName("start");
        start->setGeometry(QRect(720, 210, 91, 31));
        end = new QComboBox(RenewSub);
        end->addItem(QString());
        end->addItem(QString());
        end->setObjectName("end");
        end->setGeometry(QRect(720, 260, 91, 31));
        label_9 = new QLabel(RenewSub);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(550, 330, 311, 31));
        label_9->setFont(font);
        month1 = new QRadioButton(RenewSub);
        month1->setObjectName("month1");
        month1->setGeometry(QRect(550, 390, 131, 41));
        month1->setFont(font);
        month6 = new QRadioButton(RenewSub);
        month6->setObjectName("month6");
        month6->setGeometry(QRect(550, 450, 141, 41));
        month6->setFont(font);
        year = new QRadioButton(RenewSub);
        year->setObjectName("year");
        year->setGeometry(QRect(770, 450, 131, 41));
        year->setFont(font);
        month3 = new QRadioButton(RenewSub);
        month3->setObjectName("month3");
        month3->setGeometry(QRect(770, 390, 141, 41));
        month3->setFont(font);
        label_6 = new QLabel(RenewSub);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(550, 540, 241, 31));
        label_6->setFont(font);
        money = new QLineEdit(RenewSub);
        money->setObjectName("money");
        money->setGeometry(QRect(830, 540, 271, 31));
        QFont font5;
        font5.setPointSize(18);
        money->setFont(font5);
        money->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        money->setMaxLength(3);

        retranslateUi(RenewSub);

        QMetaObject::connectSlotsByName(RenewSub);
    } // setupUi

    void retranslateUi(QDialog *RenewSub)
    {
        RenewSub->setWindowTitle(QCoreApplication::translate("RenewSub", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QCoreApplication::translate("RenewSub", "GroupBox", nullptr));
        pushButton_2->setText(QString());
        label->setText(QString());
        home->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("RenewSub", "GroupBox", nullptr));
        pushButton_4->setText(QString());
        label_10->setText(QString());
        label_11->setText(QCoreApplication::translate("RenewSub", "Buy Ticket", nullptr));
        ticket->setText(QString());
        label_2->setText(QCoreApplication::translate("RenewSub", "Home Page", nullptr));
        groupBox_4->setTitle(QString());
        label_12->setText(QString());
        sub->setText(QString());
        label_13->setText(QCoreApplication::translate("RenewSub", "Subscription", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("RenewSub", "GroupBox", nullptr));
        pushButton_5->setText(QString());
        label_14->setText(QString());
        state->setText(QString());
        label_15->setText(QCoreApplication::translate("RenewSub", "Statistics", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("RenewSub", "GroupBox", nullptr));
        pushButton_6->setText(QString());
        label_16->setText(QString());
        user->setText(QString());
        label_17->setText(QCoreApplication::translate("RenewSub", "User", nullptr));
        pushButton->setText(QCoreApplication::translate("RenewSub", "Log out", nullptr));
        metro->setText(QString());
        label_18->setText(QCoreApplication::translate("RenewSub", "Egypt Metro", nullptr));
        pushButton_7->setText(QCoreApplication::translate("RenewSub", " Search......", nullptr));
        searchicon->setText(QString());
        label_7->setText(QCoreApplication::translate("RenewSub", "Renew Subscription", nullptr));
        label_8->setText(QCoreApplication::translate("RenewSub", "Choose Subscription", nullptr));
        type->setItemText(0, QCoreApplication::translate("RenewSub", "Types", nullptr));
        type->setItemText(1, QCoreApplication::translate("RenewSub", "Student", nullptr));
        type->setItemText(2, QCoreApplication::translate("RenewSub", "Public", nullptr));
        type->setItemText(3, QCoreApplication::translate("RenewSub", "Wallet", nullptr));

        change->setText(QCoreApplication::translate("RenewSub", "Change", nullptr));
        label_3->setText(QCoreApplication::translate("RenewSub", "End To", nullptr));
        label_4->setText(QCoreApplication::translate("RenewSub", "Start From", nullptr));
        start->setItemText(0, QCoreApplication::translate("RenewSub", "Start", nullptr));
        start->setItemText(1, QCoreApplication::translate("RenewSub", "Marvel", nullptr));

        end->setItemText(0, QCoreApplication::translate("RenewSub", "Start", nullptr));
        end->setItemText(1, QCoreApplication::translate("RenewSub", "Marvel", nullptr));

        label_9->setText(QCoreApplication::translate("RenewSub", "Duration of Subscription", nullptr));
        month1->setText(QCoreApplication::translate("RenewSub", "1 Month", nullptr));
        month6->setText(QCoreApplication::translate("RenewSub", "6 Months", nullptr));
        year->setText(QCoreApplication::translate("RenewSub", "Year", nullptr));
        month3->setText(QCoreApplication::translate("RenewSub", "3 Months", nullptr));
        label_6->setText(QCoreApplication::translate("RenewSub", "Money For Wallet", nullptr));
        money->setPlaceholderText(QCoreApplication::translate("RenewSub", "Amount To Charge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenewSub: public Ui_RenewSub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENEWSUB_H
/********************************************************************************
** Form generated from reading UI file 'renewsub.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENEWSUB_H
#define UI_RENEWSUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RenewSub
{
public:
    QPushButton *m1;
    QLabel *label_5;
    QLabel *label_19;
    QLabel *label_3;
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
    QLabel *label_6;
    QPushButton *signup;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QRadioButton *stud;
    QRadioButton *non;
    QComboBox *start;
    QComboBox *end;

    void setupUi(QDialog *RenewSub)
    {
        if (RenewSub->objectName().isEmpty())
            RenewSub->setObjectName("RenewSub");
        RenewSub->resize(1200, 700);
        RenewSub->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        m1 = new QPushButton(RenewSub);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(510, 40, 75, 71));
        m1->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 5;\n"
"border-image: url(:/images/img/left-arrow.png) 0 0 0 0 stretch stretch;\n"
"width: 50px;\n"
"height: 50px;"));
        label_5 = new QLabel(RenewSub);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 310, 251, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(30);
        label_5->setFont(font);
        label_19 = new QLabel(RenewSub);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(640, 30, 361, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(42);
        label_19->setFont(font1);
        label_3 = new QLabel(RenewSub);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(530, 150, 211, 51));
        label_3->setFont(font);
        groupBox = new QGroupBox(RenewSub);
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(22);
        label_15->setFont(font2);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(90, 400, 171, 41));
        label_16->setFont(font2);
        label_16->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(90, 320, 171, 41));
        label_18->setFont(font2);
        Metro = new QLabel(groupBox);
        Metro->setObjectName("Metro");
        Metro->setGeometry(QRect(20, 630, 61, 51));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(90, 650, 131, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(16);
        label_17->setFont(font3);
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(110, 580, 231, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font4.setPointSize(18);
        pushButton_6->setFont(font4);
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        username = new QLabel(groupBox);
        username->setObjectName("username");
        username->setGeometry(QRect(140, 230, 171, 41));
        username->setFont(font2);
        userpic = new QLabel(groupBox);
        userpic->setObjectName("userpic");
        userpic->setGeometry(QRect(150, 50, 151, 141));
        userpic->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 12;"));
        label_6 = new QLabel(RenewSub);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(530, 390, 231, 51));
        label_6->setFont(font);
        signup = new QPushButton(RenewSub);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(630, 580, 361, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font5.setPointSize(26);
        signup->setFont(font5);
        signup->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_4 = new QLabel(RenewSub);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 230, 211, 51));
        label_4->setFont(font);
        label_7 = new QLabel(RenewSub);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(890, 150, 211, 51));
        label_7->setFont(font);
        label_8 = new QLabel(RenewSub);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(900, 230, 211, 51));
        label_8->setFont(font);
        stud = new QRadioButton(RenewSub);
        stud->setObjectName("stud");
        stud->setGeometry(QRect(550, 490, 201, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font6.setPointSize(32);
        stud->setFont(font6);
        non = new QRadioButton(RenewSub);
        non->setObjectName("non");
        non->setGeometry(QRect(800, 490, 291, 41));
        non->setFont(font6);
        start = new QComboBox(RenewSub);
        start->setObjectName("start");
        start->setGeometry(QRect(840, 320, 291, 41));
        QFont font7;
        font7.setPointSize(24);
        start->setFont(font7);
        start->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));
        end = new QComboBox(RenewSub);
        end->setObjectName("end");
        end->setGeometry(QRect(840, 400, 291, 41));
        end->setFont(font7);
        end->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));

        retranslateUi(RenewSub);

        QMetaObject::connectSlotsByName(RenewSub);
    } // setupUi

    void retranslateUi(QDialog *RenewSub)
    {
        RenewSub->setWindowTitle(QCoreApplication::translate("RenewSub", "Dialog", nullptr));
        m1->setText(QString());
        label_5->setText(QCoreApplication::translate("RenewSub", "Start Station", nullptr));
        label_19->setText(QCoreApplication::translate("RenewSub", "Subscription", nullptr));
        label_3->setText(QCoreApplication::translate("RenewSub", "Start Date", nullptr));
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
        label_15->setText(QCoreApplication::translate("RenewSub", "History", nullptr));
        label_16->setText(QCoreApplication::translate("RenewSub", "User Data", nullptr));
        label_18->setText(QCoreApplication::translate("RenewSub", "Home Page", nullptr));
        Metro->setText(QString());
        label_17->setText(QCoreApplication::translate("RenewSub", "Egypt Metro", nullptr));
        pushButton_6->setText(QCoreApplication::translate("RenewSub", "Log out", nullptr));
        username->setText(QCoreApplication::translate("RenewSub", "Userename", nullptr));
        userpic->setText(QString());
        label_6->setText(QCoreApplication::translate("RenewSub", "End Station", nullptr));
        signup->setText(QCoreApplication::translate("RenewSub", "Confirm", nullptr));
        label_4->setText(QCoreApplication::translate("RenewSub", "End Date", nullptr));
        label_7->setText(QCoreApplication::translate("RenewSub", "Start Date", nullptr));
        label_8->setText(QCoreApplication::translate("RenewSub", "End Date", nullptr));
        stud->setText(QCoreApplication::translate("RenewSub", "Student", nullptr));
        non->setText(QCoreApplication::translate("RenewSub", "Non-Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenewSub: public Ui_RenewSub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENEWSUB_H
