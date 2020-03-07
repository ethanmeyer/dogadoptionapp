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
