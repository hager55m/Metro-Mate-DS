/********************************************************************************
** Form generated from reading UI file 'adminstations.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSTATIONS_H
#define UI_ADMINSTATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AdminStations
{
public:

    void setupUi(QDialog *AdminStations)
    {
        if (AdminStations->objectName().isEmpty())
            AdminStations->setObjectName("AdminStations");
        AdminStations->resize(1200, 700);

        retranslateUi(AdminStations);

        QMetaObject::connectSlotsByName(AdminStations);
    } // setupUi

    void retranslateUi(QDialog *AdminStations)
    {
        AdminStations->setWindowTitle(QCoreApplication::translate("AdminStations", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminStations: public Ui_AdminStations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSTATIONS_H
