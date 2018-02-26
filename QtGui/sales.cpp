#include "sales.h"
#include "ui_sales.h"

Sales::Sales(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sales)
{
    ui->setupUi(this);
}

Sales::~Sales()
{
    delete ui;
}

void Sales::on_pushButton_back_clicked()
{
    Menu *menuPtr = new Menu(this);
    this->close();
    menuPtr->show();
}

/*void Sales::on_comboBox_currentTextChanged(const QString &arg1) //Used for checking when an option is changed
{

}*/
