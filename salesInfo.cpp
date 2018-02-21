#include "header.h"
#include "salesInfo.h"
using namespace std;

void salesInformation()
{
	const int MAX_FILES = 7;
	ifstream invent;               // for reading in the text file
	string date;                   // used for sale date
	string name;                   // item name
	string input;                  // user input for the sorting prompt

	//Input from files can accept an empty line at the end, or a blank line.
	string inputFile[MAX_FILES] =
	{ "day1.txt", "day2.txt", "day3.txt", "day4.txt",
	  "day5.txt", "day6.txt", "day7.txt" };
	double priceSale;              // price of the sale item
	double ttRevenue;              // ** FIX THIS ** add up the quantity * sale price
	int quant;                     // how many of the items were purchased
	int amount = 0;                // used to determine array size
	int currentInFile = 0;

	// temp variables
	string tempString;             // temp for string
	double temp1;                  // temp for double

	while(currentInFile < MAX_FILES) {
		invent.open(inputFile[currentInFile]);

		// gets the array max size
		while(invent)
		{
			getline(invent, tempString);
			getline(invent, tempString);
			getline(invent, tempString);
			invent >> temp1;
			invent >> temp1;
			if(invent) {
				invent.ignore(10000, '\n');
				amount++;
			}
		}
		invent.close();
		currentInFile++;
	}

	salesInfo inventory[amount];

	// sets the constructor with the data from the text file
	currentInFile = 0;
	int looper = 0;
	while(currentInFile < MAX_FILES) {
		invent.open(inputFile[currentInFile]);
		while(invent && looper < amount)//for(int i = 0; i < amount; i++)
		{
			getline(invent, date);
			getline(invent, tempString);
			getline(invent, name);
			invent >> priceSale;
			invent >> quant;
			inventory[looper].setSalesInfo(date, name,
						  priceSale, ttRevenue, quant);
			//cout << name << endl;
			if(invent) {
				invent.ignore(10000, '\n');
				looper++;
			}
		}
		invent.close();
		currentInFile++;
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
				/*if(isupper(inventory[j].getName()[0])    == false ||
				   isupper(inventory[j + 1].getName()[0] == false)) {
					if(isupper(inventory[j].getName()[0] == false &&
					   inventory[j].getName()[0] - 32 > inventory[j+1].getName()[0])) {
						salesInfo temp;
						temp = inventory[j];
						inventory[j] = inventory[j + 1];
						inventory[j + 1] = temp;
					}
				}
				else */ if(inventory[j].getName() > inventory[j + 1].getName())
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
}
