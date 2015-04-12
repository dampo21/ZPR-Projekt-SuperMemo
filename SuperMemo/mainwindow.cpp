#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSql/QtSql"
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
