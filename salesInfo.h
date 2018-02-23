#ifndef SALESINFO_H_
#define SALESINFO_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include "dateType.h"
using namespace std;

// salesInfo class
class salesInfo
{
	public:
		// constructs salesInfo members
		salesInfo();
		// sets the salesInfo members
		void setSalesInfo(string, string, double, double, int);
		// prints sales info
		void printSalesInfo();
		// gets the item name
		string getName();
		// gets the total revenue
		double getTotalRevenue();
	private:
		string lastSale;
		string itemName;
		double price;
		double totalRevenue;
		   int quantity;
};


// default constructor
salesInfo::salesInfo()
{
	lastSale     = "00/00/0000";
	itemName     = "Milk";
	price        = 9.99;
	totalRevenue = 99.99;
	quantity     = 100;
}

void salesInfo::setSalesInfo(string date, string name,
		             double priceSale, double ttRevenue, int quant)
{
	lastSale     = date;
	itemName     = name;
	price        = priceSale;
	totalRevenue = priceSale; // temp, please do total revenue
	quantity     = quant;
}

// print function
void salesInfo::printSalesInfo()
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
string salesInfo::getName()
{
	return itemName;
}

// get total revenue
double salesInfo::getTotalRevenue()
{
	return totalRevenue;
}

#endif
