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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionZamknij;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QListWidget *listWidget_sets;
    QPushButton *learnButton;
    QPushButton *addWordButton;
    QSlider *numbeWordsSlider;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(476, 361);
        actionZamknij = new QAction(MainWindow);
        actionZamknij->setObjectName(QStringLiteral("actionZamknij"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 150, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 120, 47, 13));
        listWidget_sets = new QListWidget(centralWidget);
        listWidget_sets->setObjectName(QStringLiteral("listWidget_sets"));
        listWidget_sets->setGeometry(QRect(10, 20, 171, 192));
        learnButton = new QPushButton(centralWidget);
        learnButton->setObjectName(QStringLiteral("learnButton"));
        learnButton->setGeometry(QRect(210, 30, 75, 23));
        addWordButton = new QPushButton(centralWidget);
        addWordButton->setObjectName(QStringLiteral("addWordButton"));
        addWordButton->setGeometry(QRect(210, 80, 75, 23));
        numbeWordsSlider = new QSlider(centralWidget);
        numbeWordsSlider->setObjectName(QStringLiteral("numbeWordsSlider"));
        numbeWordsSlider->setGeometry(QRect(310, 40, 160, 19));
        numbeWordsSlider->setMinimum(1);
        numbeWordsSlider->setMaximum(50);
        numbeWordsSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 10, 151, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 476, 21));
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
        menuMenu->addAction(actionZamknij);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionZamknij->setText(QApplication::translate("MainWindow", "Zamknij", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Logowanie", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        learnButton->setText(QApplication::translate("MainWindow", "Nauka", 0));
        addWordButton->setText(QApplication::translate("MainWindow", "Dodaj s\305\202owo", 0));
        label_2->setText(QApplication::translate("MainWindow", "Ile s\305\202\303\263wek chcesz si\304\231 uczy\304\207?", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
