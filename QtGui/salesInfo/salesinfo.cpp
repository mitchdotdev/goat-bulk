#include "salesinfo.h"
#include "ui_salesinfo.h"

salesInfo::salesInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::salesInfo)
{
    ui->setupUi(this);
}

salesInfo::~salesInfo()
{
    delete ui;
}
