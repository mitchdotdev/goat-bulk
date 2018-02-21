#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString fUsername, fPassword;
    QFile user("usernames.txt");
    QFile pass("passwords.txt");
    int compUsername, compPassword;

    if(!user.open(QIODevice::ReadOnly | QIODevice::Text) ||
       !pass.open(QIODevice::ReadOnly | QIODevice::Text))
        cout << "FAIL" << endl;

    while(!user.atEnd() && !pass.atEnd()) {
        fUsername = user.readLine();
        fPassword = pass.readLine();
        compUsername =  QString::compare(fUsername, username);
        compPassword =  QString::compare(fPassword, password);

        if( (compUsername == 1) &&
            (compPassword == 1) )
        {
            //return true;
            cout << "TRUE" << endl;
            break;
        } else {
            cout << "FALSE" << endl;
        }
    }
    user.close();
    pass.close();
    // Put QMessageBox saying that the credentials entered were incorrect try again
    cout << "end" << endl;
    // return false;
}
