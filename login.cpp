/**********************************************************************
 * Mason Godfrey, Tristan Ligtvoet, Mitchell O'Hair, Kenneth Casimiro *
 * Mon,Wed 1:30p * Bulk Club * Document created during Sprint 1       *
 **********************************************************************/
#include "header.h"
using namespace std;

bool login() {
	ifstream user;
	ifstream pass;

	bool validUser = false;

	string username  = "Null";
	string password  = "Null";
	string fusername = "Null";
	string fpassword = "Null";
	string temp;

	int fileSize = 0;


	//Checks file size of both files
	user.open("usernames.txt");
	pass.open("passwords.txt");

	while(user && pass) {
		getline(user, temp);
		getline(pass, temp);
		fileSize++;
	}

	user.close();
	pass.close();


	//Gets a username/password from user
	cout << "Please enter your username: ";
	getline(cin, username);
	cout << "Please enter your password: ";
	getline(cin, password);

	//Checks if username/password match up
	user.open("usernames.txt");
	pass.open("passwords.txt");

	int index = 0;
	while(!validUser && index < fileSize) {
		getline(user, fusername);
		getline(pass, fpassword);

		if(fusername == username && fpassword == password) {
			validUser = true;
		} else {
			index++;
		}
	}

	user.close();
	pass.close();
	return validUser;
}
