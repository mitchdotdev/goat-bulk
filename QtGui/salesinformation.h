#ifndef SALESINFORMATION_H
#define SALESINFORMATION_H

#include <QWidget>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

namespace Ui {
class salesInformation;
}

class salesInformation : public QWidget
{
    Q_OBJECT

public:
    explicit salesInformation(QWidget *parent = 0); // constructor
    void setSalesInfo(string, string, double, double, int);
    void printSalesInfo();
    string getName(); // returns the item name
    double getTotalRevenue(); // returns total revenue
    ~salesInformation();

private:
    Ui::salesInformation *ui;
    string lastSale;
    string itemName;
    double price;
    double totalRevenue;
    int quantity;
};

#endif // SALESINFORMATION_H
