#include "addproduct.h"
#include "ui_addproduct.h"



AddProduct::AddProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProduct),query(new QSqlQuery),msgBox(new QMessageBox)
{
    ui->setupUi(this);
    this->setWindowTitle("Dodaj nowy towar do magazynu");
    this->setWindowIcon(QIcon(":/images/add.png"));
}
AddProduct::~AddProduct()
{
    delete ui;
    delete query;
    delete msgBox;// Komunikat aplikacji
}

void AddProduct::on_AddProductButton_clicked() // Dodanie nowego produktu do bazy danych
{

    // zapytanie do bazy danych dodające nowy produkt
    if(ui->lineAddProductCode->text().isEmpty() || ui->lineAddProductName->text().isEmpty() || ui->lineAddProductCategory->text().isEmpty() || ui->lineAddProductDesc->text().isEmpty() || ui->lineAddProductQuantity->text().isEmpty()){
        msgBox->setText("Wprowadzono nieprawidłową wartość lub pole pozostało puste");
        msgBox->setWindowIcon(QIcon(":/images/warning.png"));
        msgBox->setWindowTitle("Napotkano błąd");
        msgBox->exec();
    }
    else{
        query->prepare("INSERT INTO towary VALUES (:kod, :nazwa, :kategoria, :opis, :ilosc)");
        query->bindValue(":kod", ui->lineAddProductCode->text().toInt());
        query->bindValue(":nazwa", ui->lineAddProductName->text());
        query->bindValue(":kategoria", ui->lineAddProductCategory->text().toLower());
        query->bindValue(":opis", ui->lineAddProductDesc->text());
        query->bindValue(":ilosc",ui->lineAddProductQuantity->text().toInt());
        query->exec();
        this->close();
    }
}

void AddProduct::on_CancelAddProductButton_clicked()
{
    this -> close();// Zamykamy otwarte okno
    qDebug() << "Anulowano Dodanie";
}
