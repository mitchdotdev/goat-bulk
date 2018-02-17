#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QVector>
#include <QTextStream>
#include <QFile>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
