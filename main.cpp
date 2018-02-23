/**********************************************************************
 * Mason Godfrey, Tristan Ligtvoet, Mitchell O'Hair, Kenneth Casimiro *
 * Mon,Wed 1:30p * Bulk Club * Document created during Sprint 1       *
 **********************************************************************/
#include "header.h"
using namespace std;

bool login();
void testSaveFile();
void salesInformation();
void testInventory();
void tempShopperTester();
void addNewShopper(string memNum);

const bool SKIP_LOGIN = true;

int main() {

	string memNum = "00000";

	if(SKIP_LOGIN == false)
	{
		login();
	}

	addNewShopper(memNum);

	testInventory();
	tempShopperTester();
	testSaveFile();
	salesInformation();

	return 0;
}
