#include "database.h"

#include<iostream>
// Konstruktor
db_connect::db_connect()
{
    querymodel = new QSqlQueryModel();
    db = QSqlDatabase::addDatabase("QMYSQL");// polaczenie z baza danych
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("magazyn");

}
// Destruktor
db_connect::~db_connect()
{
    //disconnect();
}

void db_connect::connect(Ui::MainWindow *ui)
{
    //db = QSqlDatabase::addDatabase("QMYSQL");// polaczenie z baza danych
    //db.setHostName("127.0.0.1");
    //db.setUserName("root");
    //db.setPassword("");
    //db.setDatabaseName("magazyn");
     if(db.open())
     {
         ref_to_ui = ui; // odwolanie do glownego okna aplikacji
         querymodel->setQuery("SELECT * FROM towary");
         ref_to_ui ->tableView->setModel(querymodel);
        qDebug() << "Polaczono z baza danych";
     }
     else{
         // Info dlaczego poloczenie sie nie powiodlo
         QSqlError error = db.lastError();
         qDebug() << error.databaseText();
     }
}
void db_connect::user_connect()
{

}
void db_connect::disconnect()
{
 if (db.open())
 {
     db.close();
 }
}


