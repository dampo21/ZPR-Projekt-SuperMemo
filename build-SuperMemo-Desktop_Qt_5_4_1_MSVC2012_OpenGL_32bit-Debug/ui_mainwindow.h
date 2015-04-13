/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionZamknij;
    QAction *actionZmien_uzytkownika;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QSlider *numbeWordsSlider;
    QLabel *label_2;
    QLabel *numberWordsLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *learnButton;
    QPushButton *scheduleButton;
    QPushButton *addWordButton;
    QPushButton *wordsButton;
    QPushButton *exitButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(502, 283);
        MainWindow->setMinimumSize(QSize(502, 283));
        MainWindow->setMaximumSize(QSize(502, 283));
        MainWindow->setWindowTitle(QStringLiteral("Program do nauki"));
        MainWindow->setAutoFillBackground(false);
        actionZamknij = new QAction(MainWindow);
        actionZamknij->setObjectName(QStringLiteral("actionZamknij"));
        actionZmien_uzytkownika = new QAction(MainWindow);
        actionZmien_uzytkownika->setObjectName(QStringLiteral("actionZmien_uzytkownika"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setGeometry(QRect(350, 20, 75, 23));
        numbeWordsSlider = new QSlider(centralWidget);
        numbeWordsSlider->setObjectName(QStringLiteral("numbeWordsSlider"));
        numbeWordsSlider->setGeometry(QRect(310, 80, 160, 19));
        numbeWordsSlider->setMouseTracking(false);
        numbeWordsSlider->setAcceptDrops(false);
        numbeWordsSlider->setMinimum(1);
        numbeWordsSlider->setMaximum(50);
        numbeWordsSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 60, 151, 21));
        numberWordsLabel = new QLabel(centralWidget);
        numberWordsLabel->setObjectName(QStringLiteral("numberWordsLabel"));
        numberWordsLabel->setGeometry(QRect(380, 100, 47, 13));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 20, 131, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        learnButton = new QPushButton(verticalLayoutWidget);
        learnButton->setObjectName(QStringLiteral("learnButton"));

        verticalLayout->addWidget(learnButton);

        scheduleButton = new QPushButton(verticalLayoutWidget);
        scheduleButton->setObjectName(QStringLiteral("scheduleButton"));
        scheduleButton->setEnabled(false);

        verticalLayout->addWidget(scheduleButton);

        addWordButton = new QPushButton(verticalLayoutWidget);
        addWordButton->setObjectName(QStringLiteral("addWordButton"));

        verticalLayout->addWidget(addWordButton);

        wordsButton = new QPushButton(verticalLayoutWidget);
        wordsButton->setObjectName(QStringLiteral("wordsButton"));
        wordsButton->setEnabled(false);

        verticalLayout->addWidget(wordsButton);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        verticalLayout->addWidget(exitButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 502, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionZmien_uzytkownika);
        menuMenu->addSeparator();
        menuMenu->addAction(actionZamknij);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionZamknij->setText(QApplication::translate("MainWindow", "Zamknij", 0));
        actionZmien_uzytkownika->setText(QApplication::translate("MainWindow", "Zmien uzytkownika", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Logowanie", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ile s\305\202\303\263wek chcesz si\304\231 uczy\304\207?", 0));
        numberWordsLabel->setText(QApplication::translate("MainWindow", "1", 0));
        learnButton->setText(QApplication::translate("MainWindow", "Nauka", 0));
        scheduleButton->setText(QApplication::translate("MainWindow", "Kalendarz", 0));
        addWordButton->setText(QApplication::translate("MainWindow", "Dodaj s\305\202owo", 0));
        wordsButton->setText(QApplication::translate("MainWindow", "Baza s\305\202\303\263w", 0));
        exitButton->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
