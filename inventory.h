#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <iostream>
#include <fstream>
using namespace std;

class inventoryInfo
{
public:
	inventoryInfo();                                 // default constructor
	void   setInventoryInfo(string, double, int);    // constructor w/ parameters
	void   printInventoryInfo();                     // print function
	string getItemName();                            // access to product name
	double getInventoryPrice();						// access to sales price
	int    getInventoryQuant();                      // access to quantity of the product
	void   setInventoryQuant(int);                   // ability to change the set quantity of the product

private:
	string productName;
	double salesPrice;
	int    inventoryQuantity;
};

inventoryInfo::inventoryInfo()
{
	productName       = "";
	salesPrice        = 0;
	inventoryQuantity = 0;
}

void inventoryInfo::setInventoryInfo(string name, double price, int quantity)
{
	productName       = name;
	salesPrice        = price;
	inventoryQuantity = quantity;
}

void inventoryInfo::printInventoryInfo()
{
	cout << "Product Name:       "  << productName     << endl;
	cout << "Sale Price:        $"  << salesPrice     << endl;
	cout << "Stock in Inventory: "  << inventoryQuantity     << endl;
	cout << endl;
}

string inventoryInfo::getItemName()
{
	return productName;
}

int inventoryInfo::getInventoryQuant()
{
	return inventoryQuantity;
}

double inventoryInfo::getInventoryPrice()
{
	return salesPrice;
}

void inventoryInfo::setInventoryQuant(int quant)
{
	inventoryQuantity = quant;
}


#endif /* INVENTORY_H_ */
