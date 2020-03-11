#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "profile.h"

#include <QDebug>
#include <iostream>
#include <vector>
#include <QFileDialog>

//Compare function for sorting the dog database
bool CompareDogs(profile &a, profile &b)
{
    if(a.profile::getScore() == b.profile::getScore()){
        return a.profile::getName() > a.profile::getName();
    }

    return a.profile::getScore() > b.profile::getScore();
}

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

void MainWindow::on_homePageNextButton_clicked()
{
    //Load our dogs from a csv file
    LoadDatabase();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_page2BackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_page2NextButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    //Make a profile to compare to. This is where we would have user input happen
    profile terry("Terry", "Human", "Terry is a human looking to adopt a dog", "terry.png", 0, 0, 0, 0, true, true);
    qDebug() << "Terry Made";

    //Compare the dogs to the user and compute their scores
    for(size_t i = 0; i < dogs.size(); i++){
        dogs[i].CompareProfiles(terry);
        qDebug() << dogs[i].getName() << " " << dogs[i].getScore();
    }

    //Sort our list so we have the best fit dogs first
    sort(dogs.begin(), dogs.end(), CompareDogs);
    qDebug() << "Dogs sorted";
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

//Used to load in the database of dogs from a CSV file
void MainWindow::LoadDatabase()
{
    //Get the CSV filepath to open
    QString filePath = QFileDialog::getOpenFileName(this,
                    tr("Open Dog Database"), "",
                    tr("Address Book (*.csv);;All Files (*)"));

    //Open the CSV file
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)){
        qDebug() << "Error: " << file.errorString();
        return;
    }

    //Make the file a text stream to input from
    QTextStream in(&file);

    //Prepare variables and our database vector for adding in new dog profiles
    dogs.clear();
    QString name, breed, about, picture;
    int activity, space, interaction, size, kids, animals;
    bool kidsBool, animalsBool;

    //Parse the text file and make a profile class for the dog to add to our database vector
    for(int i = 0; !in.atEnd(); i++){
        QString line = in.readLine();
        QStringList fields = line.split(',');

        if(i == 0) continue;

        for(int j = 0; j < fields.length(); j++){
            std::cout << "[" << j << "]" << fields[j].toStdString();
        }
        std::cout << std::endl;

        //Assign the variables that were parsed in our file
        name = fields[0];
        breed = fields[1];
        about = fields[2];
        picture = fields[3];
        activity = fields[4].toInt();
        space = fields[5].toInt();
        interaction = fields[6].toInt();
        size = fields[7].toInt();
        kids = fields[8].toInt();
        animals = fields[9].toInt();

        //Get the boolean values from the input fields
        if(kids == 1){
            kidsBool = true;
        }else{
            kidsBool = false;
        }
        if(animals == 1){
            animalsBool = true;
        }else{
            animalsBool = false;
        }

        //Create our profile and add it to the database vector
        profile inputProfile(name, breed, about, picture, activity, space, interaction, size, kidsBool, animalsBool);
        dogs.push_back(inputProfile);
    }
    qDebug() << "Dogs Loaded";
}
