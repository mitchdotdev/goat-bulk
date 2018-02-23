#include "saveFile.h"

/* This function will output the stored data from the array to the file
 *
 * PLEASE NOTE - Change the format of reading in/outputting if using different
 *               data types and how the text file is formatted
 *
 *               Also change the function prototype/parameters
 */

void saveFile(string stringArray[],string fileName ,int counter)
{
	string outputFile;
	ofstream fout;

	// makes it to a c string to be used for fout
	fout.open(fileName);

	// outputs the stored data from the array to the text file
	for(int index = 0; index < counter; ++index)
	{
		fout << stringArray[index] << endl;
	}

	// FIX - outputs an additional line to the file (either this function or addNew.cpp)

	  // closes the file
	  fout.close();
}
