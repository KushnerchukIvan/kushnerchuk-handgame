#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::RandomNumber()
{
    int randNum;
    QString word;
    randNum = rand() % 3;
    switch (randNum)
    {
    case 0:
        word = "камінь";
        break;
    case 1:
        word = "ножиці";
        break;
    case 2:
        word = "папір";
        break;
    }
    return word;
}

void MainWindow::on_pushButton_clicked()
{
    QString word = RandomNumber();
    ui->label_2->setText(word);
    if (word == "камінь")
    {
        ui->label->setText("нічия");
    }
    else if(word == "ножиці")
    {
        ui->label->setText("перемога");
    }
    else if(word == "папір")
    {
        ui->label->setText("поразка");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString word = RandomNumber();
    ui->label_2->setText(word);
    if (word == "камінь")
    {
        ui->label->setText("поразка");
    }
    else if(word == "ножиці")
    {
        ui->label->setText("нічия");
    }
    else if(word == "папір")
    {
        ui->label->setText("перемога");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QString word = RandomNumber();
    ui->label_2->setText(word);
    if (word == "камінь")
    {
        ui->label->setText("перемога");
    }
    else if(word == "ножиці")
    {
        ui->label->setText("поразка");
    }
    else if(word == "папір")
    {
        ui->label->setText("нічия");
    }
}

