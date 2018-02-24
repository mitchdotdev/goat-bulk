#include "inventory.h"

// void testInventory();
//
// int main()
// {
//  testInventory();
// }

 void testInventory()
 {
 	// just used as a pre-size for the array for declaration
 	// (gives an error if i dont include it in declaration)
 	int amount = 0; //Amount of items within the inventory list

 	ifstream fin;         // used for input read in file
 	ofstream fout;        // used for output file
 	string name;          // item name
 	string purchaseItem;  // search item used for finding what quantity to change
 	string deleteItem;    // search item used for finding what item to delete
 	double price;         // item price
 	int quantity;         // item quantity
 	int tempInt;          // used for quantity addition/subtraction
 	int index = 0;        // used to keep the original array size

 	/***************************************************************
 	 * Initialize the array size based on the inventory size       *
 	 ***************************************************************/
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

 	// declare class array
 	inventoryInfo inventory[amount];

 	/***********************************
 	 * populate the array              *
 	 ***********************************/
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
 			++index;
 		}
 	}
 	fin.close();

 	/*****************************************************
 	 * prints inventory information for each sales item  *
 	 *****************************************************/
 	for(int i = 0; i < index; i++)
 	{
 		inventory[i].printInventoryInfo();
 	}


 	/****************************************************************
 	 * purchase input from user to get the search item and number   *
 	 * - to be used to subtract from                                *
 	 ****************************************************************/
 	cout << "Enter item: ";
 	getline(cin, purchaseItem);

 	cout << "Enter Quantity to Remove (negative numbers to add more items): ";
 	cin  >> quantity;
  	cin.ignore(1000,'\n');
 	cin.clear();

 	// checks the array for the item name and subtracts the sales from the inventory
 	for(int i = 0; i < index; i++)
 	{
 		if(purchaseItem == inventory[i].getItemName())
 		{
 			tempInt = inventory[i].getInventoryQuant() - quantity;
 			inventory[i].setInventoryQuant(tempInt);
 			cout << "Updated Quantity of " << inventory[i].getItemName()
 				 << "(s).\n\n";
 		}
 	}

 	cout << endl;
 	/*****************************************************
 	 * prints inventory information for each sales item  *
 	 *****************************************************/
 	for(int i = 0; i < index; i++)
 	{
 		inventory[i].printInventoryInfo();
 	}


 	/*****************************************************************
 	 * rewrite/save to the file after changing inventory (quantity)  *
 	 *****************************************************************/
 	fout.open("inventory.txt");
 	for(int i = 0; i < index; i++)
 	{
 		fout << inventory[i].getItemName();
 		fout << endl;
 		fout << inventory[i].getInventoryPrice();
 		fout << endl;
 		fout << inventory[i].getInventoryQuant();
	 	if(i + 1 < index)
	 	{
	 		fout << endl;
	 	}
 	}

 	 fout.close();


 	 /*****************************
 	  * add new item to inventory *
 	  *****************************/
 	cout << "Enter new item to be added: ";
 	getline(cin, name);

 	cout << "Enter the price of the item: ";
 	cin  >> price;
  	cin.ignore(1000,'\n');
 	cin.clear();

 	cout << "Enter the Inventory stock: ";
 	cin  >> quantity;
  	cin.ignore(1000,'\n');
 	cin.clear();

 	// increment size for the array
 	++amount;


 	/**************************************************************
 	 * output the new item to the inventory database (input file) *
 	 **************************************************************/
 	fout.open("inventory.txt", fout.app);
 	fout <<  endl << name;
 	fout << endl;
 	fout << price;
 	fout << endl;
 	fout << quantity;
 	fout.close();

 	cout << endl << "Item has been added to the inventory database." << endl;

 	// re-make the array with the proper new max size
 	inventoryInfo newInventory[amount];

 	/**********************
 	 * populate the array *
 	 **********************/
 	fin.open("inventory.txt");
 	index = 0;
 	while(fin)
 	{
 		getline(fin, name);
 		fin >> price;
 		fin.ignore(1000, '\n');
 		fin >> quantity;
 		fin.ignore(1000, '\n');

 		newInventory[index].setInventoryInfo(name, price, quantity);
 		++index;
 	}
 	fin.close();

    // used for formatting output
 	cout << endl;

	/****************************************************
	 * prints inventory information for each sales item *
	 ****************************************************/
	for(int i = 0; i < index; i++)
	{
		newInventory[i].printInventoryInfo();
	}


 	/************************************************************************************
 	 * delete item from inventory                                                       *
 	 * to use the delete functionality, need to re-make the array with the proper size  *
 	 ************************************************************************************/

	// get the search item from user
	int lines = 0;
	int lineToDelete = -1;
	string temp;
	cout << "Enter item name to delete: ";
	getline(cin, deleteItem);

	// get max size for the array
	fin.open("inventory.txt");
	while(fin)
	{
 		getline(fin, temp);
		lines++;
	}
	fin.close();

	// declare string array
	string deleteInventory[lines];

	// populate the string array
	fin.open("inventory.txt");
	lines = 0;
	while(fin) {
		getline(fin, deleteInventory[lines]);
		lines++;
	}
	fin.close();

	// determine the line(s) to delete
	for(int i = 0; i < lines; i++)
	{
		if(deleteItem == deleteInventory[i]) {
			lineToDelete = i;
		}
	}

	// re-write the file with the deleted item
	fout.open("inventory.txt");
	if(lineToDelete > -1)
	{
		for(int b = 0; b < lines - 1; b++)
		{
			if(lineToDelete == b)
			{
				b += 2;
			}
			else
			{
				// for when you delete the first item from the database
				if(lineToDelete == 0)
				{
					fout << deleteInventory[b];
					if(b + 2 < lines)
					{
						fout << endl;
					}
				}
				else if(b == 0)
				{
					fout << deleteInventory[b];
				}
				else
				{
					fout << endl << deleteInventory[b];
				}
			}
		}
	}
	fout.close();

	cout << endl << "Item has been deleted." << endl;
}
