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

shopper::shopper(string memName, string memNum, string memType, float totAmtSpt) {
	memberName 		 = memName;
	membershipNumber = memNum;
	membershipType   = memType;
	totalAmountSpent = totAmtSpt;
}

#endif /* SHOPPERS_H_ */
