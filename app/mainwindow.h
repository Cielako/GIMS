#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

#include "ui_mainwindow.h"
#include "exit.h"
#include "database.h"
#include "addproduct.h"
#include "about.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_action_information_triggered();
    void on_action_show_all_productsl_triggered();
    void on_actio_add_product_triggered();
    void on_action_delete_producy_triggered();
    void on_action_exit_app_triggered();
    void on_searchTerm_textChanged();


private:
    Ui::MainWindow *ui;
    Dialog *exitDialog;
    QSqlQueryModel *querymodel;
    AddProduct *addProductDialog;
    QString action_query;
    About *aboutDialog;
    QString filter_name[3]={"nazwa","kod","kategoria"}; //Lista nazw filtrów
    QString sort_type[2] = {"ASC", "DESC"};

};
#endif // MAINWINDOW_H
