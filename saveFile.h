#ifndef SAVEFILE_H_
#define SAVEFILE_H_

#include <fstream>
#include <iostream>
using namespace std;

// used before finding out the array max size from reading the file
const int SIZE = 100;

// pass in array and the file name
int readFile(string stringArray[], string fileName);

// pass in array, file name, and the array size
void saveFile(string stringArray[],string fileName ,int counter);

// pass in array, file name, and the array size to be changed
int addNew(string stringArray[],string fileName ,int counter);

#endif /* SAVEFILE_H_ */
