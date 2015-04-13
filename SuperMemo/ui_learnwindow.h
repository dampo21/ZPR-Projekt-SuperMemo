/********************************************************************************
** Form generated from reading UI file 'learnwindow.ui'
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

class Ui_learnwindow
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

    void setupUi(QDialog *learnwindow)
    {
        if (learnwindow->objectName().isEmpty())
            learnwindow->setObjectName(QStringLiteral("learnwindow"));
        learnwindow->resize(401, 307);
        checkButton = new QPushButton(learnwindow);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(290, 270, 101, 23));
        horizontalLayoutWidget = new QWidget(learnwindow);
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

        learnedWordsLabel = new QLabel(learnwindow);
        learnedWordsLabel->setObjectName(QStringLiteral("learnedWordsLabel"));
        learnedWordsLabel->setGeometry(QRect(0, 40, 81, 41));
        lcdNumber = new QLCDNumber(learnwindow);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(80, 50, 51, 23));
        newWordsLabel = new QLabel(learnwindow);
        newWordsLabel->setObjectName(QStringLiteral("newWordsLabel"));
        newWordsLabel->setGeometry(QRect(0, 20, 121, 16));
        synonymLabel = new QLabel(learnwindow);
        synonymLabel->setObjectName(QStringLiteral("synonymLabel"));
        synonymLabel->setGeometry(QRect(290, 70, 169, 32));
        engWordLabel = new QLabel(learnwindow);
        engWordLabel->setObjectName(QStringLiteral("engWordLabel"));
        engWordLabel->setGeometry(QRect(290, 100, 169, 33));
        synonymLabel_2 = new QLabel(learnwindow);
        synonymLabel_2->setObjectName(QStringLiteral("synonymLabel_2"));
        synonymLabel_2->setGeometry(QRect(180, 70, 89, 32));
        plWordLabel = new QLabel(learnwindow);
        plWordLabel->setObjectName(QStringLiteral("plWordLabel"));
        plWordLabel->setGeometry(QRect(290, 40, 169, 33));
        sentenceLabel_2 = new QLabel(learnwindow);
        sentenceLabel_2->setObjectName(QStringLiteral("sentenceLabel_2"));
        sentenceLabel_2->setGeometry(QRect(180, 130, 89, 33));
        engWordLabel_2 = new QLabel(learnwindow);
        engWordLabel_2->setObjectName(QStringLiteral("engWordLabel_2"));
        engWordLabel_2->setGeometry(QRect(180, 100, 89, 33));
        sentenceLabel = new QLabel(learnwindow);
        sentenceLabel->setObjectName(QStringLiteral("sentenceLabel"));
        sentenceLabel->setGeometry(QRect(290, 130, 91, 33));
        plWordLabel_2 = new QLabel(learnwindow);
        plWordLabel_2->setObjectName(QStringLiteral("plWordLabel_2"));
        plWordLabel_2->setGeometry(QRect(180, 40, 89, 33));

        retranslateUi(learnwindow);

        QMetaObject::connectSlotsByName(learnwindow);
    } // setupUi

    void retranslateUi(QDialog *learnwindow)
    {
        learnwindow->setWindowTitle(QApplication::translate("learnwindow", "Nauka s\305\202\303\263wek", 0));
        checkButton->setText(QApplication::translate("learnwindow", "Sprawd\305\272", 0));
        incorrectlyButton->setText(QApplication::translate("learnwindow", "Nie wiem", 0));
        almostButton->setText(QApplication::translate("learnwindow", "Prawie", 0));
        correctlyButton->setText(QApplication::translate("learnwindow", "Wiem", 0));
        learnedWordsLabel->setText(QApplication::translate("learnwindow", "Nauczone s\305\202owa", 0));
        newWordsLabel->setText(QApplication::translate("learnwindow", "Na dzi\305\233 s\305\202\303\263w: ", 0));
        synonymLabel->setText(QApplication::translate("learnwindow", "Synonimy:", 0));
        engWordLabel->setText(QApplication::translate("learnwindow", "Angielskie s\305\202owo", 0));
        synonymLabel_2->setText(QApplication::translate("learnwindow", "Synonimy           :", 0));
        plWordLabel->setText(QApplication::translate("learnwindow", "Polskie s\305\202owo", 0));
        sentenceLabel_2->setText(QApplication::translate("learnwindow", "Zdanie               :", 0));
        engWordLabel_2->setText(QApplication::translate("learnwindow", "Angielskie s\305\202owo:", 0));
        sentenceLabel->setText(QApplication::translate("learnwindow", "Zdanie               :", 0));
        plWordLabel_2->setText(QApplication::translate("learnwindow", "Polskie s\305\202owo     :", 0));
    } // retranslateUi

};

namespace Ui {
    class learnwindow: public Ui_learnwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNWINDOW_H
