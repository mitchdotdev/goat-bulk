#include "inventory.h"

// int testInventory();

// int main()
// {
//  testInventory()
// }

int testInventory()
{
	// just used as a pre-size for the array for declaration
	// (gives an error if i dont include it in declaration)
	int amount = 999;
	inventoryInfo inventory[amount];

	ifstream fin;
	string name;
	string purchaseItem;
	double price;
	int    quantity;
	int index = 0;
	int tempInt;


	// opens the inventory text file and stores the data to the class array
	fin.open("inventory.txt");
	while(fin)
	{
		getline(fin, name);
		fin >> price;
		fin.ignore(1000, '\n');
		fin >> quantity;
		fin.ignore(1000, '\n');

		inventory[index].setInventoryInfo(name, price, quantity);
		index++;
	}
	fin.close();


	// prints inventory information for each sales item
	for(int i = 0; i < index; i++)
	{
		inventory[i].printInventoryInfo();
	}

	// purchase input from user to get the search item and number
	// to be used to subtract from
	cout << "Enter item: ";
	getline(cin, purchaseItem);

	cout << "Enter Quantity: ";
	cin  >> quantity;

	cout << endl << endl;

	// FOR TESTING - cout << purchaseItem << " " << quantity << endl;

	// checks the array for the item name and subtracts the sales from the inventory
	for(int i = 0; i < index; i++)
	{
		cout << "1. " << inventory[i].getItemName() << endl;
		if(purchaseItem == inventory[i].getItemName())
		{
			tempInt = inventory[i].getInventoryQuant() - quantity;
			inventory[i].setInventoryQuant(tempInt);
		}
	}

	// prints inventory information for each sales item
	for(int i = 0; i < index; i++)
	{
		inventory[i].printInventoryInfo();
	}


	// rewrite/save to the file after changing inventory (quantity)
	ofstream fout;

	fout.open("inventory.txt");

	for(int i = 0; i < index; i++)
	{
		fout << inventory[i].getItemName();
		fout << endl;
		fout << inventory[i].getInventoryPrice();
		fout << endl;
		fout << inventory[i].getInventoryQuant();
		fout << endl;
	}
	fout.close();


	return 0;
}




