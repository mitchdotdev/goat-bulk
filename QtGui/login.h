#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QVector>

using namespace std;

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
