/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *welcomeLabel;
    QPushButton *homePageNextButton;
    QWidget *lifestylePage;
    QLabel *lifeStyleQLabel;
    QLabel *question1Label;
    QGroupBox *question1GroupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *question2Label;
    QGroupBox *question2GroupBox;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *question3Label;
    QGroupBox *question3GroupBox;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QLabel *question4Label;
    QGroupBox *question4GroupBox;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QLabel *question5Label;
    QGroupBox *question5GroupBox;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QPushButton *page2BackButton;
    QPushButton *page2NextButton;
    QWidget *dogPrefPage;
    QLabel *lifeStyleQLabel_3;
    QLabel *question6Label;
    QGroupBox *question6GroupBox;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_18;
    QGroupBox *question7GroupBox;
    QRadioButton *radioButton_19;
    QRadioButton *radioButton_20;
    QRadioButton *radioButton_21;
    QLabel *question7Label;
    QPushButton *page3BackButton;
    QPushButton *page3NextButton;
    QWidget *adoptableDogsPage;
    QLabel *dogNameLabel;
    QLabel *dogPictureLabel;
    QLabel *dogSizeLabel;
    QLabel *BreedLabel;
    QLabel *dogSexLabel;
    QLabel *dogAgeLabel;
    QLabel *dogPersonalityLabel;
    QLabel *scoreLabel;
    QPushButton *adoptButton;
    QPushButton *adoptButton_2;
    QPushButton *adoptButton_3;
    QLabel *compScoreLabel;
    QPushButton *page4BackButton;
    QWidget *endPage;
    QPushButton *backToDogsButton;
    QPushButton *startOverButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1123, 713);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1121, 661));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        welcomeLabel = new QLabel(homePage);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(280, 30, 481, 121));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Bright"));
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        homePageNextButton = new QPushButton(homePage);
        homePageNextButton->setObjectName(QString::fromUtf8("homePageNextButton"));
        homePageNextButton->setGeometry(QRect(340, 240, 381, 141));
        stackedWidget->addWidget(homePage);
        lifestylePage = new QWidget();
        lifestylePage->setObjectName(QString::fromUtf8("lifestylePage"));
        lifeStyleQLabel = new QLabel(lifestylePage);
        lifeStyleQLabel->setObjectName(QString::fromUtf8("lifeStyleQLabel"));
        lifeStyleQLabel->setGeometry(QRect(20, 0, 161, 61));
        question1Label = new QLabel(lifestylePage);
        question1Label->setObjectName(QString::fromUtf8("question1Label"));
        question1Label->setGeometry(QRect(20, 70, 211, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Sans"));
        font1.setPointSize(16);
        question1Label->setFont(font1);
        question1GroupBox = new QGroupBox(lifestylePage);
        question1GroupBox->setObjectName(QString::fromUtf8("question1GroupBox"));
        question1GroupBox->setGeometry(QRect(90, 70, 481, 81));
        radioButton = new QRadioButton(question1GroupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 105, 23));
        radioButton_2 = new QRadioButton(question1GroupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(180, 30, 105, 23));
        radioButton_3 = new QRadioButton(question1GroupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(350, 30, 105, 23));
        question2Label = new QLabel(lifestylePage);
        question2Label->setObjectName(QString::fromUtf8("question2Label"));
        question2Label->setGeometry(QRect(20, 170, 71, 40));
        question2Label->setFont(font1);
        question2GroupBox = new QGroupBox(lifestylePage);
        question2GroupBox->setObjectName(QString::fromUtf8("question2GroupBox"));
        question2GroupBox->setGeometry(QRect(90, 180, 481, 81));
        radioButton_4 = new QRadioButton(question2GroupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 30, 105, 23));
        radioButton_5 = new QRadioButton(question2GroupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(180, 30, 105, 23));
        radioButton_6 = new QRadioButton(question2GroupBox);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(350, 30, 105, 23));
        question3Label = new QLabel(lifestylePage);
        question3Label->setObjectName(QString::fromUtf8("question3Label"));
        question3Label->setGeometry(QRect(20, 290, 51, 40));
        question3Label->setFont(font1);
        question3GroupBox = new QGroupBox(lifestylePage);
        question3GroupBox->setObjectName(QString::fromUtf8("question3GroupBox"));
        question3GroupBox->setGeometry(QRect(90, 290, 481, 81));
        radioButton_7 = new QRadioButton(question3GroupBox);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(20, 30, 105, 23));
        radioButton_8 = new QRadioButton(question3GroupBox);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(180, 30, 105, 23));
        radioButton_9 = new QRadioButton(question3GroupBox);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(350, 30, 105, 23));
        question4Label = new QLabel(lifestylePage);
        question4Label->setObjectName(QString::fromUtf8("question4Label"));
        question4Label->setGeometry(QRect(20, 400, 51, 40));
        question4Label->setFont(font1);
        question4GroupBox = new QGroupBox(lifestylePage);
        question4GroupBox->setObjectName(QString::fromUtf8("question4GroupBox"));
        question4GroupBox->setGeometry(QRect(90, 400, 481, 81));
        radioButton_10 = new QRadioButton(question4GroupBox);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(20, 30, 105, 23));
        radioButton_11 = new QRadioButton(question4GroupBox);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(180, 30, 105, 23));
        radioButton_12 = new QRadioButton(question4GroupBox);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(350, 30, 105, 23));
        question5Label = new QLabel(lifestylePage);
        question5Label->setObjectName(QString::fromUtf8("question5Label"));
        question5Label->setGeometry(QRect(20, 510, 51, 40));
        question5Label->setFont(font1);
        question5GroupBox = new QGroupBox(lifestylePage);
        question5GroupBox->setObjectName(QString::fromUtf8("question5GroupBox"));
        question5GroupBox->setGeometry(QRect(90, 510, 481, 81));
        radioButton_13 = new QRadioButton(question5GroupBox);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setGeometry(QRect(20, 30, 105, 23));
        radioButton_14 = new QRadioButton(question5GroupBox);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setGeometry(QRect(180, 30, 105, 23));
        radioButton_15 = new QRadioButton(question5GroupBox);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setGeometry(QRect(350, 30, 105, 23));
        page2BackButton = new QPushButton(lifestylePage);
        page2BackButton->setObjectName(QString::fromUtf8("page2BackButton"));
        page2BackButton->setGeometry(QRect(610, 570, 171, 71));
        page2NextButton = new QPushButton(lifestylePage);
        page2NextButton->setObjectName(QString::fromUtf8("page2NextButton"));
        page2NextButton->setGeometry(QRect(870, 570, 171, 71));
        stackedWidget->addWidget(lifestylePage);
        dogPrefPage = new QWidget();
        dogPrefPage->setObjectName(QString::fromUtf8("dogPrefPage"));
        lifeStyleQLabel_3 = new QLabel(dogPrefPage);
        lifeStyleQLabel_3->setObjectName(QString::fromUtf8("lifeStyleQLabel_3"));
        lifeStyleQLabel_3->setGeometry(QRect(20, 10, 161, 61));
        question6Label = new QLabel(dogPrefPage);
        question6Label->setObjectName(QString::fromUtf8("question6Label"));
        question6Label->setGeometry(QRect(50, 100, 61, 40));
        question6Label->setFont(font1);
        question6GroupBox = new QGroupBox(dogPrefPage);
        question6GroupBox->setObjectName(QString::fromUtf8("question6GroupBox"));
        question6GroupBox->setGeometry(QRect(130, 100, 481, 81));
        radioButton_16 = new QRadioButton(question6GroupBox);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));
        radioButton_16->setGeometry(QRect(20, 30, 105, 23));
        radioButton_17 = new QRadioButton(question6GroupBox);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));
        radioButton_17->setGeometry(QRect(180, 30, 105, 23));
        radioButton_18 = new QRadioButton(question6GroupBox);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));
        radioButton_18->setGeometry(QRect(350, 30, 105, 23));
        question7GroupBox = new QGroupBox(dogPrefPage);
        question7GroupBox->setObjectName(QString::fromUtf8("question7GroupBox"));
        question7GroupBox->setGeometry(QRect(130, 220, 481, 81));
        radioButton_19 = new QRadioButton(question7GroupBox);
        radioButton_19->setObjectName(QString::fromUtf8("radioButton_19"));
        radioButton_19->setGeometry(QRect(20, 30, 105, 23));
        radioButton_20 = new QRadioButton(question7GroupBox);
        radioButton_20->setObjectName(QString::fromUtf8("radioButton_20"));
        radioButton_20->setGeometry(QRect(180, 30, 105, 23));
        radioButton_21 = new QRadioButton(question7GroupBox);
        radioButton_21->setObjectName(QString::fromUtf8("radioButton_21"));
        radioButton_21->setGeometry(QRect(350, 30, 105, 23));
        question7Label = new QLabel(dogPrefPage);
        question7Label->setObjectName(QString::fromUtf8("question7Label"));
        question7Label->setGeometry(QRect(50, 220, 61, 40));
        question7Label->setFont(font1);
        page3BackButton = new QPushButton(dogPrefPage);
        page3BackButton->setObjectName(QString::fromUtf8("page3BackButton"));
        page3BackButton->setGeometry(QRect(570, 560, 171, 71));
        page3NextButton = new QPushButton(dogPrefPage);
        page3NextButton->setObjectName(QString::fromUtf8("page3NextButton"));
        page3NextButton->setGeometry(QRect(880, 560, 171, 71));
        stackedWidget->addWidget(dogPrefPage);
        adoptableDogsPage = new QWidget();
        adoptableDogsPage->setObjectName(QString::fromUtf8("adoptableDogsPage"));
        dogNameLabel = new QLabel(adoptableDogsPage);
        dogNameLabel->setObjectName(QString::fromUtf8("dogNameLabel"));
        dogNameLabel->setGeometry(QRect(520, 20, 171, 61));
        dogPictureLabel = new QLabel(adoptableDogsPage);
        dogPictureLabel->setObjectName(QString::fromUtf8("dogPictureLabel"));
        dogPictureLabel->setGeometry(QRect(210, 120, 341, 291));
        dogSizeLabel = new QLabel(adoptableDogsPage);
        dogSizeLabel->setObjectName(QString::fromUtf8("dogSizeLabel"));
        dogSizeLabel->setGeometry(QRect(650, 160, 121, 41));
        BreedLabel = new QLabel(adoptableDogsPage);
        BreedLabel->setObjectName(QString::fromUtf8("BreedLabel"));
        BreedLabel->setGeometry(QRect(650, 210, 121, 41));
        dogSexLabel = new QLabel(adoptableDogsPage);
        dogSexLabel->setObjectName(QString::fromUtf8("dogSexLabel"));
        dogSexLabel->setGeometry(QRect(650, 260, 121, 41));
        dogAgeLabel = new QLabel(adoptableDogsPage);
        dogAgeLabel->setObjectName(QString::fromUtf8("dogAgeLabel"));
        dogAgeLabel->setGeometry(QRect(650, 110, 121, 41));
        dogPersonalityLabel = new QLabel(adoptableDogsPage);
        dogPersonalityLabel->setObjectName(QString::fromUtf8("dogPersonalityLabel"));
        dogPersonalityLabel->setGeometry(QRect(650, 310, 121, 41));
        scoreLabel = new QLabel(adoptableDogsPage);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(740, 20, 51, 41));
        adoptButton = new QPushButton(adoptableDogsPage);
        adoptButton->setObjectName(QString::fromUtf8("adoptButton"));
        adoptButton->setGeometry(QRect(470, 470, 181, 91));
        adoptButton_2 = new QPushButton(adoptableDogsPage);
        adoptButton_2->setObjectName(QString::fromUtf8("adoptButton_2"));
        adoptButton_2->setGeometry(QRect(860, 520, 171, 71));
        adoptButton_3 = new QPushButton(adoptableDogsPage);
        adoptButton_3->setObjectName(QString::fromUtf8("adoptButton_3"));
        adoptButton_3->setGeometry(QRect(90, 520, 171, 71));
        compScoreLabel = new QLabel(adoptableDogsPage);
        compScoreLabel->setObjectName(QString::fromUtf8("compScoreLabel"));
        compScoreLabel->setGeometry(QRect(800, 20, 51, 41));
        page4BackButton = new QPushButton(adoptableDogsPage);
        page4BackButton->setObjectName(QString::fromUtf8("page4BackButton"));
        page4BackButton->setGeometry(QRect(470, 590, 181, 41));
        stackedWidget->addWidget(adoptableDogsPage);
        endPage = new QWidget();
        endPage->setObjectName(QString::fromUtf8("endPage"));
        backToDogsButton = new QPushButton(endPage);
        backToDogsButton->setObjectName(QString::fromUtf8("backToDogsButton"));
        backToDogsButton->setGeometry(QRect(60, 540, 171, 71));
        startOverButton = new QPushButton(endPage);
        startOverButton->setObjectName(QString::fromUtf8("startOverButton"));
        startOverButton->setGeometry(QRect(900, 530, 171, 71));
        stackedWidget->addWidget(endPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1123, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        welcomeLabel->setText(QApplication::translate("MainWindow", "Welcome to Adopt a Dog App", nullptr));
        homePageNextButton->setText(QApplication::translate("MainWindow", "Take the compadabilty quiz to find your new Dog!", nullptr));
        lifeStyleQLabel->setText(QApplication::translate("MainWindow", "Life Style Questions", nullptr));
        question1Label->setText(QApplication::translate("MainWindow", "Q1.", nullptr));
        question1GroupBox->setTitle(QString());
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        question2Label->setText(QApplication::translate("MainWindow", "Q2. ", nullptr));
        question2GroupBox->setTitle(QString());
        radioButton_4->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        question3Label->setText(QApplication::translate("MainWindow", "Q3. ", nullptr));
        question3GroupBox->setTitle(QString());
        radioButton_7->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_9->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        question4Label->setText(QApplication::translate("MainWindow", "Q4. ", nullptr));
        question4GroupBox->setTitle(QString());
        radioButton_10->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_11->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_12->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        question5Label->setText(QApplication::translate("MainWindow", "Q5. ", nullptr));
        question5GroupBox->setTitle(QString());
        radioButton_13->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_14->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_15->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        page2BackButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
        page2NextButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        lifeStyleQLabel_3->setText(QApplication::translate("MainWindow", "Dog Specific Questions", nullptr));
        question6Label->setText(QApplication::translate("MainWindow", "Q6.", nullptr));
        question6GroupBox->setTitle(QString());
        radioButton_16->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_17->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_18->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        question7GroupBox->setTitle(QString());
        radioButton_19->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_20->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        radioButton_21->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
        question7Label->setText(QApplication::translate("MainWindow", "Q7.", nullptr));
        page3BackButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
        page3NextButton->setText(QApplication::translate("MainWindow", "Match to my Dog!", nullptr));
        dogNameLabel->setText(QApplication::translate("MainWindow", "Dog Name", nullptr));
        dogPictureLabel->setText(QApplication::translate("MainWindow", "Dog Picture", nullptr));
        dogSizeLabel->setText(QApplication::translate("MainWindow", "Size (weight)", nullptr));
        BreedLabel->setText(QApplication::translate("MainWindow", "Breed ", nullptr));
        dogSexLabel->setText(QApplication::translate("MainWindow", "Sex", nullptr));
        dogAgeLabel->setText(QApplication::translate("MainWindow", "Age", nullptr));
        dogPersonalityLabel->setText(QApplication::translate("MainWindow", "Personality", nullptr));
        scoreLabel->setText(QApplication::translate("MainWindow", "Score: ", nullptr));
        adoptButton->setText(QApplication::translate("MainWindow", "ADOPT!", nullptr));
        adoptButton_2->setText(QApplication::translate("MainWindow", "Next Dog", nullptr));
        adoptButton_3->setText(QApplication::translate("MainWindow", "Previous Dog", nullptr));
        compScoreLabel->setText(QApplication::translate("MainWindow", "0", nullptr));
        page4BackButton->setText(QApplication::translate("MainWindow", "go back to questions", nullptr));
        backToDogsButton->setText(QApplication::translate("MainWindow", "Back to Dogs", nullptr));
        startOverButton->setText(QApplication::translate("MainWindow", "Start Over", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
