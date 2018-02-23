#include "loginwindow.h"
#include "salesinformation.h"
#include <QApplication>

void runSalesInfo();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow login;
    login.show();

    return a.exec();
}
