#include "header.h"
#include "saveFile.h"


void testSaveFile()
{
	string fileName;
	string stringArray[SIZE];
	int    count;

	count = 0;

	// Have some way in QT to link the fileName to be used
	cout << "Enter File Name: ";
	getline(cin, fileName);

	// returns the max array size
	count = readFile(stringArray, fileName);

	// To see output from the file saved to the array (printFunction)
	for(int index = 0; index < count; ++index)
	{
	    cout << stringArray[index];
	    cout << endl;
	}


	// returns the new max array size
	count = addNew(stringArray, fileName, count);

	// rewrite to the file if their is any changes to existing data (NOT NEW DATA)
	saveFile(stringArray, fileName , count);

}




