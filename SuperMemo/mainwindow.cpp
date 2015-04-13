#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSql/QtSql"
#include <QMessageBox>
#include "learnwindow.h"
#include "addwordwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->numberWordsLabel->setText(ui->numbeWordsSlider->value());
    ui->numberWordsLabel->setText(str.setNum(ui->numbeWordsSlider->value()));
   // connect(ui->numbeWordsSlider,SIGNAL(valueChanged(int)),ui->numberWordsLabel,SLOT(setValue(int)));

/*


    dBase="dane.db";
    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName(QString::fromStdString(dBase));
    if(!db.open()){
        QMessageBox::critical(0,"Błąd","Nie udało się otworzyć bazy danych !");
    }
  else{
        try{
            QSqlQuery query;
            query.prepare( "select id from users");
            if(!query.exec()){
               throw exception();
            }
            for(int i=0;query.next();i++){
                ui->listWidget_sets->addItem(query.value(0).toString());
               QMessageBox::critical(0,"OK", query.value(0).toString());
            }
            db.close();
       }
    catch(const exception &e){
      QMessageBox::critical(0,"Błąd","Nie udało się odczytać danych z bazy !");
    }
    }



*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   ui->label->setText("Dziala");
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
    addwordwindow *aaw = new addwordwindow(this);
    aaw->show();
}

void MainWindow::on_numbeWordsSlider_actionTriggered(int action)
{
    ui->numberWordsLabel->setText(str.setNum(action));
}

void MainWindow::on_numbeWordsSlider_valueChanged(int value)
{
    ui->numberWordsLabel->setText(str.setNum(value));
}
