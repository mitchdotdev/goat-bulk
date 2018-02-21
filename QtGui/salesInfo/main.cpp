#include "salesinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    salesInfo w;
    w.show();

    return a.exec();
}
