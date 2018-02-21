#include "saveFile.h"
/* This function will use append to add new data to the end of the text file. It will also return a counter to be used as
 * the new size for the array.
 *
 * For example - If the file started with 13 inputs, then you add 2, it will make the new max size 15
 *
 * Example on how it stores/outputs
 * ------------------------
 * startOfFile
 * oldData
 * oldData
 * oldData
 * oldData
 * endOfFile
 *
 * Using the function (still need an input option to add the new data)
 * -------------------------------------------------------------------
 * startOfFile
 * oldData
 * oldData
 * oldData
 * oldData
 * newData
 * endOfFile
 *
 *
 *PLEASE NOTE - Change the format of reading in/outputting if using different
 *              data types and how the text file is formatted
 *
 *              Also change the function prototype/parameters
 *
 */
int addNew(string stringArray[],string fileName ,int counter)
{
	/* APPEND ONLY WORKS FOR NEW DATA IN THE FILE(ADDS THE NEW DATA TO THE BOTTOM OF THE TXT FILE) - DOES NOT CHANGE EXISTING DATA */

	ofstream fout;
	int finalCounter;

	// sets the array size to the last so it knows where to start
	finalCounter = counter + 1;

	// appends the file to allow the new players information to be saved/outputted
	fout.open(fileName, fout.app);

	// outputs the new data to the file to be saved - change the variables/how it stores if the file is different
	for(int index = counter; index < finalCounter; ++index)
	{
		fout << stringArray[index] << endl;
	}

	// FIX - outputs an additional line to the file (either this function or saveFile.cpp)

	  // closes the file
	  fout.close();

	  // returns the counter so it knows the new MAX SIZE of the array
	  return finalCounter;
}




