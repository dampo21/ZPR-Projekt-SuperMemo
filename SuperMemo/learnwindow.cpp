#include "learnwindow.h"
#include "ui_learnwindow.h"

learnwindow::learnwindow(QWidget *parent, int number) :
    QDialog(parent),
    ui(new Ui::learnwindow)
{
    ui->setupUi(this);
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->angWordLabel->hide();
    ui->sentenceLabel->hide();
    learnedWordsCounter = 0;
    ui->lcdNumber->display(learnedWordsCounter);
}

learnwindow::~learnwindow()
{
    delete ui;
}

void learnwindow::on_checkButton_clicked()
{
    ui->checkButton->hide();
    ui->correctlyButton->show();
    ui->almostButton->show();
    ui->incorrectlyButton->show();
    ui->angWordLabel->show();
    ui->sentenceLabel->show();
}

void learnwindow::on_correctlyButton_clicked()
{
    ui->checkButton->show();
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->angWordLabel->hide();
    ui->sentenceLabel->hide();
    learnedWordsCounter++;
    ui->lcdNumber->display(learnedWordsCounter);
}

void learnwindow::on_incorrectlyButton_clicked()
{
    ui->checkButton->show();
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->angWordLabel->hide();
    ui->sentenceLabel->hide();
}

void learnwindow::on_almostButton_clicked()
{
    ui->checkButton->show();
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->angWordLabel->hide();
    ui->sentenceLabel->hide();
}
