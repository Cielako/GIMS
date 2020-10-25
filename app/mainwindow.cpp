#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMainWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("magazyn");

    QSqlQuery zapytanie ;

    if(db.open()){

          QMessageBox::information(this, "Connection", "Database Connected");
          zapytanie.exec("SELECT myguests.id FROM myguests WHERE myguests.id = 1;");
          while (zapytanie.next())
          {
              QString indeks = zapytanie.value(0).toString();
              qWarning() << indeks; // Wypisuje numer indeksu
          }

      }
    else{
          QSqlError error = db.lastError();
        // Info dlaczego połączenie się nie powiodło
          QMessageBox::information(this, "Connection", error.databaseText());
      }
}
