#ifndef SALESINFO_H
#define SALESINFO_H

#include <QDialog>

namespace Ui {
class salesInfo;
}

class salesInfo : public QDialog
{
    Q_OBJECT

public:
    explicit salesInfo(QWidget *parent = 0);
    ~salesInfo();

private:
    Ui::salesInfo *ui;
};

#endif // SALESINFO_H
