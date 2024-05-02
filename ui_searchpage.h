/********************************************************************************
** Form generated from reading UI file 'searchpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPAGE_H
#define UI_SEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPage
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *start;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QComboBox *end;
    QLabel *label_4;
    QPushButton *m1;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPlainTextEdit *data;
    QPushButton *buy;
    QPushButton *buy_2;

    void setupUi(QDialog *SearchPage)
    {
        if (SearchPage->objectName().isEmpty())
            SearchPage->setObjectName("SearchPage");
        SearchPage->resize(1200, 700);
        SearchPage->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;"));
        groupBox = new QGroupBox(SearchPage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 120, 481, 201));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 25;"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 281, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font.setPointSize(32);
        label->setFont(font);
        start = new QComboBox(groupBox);
        start->setObjectName("start");
        start->setGeometry(QRect(30, 120, 421, 51));
        QFont font1;
        font1.setPointSize(24);
        start->setFont(font1);
        start->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));
        groupBox_2 = new QGroupBox(SearchPage);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(650, 120, 481, 201));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 25;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 0, 281, 91));
        label_3->setFont(font);
        end = new QComboBox(groupBox_2);
        end->setObjectName("end");
        end->setGeometry(QRect(30, 120, 421, 51));
        end->setFont(font1);
        end->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10;"));
        label_4 = new QLabel(SearchPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(510, 10, 201, 91));
        label_4->setFont(font);
        m1 = new QPushButton(SearchPage);
        m1->setObjectName("m1");
        m1->setGeometry(QRect(70, 30, 75, 71));
        m1->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
"border-radius: 5;\n"
"border-image: url(:/images/img/left-arrow.png) 0 0 0 0 stretch stretch;\n"
"width: 50px;\n"
"height: 50px;"));
        scrollArea = new QScrollArea(SearchPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 390, 1061, 291));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font2.setPointSize(24);
        scrollArea->setFont(font2);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 35;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1061, 291));
        data = new QPlainTextEdit(scrollAreaWidgetContents);
        data->setObjectName("data");
        data->setGeometry(QRect(10, 10, 1041, 271));
        data->setReadOnly(true);
        scrollArea->setWidget(scrollAreaWidgetContents);
        buy = new QPushButton(SearchPage);
        buy->setObjectName("buy");
        buy->setGeometry(QRect(160, 340, 271, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("BAXAUTRIAL")});
        font3.setPointSize(18);
        buy->setFont(font3);
        buy->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));
        buy_2 = new QPushButton(SearchPage);
        buy_2->setObjectName("buy_2");
        buy_2->setGeometry(QRect(770, 340, 271, 41));
        buy_2->setFont(font3);
        buy_2->setStyleSheet(QString::fromUtf8("background-color: #FFC200;\n"
"border-radius: 12;\n"
"color: black;"));

        retranslateUi(SearchPage);

        QMetaObject::connectSlotsByName(SearchPage);
    } // setupUi

    void retranslateUi(QDialog *SearchPage)
    {
        SearchPage->setWindowTitle(QCoreApplication::translate("SearchPage", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("SearchPage", "Start Station", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("SearchPage", "End Station", nullptr));
        label_4->setText(QCoreApplication::translate("SearchPage", "Where To", nullptr));
        m1->setText(QString());
        buy->setText(QCoreApplication::translate("SearchPage", "Buy Ticket", nullptr));
        buy_2->setText(QCoreApplication::translate("SearchPage", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPAGE_H
