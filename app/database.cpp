#include "database.h"

#include<iostream>
// Konstruktor
db_connect::db_connect()
{
    querymodel = new QSqlQueryModel();
}
// Destruktor
db_connect::~db_connect()
{
    disconnect();
}

void db_connect::connect(Ui::MainWindow *ui)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");// połączenie z bazą danych
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("magazyn");
     if(db.open())
     {
         ref_to_ui = ui; // odwołanie się do okna głównego aplikacji
         querymodel->setQuery("SELECT * FROM towary");
         ref_to_ui ->tableView->setModel(querymodel);
        qDebug() << "Polaczono z baza danych";
     }
     else{
         // Info dlaczego połączenie się nie powiodło
         QSqlError error = db.lastError();
         qDebug() << error.databaseText();
     }
}

void db_connect::disconnect()
{
 if (m_db.open())
 {
     m_db.close();
 }
}

void db_connect::display_data()
{
    querymodel->setQuery("SELECT * FROM towary WHERE id = 6");
    ref_to_ui->tableView->setModel(querymodel);
}

