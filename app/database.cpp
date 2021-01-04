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
bool db_connect::user_connect(QString login, QString password)
{

    if(db.open())
    {
        QSqlQuery query(db); // utworzenie zapytania
        query.prepare("SELECT  username, password from users WHERE username = :login AND password = :pass"); // utworzenie zapytania
        query.bindValue(":login", login);
        query.bindValue(":pass", password);
        query.exec();
        while(query.next())
        {
            if(query.value(0).toString() != login || query.value(1).toString() != password)
            {
                //qDebug() << "login: " + query.value(0).toString(); // Sprawdzenie działania zapytania
                //qDebug() << "hasło: " + query.value(1).toString();

                qDebug() << "Zalogowano jako: " + query.value(0).toString();
                return false;
            }
            return true;
        }
     }
    else{
        // Info dlaczego poloczenie sie nie powiodlo
        QSqlError error = db.lastError();
        qDebug() << error.databaseText();
    }
    return false;
}
void db_connect::disconnect()
{
 if (db.open())
 {
     db.close();
 }
}


