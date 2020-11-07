#include "database.h"

#include<iostream>
// Konstruktor
db_connect::db_connect()
{

}
// Destruktor
db_connect::~db_connect()
{
    disconnect();
}

void db_connect::connect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("magazyn");
     if(db.open())
     {
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

}

