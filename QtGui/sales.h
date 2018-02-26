#ifndef SALES_H
#define SALES_H

#include "menu.h"
#include <QMainWindow>

namespace Ui {
class Sales;
}

class Sales : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sales(QWidget *parent = 0);
    ~Sales();

private slots:
    //void on_comboBox_currentTextChanged(const QString &arg1);
    void on_pushButton_back_clicked();

private:
    Ui::Sales *ui;
};

#endif // SALES_H
