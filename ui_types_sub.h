/********************************************************************************
** Form generated from reading UI file 'types_sub.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPES_SUB_H
#define UI_TYPES_SUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_types_sub
{
public:
    QGroupBox *groupBox;
    QRadioButton *month1;
    QLabel *label_2;
    QComboBox *start;
    QComboBox *end;
    QLabel *label_4;
    QPushButton *ok;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *year;
    QRadioButton *month6;
    QRadioButton *month3;
    QLineEdit *money;
    QLabel *label_5;
    QComboBox *type;
    QLabel *pic;

    void setupUi(QWidget *types_sub)
    {
        if (types_sub->objectName().isEmpty())
            types_sub->setObjectName("types_sub");
        types_sub->resize(1200, 700);
        groupBox = new QGroupBox(types_sub);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(561, -1, 641, 711));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        month1 = new QRadioButton(groupBox);
        month1->setObjectName("month1");
        month1->setGeometry(QRect(50, 410, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(22);
        month1->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 40, 301, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font1.setPointSize(26);
        label_2->setFont(font1);
        start = new QComboBox(groupBox);
        start->setObjectName("start");
        start->setGeometry(QRect(250, 220, 91, 31));
        end = new QComboBox(groupBox);
        end->setObjectName("end");
        end->setGeometry(QRect(250, 280, 91, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 550, 231, 31));
        label_4->setFont(font);
        ok = new QPushButton(groupBox);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(210, 630, 211, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font2.setPointSize(18);
        ok->setFont(font2);
        ok->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 210, 141, 31));
        label_3->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 280, 91, 31));
        label_6->setFont(font);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 350, 311, 31));
        label_7->setFont(font);
        year = new QRadioButton(groupBox);
        year->setObjectName("year");
        year->setGeometry(QRect(260, 470, 81, 41));
        year->setFont(font);
        month6 = new QRadioButton(groupBox);
        month6->setObjectName("month6");
        month6->setGeometry(QRect(50, 470, 141, 41));
        month6->setFont(font);
        month3 = new QRadioButton(groupBox);
        month3->setObjectName("month3");
        month3->setGeometry(QRect(260, 410, 141, 41));
        month3->setFont(font);
        money = new QLineEdit(groupBox);
        money->setObjectName("money");
        money->setGeometry(QRect(310, 550, 271, 31));
        QFont font3;
        font3.setPointSize(18);
        money->setFont(font3);
        money->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 12;\n"
"color: black;"));
        money->setMaxLength(3);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 130, 261, 51));
        label_5->setFont(font);
        type = new QComboBox(groupBox);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName("type");
        type->setGeometry(QRect(350, 140, 141, 31));
        pic = new QLabel(types_sub);
        pic->setObjectName("pic");
        pic->setGeometry(QRect(0, 0, 561, 701));

        retranslateUi(types_sub);

        QMetaObject::connectSlotsByName(types_sub);
    } // setupUi

    void retranslateUi(QWidget *types_sub)
    {
        types_sub->setWindowTitle(QCoreApplication::translate("types_sub", "Form", nullptr));
        groupBox->setTitle(QString());
        month1->setText(QCoreApplication::translate("types_sub", "1 Month", nullptr));
        label_2->setText(QCoreApplication::translate("types_sub", "Mange Subscription", nullptr));
        label_4->setText(QCoreApplication::translate("types_sub", "Money For Wallet", nullptr));
        ok->setText(QCoreApplication::translate("types_sub", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("types_sub", "Start From", nullptr));
        label_6->setText(QCoreApplication::translate("types_sub", "End To", nullptr));
        label_7->setText(QCoreApplication::translate("types_sub", "Duration of Subscription", nullptr));
        year->setText(QCoreApplication::translate("types_sub", "Year", nullptr));
        month6->setText(QCoreApplication::translate("types_sub", "6 Months", nullptr));
        month3->setText(QCoreApplication::translate("types_sub", "3 Months", nullptr));
        money->setPlaceholderText(QCoreApplication::translate("types_sub", "Amount To Charge", nullptr));
        label_5->setText(QCoreApplication::translate("types_sub", "Choose Subscription", nullptr));
        type->setItemText(0, QCoreApplication::translate("types_sub", "Types", nullptr));
        type->setItemText(1, QCoreApplication::translate("types_sub", "Student", nullptr));
        type->setItemText(2, QCoreApplication::translate("types_sub", "Public", nullptr));
        type->setItemText(3, QCoreApplication::translate("types_sub", "Wallet", nullptr));

        pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class types_sub: public Ui_types_sub {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPES_SUB_H
