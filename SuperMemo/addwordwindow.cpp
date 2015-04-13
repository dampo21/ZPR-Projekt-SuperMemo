#include "addwordwindow.h"
#include "ui_addwordwindow.h"

addwordwindow::addwordwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwordwindow)
{
    ui->setupUi(this);
}

addwordwindow::~addwordwindow()
{
    delete ui;
}

void addwordwindow::on_cancelButton_clicked()
{
    addwordwindow::~addwordwindow();
}

void addwordwindow::on_saveButton_clicked()
{
    ui->angWordEdit->clear();
    ui->polWordEdit->clear();
    ui->sentenceEdit->clear();
    ui->synonymsEdit->clear();
}
