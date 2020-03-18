#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include "profile.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    std::vector<profile> dogs;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_homePageNextButton_clicked();

    void on_page2BackButton_clicked();

    void on_page2NextButton_clicked();

    void on_adoptButton_clicked();

    void on_backToDogsButton_clicked();

    void on_startOverButton_clicked();

    void on_adoptButton_2_clicked();

    void on_adoptButton_3_clicked();

    void on_actionLoad_Dog_Database_triggered();

private:
    bool ValidInput();
    void LoadDatabase();
    void ChangeCurrentDog();
    void SetPixmap();
    void UpdateFinalPage();

    bool dogsLoaded;
    int dogIndex;

    bool HasKids();
    bool HasAnimals();
    int YardSpace();
    int ActivityLevel();
    int InteractionLevel();
    int DogSize();
    QPixmap dogPixmap;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
