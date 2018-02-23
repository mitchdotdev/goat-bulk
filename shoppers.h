/**********************************************************************
 * Mason Godfrey, Tristan Ligtvoet, Mitchell O'Hair, Kenneth Casimiro *
 * Mon,Wed 1:30p * Bulk Club * Document created during Sprint 1       *
 **********************************************************************/
#ifndef SHOPPERS_H_
#define SHOPPERS_H_
using namespace std;

class shopper {
	public:
		void setMembershipNumber(string memNum);
		bool getTempMember();
		string getMembershipNumber();
		void printInfo();
		void addShopper();
		void delShopper();
		shopper(string memName, string memNum, string memType, float totAmtSpt);
	private:
		string memberName;
		string membershipNumber;
		string membershipType;
		//string membershipExpDate;
		float totalAmountSpent;
		//float rebate; - EXECUTIVE MEMBERS ONLY
};

bool shopper::getTempMember() {
	if(membershipNumber[0] == 'T') {
	return true;
	} else {
	return false;
	}
}

void shopper::setMembershipNumber(string memNum) {
	membershipNumber = memNum;
}

string shopper::getMembershipNumber() {
	return membershipNumber;
}

void shopper::printInfo() {
	cout << "Member Name:        " << memberName       << endl
		 << "Membership Number:  " << membershipNumber << endl
		 << "Membership Type:    " << membershipType   << endl
		 << "total Amount Spent: " << totalAmountSpent << endl;

}

void shopper::addShopper() {

	ofstream fout;
	fout.open("warehouse shoppers.txt", fstream::app);

	fout << endl << memberName
		 << endl << membershipNumber
		 << endl << membershipType
		 << endl << "Date goes here";
	fout.close();
}

void shopper::delShopper() {
	string memberSearchingFor;
	string temp;
	ifstream fin;
	ofstream fout;
	int lines = 0;
	int lineToDelete = -1;

	cout << "Please enter the member to delete: ";
	getline(cin, memberSearchingFor);

	cout << "JK, this code isn't implemented yet.\n";

	fin.open("warehouse shoppers.txt");
	while(fin) {
		getline(fin, temp);
		lines++;
	}
	fin.close();

	string fileContents[lines];

	fin.open("warehouse shoppers.txt");

	lines = 0;
	while(fin) {
		getline(fin, fileContents[lines]);
		lines++;
	}
	fin.close();

	for(int i = 0; i < lines; i++) {
		if(memberSearchingFor == fileContents[i]) {
			lineToDelete = i;
		}
	}
	fout.open("warehouse shoppers.txt");
	if(lineToDelete > -1) {
		for(int b = 0; b < lines - 1; b++) {
			if(lineToDelete == b) {
				b += 3;
			}
			else {
				if(b == 0) {
					fout << fileContents[b];
				}
				else {
					fout << endl << fileContents[b];
				}
			}
		}
	}
	fout.close();
}

shopper::shopper(string memName, string memNum, string memType, float totAmtSpt) {
	memberName 		 = memName;
	membershipNumber = memNum;
	membershipType   = memType;
	totalAmountSpent = totAmtSpt;
}

#endif /* SHOPPERS_H_ */
