/**
 * @file mainwindow.cpp
 * @author Damian Pobrotyn , Kamil Rostecki
 * @brief Implementation of the MainWindow Methods.
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "learnwindow.h"
#include "addwordwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->numberWordsLabel->setText(str.setNum(ui->numbeWordsSlider->value()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
}

void MainWindow::on_actionZamknij_triggered()
{
  close();
}

void MainWindow::on_learnButton_clicked()
{
    this->hide();
    learnwindow *l = new learnwindow(this,ui->numbeWordsSlider->value());
    l->show();
}

void MainWindow::on_addWordButton_clicked()
{
    addwordwindow *aww = new addwordwindow(this);
    aww->show();
}

void MainWindow::on_numbeWordsSlider_actionTriggered(int action)
{
    ui->numberWordsLabel->setText(str.setNum(action));
}


void MainWindow::on_numbeWordsSlider_valueChanged(int value)
{
    ui->numberWordsLabel->setText(str.setNum(value));
}

void MainWindow::on_exitButton_clicked()
{
    QApplication::quit();
}
