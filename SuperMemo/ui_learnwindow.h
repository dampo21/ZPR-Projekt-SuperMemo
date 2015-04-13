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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_learnwindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *polWordLabel;
    QLabel *angWordLabel;
    QLabel *synonymLabel;
    QLabel *sentenceLabel;
    QPushButton *checkButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttonsLayout;
    QPushButton *incorrectlyButton;
    QPushButton *almostButton;
    QPushButton *correctlyButton;
    QLabel *learnedWordsLabel;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *learnwindow)
    {
        if (learnwindow->objectName().isEmpty())
            learnwindow->setObjectName(QStringLiteral("learnwindow"));
        learnwindow->resize(400, 300);
        verticalLayoutWidget = new QWidget(learnwindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 30, 201, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        polWordLabel = new QLabel(verticalLayoutWidget);
        polWordLabel->setObjectName(QStringLiteral("polWordLabel"));

        verticalLayout->addWidget(polWordLabel);

        angWordLabel = new QLabel(verticalLayoutWidget);
        angWordLabel->setObjectName(QStringLiteral("angWordLabel"));

        verticalLayout->addWidget(angWordLabel);

        synonymLabel = new QLabel(verticalLayoutWidget);
        synonymLabel->setObjectName(QStringLiteral("synonymLabel"));

        verticalLayout->addWidget(synonymLabel);

        sentenceLabel = new QLabel(verticalLayoutWidget);
        sentenceLabel->setObjectName(QStringLiteral("sentenceLabel"));

        verticalLayout->addWidget(sentenceLabel);

        checkButton = new QPushButton(learnwindow);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(290, 270, 75, 23));
        horizontalLayoutWidget = new QWidget(learnwindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 200, 239, 80));
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

        retranslateUi(learnwindow);

        QMetaObject::connectSlotsByName(learnwindow);
    } // setupUi

    void retranslateUi(QDialog *learnwindow)
    {
        learnwindow->setWindowTitle(QApplication::translate("learnwindow", "Dialog", 0));
        polWordLabel->setText(QApplication::translate("learnwindow", "Polskie s\305\202owo", 0));
        angWordLabel->setText(QApplication::translate("learnwindow", "Angielskie s\305\202owo", 0));
        synonymLabel->setText(QApplication::translate("learnwindow", "Synonimy:", 0));
        sentenceLabel->setText(QApplication::translate("learnwindow", "Zdanie:", 0));
        checkButton->setText(QApplication::translate("learnwindow", "Sprawd\305\272", 0));
        incorrectlyButton->setText(QApplication::translate("learnwindow", "Nie wiem", 0));
        almostButton->setText(QApplication::translate("learnwindow", "Prawie", 0));
        correctlyButton->setText(QApplication::translate("learnwindow", "Wiem", 0));
        learnedWordsLabel->setText(QApplication::translate("learnwindow", "Nauczone s\305\202owa", 0));
    } // retranslateUi

};

namespace Ui {
    class learnwindow: public Ui_learnwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNWINDOW_H
