#include "saveFile.h"

/* This function will read in the data for the array from a text file
 *
 * PLEASE NOTE - Change the format of reading in/outputting if using different
 *               data types and how the text file is formatted
 *
 *                Also change the function prototype/parameters
 */
int readFile(string stringArray[], string fileName)
{
	int counter = 0;
	int index   = 0;
	ifstream fin;

	// converts the input file to c string
    fin.open(fileName);
	while(fin.fail())
	{
		cout << "Error - Input file does not exist. Enter any key to continue." << endl;
		fin.close();
		fin.clear();
		fin.ignore(1000,'\n');
		counter = -1;
		getline(cin, fileName);
	}

	if(counter != -1) {

		// stores the data until the end of the text file and below the MAX SIZE
		while(fin && index < SIZE)
		{
			  getline(fin, stringArray[index]);

		  ++index;

		  // used to find out the max size
		  ++counter;
		}

		// removes an extra count because of the while loop
		counter = counter - 1;

    	// closes the file
    	fin.close();
	}

    return counter;
  }



