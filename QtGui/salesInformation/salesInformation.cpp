#include "salesInformation.h"
#include "ui_salesInformation.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked(int amount, Dialog inventory[])
{
    for(int i = 0; i < amount - 1; ++i)
            {
                for(int j = 0; j < amount - i - 1; ++j)
                {
                    if(inventory[j].getName() > inventory[j + 1].getName())
                    {
                        salesInfo temp;
                        temp = inventory[j];
                        inventory[j] = inventory[j + 1];
                        inventory[j + 1] = temp;
                    }
                }
            }

    // prints sales information for each item after being sorted
    for(int i = 0; i < amount; i++)
    {
        inventory[i].printSalesInfo();
    }
}

void Dialog::on_pushButton_2_clicked(int amount, Dialog inventory[])
{
    for(int i = 0; i < amount - 1; ++i)
            {
                for(int j = 0; j < amount - i - 1; ++j)
                {
                    if(inventory[j].getTotalRevenue() > inventory[j + 1].getTotalRevenue())
                    {
                        salesInfo temp;
                        temp = inventory[j];
                        inventory[j] = inventory[j + 1];
                        inventory[j + 1] = temp;
                    }
                }
            }

    // prints sales information for each item after being sorted
    for(int i = 0; i < amount; i++)
    {
        inventory[i].printSalesInfo();
    }
}
