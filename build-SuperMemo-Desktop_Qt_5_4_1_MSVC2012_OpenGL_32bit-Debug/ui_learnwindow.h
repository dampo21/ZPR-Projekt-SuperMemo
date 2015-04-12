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
    QLabel *angWordLabel;
    QLabel *polWordLabel;
    QLabel *synonymLabel;
    QLabel *sentenceLabel;
    QPushButton *checkButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *incorrectlyButton;
    QPushButton *almostButton;
    QPushButton *correctlyButton;

    void setupUi(QDialog *learnwindow)
    {
        if (learnwindow->objectName().isEmpty())
            learnwindow->setObjectName(QStringLiteral("learnwindow"));
        learnwindow->resize(400, 300);
        verticalLayoutWidget = new QWidget(learnwindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 30, 201, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        angWordLabel = new QLabel(verticalLayoutWidget);
        angWordLabel->setObjectName(QStringLiteral("angWordLabel"));

        verticalLayout->addWidget(angWordLabel);

        polWordLabel = new QLabel(verticalLayoutWidget);
        polWordLabel->setObjectName(QStringLiteral("polWordLabel"));

        verticalLayout->addWidget(polWordLabel);

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
        horizontalLayoutWidget->setGeometry(QRect(150, 180, 239, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        incorrectlyButton = new QPushButton(horizontalLayoutWidget);
        incorrectlyButton->setObjectName(QStringLiteral("incorrectlyButton"));

        horizontalLayout->addWidget(incorrectlyButton);

        almostButton = new QPushButton(horizontalLayoutWidget);
        almostButton->setObjectName(QStringLiteral("almostButton"));

        horizontalLayout->addWidget(almostButton);

        correctlyButton = new QPushButton(horizontalLayoutWidget);
        correctlyButton->setObjectName(QStringLiteral("correctlyButton"));

        horizontalLayout->addWidget(correctlyButton);


        retranslateUi(learnwindow);

        QMetaObject::connectSlotsByName(learnwindow);
    } // setupUi

    void retranslateUi(QDialog *learnwindow)
    {
        learnwindow->setWindowTitle(QApplication::translate("learnwindow", "Dialog", 0));
        angWordLabel->setText(QApplication::translate("learnwindow", "Angielskie s\305\202owo", 0));
        polWordLabel->setText(QApplication::translate("learnwindow", "Polskie s\305\202owo", 0));
        synonymLabel->setText(QApplication::translate("learnwindow", "Synonimy:", 0));
        sentenceLabel->setText(QApplication::translate("learnwindow", "Zdanie:", 0));
        checkButton->setText(QApplication::translate("learnwindow", "Sprawd\305\272", 0));
        incorrectlyButton->setText(QApplication::translate("learnwindow", "Nie wiem", 0));
        almostButton->setText(QApplication::translate("learnwindow", "Prawie", 0));
        correctlyButton->setText(QApplication::translate("learnwindow", "Wiem", 0));
    } // retranslateUi

};

namespace Ui {
    class learnwindow: public Ui_learnwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNWINDOW_H
