/**********************************************************************
 * Mason Godfrey, Tristan Ligtvoet, Mitchell O'Hair, Kenneth Casimiro *
 * Mon,Wed 1:30p * Bulk Club * Document created during Sprint 1       *
 **********************************************************************/
#include "header.h"
#include "shoppers.h"

bool login();
void testSaveFile();
void salesInformation();

const bool SKIP_LOGIN = 0;

using namespace std;

int main() {

	if(SKIP_LOGIN == false)
	{
		login();
	}

	testSaveFile();
	salesInformation();

	return 0;
}
