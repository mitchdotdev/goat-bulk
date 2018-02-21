#include "header.h"
#include "shoppers.h"
using namespace std;

//Do NOT save
void tempShopperTester() {
	string memType; //Regular/Executive Member
	cout << "Adding Temporary Shopper.\n";

	//REPLACE THIS WITH A BUTTON
	cout << "What membership type should the temporary member be "
			"(Regular, Executive or anything else to quit)? ";
	getline(cin, memType);

	if(memType[0] == 'r' || memType[0] == 'R') {
		memType = "Regular";
	}
	else if(memType[0] == 'e' || memType[0] == 'E') {
		memType = "Executive";
	}
	else {
		memType = "Quit";
	}

	if(memType != "Quit") {
		shopper newShopper( "TempMember", "T0000", memType, 0.00);

		cout << "Temporary Member Created.\n";
		newShopper.printInfo();

		//MakePurchaseorSomething();
	}

}

//Save
void addNewShopper(string memNum) {
	string memName; //Name of the new member
	string memType; //Type of Member
	cout << "Adding new Shopper.\n";

	//REPLACE THIS WITH A BUTTON
	cout << "What is the name of the new member? ";
	getline(cin, memName);

	//REPLACE THIS WITH A BUTTON
	cout << "What membership type should the member be "
			"(Regular, Executive or anything else to quit)? ";
	getline(cin, memType);

	if(memType[0] == 'r' || memType[0] == 'R') {
		memType = "Regular";
	}
	else if(memType[0] == 'e' || memType[0] == 'E') {
		memType = "Executive";
	}
	else {
		memType = "Quit";
	}

	if(memType != "Quit") {
		shopper newShopper( memName, memNum, memType, 0.00);

		cout << memType << " Member Created.\n";
		newShopper.printInfo();

		cout << "THIS IS CURRENTLY NOT SAVED, BUT SHOULD BE SAVED.\n";
		cout << "THIS IS CURRENTLY NOT SAVED, BUT SHOULD BE SAVED.\n";
		cout << "THIS IS CURRENTLY NOT SAVED, BUT SHOULD BE SAVED.\n";

		//MakePurchaseorSomething();
	}
}



