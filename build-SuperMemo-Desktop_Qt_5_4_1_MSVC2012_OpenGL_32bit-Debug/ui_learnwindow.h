/********************************************************************************
** Form generated from reading UI file 'LearnWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARNWINDOW_H
#define UI_LEARNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearnWindow
{
public:
    QPushButton *checkButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttonsLayout;
    QPushButton *incorrectlyButton;
    QPushButton *almostButton;
    QPushButton *correctlyButton;
    QLabel *learnedWordsLabel;
    QLCDNumber *lcdNumber;
    QLabel *newWordsLabel;
    QLabel *synonymLabel;
    QLabel *engWordLabel;
    QLabel *synonymLabel_2;
    QLabel *plWordLabel;
    QLabel *sentenceLabel_2;
    QLabel *engWordLabel_2;
    QLabel *sentenceLabel;
    QLabel *plWordLabel_2;

    void setupUi(QDialog *LearnWindow)
    {
        if (LearnWindow->objectName().isEmpty())
            LearnWindow->setObjectName(QStringLiteral("LearnWindow"));
        LearnWindow->resize(407, 303);
        LearnWindow->setMinimumSize(QSize(407, 303));
        LearnWindow->setMaximumSize(QSize(407, 303));
        checkButton = new QPushButton(LearnWindow);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(290, 270, 101, 23));
        horizontalLayoutWidget = new QWidget(LearnWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 210, 320, 61));
        buttonsLayout = new QHBoxLayout(horizontalLayoutWidget);
        buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));
        buttonsLayout->setContentsMargins(0, 0, 0, 0);
        incorrectlyButton = new QPushButton(horizontalLayoutWidget);
        incorrectlyButton->setObjectName(QStringLiteral("incorrectlyButton"));

        buttonsLayout->addWidget(incorrectlyButton);

        almostButton = new QPushButton(horizontalLayoutWidget);
        almostButton->setObjectName(QStringLiteral("almostButton"));

        buttonsLayout->addWidget(almostButton);

        correctlyButton = new QPushButton(horizontalLayoutWidget);
        correctlyButton->setObjectName(QStringLiteral("correctlyButton"));

        buttonsLayout->addWidget(correctlyButton);

        learnedWordsLabel = new QLabel(LearnWindow);
        learnedWordsLabel->setObjectName(QStringLiteral("learnedWordsLabel"));
        learnedWordsLabel->setGeometry(QRect(100, 30, 81, 41));
        lcdNumber = new QLCDNumber(LearnWindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(180, 40, 51, 23));
        newWordsLabel = new QLabel(LearnWindow);
        newWordsLabel->setObjectName(QStringLiteral("newWordsLabel"));
        newWordsLabel->setGeometry(QRect(100, 10, 121, 16));
        synonymLabel = new QLabel(LearnWindow);
        synonymLabel->setObjectName(QStringLiteral("synonymLabel"));
        synonymLabel->setGeometry(QRect(200, 110, 169, 32));
        engWordLabel = new QLabel(LearnWindow);
        engWordLabel->setObjectName(QStringLiteral("engWordLabel"));
        engWordLabel->setGeometry(QRect(200, 140, 169, 33));
        synonymLabel_2 = new QLabel(LearnWindow);
        synonymLabel_2->setObjectName(QStringLiteral("synonymLabel_2"));
        synonymLabel_2->setGeometry(QRect(90, 110, 89, 32));
        plWordLabel = new QLabel(LearnWindow);
        plWordLabel->setObjectName(QStringLiteral("plWordLabel"));
        plWordLabel->setGeometry(QRect(200, 80, 169, 33));
        sentenceLabel_2 = new QLabel(LearnWindow);
        sentenceLabel_2->setObjectName(QStringLiteral("sentenceLabel_2"));
        sentenceLabel_2->setGeometry(QRect(90, 170, 89, 33));
        engWordLabel_2 = new QLabel(LearnWindow);
        engWordLabel_2->setObjectName(QStringLiteral("engWordLabel_2"));
        engWordLabel_2->setGeometry(QRect(90, 140, 89, 33));
        sentenceLabel = new QLabel(LearnWindow);
        sentenceLabel->setObjectName(QStringLiteral("sentenceLabel"));
        sentenceLabel->setGeometry(QRect(200, 170, 191, 33));
        plWordLabel_2 = new QLabel(LearnWindow);
        plWordLabel_2->setObjectName(QStringLiteral("plWordLabel_2"));
        plWordLabel_2->setGeometry(QRect(90, 80, 89, 33));

        retranslateUi(LearnWindow);

        QMetaObject::connectSlotsByName(LearnWindow);
    } // setupUi

    void retranslateUi(QDialog *LearnWindow)
    {
        LearnWindow->setWindowTitle(QApplication::translate("LearnWindow", "Nauka s\305\202\303\263wek", 0));
        checkButton->setText(QApplication::translate("LearnWindow", "Sprawd\305\272", 0));
        incorrectlyButton->setText(QApplication::translate("LearnWindow", "Nie wiem", 0));
        almostButton->setText(QApplication::translate("LearnWindow", "Prawie", 0));
        correctlyButton->setText(QApplication::translate("LearnWindow", "Wiem", 0));
        learnedWordsLabel->setText(QApplication::translate("LearnWindow", "Nauczone s\305\202owa", 0));
        newWordsLabel->setText(QApplication::translate("LearnWindow", "Na dzi\305\233 s\305\202\303\263w: ", 0));
        synonymLabel->setText(QApplication::translate("LearnWindow", "Synonimy:", 0));
        engWordLabel->setText(QApplication::translate("LearnWindow", "Angielskie s\305\202owo", 0));
        synonymLabel_2->setText(QApplication::translate("LearnWindow", "Synonimy           :", 0));
        plWordLabel->setText(QApplication::translate("LearnWindow", "Polskie s\305\202owo", 0));
        sentenceLabel_2->setText(QApplication::translate("LearnWindow", "Zdanie               :", 0));
        engWordLabel_2->setText(QApplication::translate("LearnWindow", "Angielskie s\305\202owo:", 0));
        sentenceLabel->setText(QApplication::translate("LearnWindow", "Zdanie               :", 0));
        plWordLabel_2->setText(QApplication::translate("LearnWindow", "Polskie s\305\202owo     :", 0));
    } // retranslateUi

};

namespace Ui {
    class LearnWindow: public Ui_LearnWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNWINDOW_H
