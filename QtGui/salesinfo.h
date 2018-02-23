#ifndef SALESINFO_H
#define SALESINFO_H

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class salesinfo
{
public:
    salesinfo();
    void setSalesInfo(string, string, double,
                      double, int);
    void printSalesInfo();
    string getName(); // returns the item name
    double getTotalRevenue(); // returns total revenue
    void runSalesInfo();
private:
    string lastSale;
    string itemName;
    double price;
    double totalRevenue;
    int quantity;
};
#endif // SALESINFO_H
