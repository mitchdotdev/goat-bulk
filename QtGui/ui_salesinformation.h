/********************************************************************************
** Form generated from reading UI file 'salesinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESINFORMATION_H
#define UI_SALESINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_salesInformation
{
public:

    void setupUi(QWidget *salesInformation)
    {
        if (salesInformation->objectName().isEmpty())
            salesInformation->setObjectName(QStringLiteral("salesInformation"));
        salesInformation->resize(400, 300);

        retranslateUi(salesInformation);

        QMetaObject::connectSlotsByName(salesInformation);
    } // setupUi

    void retranslateUi(QWidget *salesInformation)
    {
        salesInformation->setWindowTitle(QApplication::translate("salesInformation", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class salesInformation: public Ui_salesInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESINFORMATION_H
