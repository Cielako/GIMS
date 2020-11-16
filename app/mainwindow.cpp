#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "database.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("GIMS"); // Zmień nazwę aplikacji
    // połączenie z bazą danych
    db_connect db;
    db.connect(ui);

    querymodel = new QSqlQueryModel(); // nowe kwerendy w pamięci;

    ui->tableView->verticalHeader()->hide(); // schowanie numerów wierszy
    ui->tableView ->setSelectionBehavior(QAbstractItemView::SelectRows);// Zaznacz cały wiersz

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_show_all_productsl_triggered() // Wczytaj ponownie wszystkie towary
{
    action_query = "SELECT * FROM towary";
    querymodel->setQuery(action_query);
    ui ->tableView->setModel(querymodel);
}

void MainWindow::on_actioninformacje_triggered() // Wyświetl informacje o programie
{



}

void MainWindow::on_action_delete_producy_triggered() // Usuń wybrane produkty z bazy danych
{
    QModelIndexList selection =ui-> tableView ->selectionModel()->selectedRows();
    QModelIndex index;
    QString id;

    // Można wybrać wiele wierszy do usunięcia
    for(int i=0; i< selection.count(); i++)
    {
        //querymodel = new QSqlQueryModel(); // Przy pierwszym przebiegu pętli działa bez zarzutu, ale trzeba tworzyć nowe modele zapytań
        index = selection.at(i);
        id = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
        qDebug()<< id;
        qDebug() << querymodel;
        action_query = "DELETE FROM towary WHERE kod = " + id ;
        querymodel->setQuery(action_query);
    }
    action_query = "SELECT * FROM towary";
    querymodel->setQuery(action_query);
    ui ->tableView->setModel(querymodel);
}

void MainWindow::on_action_exit_app_triggered() // Wyjdź z programu
{
    Dialog exit;
    exit.setModal(true);
    exit.exec();

    //exitDialog = new Dialog(this); // alokacja nowych obiektów  typu dialog w pamięci
    //exitDialog->setModal(free);
    //exitDialog ->exec();
}
void MainWindow::on_searchTerm_textChanged() // Po wpisaniu
{

   if (ui->searchTerm ->text().isEmpty() == false) // Wywołanie domyślnej kwerendy kiedy pole jest puste
   {
       action_query = "SELECT * FROM towary WHERE kod = " + ui->searchTerm ->text();
       querymodel->setQuery(action_query);
       ui ->tableView->setModel(querymodel);
   }
   else {
       action_query = "SELECT * FROM towary";
       querymodel->setQuery(action_query);
       ui ->tableView->setModel(querymodel);
       //qDebug() << ui->searchTerm ->text();
   }
}
