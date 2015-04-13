/**
 * @file learnwindow.cpp
 * @author Damian Pobrotyn and Kamil Rostecki
 * @brief Implementation of the learnwindow class methods.
 */

#include "learnwindow.h"
#include "ui_learnwindow.h"
#include "QtSql/QtSql"
#include <QMessageBox>

using namespace std;
learnwindow::learnwindow(QWidget *parent, int number) :
    QDialog(parent),
    ui(new Ui::learnwindow)
{
    ui->setupUi(this);
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->engWordLabel->hide();
    ui->sentenceLabel->hide();
    learnedWordsCounter = 0;
    ui->lcdNumber->display(learnedWordsCounter);
    ui->newWordsLabel->setText("Nowe słowa na dziś: " + QString::number(number));


    dBase="dane.db";
    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName(QString::fromStdString(dBase));

    if(!db.open()){
        QMessageBox::critical(0,"Błąd","Nie udało się otworzyć bazy danych !");
    }
    else{
        try{
            QSqlQuery query;
            query.prepare( "select * from wordsList");
            if(!query.exec()){
               throw exception();
            }
            for(int i=0;query.next();i++){
                ui->plWordLabel->setText(query.value((1)).toString());
                ui->engWordLabel->setText(query.value((2)).toString());
                ui->synonymLabel->setText(query.value((3)).toString());
                ui->sentenceLabel->setText(query.value((4)).toString());
            }
            db.close();
       }
        catch(const exception &e){
            QMessageBox::critical(0,"Błąd","Nie udało się odczytać danych z bazy !");
        }
    }

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
    ui->engWordLabel->show();
    ui->sentenceLabel->show();
}

void learnwindow::on_correctlyButton_clicked()
{
    ui->checkButton->show();
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->engWordLabel->hide();
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
    ui->engWordLabel->hide();
    ui->sentenceLabel->hide();
}

void learnwindow::on_almostButton_clicked()
{
    ui->checkButton->show();
    ui->correctlyButton->hide();
    ui->almostButton->hide();
    ui->incorrectlyButton->hide();
    ui->engWordLabel->hide();
    ui->sentenceLabel->hide();
}

void learnwindow::reject()
{
    QApplication::quit();
}
