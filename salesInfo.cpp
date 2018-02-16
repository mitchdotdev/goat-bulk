#include "salesInfo.h"

int main()
{
	ifstream invent;               // for reading in the text file
	string date;                   // used for sale date
	string name;                   // item name
	string input;                  // user input for the sorting prompt
	string inputFile = "day1.txt"; // fix this to allow different text files
	double priceSale;              // price of the sale item
	double ttRevenue;              // ** FIX THIS ** add up the quantity * sale price
	int quant;                     // how many of the items were purchased
	int amount = 0;                // used to determine array size

	// temp variables
	string tempString;             // temp for string
	double temp1;                  // temp for double


	invent.open(inputFile);

	// gets the array max size
	while(invent)
	{
		amount++;
		getline(invent, tempString);
		getline(invent, tempString);
		getline(invent, tempString);
		invent >> temp1;
		invent >> temp1;
		invent.ignore(10000, '\n');
	}

	salesInfo inventory[amount];

	invent.close();

	// sets the constructor with the data from the text file
	invent.open(inputFile);
	for(int i = 0; i < amount; i++)
	{

		getline(invent, date);
		getline(invent, tempString);
		getline(invent, name);
		invent >> priceSale;
		invent >> quant;
		invent.ignore(10000, '\n');

		inventory[i].setSalesInfo(date, name,
		              priceSale, ttRevenue, quant);
	}

	// prints out the sales information for each item
	for(int i = 0; i < amount; i++)
	{
		inventory[i].printSalesInfo();
	}

	// user input for sorting
	cout << "[1] Sort by Name" << endl;
	cout << "[2] Sort by Total Revenue" << endl;
	getline(cin, input);

	// sort by name by bubble sort
	if(input[0] == '1')
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
	}

	// sort by total revenue by bubble sort
	if(input[0] == '2')
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
	}

	// prints sales information for each item after being sorted
	for(int i = 0; i < amount; i++)
	{
		inventory[i].printSalesInfo();
	}

	invent.close();

	return 0;
}
