#ifndef NEWSALES_H
#define NEWSALES_H

#include "menu.h"
#include <iostream>
#include <QMainWindow>
#include <QInputDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class newSales;
}

class newSales : public QMainWindow
{
    Q_OBJECT

public:
    explicit newSales(QWidget *parent = 0);
    ~newSales();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_back_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::newSales *ui;
    QString currentFile;
};

#endif // NEWSALES_H
