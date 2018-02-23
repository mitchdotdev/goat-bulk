/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralWidget;
    QComboBox *combobox_selection;
    QLabel *label_picture;
    QLabel *label_menuSelection;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(397, 244);
        Menu->setMinimumSize(QSize(397, 244));
        Menu->setMaximumSize(QSize(397, 244));
        centralWidget = new QWidget(Menu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        combobox_selection = new QComboBox(centralWidget);
        combobox_selection->addItem(QString());
        combobox_selection->addItem(QString());
        combobox_selection->setObjectName(QStringLiteral("combobox_selection"));
        combobox_selection->setGeometry(QRect(110, 150, 171, 22));
        combobox_selection->setCursor(QCursor(Qt::ArrowCursor));
        combobox_selection->setAutoFillBackground(false);
        label_picture = new QLabel(centralWidget);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(130, 10, 151, 121));
        label_menuSelection = new QLabel(centralWidget);
        label_menuSelection->setObjectName(QStringLiteral("label_menuSelection"));
        label_menuSelection->setGeometry(QRect(26, 150, 71, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 180, 75, 23));
        Menu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Menu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Menu->setStatusBar(statusBar);

        retranslateUi(Menu);
        QObject::connect(pushButton, SIGNAL(clicked()), Menu, SLOT(close()));

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", nullptr));
        combobox_selection->setItemText(0, QApplication::translate("Menu", "Select an Option", nullptr));
        combobox_selection->setItemText(1, QApplication::translate("Menu", "Sales Information", nullptr));

        label_picture->setText(QString());
        label_menuSelection->setText(QApplication::translate("Menu", "Menu Selection", nullptr));
        pushButton->setText(QApplication::translate("Menu", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
