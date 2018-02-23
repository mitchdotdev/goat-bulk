/********************************************************************************
** Form generated from reading UI file 'sales.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_H
#define UI_SALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sales
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget_sales;
    QPushButton *pushButton_back;
    QComboBox *comboBox_Info;
    QLabel *label_infoSelect;

    void setupUi(QMainWindow *Sales)
    {
        if (Sales->objectName().isEmpty())
            Sales->setObjectName(QStringLiteral("Sales"));
        Sales->resize(800, 569);
        Sales->setMinimumSize(QSize(800, 569));
        Sales->setMaximumSize(QSize(800, 569));
        centralwidget = new QWidget(Sales);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget_sales = new QTableWidget(centralwidget);
        tableWidget_sales->setObjectName(QStringLiteral("tableWidget_sales"));
        tableWidget_sales->setGeometry(QRect(10, 10, 781, 521));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(710, 540, 75, 23));
        comboBox_Info = new QComboBox(centralwidget);
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->addItem(QString());
        comboBox_Info->setObjectName(QStringLiteral("comboBox_Info"));
        comboBox_Info->setGeometry(QRect(130, 540, 111, 22));
        label_infoSelect = new QLabel(centralwidget);
        label_infoSelect->setObjectName(QStringLiteral("label_infoSelect"));
        label_infoSelect->setGeometry(QRect(10, 540, 111, 21));
        Sales->setCentralWidget(centralwidget);

        retranslateUi(Sales);

        QMetaObject::connectSlotsByName(Sales);
    } // setupUi

    void retranslateUi(QMainWindow *Sales)
    {
        Sales->setWindowTitle(QApplication::translate("Sales", "MainWindow", nullptr));
        pushButton_back->setText(QApplication::translate("Sales", "Back", nullptr));
        comboBox_Info->setItemText(0, QApplication::translate("Sales", "Select an Option", nullptr));
        comboBox_Info->setItemText(1, QApplication::translate("Sales", "Day 1", nullptr));
        comboBox_Info->setItemText(2, QApplication::translate("Sales", "Day 2", nullptr));
        comboBox_Info->setItemText(3, QApplication::translate("Sales", "Day 3", nullptr));
        comboBox_Info->setItemText(4, QApplication::translate("Sales", "Day 4", nullptr));
        comboBox_Info->setItemText(5, QApplication::translate("Sales", "Day 5", nullptr));
        comboBox_Info->setItemText(6, QApplication::translate("Sales", "Day 6", nullptr));
        comboBox_Info->setItemText(7, QApplication::translate("Sales", "Day 7", nullptr));
        comboBox_Info->setItemText(8, QApplication::translate("Sales", "Days 1 - 7", nullptr));

        label_infoSelect->setText(QApplication::translate("Sales", "Information Selection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sales: public Ui_Sales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_H
