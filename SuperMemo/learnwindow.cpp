#include "learnwindow.h"
#include "ui_learnwindow.h"

learnwindow::learnwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::learnwindow)
{
    ui->setupUi(this);
}

learnwindow::~learnwindow()
{
    delete ui;
}

void learnwindow::on_checkButton_clicked()
{

}

void learnwindow::on_correctlyButton_clicked()
{
    learnButton.Show();
}
