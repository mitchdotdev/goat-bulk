#include "newsales.h"
#include "ui_newsales.h"

newSales::newSales(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newSales)
{
    ui->setupUi(this);
    currentFile = "";
    ui->pushButton_save->setVisible(false);
    ui->pushButton_edit->setVisible(false);
    ui->scrollArea->setVisible(false);
    ui->textBrowser->setVisible(false);
}

newSales::~newSales()
{
    delete ui;
}

void newSales::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Day 1")
    {
        QFile file("day1.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day1.txt";
        ui->textBrowser->setText(in.readAll());
    } else if(arg1 == "Day 2")
    {
        QFile file("day2.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day2.txt";
        ui->textBrowser->setText(in.readAll());
    } else if(arg1 == "Day 3")
    {
        QFile file("day3.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day3.txt";
        ui->textBrowser->setText(in.readAll());
    } else if(arg1 == "Day 4")
    {
        QFile file("day4.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day4.txt";
        ui->textBrowser->setText(in.readAll());
    } else if(arg1 == "Day 5")
    {
        QFile file("day5.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day5.txt";
        ui->textBrowser->setText(in.readAll());
    } else if(arg1 == "Day 6")
    {
        QFile file("day6.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day6.txt";
        ui->textBrowser->setText(in.readAll());
    } else if(arg1 == "Day 7")
    {
        QFile file("day7.txt");
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = "day7.txt";
        ui->textBrowser->setText(in.readAll());
    }
    ui->scrollArea->setVisible(true);
    ui->textBrowser->setVisible(true);
    ui->pushButton_edit->setVisible(true);
    ui->pushButton_save->setVisible(true);
}

void newSales::on_pushButton_back_clicked()
{
    Menu *menuPtr = new Menu(this);
    this->close();
    menuPtr->show();
}

void newSales::on_pushButton_edit_clicked()
{
    QStringList items;
    items << tr("day1.txt") << tr("day2.txt") << tr("day3.txt") << tr("day4.txt")
          << tr("day4.txt") << tr("day6.txt") << tr("day7.txt");

    bool ok;
    QString item = QInputDialog::getItem(this, tr("File choose"),
                                         tr("Select file:"), items, 0, false, &ok);
    if (ok && !item.isEmpty())
    {
        QFile file(item);
        if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
            std::cout << "File not opened";

        QTextStream in(&file);
        currentFile = item;
        ui->textBrowser->setReadOnly(false);
        ui->pushButton_save->setVisible(true);
        ui->textBrowser->setText(in.readAll());
     }
}

void newSales::on_pushButton_save_clicked()
{

}
