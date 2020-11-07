#ifndef DB_CONNECT_H
#define DB_CONNECT_H

#include "mainwindow.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>


class db_connect
{
    QSqlDatabase m_db;
    QSqlQueryModel *querymodel;
public:
    db_connect();
    ~db_connect();

    void connect();
    void disconnect();
    void display_data();
};

#endif // DB_CONNECT_H
