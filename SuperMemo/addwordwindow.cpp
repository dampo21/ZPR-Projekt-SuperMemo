/**
 * @file addwordwindow.cpp
 * @author Damian Pobrotyn and Kamil Rostecki
 * @brief Definition of the class addwordwindow.
 * @brief Implementation of the addwordwindow class methods.
 */


#include "AddWordWindow.h"
#include "ui_addwordwindow.h"

AddWordWindow::AddWordWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWordWindow)
{
    ui->setupUi(this);
}

AddWordWindow::~AddWordWindow()
{
    delete ui;
}

void AddWordWindow::on_cancelButton_clicked()
{
    AddWordWindow::~AddWordWindow();
}

void AddWordWindow::on_saveButton_clicked()
{
    ui->angWordEdit->clear();
    ui->polWordEdit->clear();
    ui->sentenceEdit->clear();
    ui->synonymsEdit->clear();
}
