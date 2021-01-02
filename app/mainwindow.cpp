#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), querymodel(new QSqlQueryModel),msgBox(new QMessageBox)
{
    ui->setupUi(this);
    this->setWindowTitle("GIMS"); // Zmień nazwę aplikacji

    db_connect db;  // połączenie z bazą danych
    db.connect(ui);

    ui->tableView->verticalHeader()->hide(); // schowanie numerów wierszy
    ui->tableView ->setSelectionBehavior(QAbstractItemView::SelectRows);// Zaznacz cały wiersz
}

MainWindow::~MainWindow()
{
    delete ui;
    delete querymodel;
    delete msgBox;
}

void MainWindow::on_action_show_all_productsl_triggered() // Wczytaj ponownie wszystkie towary
{
    action_query = "SELECT * FROM towary";
    querymodel->setQuery(action_query);
    ui ->tableView->setModel(querymodel);
}
void MainWindow::on_actio_add_product_triggered() // Dodaj nowy Produkt do bazy danych
{
    AddProduct addProductDialog;
    addProductDialog.setModal(true);
    addProductDialog.exec();

    action_query = "SELECT * FROM towary";
    querymodel->setQuery(action_query);
    ui ->tableView->setModel(querymodel);

}
void MainWindow::on_action_information_triggered() // Wyświetl informacje o programie
{
    About aboutDialog;
    aboutDialog.setModal(true);
    aboutDialog.exec();

}

void MainWindow::on_action_delete_producy_triggered() // Usuń wybrane produkty z bazy danych
{
    QModelIndexList selection = ui-> tableView ->selectionModel()->selectedRows();
    QModelIndex index;
    QString id;

    // Można wybrać wiele wierszy do usunięcia
    for(int i=0; i< selection.count(); i++)
    {
        querymodel = new QSqlQueryModel(); // Przy pierwszym przebiegu pętli działa bez zarzutu, ale trzeba tworzyć nowe modele zapytań
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
    for (int i = 0; i <= 1; i++) // Pętla odpowiada za wczytanie wartości dla konkretnego sortowania
    {
        if ( ui->searchTerm ->text().isEmpty() == false && ui->sort_comboBox->currentIndex() == i)
        {
            for (int j = 0; j <= 2; j++) // Pętla odpowiada za wczytanie wartości dla konkretnego filtra
            {
              if (ui->filter_comboBox->currentIndex() == j){
                 action_query = "SELECT * FROM towary WHERE " + filter_name[j] + " LIKE '%" + ui->searchTerm ->text() + "%'" + "ORDER BY" + " " + filter_name[j] + " " + sort_type[i] ;
                 querymodel->setQuery(action_query);
                 ui ->tableView->setModel(querymodel);
              }
            }
        }

     }
}



void MainWindow::on_action_edit_product_triggered()
{
    QModelIndexList selection = ui-> tableView ->selectionModel()->selectedRows();
    if (selection.count() > 1 || selection.count() == 0 ){
        msgBox->setText("Wybrano nieprawidłową liczbę towarów, spróbuj ponownie !");
        msgBox->setWindowIcon(QIcon(":/images/warning.png"));
        msgBox->setWindowTitle("Napotkano błąd");
        msgBox->exec();
    }
    else{
        QModelIndex index;
        QString product_data[5];
        Edit editProduct;

        index = selection.at(0);
        for (int i = 0; i <= 4; i++)
        {
            product_data[i].append(ui->tableView->model()->data(ui->tableView->model()->index(index.row(),i)).toString());
        }
        qDebug() << product_data[0];
        editProduct.passEditData(product_data);
        editProduct.setModal(true);
        editProduct.exec();
        action_query = "SELECT * FROM towary";
        querymodel->setQuery(action_query);
        ui ->tableView->setModel(querymodel);
    }

}
