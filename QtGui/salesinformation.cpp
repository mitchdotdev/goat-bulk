#include "salesinformation.h"
#include "ui_salesinformation.h"

salesInformation::salesInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::salesInformation)
{
    ui->setupUi(this);
    lastSale     = "00/00/0000";
    itemName     = "Milk";
    price        = 9.99;
    totalRevenue = 99.99;
    quantity     = 100;
}

void salesInformation::setSalesInfo(string date, string name, double priceSale,
                                    double ttRevenue, int quant)
{
    lastSale     = date;
    itemName     = name;
    price        = priceSale;
    totalRevenue = priceSale; // temp, set to ttRevenue
    quantity     = quant;
}

void salesInformation::printSalesInfo()
{
    // sets for 2 decimals
    cout << fixed << setprecision(2);
    cout << "Item Name:      "  << itemName     << endl;
    cout << "Last Sale Date: "  << lastSale     << endl;
    cout << "Price:          $" << price        << endl;
    cout << "Quantity:       "  << quantity     << endl;
    cout << "Total Revenue:  $" << totalRevenue << endl;
    cout << endl;
}

string salesInformation::getName()
{
    return itemName;
}

double salesInformation::getTotalRevenue()
{
    return totalRevenue;
}
salesInformation::~salesInformation()
{
    delete ui;
}
