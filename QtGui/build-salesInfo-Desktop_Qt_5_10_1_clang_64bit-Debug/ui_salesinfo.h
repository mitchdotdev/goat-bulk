/********************************************************************************
** Form generated from reading UI file 'salesinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESINFO_H
#define UI_SALESINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_salesInfo
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *salesInfo)
    {
        if (salesInfo->objectName().isEmpty())
            salesInfo->setObjectName(QStringLiteral("salesInfo"));
        salesInfo->resize(400, 300);
        listWidget = new QListWidget(salesInfo);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 256, 192));
        pushButton = new QPushButton(salesInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 240, 113, 32));
        pushButton_2 = new QPushButton(salesInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 240, 171, 32));

        retranslateUi(salesInfo);

        QMetaObject::connectSlotsByName(salesInfo);
    } // setupUi

    void retranslateUi(QDialog *salesInfo)
    {
        salesInfo->setWindowTitle(QApplication::translate("salesInfo", "salesInfo", nullptr));
        pushButton->setText(QApplication::translate("salesInfo", "Sort by Name", nullptr));
        pushButton_2->setText(QApplication::translate("salesInfo", "Sort by Total Revenue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class salesInfo: public Ui_salesInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESINFO_H
