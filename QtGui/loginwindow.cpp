#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString fUsername, fPassword;
    QFile user("usernames.txt");
    QFile pass("passwords.txt");
    QMessageBox invalidCreds;
    int compUsername, compPassword;
    bool invalid = false;
    invalidCreds.setText("The username or password entered is incorrect");

    if(!user.open(QIODevice::ReadOnly | QIODevice::Text) ||
       !pass.open(QIODevice::ReadOnly | QIODevice::Text))
        cout << "FAIL" << endl;
        //QDebug fail message

    while(!user.atEnd() && !pass.atEnd()) {
        fUsername = user.readLine();
        fPassword = pass.readLine();
        compUsername =  QString::compare(fUsername, username);
        compPassword =  QString::compare(fPassword, password);

        if( (compUsername == 1) &&
            (compPassword == 1) )
        {
            invalid = true;
            Menu* menuptr = new Menu(this);
            this->close();
            menuptr->show();
        }
    }
    if(invalid == false)
        invalidCreds.exec();
}

LoginWindow::~LoginWindow()
{
    delete ui;
}
