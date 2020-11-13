#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "database.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("GIMS"); // Zmień nazwę aplikacji
    db_connect db;
    db.connect(ui);
    querymodel = new QSqlQueryModel(); // nowe kwerendy w pamięci;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    querymodel->setQuery("SELECT * FROM towary WHERE id = 6");
    ui ->tableView->setModel(querymodel);
}

void MainWindow::on_actioninformacje_triggered()
{
}

void MainWindow::on_action_exit_app_triggered()
{
    Dialog exit;
    exit.setModal(true);
    exit.exec();

    //exitDialog = new Dialog(this); // alokacja nowych obiektów  typu dialog w pamięci
    //exitDialog->setModal(free);
    //exitDialog ->exec();
}
void MainWindow::on_searchTerm_editingFinished()
{
   QString  str = "SELECT * FROM towary WHERE id = " + ui->searchTerm ->text();
   querymodel->setQuery(str);
   ui ->tableView->setModel(querymodel);
   //qDebug() << ui->searchTerm ->text();
}

