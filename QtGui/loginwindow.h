#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "menu.h"
#include <QMainWindow>
#include <QWidget>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

using namespace std;

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
