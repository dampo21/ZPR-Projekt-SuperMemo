/********************************************************************************
** Form generated from reading UI file 'AddWordWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDWINDOW_H
#define UI_ADDWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWordWindow
{
public:
    QLabel *label;
    QLineEdit *angWordEdit;
    QLabel *label_2;
    QLineEdit *polWordEdit;
    QLabel *label_3;
    QLineEdit *sentenceEdit;
    QLabel *label_4;
    QLineEdit *synonymsEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *saveButton;

    void setupUi(QDialog *AddWordWindow)
    {
        if (AddWordWindow->objectName().isEmpty())
            AddWordWindow->setObjectName(QStringLiteral("AddWordWindow"));
        AddWordWindow->resize(400, 300);
        label = new QLabel(AddWordWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 23, 47, 20));
        angWordEdit = new QLineEdit(AddWordWindow);
        angWordEdit->setObjectName(QStringLiteral("angWordEdit"));
        angWordEdit->setGeometry(QRect(40, 40, 141, 21));
        label_2 = new QLabel(AddWordWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(40, 70, 91, 16));
        polWordEdit = new QLineEdit(AddWordWindow);
        polWordEdit->setObjectName(QStringLiteral("polWordEdit"));
        polWordEdit->setGeometry(QRect(40, 90, 141, 21));
        label_3 = new QLabel(AddWordWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(40, 120, 111, 16));
        sentenceEdit = new QLineEdit(AddWordWindow);
        sentenceEdit->setObjectName(QStringLiteral("sentenceEdit"));
        sentenceEdit->setGeometry(QRect(40, 140, 141, 20));
        label_4 = new QLabel(AddWordWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(40, 170, 111, 16));
        synonymsEdit = new QLineEdit(AddWordWindow);
        synonymsEdit->setObjectName(QStringLiteral("synonymsEdit"));
        synonymsEdit->setGeometry(QRect(40, 190, 141, 20));
        horizontalLayoutWidget = new QWidget(AddWordWindow);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 240, 191, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        saveButton = new QPushButton(horizontalLayoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);


        retranslateUi(AddWordWindow);

        QMetaObject::connectSlotsByName(AddWordWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWordWindow)
    {
        AddWordWindow->setWindowTitle(QApplication::translate("AddWordWindow", "Dodaj s\305\202owo", 0));
        label->setText(QApplication::translate("AddWordWindow", "S\305\202\303\263wko", 0));
        label_2->setText(QApplication::translate("AddWordWindow", "Polskie znaczenie", 0));
        label_3->setText(QApplication::translate("AddWordWindow", "Przyk\305\202adowe zdanie", 0));
        label_4->setText(QApplication::translate("AddWordWindow", "Synonimy", 0));
        cancelButton->setText(QApplication::translate("AddWordWindow", "Anuluj", 0));
        saveButton->setText(QApplication::translate("AddWordWindow", "Zapisz", 0));
    } // retranslateUi

};

namespace Ui {
    class AddWordWindow: public Ui_AddWordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDWINDOW_H
