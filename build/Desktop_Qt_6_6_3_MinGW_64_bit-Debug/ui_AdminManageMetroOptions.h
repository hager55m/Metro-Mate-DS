/********************************************************************************
** Form generated from reading UI file 'AdminManageMetroOptions.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMANAGEMETROOPTIONS_H
#define UI_ADMINMANAGEMETROOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>

QT_BEGIN_NAMESPACE

class Ui_AdminManageMetro
{
public:
    QGroupBox *groupBox;

    void setupUi(QDialog *AdminManageMetro)
    {
        if (AdminManageMetro->objectName().isEmpty())
            AdminManageMetro->setObjectName("AdminManageMetro");
        AdminManageMetro->resize(1200, 760);
        groupBox = new QGroupBox(AdminManageMetro);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 371, 521));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: #BDBDBD;\n"
""));

        retranslateUi(AdminManageMetro);

        QMetaObject::connectSlotsByName(AdminManageMetro);
    } // setupUi

    void retranslateUi(QDialog *AdminManageMetro)
    {
        AdminManageMetro->setWindowTitle(QCoreApplication::translate("AdminManageMetro", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AdminManageMetro", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminManageMetro: public Ui_AdminManageMetro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMANAGEMETROOPTIONS_H
