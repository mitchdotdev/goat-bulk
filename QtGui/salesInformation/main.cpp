#include "salesInformation.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog::Dialog w;
    w.show();

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
    return a.exec();
}
