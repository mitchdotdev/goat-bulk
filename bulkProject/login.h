#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QVector>

using namespace std;

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    bool on_bttnLogin_clicked();

private:
    Ui::login *ui;
};

bool login::on_bttnLogin_clicked()
{
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
#endif // LOGIN_H
