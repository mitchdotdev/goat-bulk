#include "inventory.h"

void testInventory()
{
	// just used as a pre-size for the array for declaration
	// (gives an error if i dont include it in declaration)
	int amount = 0; //Amount of items within the inventory list

	ifstream fin;
	string name;
	string purchaseItem;
	double price;
	int quantity;
	int index = 0;
	int tempInt;

	//Initialize the array size based on the inventory size
	fin.open("inventory.txt");
	while(fin)
	{
		getline(fin, name);
		if(fin) {
			fin >> price;
			fin.ignore(1000, '\n');
			fin >> quantity;
			fin.ignore(1000, '\n');
			amount++;
		}
	}
	fin.close();

	inventoryInfo inventory[amount];
	// opens the inventory text file and stores the data to the class array
	fin.open("inventory.txt");
	while(fin)
	{
		getline(fin, name);
		if(fin) {
			fin >> price;
			fin.ignore(1000, '\n');
			fin >> quantity;
			fin.ignore(1000, '\n');

			inventory[index].setInventoryInfo(name, price, quantity);
			index++;
		}
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

	cout << "Enter Quantity to Remove (negative numbers to add more items): ";
	cin  >> quantity;
	while(cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Error - Please enter a number: ";
		cin  >> quantity;
	}
	cin.ignore(1000, '\n');

	// checks the array for the item name and subtracts the sales from the inventory
	for(int i = 0; i < index; i++)
	{
		if(purchaseItem == inventory[i].getItemName())
		{
			tempInt = inventory[i].getInventoryQuant() - quantity;
			inventory[i].setInventoryQuant(tempInt);
			cout << "Updated Quantity of " << inventory[i].getItemName()
				 << "(s).\n";
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
}
