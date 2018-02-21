#ifndef SALESINFORMATION_H
#define SALESINFORMATION_H

#include <QDialog>
#include "datetype.h"
#include "salesinfo.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    // constructs salesInfo members
//    salesInfo();
    // sets the salesInfo members
    void setSalesInfo(string, string, double, double, int);
    // prints sales info
    void printSalesInfo();
    // gets the item name
    string getName();
    // gets the total revenue
    double getTotalRevenue();
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked(int, Dialog []);

    void on_pushButton_2_clicked(int, Dialog[]);

private:
    string lastSale;
    string itemName;
    double price;
    double totalRevenue;
       int quantity;
    Ui::Dialog *ui;
};

// default constructor
//Dialog::salesInfo()
//{
//    lastSale     = "00/00/0000";
//    itemName     = "Milk";
//    price        = 9.99;
//    totalRevenue = 99.99;
//    quantity     = 100;
//}

// constructor
void Dialog::setSalesInfo(string date, string name,
                     double priceSale, double ttRevenue, int quant)
{
    lastSale     = date;
    itemName     = name;
    price        = priceSale;
    totalRevenue = priceSale; // temp, please do total revenue
    quantity     = quant;
}

// print function
void Dialog::printSalesInfo()
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

// get item name
string Dialog::getName()
{
    return itemName;
}

// get total revenue
double Dialog::getTotalRevenue()
{
    return totalRevenue;
}

Dialog::Dialog(): QDialog(parent)
{
    lastSale     = "00/00/0000";
    itemName     = "Milk";
    price        = 9.99;
    totalRevenue = 99.99;
    quantity     = 100;
}

#endif // SALESINFORMATION_H
