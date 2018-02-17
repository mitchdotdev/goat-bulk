#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString fUsername, fPassword;
    QFile user("usernames.txt");
    QFile pass("passwords.txt");
    int compUsername, compPassword;
    //bool validUser = false;

    if(!user.open(QIODevice::ReadOnly | QIODevice::Text) || !pass.open(QIODevice::ReadOnly | QIODevice::Text))
        cout << "FAIL" << endl;

    while(!user.atEnd() && !pass.atEnd()) {
        fUsername = user.readLine();
        fPassword = pass.readLine();
        compUsername =  QString::compare(fUsername, username);
        compPassword =  QString::compare(fPassword, password);

        if( (compUsername == 1) &&
            (compPassword == 1) )
        {
            cout << "TRUE" << endl;
            break;
        } else {
            cout << "FALSE" << endl;
        }
    }

    cout << "end" << endl;
}
