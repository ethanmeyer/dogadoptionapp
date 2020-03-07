#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "profile.h"

#include <QDebug>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    profile terry("Terry", "Human", "Terry is a human looking to adopt a dog", "terry.png", 0, 0, 0, 0, true, true);
    profile goob("Goob", "Newfoundland", "Goob is a dog who is very big and likes licking people on their face", "goob.png", 3, 3, 3, 2, false, false);
    terry.CompareProfiles(goob);

    qDebug() << terry.getScore();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_homePageNextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_page2BackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_page2NextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_page3BackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_page3NextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_page4BackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_adoptButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_backToDogsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_startOverButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
